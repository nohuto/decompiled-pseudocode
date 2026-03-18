/*
 * XREFs of KeSignalCallDpcSynchronize @ 0x140204168
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x140401684 (KiConfigureHeteroProcessorsTarget.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140401918 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeSignalCallDpcSynchronize(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned __int8 v3; // bl
  unsigned int v4; // ebp
  unsigned int v5; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v3 = 1;
  v4 = ~v2 & 0x80000000;
  if ( (v2 & 0x7FFFFFFF) != 0 )
  {
    v5 = 0;
    while ( (*(_DWORD *)a1 & 0x80000000) != v4 )
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    return 0;
  }
  else
  {
    *(_DWORD *)a1 = v4 | *(_DWORD *)(a1 + 4);
  }
  return v3;
}
