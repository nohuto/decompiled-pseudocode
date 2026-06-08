/*
 * XREFs of RegisterKernelPackage @ 0x1C0018930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     GetProcessorPackage @ 0x1C0018A68 (GetProcessorPackage.c)
 */

__int64 __fastcall RegisterKernelPackage(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 *v3; // rdi
  __int64 ProcessorPackage; // rbx
  __int64 **v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  v2 = 259;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0009398,
    0LL);
  v3 = (__int64 *)qword_1C00093C8;
  if ( (__int64 *)qword_1C00093C8 == &qword_1C00093C8 )
    goto LABEL_5;
  do
  {
    ProcessorPackage = (__int64)v3;
    if ( (unsigned int)KeCheckProcessorAffinityEx(v3 + 4, *(unsigned int *)(a1 + 56)) )
      break;
    v3 = (__int64 *)*v3;
    ProcessorPackage = 0LL;
  }
  while ( v3 != &qword_1C00093C8 );
  if ( !ProcessorPackage )
  {
LABEL_5:
    ProcessorPackage = GetProcessorPackage(a1);
    if ( !ProcessorPackage )
      goto LABEL_13;
    v5 = (__int64 **)qword_1C00093D0;
    *(_QWORD *)ProcessorPackage = &qword_1C00093C8;
    *(_QWORD *)(ProcessorPackage + 8) = v5;
    if ( *v5 != &qword_1C00093C8 )
      __fastfail(3u);
    *v5 = (__int64 *)ProcessorPackage;
    qword_1C00093D0 = ProcessorPackage;
  }
  *(_QWORD *)(a1 + 1016) = ProcessorPackage;
  ++*(_DWORD *)(ProcessorPackage + 204);
  v6 = a1 + 1024;
  v7 = *(_QWORD **)(ProcessorPackage + 24);
  *(_QWORD *)(a1 + 1024) = ProcessorPackage + 16;
  *(_QWORD *)(a1 + 1032) = v7;
  if ( *v7 != ProcessorPackage + 16 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(ProcessorPackage + 24) = v6;
  if ( *(_DWORD *)(ProcessorPackage + 204) == *(_DWORD *)(ProcessorPackage + 200) )
    v2 = 0;
LABEL_13:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0009398);
  return v2;
}
