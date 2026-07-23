/*
 * XREFs of ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x14023B9F0
 * Callers:
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BC60 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14023BE94 (-CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MBR_ENTRY::ComputeChs(MBR_ENTRY *this, struct _DISK_GEOMETRY *a2)
{
  DWORD v2; // esi
  _BYTE **v3; // rdi
  ULONG LowPart; // ebx
  unsigned int *v5; // r11
  char *v6; // rax
  __int64 v8; // rbp
  unsigned int v9; // ebx
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // r10d
  DWORD v13; // eax
  DWORD v14; // edx
  DWORD SectorsPerTrack; // r8d
  _BYTE *v16; // rdx
  _QWORD v17[3]; // [rsp+0h] [rbp-18h] BYREF
  int v18; // [rsp+20h] [rbp+8h] BYREF
  int v19; // [rsp+24h] [rbp+Ch]

  v2 = a2->SectorsPerTrack * a2->TracksPerCylinder;
  v3 = (_BYTE **)v17;
  LowPart = a2->Cylinders.LowPart;
  v5 = (unsigned int *)&v18;
  v17[0] = (char *)this + 1;
  v6 = (char *)this + 5;
  v8 = 2LL;
  v18 = *((_DWORD *)this + 2);
  v9 = v2 * LowPart;
  v10 = *((_DWORD *)this + 3) + v18 - 1;
  v17[1] = v6;
  v19 = v10;
  do
  {
    v11 = *v5;
    if ( *v5 >= v9 )
    {
      v12 = a2->Cylinders.LowPart - 1;
      SectorsPerTrack = a2->SectorsPerTrack;
      LOBYTE(v13) = a2->TracksPerCylinder - 1;
    }
    else
    {
      v12 = v11 / v2;
      v14 = v11 % v2 % a2->SectorsPerTrack;
      v13 = v11 % v2 / a2->SectorsPerTrack;
      LOBYTE(SectorsPerTrack) = v14 + 1;
    }
    v16 = *v3;
    ++v5;
    ++v3;
    *v16 = v13;
    v16[1] = (v12 >> 2) ^ (SectorsPerTrack ^ (v12 >> 2)) & 0x3F;
    v16[2] = v12;
    --v8;
  }
  while ( v8 );
}
