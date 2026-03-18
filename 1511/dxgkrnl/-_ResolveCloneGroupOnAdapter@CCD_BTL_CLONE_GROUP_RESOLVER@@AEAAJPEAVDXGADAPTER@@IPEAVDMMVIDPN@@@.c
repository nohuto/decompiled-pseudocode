/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C006063C
 * Callers:
 *     sub_1C005E7E0 @ 0x1C005E7E0 (sub_1C005E7E0.c)
 * Callees:
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C005E9E4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C0061BDC (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C0061C78 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
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
  unsigned int PathSourceFromTarget; // r14d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 TargetIdFromCcdMonitorId; // r12
  CCD_SET_STRING_ID *v17; // r13
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r8d
  char v21; // r8
  __int64 v22; // rdx
  bool v23; // zf
  bool v24; // cl
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v28; // r10d
  unsigned int v29; // r9d
  unsigned int v30; // ecx
  CCD_SET_STRING_ID *v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned int v40[2]; // [rsp+40h] [rbp-40h] BYREF
  int v41; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v42; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v44; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v45; // [rsp+58h] [rbp-28h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-20h] BYREF
  __int128 v47; // [rsp+70h] [rbp-10h]
  unsigned int v48; // [rsp+C0h] [rbp+40h] BYREF
  struct DMMVIDPN *v49; // [rsp+D8h] [rbp+58h]

  v49 = a4;
  v4 = a3;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v43, &v44, &v48);
  v10 = v8;
  if ( v8 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9);
    v33[3] = v10;
    v33[4] = a2;
    v33[5] = v4;
    v33[6] = *this;
    v33[7] = v4;
    WdLogEvent5_WdAssertion(v33);
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
      v28 = *(_DWORD *)(*((_QWORD *)a2 + 248) + 104LL);
      if ( !v28 )
        return 3221226021LL;
      v29 = *((unsigned __int16 *)*this + 16);
      while ( 1 )
      {
        v30 = 0;
        if ( *((_WORD *)*this + 16) )
        {
          v31 = this[1];
          do
          {
            v32 = 216LL * v30;
            if ( (*(_DWORD *)((_BYTE *)v31 + v32 + 48) & 0x2000) != 0
              && *(_DWORD *)((char *)v31 + v32 + 64) == PathSourceFromTarget
              && *(_QWORD *)((char *)v31 + v32 + 56) == *(_QWORD *)((char *)a2 + 252) )
            {
              break;
            }
            ++v30;
          }
          while ( v30 < v29 );
        }
        if ( v30 >= v29 )
          break;
        if ( ++PathSourceFromTarget >= v28 )
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
          v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
          v39[3] = TargetIdFromCcdMonitorId;
          v39[4] = a2;
          v39[5] = v4;
          v39[6] = *this;
          v39[7] = (unsigned int)v13;
          WdLogEvent5_WdAssertion(v39);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        if ( v45 != v43 )
          goto LABEL_17;
        v17 = *this;
        if ( (unsigned int)v13 >= *((unsigned __int16 *)*this + 16) )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
          v36[3] = v17;
          v36[4] = *((unsigned __int16 *)v17 + 16);
          v36[6] = &v42;
          v36[5] = v13;
          WdLogEvent5_WdAssertion(v36);
          v38 = (_QWORD *)WdLogNewEntry5_WdAssertion(v37);
          v38[3] = -1073741811LL;
          v38[4] = a2;
          v38[5] = v4;
          v38[6] = *this;
          v38[7] = v13;
          WdLogEvent5_WdAssertion(v38);
          return 3221225485LL;
        }
        v42 = *(unsigned __int16 *)(*((_QWORD *)v17 + 3) + 8 * v13 + 4);
        if ( v42 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
          v35[3] = a2;
          v35[4] = v4;
          v35[5] = *this;
          v35[6] = v42;
          v35[7] = (unsigned int)v13;
          WdLogEvent5_WdAssertion(v35);
          return 3221225474LL;
        }
        v40[1] = -1;
        LOBYTE(v40[0]) = 0;
        LOBYTE(v48) = 0;
        v41 = -2;
        v18 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v17, v13, &UnicodeString);
        TargetIdFromCcdMonitorId = v18;
        if ( v18 < 0 )
        {
LABEL_39:
          v34 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v34[3] = TargetIdFromCcdMonitorId;
          v34[4] = a2;
          v34[5] = v4;
          v34[6] = *this;
          v34[7] = (unsigned int)v13;
          WdLogEvent5_WdError(v34);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                          a2,
                                          (const void **)&UnicodeString,
                                          v20,
                                          &v40[1],
                                          &v41,
                                          (DXGADAPTER *)v40,
                                          (bool *)&v48);
        RtlFreeUnicodeString(&UnicodeString);
        v47 = 0uLL;
        UnicodeString = (struct _UNICODE_STRING)0LL;
        if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( (int)TargetIdFromCcdMonitorId < 0 )
          goto LABEL_39;
        v21 = v48;
        if ( (_DWORD)v13 != (_DWORD)v4 && (_BYTE)v48 )
          goto LABEL_34;
        v22 = 216LL * (unsigned int)v13;
        v23 = LOBYTE(v40[0]) == 0;
        *(_DWORD *)((char *)this[1] + v22 + 68) = v40[1];
        *(_DWORD *)((char *)this[1] + v22 + 128) = v41;
        v24 = !v23 || v21;
        v5 = v49;
        *((_BYTE *)this[1] + v22 + 165) = v24;
        *(_DWORD *)((char *)this[1] + v22 + 248) = v44 | 0xFE520000;
        *(_DWORD *)((char *)this[1] + v22 + 48) |= 0xCC000u;
        if ( v5 && PathSourceFromTarget == -1 )
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v5 + 96), v40[1]);
        v11 = *this;
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_17;
      }
      if ( (_DWORD)v13 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_34:
      v5 = v49;
LABEL_17:
      if ( PathSourceFromTarget == -1 )
        goto LABEL_22;
    }
    if ( (unsigned int)v4 < (unsigned int)v13 )
    {
      v25 = 216 * v4;
      v26 = (unsigned int)(v13 - v4);
      do
      {
        v25 += 216LL;
        *(_QWORD *)((char *)this[1] + v25 - 160) = *(_QWORD *)((char *)a2 + 252);
        *(_DWORD *)((char *)this[1] + v25 - 152) = PathSourceFromTarget;
        *(_DWORD *)((char *)this[1] + v25 - 168) |= 0x3000u;
        --v26;
      }
      while ( v26 );
    }
    return 0LL;
  }
}
