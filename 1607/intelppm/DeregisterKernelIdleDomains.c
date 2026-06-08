/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C0015008
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001A20 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     GetDevExtFromIndex @ 0x1C0003004 (GetDevExtFromIndex.c)
 *     DeregisterIdleDomain @ 0x1C001F464 (DeregisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C0021A94 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  _DWORD *v2; // rax
  unsigned int v3; // edi
  unsigned int v5; // r8d
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int *v8; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int i; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v14[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v15[176]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[176]; // [rsp+F0h] [rbp-10h] BYREF

  KeInitializeAffinityEx(v15);
  v2 = *(_DWORD **)(a1 + 672);
  if ( v2 )
  {
    v5 = 0;
    i = 0;
    if ( *v2 )
    {
      do
      {
        v6 = *(_QWORD *)(a1 + 672) + 32LL * v5;
        v7 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          KeCopyAffinityEx(v16, v7 + 48);
          if ( (unsigned __int8)DeregisterIdleDomain(a1, v6 + 8) )
            KeOrAffinityEx(v16, v15, v15);
          v5 = i;
        }
        v8 = *(unsigned int **)(a1 + 672);
        i = ++v5;
      }
      while ( v5 < *v8 );
    }
    v3 = 0;
    KeInitializeEnumerationContext(v14, v15);
    while ( !(unsigned int)KeEnumerateNextProcessor(&i, v14) )
    {
      DevExtFromIndex = GetDevExtFromIndex(i);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v3 = updated;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 656) + 56LL);
    v12 = 0LL;
    for ( i = 0; (unsigned int)v12 < v11; i = v12 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 656) + 72 * v12 + 120) = 0LL;
      v12 = i + 1;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 672), 0x72637250u);
    *(_QWORD *)(a1 + 672) = 0LL;
  }
  else
  {
    return 0;
  }
  return v3;
}
