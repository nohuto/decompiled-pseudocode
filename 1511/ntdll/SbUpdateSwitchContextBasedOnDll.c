/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18000ECD0
 * Callers:
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18000F730 (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     SbpDetermineDllContext @ 0x18000E3A8 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x18000EF34 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18000EF5C (SbGetContextDetailsByGuid.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     SbObtainTraceHandle @ 0x18007E850 (SbObtainTraceHandle.c)
 *     SbpRecalculateDynamicContext @ 0x180080160 (SbpRecalculateDynamicContext.c)
 *     SbpTraceContextUpdate @ 0x1800F5AA0 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  char *v4; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v6; // r15
  int v7; // r11d
  _DWORD *v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // r14
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  __int64 v15; // rax
  signed __int32 v16; // ecx
  signed __int32 v17; // ecx
  __int128 v18; // xmm0
  _DWORD *v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v23; // [rsp+88h] [rbp+38h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  v23 = a2;
  v3 = 0;
  v4 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v4 = 0LL;
  }
  v24 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( v4 && a1 )
  {
    SbGetContextDetailsById(4LL, &v21);
    if ( !*((_DWORD *)v4 + 2) )
      return 1;
    v6 = v4 + 64;
    SbGetContextDetailsByGuid(v4 + 64, &v20);
    if ( v7 )
    {
      v3 = 1;
      if ( v7 == 1 )
      {
        v13 = *(_QWORD *)(a1 + 192);
        if ( v13 )
        {
          SbGetContextDetailsByGuid(v13, &v23);
          v14 = v23;
          v15 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v15) != *v23 )
          {
            if ( (unsigned __int64)++v15 >= 5 )
            {
              v16 = 0;
              goto LABEL_30;
            }
          }
          v17 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v15 + 1, 0xFFFFFFFF);
          v14 = v23;
          v16 = v17 - 1;
LABEL_30:
          if ( !v16 && v20 == v14 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            if ( (unsigned int)SbpRecalculateDynamicContext(&v22) == 1 )
              v18 = *(_OWORD *)(v22 + 4);
            else
              v18 = *((_OWORD *)v4 + 3);
            *v6 = v18;
            ++*(_QWORD *)v4;
            if ( !(unsigned int)SbObtainTraceHandle(&v24) )
              goto LABEL_39;
            v11 = v24;
            if ( !v24 )
              goto LABEL_39;
            v12 = (_DWORD)v4 + 64;
            goto LABEL_38;
          }
        }
      }
    }
    else
    {
      v3 = SbpDetermineDllContext(*(_QWORD *)(a1 + 48), &v23);
      if ( v3 )
      {
        v8 = v23;
        v9 = 0LL;
        v10 = v23 + 1;
        *(_QWORD *)(a1 + 192) = v23 + 1;
        v3 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v9) != *v8 )
        {
          if ( (unsigned __int64)++v9 >= 5 )
            goto LABEL_16;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v9 + 1, 1u);
        v8 = v23;
LABEL_16:
        if ( (*(_QWORD *)v10 != *(_QWORD *)(v21 + 4) || *((_QWORD *)v10 + 1) != *(_QWORD *)(v21 + 12))
          && *v8 < *v20
          && (*((unsigned __int16 *)v8 + 11) | ((unsigned __int64)*((unsigned __int16 *)v8 + 10) << 16)) >= *((_QWORD *)v4 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v4;
          *v6 = *(_OWORD *)v10;
          if ( !(unsigned int)SbObtainTraceHandle(&v24) )
            goto LABEL_39;
          v11 = v24;
          if ( !v24 )
            goto LABEL_39;
          v12 = (int)v10;
LABEL_38:
          SbpTraceContextUpdate(v11, v12, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_39:
          ++*(_QWORD *)v4;
          RtlReleaseSRWLockExclusive(&SbpContextLock);
        }
      }
    }
  }
  return v3;
}
