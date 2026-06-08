/*
 * XREFs of RegisterKernelCap @ 0x1C001F5A0
 * Callers:
 *     PccCapWorker @ 0x1C0006BC0 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     CalculatePercentageCap @ 0x1C0015860 (CalculatePercentageCap.c)
 *     PepTranslateLimitReason @ 0x1C0021800 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v1; // rax
  int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // rcx
  ULONG v6; // ecx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-24h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 1128);
  v3 = 2;
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 + 24);
    v3 = PepTranslateLimitReason(*(unsigned int *)(v1 + 16));
  }
  else if ( *(_QWORD *)(a1 + 216) || *(_QWORD *)(a1 + 224) )
  {
    v4 = *(_DWORD *)(a1 + 676);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 200);
    if ( !v5 )
      return 0LL;
    v4 = CalculatePercentageCap(*(_QWORD *)(v5 + 16), *(_DWORD *)(a1 + 408), *(_DWORD *)(a1 + 456));
  }
  v6 = *(_DWORD *)(a1 + 56);
  ProcNumber = 0;
  v9 = 42;
  v11 = 0LL;
  v12 = 0;
  KeGetProcessorNumberFromIndex(v6, &ProcNumber);
  HIDWORD(v11) = *(_DWORD *)(a1 + 672);
  v7 = v12;
  if ( v4 < 0x64 )
    v7 = v3;
  LODWORD(v11) = v4;
  v12 = v7;
  ((void (__fastcall *)(int *))qword_1C000DBB0)(&v9);
  return 0LL;
}
