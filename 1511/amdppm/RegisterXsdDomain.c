/*
 * XREFs of RegisterXsdDomain @ 0x1C0018F7C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 */

bool __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v2; // rsi
  bool v3; // di
  __int64 v4; // rax
  __int64 v5; // rbx
  PVOID PoolWithTag; // rax
  __int64 **v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  v2 = (_DWORD *)a1[60];
  v3 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  v4 = qword_1C00093C8;
  if ( (__int64 *)qword_1C00093C8 == &qword_1C00093C8 )
    goto LABEL_5;
  do
  {
    v5 = v4;
    if ( *(_DWORD *)(v4 + 36) == v2[3] )
      break;
    v4 = *(_QWORD *)v4;
    v5 = 0LL;
  }
  while ( (__int64 *)v4 != &qword_1C00093C8 );
  if ( !v5 )
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72637250u);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_12;
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *(_QWORD *)(v5 + 16) = v5 + 16;
    v7 = (__int64 **)qword_1C00093D0;
    *(_QWORD *)v5 = &qword_1C00093C8;
    *(_QWORD *)(v5 + 8) = v7;
    if ( *v7 != &qword_1C00093C8 )
      __fastfail(3u);
    *v7 = (__int64 *)v5;
    qword_1C00093D0 = v5;
    *(_DWORD *)(v5 + 36) = v2[3];
    *(_DWORD *)(v5 + 40) = v2[4];
    *(_DWORD *)(v5 + 44) = v2[5];
  }
  a1[61] = v5;
  v8 = *(_QWORD **)(v5 + 24);
  v9 = a1 + 62;
  a1[62] = v5 + 16;
  a1[63] = v8;
  if ( *v8 != v5 + 16 )
    __fastfail(3u);
  *v8 = v9;
  *(_QWORD *)(v5 + 24) = v9;
  v3 = ++*(_DWORD *)(v5 + 32) == *(_DWORD *)(v5 + 44);
LABEL_12:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  return v3;
}
