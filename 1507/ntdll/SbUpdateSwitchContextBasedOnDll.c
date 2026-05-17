/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x180041A50
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x180041840 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     SbpDetermineDllContext @ 0x180041658 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x180041C90 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x180041CB8 (SbGetContextDetailsByGuid.c)
 *     SbObtainTraceHandle @ 0x180043F78 (SbObtainTraceHandle.c)
 *     SbpRecalculateDynamicContext @ 0x18004528C (SbpRecalculateDynamicContext.c)
 *     SbpTraceContextUpdate @ 0x1800F61C0 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  char *v4; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v6; // r15
  int v7; // r11d
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // r11
  __int64 v18; // rax
  signed __int32 v19; // ecx
  __int128 v20; // xmm0
  signed __int32 v21; // ecx
  int v22; // ecx
  int v23; // edx
  _DWORD *v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v27; // [rsp+88h] [rbp+38h] BYREF
  __int64 v28; // [rsp+98h] [rbp+48h] BYREF

  v27 = a2;
  v3 = 0;
  v4 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v4 = 0LL;
  }
  v28 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v4 && a1 )
  {
    SbGetContextDetailsById(4LL, &v25);
    if ( !*((_DWORD *)v4 + 2) )
      return 1;
    v6 = v4 + 64;
    SbGetContextDetailsByGuid(v4 + 64, &v24);
    if ( v7 )
    {
      v3 = 1;
      if ( v7 == 1 )
      {
        v14 = *(_QWORD *)(a1 + 192);
        if ( v14 )
        {
          SbGetContextDetailsByGuid(v14, &v27);
          v17 = v27;
          v18 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v18) != *v27 )
          {
            if ( (unsigned __int64)++v18 >= 5 )
            {
              v19 = 0;
              goto LABEL_22;
            }
          }
          v21 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v18 + 1, 0xFFFFFFFF);
          v17 = v27;
          v19 = v21 - 1;
LABEL_22:
          if ( !v19 && v24 == v17 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock, (char *)&SbDynamicContextDllCount, v15, v16);
            if ( (unsigned int)SbpRecalculateDynamicContext(&v26) == 1 )
              v20 = *(_OWORD *)(v26 + 4);
            else
              v20 = *((_OWORD *)v4 + 3);
            *v6 = v20;
            ++*(_QWORD *)v4;
            if ( !(unsigned int)SbObtainTraceHandle(&v28) )
              goto LABEL_27;
            v22 = v28;
            if ( !v28 )
              goto LABEL_27;
            v23 = (_DWORD)v4 + 64;
            goto LABEL_41;
          }
        }
      }
    }
    else
    {
      v3 = SbpDetermineDllContext(*(_QWORD *)(a1 + 48), &v27);
      if ( v3 )
      {
        v9 = (__int64)v27;
        v10 = 0LL;
        v11 = v27 + 1;
        *(_QWORD *)(a1 + 192) = v27 + 1;
        v3 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v10) != *(_DWORD *)v9 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v10 + 1, 1u);
        v9 = (__int64)v27;
LABEL_12:
        v12 = *v11 - *(_QWORD *)(v25 + 4);
        if ( *v11 == *(_QWORD *)(v25 + 4) )
          v12 = v11[1] - *(_QWORD *)(v25 + 12);
        if ( v12
          && *(_DWORD *)v9 < *v24
          && (*(unsigned __int16 *)(v9 + 22) | ((unsigned __int64)*(unsigned __int16 *)(v9 + 20) << 16)) >= *((_QWORD *)v4 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock, (char *)&SbDynamicContextDllCount, v9, v8);
          ++*(_QWORD *)v4;
          *v6 = *(_OWORD *)v11;
          if ( !(unsigned int)SbObtainTraceHandle(&v28) )
            goto LABEL_27;
          v22 = v28;
          if ( !v28 )
            goto LABEL_27;
          v23 = (int)v11;
LABEL_41:
          SbpTraceContextUpdate(v22, v23, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_27:
          ++*(_QWORD *)v4;
          RtlReleaseSRWLockExclusive(&SbpContextLock);
        }
      }
    }
  }
  return v3;
}
