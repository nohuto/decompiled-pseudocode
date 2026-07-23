/*
 * XREFs of IovpBuildDriverObjectList @ 0x140701188
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1406665EC (ObEnumerateObjectsByType.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpIsLegacyDriver @ 0x1404D17C4 (PnpIsLegacyDriver.c)
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
