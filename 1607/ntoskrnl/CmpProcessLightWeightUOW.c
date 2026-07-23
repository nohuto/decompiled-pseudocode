/*
 * XREFs of CmpProcessLightWeightUOW @ 0x14053B24C
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x14053B03C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053B14C (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14053B470 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14060E3DC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E518 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E6E4 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x14060E7E8 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060EA24 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x14060EB4C (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x14060F30C (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14060F660 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F6D8 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = v10;
  v10[0] = v10;
  v6 = *(_DWORD *)(a1 + 68);
  if ( v6 > 7 )
  {
    if ( v6 == 8 )
      goto LABEL_46;
    if ( v6 == 9 )
    {
      if ( a3 )
      {
        CmpLightWeightCommitSetSecDescUoW();
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0LL,
          10,
          (__int64)v10);
        goto LABEL_46;
      }
      v8 = CmpLightWeightPrepareSetSecDescUoW();
      goto LABEL_43;
    }
    if ( v6 <= 11 )
      goto LABEL_46;
    if ( v6 == 12 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW();
        goto LABEL_46;
      }
      v8 = CmpLightWeightPrepareRenameKeyUoW();
      goto LABEL_43;
    }
    if ( v6 == 13 )
      goto LABEL_46;
    if ( v6 != 14 )
      return (unsigned int)-1073741811;
    if ( !a3 )
    {
      v8 = CmpLightWeightPrepareRecreateKeyUoW();
      goto LABEL_43;
    }
    CmpLightWeightCommitRecreateKeyUoW();
LABEL_24:
    CmpReportNotify(
      *(_QWORD *)(a1 + 48),
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
      0LL,
      1,
      (__int64)v10);
    goto LABEL_46;
  }
  switch ( v6 )
  {
    case 7:
      goto LABEL_13;
    case 0:
      if ( !a3 )
      {
        v8 = CmpLightWeightPrepareAddKeyUoW();
        goto LABEL_43;
      }
      CmpLightWeightCommitAddKeyUoW();
      goto LABEL_24;
    case 1:
      goto LABEL_46;
  }
  if ( v6 != 2 )
  {
    if ( v6 == 3 )
      goto LABEL_46;
    if ( v6 > 3 )
    {
      if ( v6 > 5 )
      {
        if ( !a3 )
        {
          v7 = CmpLightWeightPrepareDeleteValueKeyUoW();
          if ( (v7 & 0x80000000) != 0 )
            return v7;
          goto LABEL_14;
        }
        CmpLightWeightCommitDeleteValueKeyUoW();
        CmpReportNotify(
          *(_QWORD *)(a1 + 48),
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
          0LL,
          4,
          (__int64)v10);
LABEL_13:
        if ( a3 )
        {
          if ( a3 == 1 )
            CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
          goto LABEL_46;
        }
LABEL_14:
        v8 = CmpLightWeightPrepareSetKeyUserFlags(a1);
        goto LABEL_43;
      }
      if ( !a3 )
      {
        v8 = CmpLightWeightPrepareSetValueKeyUoW();
        goto LABEL_43;
      }
      CmpLightWeightCommitSetValueKeyUoW();
      CmpReportNotify(
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
        0LL,
        4,
        (__int64)v10);
LABEL_46:
      v7 = 0;
      CmpSignalDeferredPosts(v10);
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    CmpReportNotify(
      *(_QWORD *)(a1 + 48),
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
      0LL,
      1,
      (__int64)v10);
    CmpLightWeightCommitDeleteKeyUoW(a1, a2);
    goto LABEL_46;
  }
  v8 = CmpLightWeightPrepareDeleteKeyUoW();
LABEL_43:
  v7 = v8;
  if ( v8 >= 0 )
    goto LABEL_46;
  return v7;
}
