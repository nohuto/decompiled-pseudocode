/*
 * XREFs of BiGetElement @ 0x14068DFAC
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14068EC74 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x14068F824 (BiCreateBootEntry.c)
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140690BD4 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x1406914FC (BiUpdateEfiEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BiGetElement(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  PVOID PoolWithTag; // rbx
  int ElementDataWithFlags; // edi
  __int64 v10; // r8
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  *a4 = 0;
  *a3 = 0LL;
  ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, (__int64)a3, 0LL, &NumberOfBytes);
  if ( ElementDataWithFlags != -1073741789 )
  {
LABEL_6:
    if ( ElementDataWithFlags >= 0 )
      return (unsigned int)ElementDataWithFlags;
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, v10, (__int64)PoolWithTag, &NumberOfBytes);
  if ( ElementDataWithFlags >= 0 )
  {
    *a4 = NumberOfBytes;
    *a3 = PoolWithTag;
    goto LABEL_6;
  }
LABEL_7:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)ElementDataWithFlags;
}
