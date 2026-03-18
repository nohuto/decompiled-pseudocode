/*
 * XREFs of KiAbTryIncrementIoWaiterCount @ 0x1400F2BB4
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCount(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int8 *v4; // r9
  int v5; // edx

  v2 = 0;
  if ( (a1[27] & 2) == 0 && (a1[25] & 1) != 0 )
  {
    v4 = &a1[-(unsigned __int16)(16 * a1[24])];
    v5 = (*((_DWORD *)v4 + 431) >> 9) & 7;
    if ( (*(_DWORD *)(*((_QWORD *)v4 + 68) + 772LL) & 0x100000) != 0 )
      v5 = 0;
    if ( v5 >= 2 )
      goto LABEL_6;
    if ( v4 == (unsigned __int8 *)KeGetCurrentThread() && *((_DWORD *)v4 + 447) )
      v5 = 2;
    if ( v5 >= 2 )
      goto LABEL_6;
    if ( *((_DWORD *)v4 + 447) )
      v5 = 2;
    if ( v5 >= 2 )
    {
LABEL_6:
      ++*(_WORD *)(a2 + 90);
      a1[27] |= 2u;
      LOBYTE(v2) = *(_WORD *)(a2 + 90) == 1;
    }
  }
  return v2;
}
