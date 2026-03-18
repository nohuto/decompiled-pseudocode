/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00B6368
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00B66E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 * Callees:
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C008E1A4 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C008E240 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00B5ED0 (DmmGetTargetIdFromCcdMonitorId.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(
        CCD_SET_STRING_ID **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        struct DMMVIDPN *a4)
{
  __int64 v4; // rsi
  struct DMMVIDPN *v5; // r13
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  CCD_SET_STRING_ID *v11; // r10
  int PathSourceFromTarget; // r14d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 TargetIdFromCcdMonitorId; // r12
  CCD_SET_STRING_ID *v17; // r13
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  bool v24; // zf
  bool v25; // cl
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v29; // r10d
  unsigned int v30; // r9d
  unsigned int v31; // ecx
  CCD_SET_STRING_ID *v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned int v41[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v42; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v44; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v45; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v46; // [rsp+5Ch] [rbp-24h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-20h] BYREF
  __int128 v48; // [rsp+70h] [rbp-10h]
  unsigned int v49; // [rsp+C0h] [rbp+40h] BYREF
  struct DMMVIDPN *v50; // [rsp+D8h] [rbp+58h]

  v50 = a4;
  v4 = a3;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v44, &v46, &v49);
  v10 = v8;
  if ( v8 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9);
    v34[3] = v10;
    v34[4] = a2;
    v34[5] = v4;
    v34[6] = *this;
    v34[7] = v4;
    WdLogEvent5_WdAssertion(v34);
    return (unsigned int)v10;
  }
  else
  {
    v11 = *this;
    PathSourceFromTarget = -1;
    v13 = (unsigned int)v4;
    if ( (unsigned int)v4 >= *((unsigned __int16 *)*this + 16) )
    {
LABEL_22:
      if ( v5 )
        return 3221226021LL;
      PathSourceFromTarget = 0;
      v29 = *(_DWORD *)(*((_QWORD *)a2 + 266) + 80LL);
      if ( !v29 )
        return 3221226021LL;
      v30 = *((unsigned __int16 *)*this + 16);
      while ( 1 )
      {
        v31 = 0;
        if ( *((_WORD *)*this + 16) )
        {
          v32 = this[1];
          do
          {
            v33 = 216LL * v31;
            if ( (*(_DWORD *)((_BYTE *)v32 + v33 + 48) & 0x2000) != 0
              && *(_DWORD *)((char *)v32 + v33 + 64) == PathSourceFromTarget
              && *(_DWORD *)((char *)v32 + v33 + 56) == *((_DWORD *)a2 + 67)
              && *(_DWORD *)((char *)v32 + v33 + 60) == *((_DWORD *)a2 + 68) )
            {
              break;
            }
            ++v31;
          }
          while ( v31 < v30 );
        }
        if ( v31 >= v30 )
          break;
        if ( ++PathSourceFromTarget >= v29 )
          return 3221226021LL;
      }
      if ( PathSourceFromTarget == -1 )
        return 3221226021LL;
    }
    else
    {
      while ( 1 )
      {
        v14 = CCD_SET_STRING_ID::QueryCloneInfo(v11, v13, &v45, 0LL, 0LL);
        TargetIdFromCcdMonitorId = v14;
        if ( v14 < 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
          v40[3] = TargetIdFromCcdMonitorId;
          v40[4] = a2;
          v40[5] = v4;
          v40[6] = *this;
          v40[7] = (unsigned int)v13;
          WdLogEvent5_WdAssertion(v40);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        if ( v45 != v44 )
          goto LABEL_17;
        v17 = *this;
        if ( (unsigned int)v13 >= *((unsigned __int16 *)*this + 16) )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
          v37[3] = v17;
          v37[4] = *((unsigned __int16 *)v17 + 16);
          v37[6] = &v43;
          v37[5] = v13;
          WdLogEvent5_WdAssertion(v37);
          v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v38);
          v39[3] = -1073741811LL;
          v39[4] = a2;
          v39[5] = v4;
          v39[6] = *this;
          v39[7] = v13;
          WdLogEvent5_WdAssertion(v39);
          return 3221225485LL;
        }
        v43 = *(unsigned __int16 *)(*((_QWORD *)v17 + 3) + 8 * v13 + 4);
        if ( v43 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
          v36[3] = a2;
          v36[4] = v4;
          v36[5] = *this;
          v36[6] = v43;
          v36[7] = (unsigned int)v13;
          WdLogEvent5_WdAssertion(v36);
          return 3221225474LL;
        }
        v41[1] = -1;
        LOBYTE(v41[0]) = 0;
        LOBYTE(v49) = 0;
        v42 = 0xFFFFFFFEFFFFFFFEuLL;
        v18 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v17, v13, &UnicodeString);
        TargetIdFromCcdMonitorId = v18;
        if ( v18 < 0 )
        {
LABEL_39:
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v35[3] = TargetIdFromCcdMonitorId;
          v35[4] = a2;
          v35[5] = v4;
          v35[6] = *this;
          v35[7] = (unsigned int)v13;
          WdLogEvent5_WdError(v35);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                          a2,
                                          (const void **)&UnicodeString,
                                          v20,
                                          &v41[1],
                                          (DXGADAPTER *)&v42,
                                          (_DWORD *)&v42 + 1,
                                          (bool *)v41,
                                          (bool *)&v49);
        RtlFreeUnicodeString(&UnicodeString);
        v48 = 0uLL;
        UnicodeString = (struct _UNICODE_STRING)0LL;
        if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( (int)TargetIdFromCcdMonitorId < 0 )
          goto LABEL_39;
        LOBYTE(v21) = v49;
        if ( (_DWORD)v13 != (_DWORD)v4 && (_BYTE)v49 )
          goto LABEL_34;
        v23 = 216LL * (unsigned int)v13;
        v24 = LOBYTE(v41[0]) == 0;
        *(_DWORD *)((char *)this[1] + v23 + 68) = v41[1];
        *(_QWORD *)((char *)this[1] + v23 + 128) = v42;
        v25 = !v24 || (_BYTE)v21;
        v5 = v50;
        *((_BYTE *)this[1] + v23 + 169) = v25;
        *(_DWORD *)((char *)this[1] + v23 + 248) = v46 | 0xFE520000;
        *(_DWORD *)((char *)this[1] + v23 + 48) |= 0xCC000u;
        if ( v5 && PathSourceFromTarget == -1 )
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                   (struct DMMVIDPN *)((char *)v5 + 96),
                                   v41[1],
                                   v21,
                                   v22);
        v11 = *this;
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_17;
      }
      if ( (_DWORD)v13 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_34:
      v5 = v50;
LABEL_17:
      if ( PathSourceFromTarget == -1 )
        goto LABEL_22;
    }
    if ( (unsigned int)v4 < (unsigned int)v13 )
    {
      v26 = 216 * v4;
      v27 = (unsigned int)(v13 - v4);
      do
      {
        v26 += 216LL;
        *(_QWORD *)((char *)this[1] + v26 - 160) = *(_QWORD *)((char *)a2 + 268);
        *(_DWORD *)((char *)this[1] + v26 - 152) = PathSourceFromTarget;
        *(_DWORD *)((char *)this[1] + v26 - 168) |= 0x3000u;
        --v27;
      }
      while ( v27 );
    }
    return 0LL;
  }
}
