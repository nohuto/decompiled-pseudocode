/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18002E6DC
 * Callers:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4DC (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     SbpDetermineDllContext @ 0x18002E2F4 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x18002E920 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18002E948 (SbGetContextDetailsByGuid.c)
 *     SbObtainTraceHandle @ 0x1800827D4 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x1800FE93C (SbpTraceContextUpdate.c)
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
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v13; // rcx
  _DWORD *v14; // r11
  __int64 v15; // rax
  signed __int32 v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  signed __int32 v20; // edx
  REGHANDLE v21; // rcx
  _DWORD *v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v25; // [rsp+88h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+98h] [rbp+48h] BYREF

  v25 = a2;
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
  v23 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  if ( v4 && a1 )
  {
    SbGetContextDetailsById(4LL, &v23);
    if ( !*((_DWORD *)v4 + 2) )
      return 1;
    v6 = v4 + 64;
    SbGetContextDetailsByGuid(v4 + 64, &v22);
    if ( v7 )
    {
      v3 = 1;
      if ( v7 == 1 )
      {
        v13 = *(_QWORD *)(a1 + 192);
        if ( v13 )
        {
          SbGetContextDetailsByGuid(v13, &v25);
          v14 = v25;
          v15 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v15) != *v25 )
          {
            if ( (unsigned __int64)++v15 >= 5 )
            {
              v16 = 0;
              goto LABEL_27;
            }
          }
          v20 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v15 + 1, 0xFFFFFFFF);
          v14 = v25;
          v16 = v20 - 1;
LABEL_27:
          if ( !v16 && v22 == v14 )
          {
            RtlAcquireSRWLockExclusive(&SbpContextLock);
            v24 = 0LL;
            v17 = &unk_18014FD94;
            v18 = 0LL;
            do
            {
              if ( *v17 )
                break;
              v18 = (unsigned int)(v18 + 1);
              v17 += 2;
            }
            while ( (unsigned int)v18 < 5 );
            if ( (unsigned int)v18 >= 5 )
            {
              v19 = *((_OWORD *)v4 + 3);
            }
            else
            {
              SbGetContextDetailsById(v18, &v24);
              v19 = *(_OWORD *)(v24 + 4);
            }
            *v6 = v19;
            ++*(_QWORD *)v4;
            if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
              goto LABEL_20;
            v21 = RegHandle;
            if ( !RegHandle )
              goto LABEL_20;
LABEL_44:
            SbpTraceContextUpdate(v21, *(_QWORD *)(a1 + 80));
LABEL_20:
            ++*(_QWORD *)v4;
            RtlReleaseSRWLockExclusive(&SbpContextLock);
          }
        }
      }
    }
    else
    {
      v3 = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48), &v25);
      if ( v3 )
      {
        v8 = v25;
        v9 = 0LL;
        v10 = v25 + 1;
        *(_QWORD *)(a1 + 192) = v25 + 1;
        v3 = 1;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v9) != *v8 )
        {
          if ( (unsigned __int64)++v9 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v9 + 1, 1u);
        v8 = v25;
LABEL_12:
        v11 = *v10 - *(_QWORD *)(v23 + 4);
        if ( *v10 == *(_QWORD *)(v23 + 4) )
          v11 = v10[1] - *(_QWORD *)(v23 + 12);
        if ( v11
          && *v8 < *v22
          && (*((unsigned __int16 *)v8 + 11) | ((unsigned __int64)*((unsigned __int16 *)v8 + 10) << 16)) >= *((_QWORD *)v4 + 5) )
        {
          RtlAcquireSRWLockExclusive(&SbpContextLock);
          ++*(_QWORD *)v4;
          *v6 = *(_OWORD *)v10;
          if ( !(unsigned int)SbObtainTraceHandle(&RegHandle) )
            goto LABEL_20;
          v21 = RegHandle;
          if ( !RegHandle )
            goto LABEL_20;
          goto LABEL_44;
        }
      }
    }
  }
  return v3;
}
