/*
 * XREFs of RegisterXsdDomain @ 0x1C0012C38
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 */

bool __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v2; // rsi
  bool v3; // di
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  PVOID PoolWithTag; // rax
  __int64 **v10; // rax

  v2 = (_DWORD *)a1[60];
  v3 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000DD08,
    0LL);
  v4 = qword_1C000DD28;
  if ( (__int64 *)qword_1C000DD28 == &qword_1C000DD28 )
    goto LABEL_7;
  do
  {
    v5 = v4;
    if ( *(_DWORD *)(v4 + 36) == v2[3] )
      break;
    v4 = *(_QWORD *)v4;
    v5 = 0LL;
  }
  while ( (__int64 *)v4 != &qword_1C000DD28 );
  if ( !v5 )
  {
LABEL_7:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72637250u);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_6;
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *(_QWORD *)(v5 + 16) = v5 + 16;
    v10 = (__int64 **)qword_1C000DD30;
    *(_QWORD *)v5 = &qword_1C000DD28;
    *(_QWORD *)(v5 + 8) = v10;
    if ( *v10 != &qword_1C000DD28 )
      __fastfail(3u);
    *v10 = (__int64 *)v5;
    qword_1C000DD30 = v5;
    *(_DWORD *)(v5 + 36) = v2[3];
    *(_DWORD *)(v5 + 40) = v2[4];
    *(_DWORD *)(v5 + 44) = v2[5];
  }
  a1[61] = v5;
  v6 = *(_QWORD **)(v5 + 24);
  v7 = a1 + 62;
  a1[62] = v5 + 16;
  a1[63] = v6;
  if ( *v6 != v5 + 16 )
    __fastfail(3u);
  *v6 = v7;
  *(_QWORD *)(v5 + 24) = v7;
  v3 = ++*(_DWORD *)(v5 + 32) == *(_DWORD *)(v5 + 44);
LABEL_6:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000DD08);
  return v3;
}
