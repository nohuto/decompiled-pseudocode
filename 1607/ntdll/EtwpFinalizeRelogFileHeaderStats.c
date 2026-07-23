/*
 * XREFs of EtwpFinalizeRelogFileHeaderStats @ 0x180002F4C
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFinalizeRelogFileHeaderStats(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r11d
  __int64 v7; // rax

  v5 = 0LL;
  v6 = 72;
  if ( *(_DWORD *)(a2 + 48) <= 0x48u )
    return 0LL;
  while ( v6 <= a3 && (unsigned __int64)v6 + 312 <= a3 )
  {
    *(_DWORD *)(v6 + a2 + 68) = a4 + *(_DWORD *)(*(_QWORD *)(a1 + 512) + 12 * v5);
    *(_DWORD *)(v6 + a2 + 80) += *(_DWORD *)(*(_QWORD *)(a1 + 512) + 12 * v5 + 4);
    *(_DWORD *)(v6 + a2 + 308) += a5 + *(_DWORD *)(*(_QWORD *)(a1 + 512) + 12 * v5 + 8);
    if ( !(_DWORD)v5 )
    {
      ++*(_DWORD *)(v6 + a2 + 68);
      if ( (*(_DWORD *)(v6 + a2 + 64) & 0x100000) != 0 )
      {
        v7 = MEMORY[0x7FFE0014];
        *(_DWORD *)(v6 + a2 + 64) &= ~0x100000u;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 376);
      }
      *(_QWORD *)(v6 + a2 + 48) = v7;
    }
    v5 = (unsigned int)(v5 + 1);
    v6 += (*(unsigned __int16 *)(v6 + a2 + 4) + 7) & 0xFFFFFFF8;
    if ( v6 >= *(_DWORD *)(a2 + 48) )
      return 0LL;
  }
  return 3221225485LL;
}
