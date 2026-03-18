/*
 * XREFs of MiLogRelocationFaults @ 0x140442C40
 * Callers:
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiLogRelocationRva @ 0x1404431EC (MiLogRelocationRva.c)
 */

void __fastcall MiLogRelocationFaults(__int64 a1, unsigned int *a2, __int64 a3)
{
  ULONG_PTR v6; // rbp
  __int64 **i; // rbx
  __int64 v8; // rcx

  v6 = MI_REFERENCE_CONTROL_AREA_FILE(a1);
  MiLogRelocationRva(*a2, a2[1], v6, a1);
  for ( i = *(__int64 ***)(a3 + 16); i; i = (__int64 **)*i )
  {
    v8 = *((unsigned int *)i + 2);
    if ( (v8 & 0xFFF) != 0 )
      MiLogRelocationRva(v8, 0x2000LL, v6, a1);
  }
  MI_DEREFERENCE_CONTROL_AREA_FILE(a1, v6);
}
