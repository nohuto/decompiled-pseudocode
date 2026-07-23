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
  REGHANDLE v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rax
  signed __int32 v15; // ecx
  signed __int32 v16; // ecx
  __int128 v17; // xmm0
  _DWORD *v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v22; // [rsp+88h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+98h] [rbp+48h] BYREF

  v22 = a2;
  v3 = 0;
  v4 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v4 = 0LL;
  }
  RegHandle = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( v4 && a1 )
  {
    SbGetContextDetailsById(4LL, &v20);
    if ( !*((_DWORD *)v4 + 2) )
      return 1;
    v6 = v4 + 64;
    SbGetContextDetailsByGuid(v4 + 64, &v19);
    if ( v7 )
    {
      v3 = 1;
      if ( v7 == 1 )
      {
        v12 = *(_QWORD *)(a1 + 192);
        if ( v12 )
        {
          SbGetContextDetailsByGuid(v12, &v22);
          v13 = v22;
          v14 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v14) != *v22 )
          {
            if ( (unsigned __int64)++v14 >= 5 )
            {
              v15 = 0;
              goto LABEL_30;
            }
          }
          v16 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v14 + 1, 0xFFFFFFFF);
          v13 = v22;
          v15 = v16 - 1;
LABEL_30:
          if ( !v15 && v19 == v13 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            if ( (unsigned int)SbpRecalculateDynamicContext(&v21) == 1 )
              v17 = *(_OWORD *)(v21 + 4);
            else
              v17 = *((_OWORD *)v4 + 3);
            *v6 = v17;
            ++*(_QWORD *)v4;
            if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
              goto LABEL_38;
            v11 = RegHandle;
            if ( !RegHandle )
              goto LABEL_38;
LABEL_37:
            SbpTraceContextUpdate(v11, *(_QWORD *)(a1 + 80));
LABEL_38:
            ++*(_QWORD *)v4;
            RtlReleaseSRWLockExclusive(&SbpContextLock);
          }
        }
      }
    }
    else
    {
      v3 = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48), &v22);
      if ( v3 )
      {
        v8 = v22;
        v9 = 0LL;
        v10 = v22 + 1;
        *(_QWORD *)(a1 + 192) = v22 + 1;
        v3 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v9) != *v8 )
        {
          if ( (unsigned __int64)++v9 >= 5 )
            goto LABEL_16;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v9 + 1, 1u);
        v8 = v22;
LABEL_16:
        if ( (*(_QWORD *)v10 != *(_QWORD *)(v20 + 4) || *((_QWORD *)v10 + 1) != *(_QWORD *)(v20 + 12))
          && *v8 < *v19
          && (*((unsigned __int16 *)v8 + 11) | ((unsigned __int64)*((unsigned __int16 *)v8 + 10) << 16)) >= *((_QWORD *)v4 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v4;
          *v6 = *(_OWORD *)v10;
          if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
            goto LABEL_38;
          v11 = RegHandle;
          if ( !RegHandle )
            goto LABEL_38;
          goto LABEL_37;
        }
      }
    }
  }
  return v3;
}
