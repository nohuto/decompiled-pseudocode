/*
 * XREFs of MmIsExtentDangling @ 0x14065AD64
 * Callers:
 *     FsRtlIsExtentDangling @ 0x14061EAF4 (FsRtlIsExtentDangling.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
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
      if ( MiIsPfn(v2) && (*v3 & 0x10000000000000LL) != 0 )
        break;
      ++v2;
    }
    while ( v2 < v4 );
  }
  return v2;
}
