/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x140622644
 * Callers:
 *     MmAddPhysicalMemory @ 0x140623094 (MmAddPhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x140624578 (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(int *a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 i; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF

  v4 = *a3;
  v9 = *a2;
  v6 = 0LL;
  for ( i = v4; ; i = (i / 2) & 0xFFFFFFFFFFFFF000uLL )
  {
    while ( 1 )
    {
      LODWORD(result) = MiAddPhysicalMemory(a1, &v9, &i, 0);
      if ( (int)result < 0 )
        break;
      v9 += i;
      v6 += i;
      i = v4 - v6;
      if ( v4 == v6 )
        goto LABEL_4;
    }
    if ( (_DWORD)result != -1073741670 && (_DWORD)result != -1073741523 || i == 4096 )
      break;
  }
LABEL_4:
  *a3 = v6;
  return (unsigned int)result;
}
