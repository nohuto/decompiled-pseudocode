/*
 * XREFs of MiGetAdditionalExtents @ 0x140230AC8
 * Callers:
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 */

__int64 __fastcall MiGetAdditionalExtents(__int64 *a1)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // rax

  if ( !a1[1] )
    return 0LL;
  v2 = *a1;
  v3 = MI_REFERENCE_CONTROL_AREA_FILE(*a1);
  MI_DEREFERENCE_CONTROL_AREA_FILE(v2, v3);
  return 3221225659LL;
}
