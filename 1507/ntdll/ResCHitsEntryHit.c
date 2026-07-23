/*
 * XREFs of ResCHitsEntryHit @ 0x1800F8344
 * Callers:
 *     ResCRuntimeGetResourceDataEx @ 0x1800F74FC (ResCRuntimeGetResourceDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall ResCHitsEntryHit(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a1 && (v2 = *(_QWORD *)(a1 + 24)) != 0 && *(_QWORD *)(a1 + 32) && a2 < *(_DWORD *)(v2 + 12) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a2) = MEMORY[0x7FFE0014];
    return 1LL;
  }
  else
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
}
