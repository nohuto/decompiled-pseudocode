/*
 * XREFs of ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14023BFD4
 * Callers:
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C1A4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14023C06C (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_GPT::ReadEntries(PC_GPT *this, struct GPT_HEADER *a2, struct _GPT_ENTRY **a3)
{
  __int64 v3; // rax
  int v6; // ecx
  struct _GPT_ENTRY *Pool; // rax
  struct _GPT_ENTRY *v9; // rbx
  int Entries; // edi

  v3 = *(_QWORD *)this;
  v6 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  *a3 = 0LL;
  Pool = (struct _GPT_ENTRY *)PC_ENVIRONMENT::AllocatePool(
                                ~(*(_DWORD *)(v3 + 28) - 1) & (unsigned int)(*(_DWORD *)(v3 + 28) + v6 - 1),
                                (unsigned __int8)a2,
                                0x54506350u);
  v9 = Pool;
  if ( Pool )
  {
    Entries = PC_GPT::ReadEntries(this, a2, Pool);
    if ( Entries >= 0 )
    {
      *a3 = v9;
      v9 = 0LL;
    }
    if ( v9 )
      PspQueueApcSpecialApc(v9);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Entries;
}
