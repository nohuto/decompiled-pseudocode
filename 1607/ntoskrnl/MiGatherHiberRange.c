/*
 * XREFs of MiGatherHiberRange @ 0x1403C97D4
 * Callers:
 *     MmMarkHiberPhase @ 0x1403CAD7C (MmMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiGatherHiberRange(__int64 a1, void *a2, __int64 a3, int a4)
{
  void *v4; // r8
  ULONG_PTR v5; // r9
  ULONG v6; // edx

  if ( a4 == 2 )
  {
    v4 = a2;
    v5 = 1LL;
    v6 = 81920;
  }
  else
  {
    v5 = a3 << 12;
    v4 = a2;
    v6 = 0x10000;
  }
  PoSetHiberRange(0LL, v6, v4, v5, 0x74706D4Du);
  return 0LL;
}
