/*
 * XREFs of SeSystemIntegrityRegisterPolicy @ 0x1407FBA0C
 * Callers:
 *     BapdpProcessSystemIntegrityPolicy @ 0x1407DCBD8 (BapdpProcessSystemIntegrityPolicy.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeSystemIntegrityRegisterPolicy(void *Src, SIZE_T NumberOfBytes)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( (unsigned int)NumberOfBytes >= 4 )
  {
    LODWORD(g_SiPolicyBlob) = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x69536553u);
    qword_14036CFFC = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Src, (unsigned int)g_SiPolicyBlob);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
