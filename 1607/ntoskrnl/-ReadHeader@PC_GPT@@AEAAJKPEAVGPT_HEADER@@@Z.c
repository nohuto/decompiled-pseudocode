/*
 * XREFs of ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14023C0EC
 * Callers:
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C1A4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x14023C4F0 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C778 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140110510 (RtlComputeCrc32.c)
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x140147AEC (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall PC_GPT::ReadHeader(PC_DISK **this, int a2, struct GPT_HEADER *a3)
{
  __int64 v4; // rbx
  int Sectors; // esi
  int v6; // ebx
  ULONG v7; // eax

  if ( a2 )
    v4 = *((_QWORD *)*this + 4) - 1LL;
  else
    v4 = 1LL;
  Sectors = PC_DISK::ReadSectors(*this, 1, v4, a3);
  if ( Sectors >= 0 )
  {
    Sectors = -1073741774;
    if ( *(_QWORD *)a3 == 0x5452415020494645LL
      && *((_DWORD *)a3 + 2) == 0x10000
      && *((_DWORD *)a3 + 3) == 92
      && *((_DWORD *)a3 + 21) == 128
      && (unsigned int)(*((_DWORD *)a3 + 20) - 1) <= 0x3FF
      && *((_QWORD *)a3 + 3) == v4 )
    {
      v6 = *((_DWORD *)a3 + 4);
      *((_DWORD *)a3 + 4) = 0;
      v7 = RtlComputeCrc32(0, (PUCHAR)a3, 0x5Cu);
      *((_DWORD *)a3 + 4) = v6;
      if ( v7 == v6 )
        return 0;
    }
  }
  return (unsigned int)Sectors;
}
