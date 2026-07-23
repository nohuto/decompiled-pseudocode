/*
 * XREFs of CcUnpinData @ 0x1404EF690
 * Callers:
 *     CcPinMappedData @ 0x140446090 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x140457144 (CcPreparePinWrite.c)
 *     CcPinRead @ 0x1404A8820 (CcPinRead.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 *     CcUnpinDataForThread @ 0x1405F90A4 (CcUnpinDataForThread.c)
 *     HvViewMapFlush @ 0x14060FBD8 (HvViewMapFlush.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140610338 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14061053C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
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
