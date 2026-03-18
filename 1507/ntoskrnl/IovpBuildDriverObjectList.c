/*
 * XREFs of IovpBuildDriverObjectList @ 0x1407354B0
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1406AC240 (ObEnumerateObjectsByType.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpIsLegacyDriver @ 0x140572950 (PnpIsLegacyDriver.c)
 */

char __fastcall IovpBuildDriverObjectList(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx

  if ( !(unsigned int)PnpIsLegacyDriver(a1) )
    goto LABEL_6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6F7649u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( ObReferenceObjectSafe(a1) )
    {
      v3[1] = a1;
      *v3 = IovDriverListHead;
      IovDriverListHead = v3;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
LABEL_6:
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
