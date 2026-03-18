/*
 * XREFs of MmIsExtentDangling @ 0x14062CA40
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 */

unsigned __int64 __fastcall MmIsExtentDangling(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  _QWORD *v3; // r10
  unsigned __int64 v4; // r11

  v2 = a1;
  if ( a1 < a1 + a2 )
  {
    do
    {
      if ( MI_IS_PFN(v2) && (*v3 & 0x10000000000000LL) != 0 )
        break;
      ++v2;
    }
    while ( v2 < v4 );
  }
  return v2;
}
