/*
 * XREFs of CcUnpinData @ 0x1403F7D90
 * Callers:
 *     CcUnpinData @ 0x1403F7D90 (CcUnpinData.c)
 *     CcPinRead @ 0x140479EC0 (CcPinRead.c)
 *     CcPinMappedData @ 0x14047A470 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x1404A8D18 (CcPreparePinWrite.c)
 *     CcUnpinDataForThread @ 0x1405DB67C (CcUnpinDataForThread.c)
 *     HvViewMapFlush @ 0x1405EB080 (HvViewMapFlush.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1405EB7E0 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x1405EB9E4 (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x1403F7D90 (CcUnpinData.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  PVOID v1; // rbx
  char v2; // dl
  void *v3; // rax
  char *i; // rdi

  v1 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((__int64)Bcb, v2, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v2 = 0;
    goto LABEL_3;
  }
  v3 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v3; i += 8 )
  {
    CcUnpinData(v3);
    v3 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v1, 0);
}
