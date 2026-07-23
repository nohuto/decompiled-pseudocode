/*
 * XREFs of ?CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BAB8
 * Callers:
 *     ?PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z @ 0x14023B4D4 (-PcCreatePartitionTable@@YAJPEAVPC_DISK@@PEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BC60 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 */

__int64 __fastcall PC_MBR::CreatePartitionTable(PC_MBR *this, struct _CREATE_DISK *a2)
{
  __int64 v4; // rbx
  DWORD Signature; // eax
  _DRIVE_LAYOUT_INFORMATION_EX v7; // [rsp+20h] [rbp-D8h] BYREF

  memset(&v7.PartitionCount, 0, 0xBCuLL);
  v4 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  memset((void *)(v4 + 446), 0, 0x40uLL);
  *(_DWORD *)(v4 + 440) = 0;
  *(_WORD *)(v4 + 510) = -21931;
  Signature = a2->Mbr.Signature;
  *(_QWORD *)&v7.PartitionStyle = 0LL;
  v7.Mbr.Signature = Signature;
  return PC_MBR::WritePartitionTable(this, &v7);
}
