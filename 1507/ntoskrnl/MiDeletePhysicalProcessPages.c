/*
 * XREFs of MiDeletePhysicalProcessPages @ 0x1406A60B8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiFreeAweInfo @ 0x1406A6124 (MiFreeAweInfo.c)
 */

__int64 __fastcall MiDeletePhysicalProcessPages(ULONG_PTR a1)
{
  PVOID *v1; // rdi
  __int64 result; // rax

  v1 = *(PVOID **)(a1 + 1032);
  if ( *v1 )
  {
    PsReturnProcessNonPagedPoolQuota(
      a1,
      8 * (((((_BYTE)qword_14034EC10 + 1) & 0x3F) != 0) + ((unsigned __int64)(qword_14034EC10 + 1) >> 6)) + 16);
    ExFreePoolWithTag(*v1, 0);
  }
  result = MiFreeAweInfo(v1);
  *(_QWORD *)(a1 + 1032) = 0LL;
  return result;
}
