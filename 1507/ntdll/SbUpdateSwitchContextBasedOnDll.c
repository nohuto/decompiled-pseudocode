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
  _DWORD *v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v13; // rcx
  _DWORD *v14; // r11
  __int64 v15; // rax
  signed __int32 v16; // ecx
  __int128 v17; // xmm0
  signed __int32 v18; // ecx
  REGHANDLE v19; // rcx
  _DWORD *v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v23; // [rsp+88h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+98h] [rbp+48h] BYREF

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
  RegHandle = 0LL;
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
              goto LABEL_22;
            }
          }
          v18 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v15 + 1, 0xFFFFFFFF);
          v14 = v23;
          v16 = v18 - 1;
LABEL_22:
          if ( !v16 && v20 == v14 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            if ( (unsigned int)SbpRecalculateDynamicContext(&v22) == 1 )
              v17 = *(_OWORD *)(v22 + 4);
            else
              v17 = *((_OWORD *)v4 + 3);
            *v6 = v17;
            ++*(_QWORD *)v4;
            if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
              goto LABEL_27;
            v19 = RegHandle;
            if ( !RegHandle )
              goto LABEL_27;
LABEL_40:
            SbpTraceContextUpdate(v19, *(_QWORD *)(a1 + 80));
LABEL_27:
            ++*(_QWORD *)v4;
            RtlReleaseSRWLockExclusive(&SbpContextLock);
          }
        }
      }
    }
    else
    {
      v3 = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48), &v23);
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
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v9 + 1, 1u);
        v8 = v23;
LABEL_12:
        v11 = *v10 - *(_QWORD *)(v21 + 4);
        if ( *v10 == *(_QWORD *)(v21 + 4) )
          v11 = v10[1] - *(_QWORD *)(v21 + 12);
        if ( v11
          && *v8 < *v20
          && (*((unsigned __int16 *)v8 + 11) | ((unsigned __int64)*((unsigned __int16 *)v8 + 10) << 16)) >= *((_QWORD *)v4 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v4;
          *v6 = *(_OWORD *)v10;
          if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
            goto LABEL_27;
          v19 = RegHandle;
          if ( !RegHandle )
            goto LABEL_27;
          goto LABEL_40;
        }
      }
    }
  }
  return v3;
}
