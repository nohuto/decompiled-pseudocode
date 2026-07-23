/*
 * XREFs of BiGetSystemPartition @ 0x14053BD8C
 * Callers:
 *     BiGetSystemStorePath @ 0x14053BCA4 (BiGetSystemStorePath.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SyspartGetSystemPartition @ 0x14053BE0C (SyspartGetSystemPartition.c)
 */

__int64 __fastcall BiGetSystemPartition(_QWORD *a1)
{
  int SystemPartition; // eax
  int v3; // ebx
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp+10h] BYREF

  SystemPartition = SyspartGetSystemPartition(0LL, 0LL, &NumberOfBytes);
  v3 = SystemPartition;
  if ( SystemPartition == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v3 = SyspartGetSystemPartition(PoolWithTag, (unsigned int)NumberOfBytes, &NumberOfBytes);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0x4B444342u);
      else
        *a1 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( SystemPartition >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
