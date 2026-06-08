/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0003450
 * Callers:
 *     PepIdlePrepare @ 0x1C0002160 (PepIdlePrepare.c)
 * Callees:
 *     AcpiCStateLegacySelect @ 0x1C0003310 (AcpiCStateLegacySelect.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiCStateIdlePrepare(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rdi
  unsigned int i; // ebp
  int (__fastcall *v5)(_DWORD *); // rax
  _DWORD *v6; // rcx

  v1 = *(_DWORD **)a1;
  AcpiCStateLegacySelect(*(_QWORD *)a1, a1 + 8);
  v3 = (unsigned int)v1[3];
  for ( i = v1[4]; ; v3 = *((unsigned __int8 *)v1 + i + 21) )
  {
    v6 = &v1[16 * v3 + 16 + 2 * v3];
    if ( !(_DWORD)v3 )
      break;
    v5 = (int (__fastcall *)(_DWORD *))*((_QWORD *)v6 + 2);
    if ( !v5 || v5(v6 + 8) >= 0 )
      break;
    *(_DWORD *)(a1 + 80) |= 1 << v3;
    --i;
  }
  v1[2] = v3;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 76) = v3;
}
