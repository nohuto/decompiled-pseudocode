/*
 * XREFs of ACPICreateWakeInterruptRegistrationEntries @ 0x1C007FB4C
 * Callers:
 *     ACPIWakeEmulationPrepare @ 0x1C007FC00 (ACPIWakeEmulationPrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPICreateWakeInterruptRegistrationEntries(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r11d
  unsigned int v7; // r10d
  unsigned int i; // edi
  __int64 v9; // rdx

  v4 = *a4;
  v5 = 0;
  v7 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    if ( *(_BYTE *)(a1 + 20LL * i + 8) == 2 && (*(_BYTE *)(a1 + 20LL * i + 10) & 0x20) != 0 )
    {
      if ( v7 < v4 )
      {
        v9 = a3 + 40LL * v7;
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)v9 = v9;
        *(_QWORD *)(v9 + 32) = *(_QWORD *)(a1 + 20LL * i + 20);
        *(_DWORD *)(v9 + 24) = *(_DWORD *)(a1 + 20LL * i + 16);
        *(_QWORD *)(v9 + 16) = a2;
        *(_DWORD *)(v9 + 28) = *(_BYTE *)(a1 + 20LL * i + 10) & 1;
      }
      ++v7;
    }
  }
  *a4 = v7;
  if ( v7 > v4 )
    return (unsigned int)-1073741789;
  return v5;
}
