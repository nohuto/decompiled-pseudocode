/*
 * XREFs of BiGetSystemPartition @ 0x1404FAF1C
 * Callers:
 *     BiGetSystemStorePath @ 0x1404FAE38 (BiGetSystemStorePath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SyspartGetSystemPartition @ 0x1404FAF9C (SyspartGetSystemPartition.c)
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
        ExFreePoolWithTag(v5, 0);
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
