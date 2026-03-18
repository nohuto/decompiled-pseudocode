/*
 * XREFs of MiAllocateMappedWriterMdls @ 0x1401412B4
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1403C85B0 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     MiAllocateModWriterEntry @ 0x1400E5684 (MiAllocateModWriterEntry.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall MiAllocateMappedWriterMdls(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  _DWORD *ModWriterEntry; // rax
  _DWORD *v7; // rdi
  _QWORD *v8; // rcx

  v1 = 20LL;
  v2 = a1[714] >> 15;
  if ( v2 >= 0x14 )
  {
    v1 = a1[714] >> 15;
    if ( v2 > 0x80 )
      v1 = 128LL;
  }
  v4 = 0;
  a1[67] = v1;
  v5 = 0;
  while ( 1 )
  {
    ModWriterEntry = MiAllocateModWriterEntry((__int64)a1, 16LL, 1);
    v7 = ModWriterEntry;
    if ( !ModWriterEntry )
      break;
    memset(ModWriterEntry, 0, 0x108uLL);
    v7[10] |= 1u;
    *((_QWORD *)v7 + 24) = a1;
    v8 = (_QWORD *)a1[70];
    *(_QWORD *)v7 = a1 + 69;
    *((_QWORD *)v7 + 1) = v8;
    if ( (_QWORD *)*v8 != a1 + 69 )
      __fastfail(3u);
    ++v5;
    *v8 = v7;
    a1[70] = v7;
    if ( v5 >= 4 )
      return v4;
  }
  if ( !v5 )
    return (unsigned int)-1073741670;
  return v4;
}
