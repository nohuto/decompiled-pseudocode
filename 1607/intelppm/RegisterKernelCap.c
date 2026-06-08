/*
 * XREFs of RegisterKernelCap @ 0x1C00209E0
 * Callers:
 *     PccCapWorker @ 0x1C0007BB0 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     CalculatePercentageCap @ 0x1C0013BAC (CalculatePercentageCap.c)
 *     PepTranslateLimitReason @ 0x1C00238AC (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v1; // rax
  int v3; // edi
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 1144);
  v3 = 2;
  if ( v1 )
  {
    v3 = PepTranslateLimitReason(*(unsigned int *)(v1 + 16), *(unsigned int *)(v1 + 24));
  }
  else if ( *(_QWORD *)(a1 + 216) || *(_QWORD *)(a1 + 224) )
  {
    v4 = *(_DWORD *)(a1 + 684);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 200);
    if ( !v5 )
      return 0LL;
    v4 = CalculatePercentageCap(*(_QWORD *)(v5 + 24), *(_DWORD *)(a1 + 416), *(_DWORD *)(a1 + 464));
  }
  v9 = 44LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_BYTE *)(a1 + 66) )
  {
    v6 = *(_DWORD *)(a1 + 68);
    BYTE4(v11) = 1;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 56);
  }
  HIDWORD(v9) = v6;
  HIDWORD(v10) = *(_DWORD *)(a1 + 680);
  v7 = v11;
  if ( v4 < 0x64 )
    v7 = v3;
  LODWORD(v10) = v4;
  LODWORD(v11) = v7;
  ((void (__fastcall *)(__int64 *))qword_1C000EF00)(&v9);
  return 0LL;
}
