/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18002E6EC
 * Callers:
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18002E4EC (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     SbpDetermineDllContext @ 0x18002E304 (SbpDetermineDllContext.c)
 *     SbGetContextDetailsById @ 0x18002E930 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18002E958 (SbGetContextDetailsByGuid.c)
 *     SbObtainTraceHandle @ 0x1800827E4 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x1800FE93C (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  char *v4; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v6; // r15
  int v7; // r11d
  __int64 v8; // r9
  char *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // r11
  __int64 v19; // rax
  char *v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  signed __int32 v24; // edx
  int v25; // ecx
  int v26; // edx
  _DWORD *v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v30; // [rsp+88h] [rbp+38h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h] BYREF

  v30 = a2;
  v3 = 0;
  v4 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v4 = 0LL;
  }
  v31 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  if ( v4 && a1 )
  {
    SbGetContextDetailsById(4LL, &v28);
    if ( !*((_DWORD *)v4 + 2) )
      return 1;
    v6 = v4 + 64;
    SbGetContextDetailsByGuid(v4 + 64, &v27);
    if ( v7 )
    {
      v3 = 1;
      if ( v7 == 1 )
      {
        v15 = *(_QWORD *)(a1 + 192);
        if ( v15 )
        {
          SbGetContextDetailsByGuid(v15, &v30);
          v18 = v30;
          v19 = 0LL;
          while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v19) != *v30 )
          {
            if ( (unsigned __int64)++v19 >= 5 )
            {
              v20 = 0LL;
              goto LABEL_27;
            }
          }
          v24 = _InterlockedExchangeAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v19 + 1, 0xFFFFFFFF);
          v18 = v30;
          v20 = (char *)(unsigned int)(v24 - 1);
LABEL_27:
          if ( !(_DWORD)v20 && v27 == v18 )
          {
            RtlAcquireSRWLockExclusive((unsigned __int64)&SbpContextLock, v20, v16, v17);
            v29 = 0LL;
            v21 = &unk_18014FD94;
            v22 = 0LL;
            do
            {
              if ( *v21 )
                break;
              v22 = (unsigned int)(v22 + 1);
              v21 += 2;
            }
            while ( (unsigned int)v22 < 5 );
            if ( (unsigned int)v22 >= 5 )
            {
              v23 = *((_OWORD *)v4 + 3);
            }
            else
            {
              SbGetContextDetailsById(v22, &v29);
              v23 = *(_OWORD *)(v29 + 4);
            }
            *v6 = v23;
            ++*(_QWORD *)v4;
            if ( !(unsigned int)SbObtainTraceHandle(&v31) )
              goto LABEL_20;
            v25 = v31;
            if ( !v31 )
              goto LABEL_20;
            v26 = (_DWORD)v4 + 64;
            goto LABEL_45;
          }
        }
      }
    }
    else
    {
      v3 = SbpDetermineDllContext(*(void **)(a1 + 48), &v30);
      if ( v3 )
      {
        v9 = (char *)v30;
        v10 = 0LL;
        v11 = v30 + 1;
        *(_QWORD *)(a1 + 192) = v30 + 1;
        v3 = 1;
        v12 = *(unsigned int *)v9;
        while ( *((_DWORD *)&SbDynamicContextDllCount + 2 * v10) != (_DWORD)v12 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&SbDynamicContextDllCount + 2 * v10 + 1, 1u);
        v9 = (char *)v30;
LABEL_12:
        v13 = *v11 - *(_QWORD *)(v28 + 4);
        if ( *v11 == *(_QWORD *)(v28 + 4) )
          v13 = v11[1] - *(_QWORD *)(v28 + 12);
        if ( v13
          && *(_DWORD *)v9 < *v27
          && (*((unsigned __int16 *)v9 + 11) | ((unsigned __int64)*((unsigned __int16 *)v9 + 10) << 16)) >= *((_QWORD *)v4 + 5) )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&SbpContextLock, v9, v12, v8);
          ++*(_QWORD *)v4;
          *v6 = *(_OWORD *)v11;
          if ( !(unsigned int)SbObtainTraceHandle(&v31) )
            goto LABEL_20;
          v25 = v31;
          if ( !v31 )
            goto LABEL_20;
          v26 = (int)v11;
LABEL_45:
          SbpTraceContextUpdate(v25, v26, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_20:
          ++*(_QWORD *)v4;
          RtlReleaseSRWLockExclusive(&SbpContextLock);
        }
      }
    }
  }
  return v3;
}
