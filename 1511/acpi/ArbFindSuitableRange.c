/*
 * XREFs of ArbFindSuitableRange @ 0x1C006C230
 * Callers:
 *     IrqArbpFindSuitableRangeMsi @ 0x1C006C094 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbFindSuitableRange @ 0x1C006C1A0 (IrqArbFindSuitableRange.c)
 *     AcpiMemarbFindSuitableRange @ 0x1C007B790 (AcpiMemarbFindSuitableRange.c)
 * Callees:
 *     RtlFindRange_0 @ 0x1C0024CB0 (RtlFindRange_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ArbShareDriverExclusive @ 0x1C0081A40 (ArbShareDriverExclusive.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v4; // rdx
  ULONGLONG v5; // r8
  __int64 v6; // r9
  ULONG Flags; // ecx
  int v8; // eax

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  if ( v4 > v5 )
    return 0;
  v6 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v6 + 16) )
  {
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = v4;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  Flags = 0;
  v8 = *(_DWORD *)(v6 + 36);
  if ( (*(_BYTE *)(a2 + 64) & 8) != 0 )
    Flags = 2;
  if ( (v8 & 1) != 0 )
    Flags |= 1u;
  if ( (v8 & 8) != 0 )
    *(_BYTE *)(a2 + 67) |= 0x40u;
  if ( RtlFindRange_0(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v4,
         v5,
         *(_QWORD *)(v6 + 16),
         *(_QWORD *)(v6 + 24),
         Flags,
         *(_BYTE *)(a2 + 67),
         *(PVOID *)(a1 + 320),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 328),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) - 1LL;
    return 1;
  }
  if ( (unsigned __int8)ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
