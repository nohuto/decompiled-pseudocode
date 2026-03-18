/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C009D610
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_ @ 0x1C009D960 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_.c)
 * Callees:
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C0067190 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C006722C (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C009C3C4 (DmmGetTargetIdFromCcdMonitorId.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  CCD_SET_STRING_ID *v14; // r10
  int PathSourceFromTarget; // r14d
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 TargetIdFromCcdMonitorId; // r12
  CCD_SET_STRING_ID *v23; // r13
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned int v32; // r10d
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  CCD_SET_STRING_ID *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // [rsp+30h] [rbp-40h] BYREF
  int v51; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v52; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v53; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned int v54; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v55[3]; // [rsp+44h] [rbp-2Ch] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-20h] BYREF
  __int128 v57; // [rsp+60h] [rbp-10h]
  unsigned int v58; // [rsp+B0h] [rbp+40h] BYREF
  struct DMMVIDPN *v59; // [rsp+C8h] [rbp+58h]

  v59 = a4;
  v4 = a3;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v53, v55, &v58);
  v13 = v8;
  if ( v8 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    v40[3] = v13;
    v40[4] = a2;
    v40[5] = v4;
    v40[6] = *this;
    v40[7] = v4;
    WdLogEvent5_WdAssertion(v40);
    return (unsigned int)v13;
  }
  else
  {
    v14 = *this;
    PathSourceFromTarget = -1;
    v16 = (unsigned int)v4;
    if ( (unsigned int)v4 < *((unsigned __int16 *)*this + 16) )
    {
      while ( 1 )
      {
        v17 = CCD_SET_STRING_ID::QueryCloneInfo(v14, (unsigned int)v16, &v54, 0LL, 0LL);
        TargetIdFromCcdMonitorId = v17;
        if ( v17 < 0 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
          v49[3] = TargetIdFromCcdMonitorId;
          v49[4] = a2;
          v49[5] = v4;
          v49[6] = *this;
          v49[7] = (unsigned int)v16;
          WdLogEvent5_WdAssertion(v49);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        if ( v54 != v53 )
          goto LABEL_13;
        v23 = *this;
        if ( (unsigned int)v16 >= *((unsigned __int16 *)*this + 16) )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
          v43[3] = v23;
          v43[4] = *((unsigned __int16 *)v23 + 16);
          v43[6] = &v52;
          v43[5] = v16;
          WdLogEvent5_WdAssertion(v43);
          v48 = (_QWORD *)WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
          v48[3] = -1073741811LL;
          v48[4] = a2;
          v48[5] = v4;
          v48[6] = *this;
          v48[7] = v16;
          WdLogEvent5_WdAssertion(v48);
          return 3221225485LL;
        }
        v24 = *(unsigned __int16 *)(*((_QWORD *)v23 + 3) + 8 * v16 + 4);
        v52 = v24;
        if ( (_DWORD)v24 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v24, v20, v21);
          v42[3] = a2;
          v42[4] = v4;
          v42[5] = *this;
          v42[6] = v52;
          v42[7] = (unsigned int)v16;
          WdLogEvent5_WdAssertion(v42);
          return 3221225474LL;
        }
        v50 = -1;
        LOBYTE(v58) = 0;
        v51 = -2;
        v25 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v23, (unsigned int)v16, &UnicodeString, v21);
        TargetIdFromCcdMonitorId = v25;
        if ( v25 < 0 )
        {
LABEL_34:
          v41 = (_QWORD *)WdLogNewEntry5_WdError(v26);
          v41[3] = TargetIdFromCcdMonitorId;
          v41[4] = a2;
          v41[5] = v4;
          v41[6] = *this;
          v41[7] = (unsigned int)v16;
          WdLogEvent5_WdError(v41);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                          a2,
                                          (const void **)&UnicodeString,
                                          v27,
                                          &v50,
                                          &v51,
                                          (unsigned __int8 *)&v58);
        RtlFreeUnicodeString(&UnicodeString);
        v57 = 0uLL;
        UnicodeString = (struct _UNICODE_STRING)0LL;
        if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( (int)TargetIdFromCcdMonitorId < 0 )
          goto LABEL_34;
        LOBYTE(v28) = v58;
        if ( (_DWORD)v16 != (_DWORD)v4 && (_BYTE)v58 )
          goto LABEL_31;
        v5 = v59;
        v30 = 216LL * (unsigned int)v16;
        *(_DWORD *)((char *)this[1] + v30 + 68) = v50;
        *(_DWORD *)((char *)this[1] + v30 + 128) = v51;
        v31 = v55[0] | 0xFE520000;
        *((_BYTE *)this[1] + v30 + 165) = v28;
        *(_DWORD *)((char *)this[1] + v30 + 248) = v31;
        *(_DWORD *)((char *)this[1] + v30 + 48) |= 0xCC000u;
        if ( v5 && PathSourceFromTarget == -1 )
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                   (struct DMMVIDPN *)((char *)v5 + 96),
                                   v50,
                                   v28,
                                   v29);
        v14 = *this;
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_13;
      }
      if ( (_DWORD)v16 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_31:
      v5 = v59;
LABEL_13:
      if ( PathSourceFromTarget != -1 )
        goto LABEL_23;
    }
    if ( v5 )
      return 3221226021LL;
    PathSourceFromTarget = 0;
    v32 = *(_DWORD *)(*((_QWORD *)a2 + 247) + 80LL);
    if ( !v32 )
      return 3221226021LL;
    v33 = *((unsigned __int16 *)*this + 16);
    while ( 1 )
    {
      v34 = 0;
      if ( *((_WORD *)*this + 16) )
      {
        v35 = this[1];
        do
        {
          v36 = 216LL * v34;
          if ( (*(_DWORD *)((_BYTE *)v35 + v36 + 48) & 0x2000) != 0
            && *(_DWORD *)((char *)v35 + v36 + 64) == PathSourceFromTarget
            && *(_QWORD *)((char *)v35 + v36 + 56) == *(_QWORD *)((char *)a2 + 252) )
          {
            break;
          }
          ++v34;
        }
        while ( v34 < v33 );
      }
      if ( v34 >= v33 )
        break;
      if ( ++PathSourceFromTarget >= v32 )
        return 3221226021LL;
    }
    if ( PathSourceFromTarget == -1 )
    {
      return 3221226021LL;
    }
    else
    {
LABEL_23:
      if ( (unsigned int)v4 < (unsigned int)v16 )
      {
        v37 = 216 * v4;
        v38 = (unsigned int)(v16 - v4);
        do
        {
          v37 += 216LL;
          *(_QWORD *)((char *)this[1] + v37 - 160) = *(_QWORD *)((char *)a2 + 252);
          *(_DWORD *)((char *)this[1] + v37 - 152) = PathSourceFromTarget;
          *(_DWORD *)((char *)this[1] + v37 - 168) |= 0x3000u;
          --v38;
        }
        while ( v38 );
      }
      return 0LL;
    }
  }
}
