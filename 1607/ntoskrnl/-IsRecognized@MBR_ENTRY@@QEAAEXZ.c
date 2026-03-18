/*
 * XREFs of ?IsRecognized@MBR_ENTRY@@QEAAEXZ @ 0x14023BC7C
 * Callers:
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1401476F8 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MBR_ENTRY::IsRecognized(MBR_ENTRY *this)
{
  unsigned __int8 v1; // al
  int v2; // ecx
  bool result; // al

  v1 = *((_BYTE *)this + 4);
  result = 1;
  if ( v1 <= 0xFu )
  {
    v2 = 32801;
    if ( _bittest(&v2, v1) )
      return 0;
  }
  return result;
}
