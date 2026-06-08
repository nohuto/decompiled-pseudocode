/*
 * XREFs of RegisterKernelPackage @ 0x1C001F760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     GetProcessorPackage @ 0x1C001E3AC (GetProcessorPackage.c)
 */

__int64 __fastcall RegisterKernelPackage(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 *v3; // rdi
  _DWORD *ProcessorPackage; // rbx
  __int64 **v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx

  v2 = 259;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000D9C8,
    0LL);
  v3 = (__int64 *)qword_1C000D9F8;
  if ( (__int64 *)qword_1C000D9F8 == &qword_1C000D9F8 )
    goto LABEL_5;
  do
  {
    ProcessorPackage = v3;
    if ( (unsigned int)KeCheckProcessorAffinityEx(v3 + 4, *(unsigned int *)(a1 + 56)) )
      break;
    v3 = (__int64 *)*v3;
    ProcessorPackage = 0LL;
  }
  while ( v3 != &qword_1C000D9F8 );
  if ( !ProcessorPackage )
  {
LABEL_5:
    ProcessorPackage = GetProcessorPackage(a1);
    if ( !ProcessorPackage )
      goto LABEL_13;
    v5 = (__int64 **)qword_1C000DA00;
    *(_QWORD *)ProcessorPackage = &qword_1C000D9F8;
    *((_QWORD *)ProcessorPackage + 1) = v5;
    if ( *v5 != &qword_1C000D9F8 )
      __fastfail(3u);
    *v5 = (__int64 *)ProcessorPackage;
    qword_1C000DA00 = (__int64)ProcessorPackage;
  }
  *(_QWORD *)(a1 + 1016) = ProcessorPackage;
  ++ProcessorPackage[51];
  v6 = a1 + 1024;
  v7 = (__int64 *)*((_QWORD *)ProcessorPackage + 3);
  *(_QWORD *)(a1 + 1024) = ProcessorPackage + 4;
  *(_QWORD *)(a1 + 1032) = v7;
  if ( (_DWORD *)*v7 != ProcessorPackage + 4 )
    __fastfail(3u);
  *v7 = v6;
  *((_QWORD *)ProcessorPackage + 3) = v6;
  if ( ProcessorPackage[51] == ProcessorPackage[50] )
    v2 = 0;
LABEL_13:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9C8);
  return v2;
}
