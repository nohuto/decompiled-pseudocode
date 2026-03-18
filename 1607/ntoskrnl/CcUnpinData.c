/*
 * XREFs of CcUnpinData @ 0x14050C700
 * Callers:
 *     CcPinMappedData @ 0x1404471C0 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x140458274 (CcPreparePinWrite.c)
 *     CcPinRead @ 0x1404BCAF0 (CcPinRead.c)
 *     CcUnpinData @ 0x14050C700 (CcUnpinData.c)
 *     CcUnpinDataForThread @ 0x1405F8FF0 (CcUnpinDataForThread.c)
 *     HvViewMapFlush @ 0x14060FB24 (HvViewMapFlush.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140610284 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x140610488 (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x14050C700 (CcUnpinData.c)
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
