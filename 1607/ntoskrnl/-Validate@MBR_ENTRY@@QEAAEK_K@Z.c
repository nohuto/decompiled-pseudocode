/*
 * XREFs of ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140147F60
 * Callers:
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140147C68 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?IsVbr@PC_DISK@@QEAAEXZ @ 0x14023CB00 (-IsVbr@PC_DISK@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall MBR_ENTRY::Validate(MBR_ENTRY *this, int a2, unsigned __int64 a3)
{
  char v3; // r9
  unsigned __int64 v4; // r10
  char v5; // al

  v3 = 1;
  v4 = (unsigned int)(a2 + *((_DWORD *)this + 2));
  v5 = *((_BYTE *)this + 4);
  if ( v5 )
  {
    if ( v5 != -18 )
    {
      v3 = 0;
      if ( v4 < a3 )
        return *((unsigned int *)this + 3) <= ((3 * a3) >> 1) - v4;
    }
  }
  return v3;
}
