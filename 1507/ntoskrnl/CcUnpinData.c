/*
 * XREFs of CcUnpinData @ 0x140511420
 * Callers:
 *     CcPinMappedData @ 0x14049D270 (CcPinMappedData.c)
 *     CcPinRead @ 0x14049D440 (CcPinRead.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 *     CcPreparePinWrite @ 0x14052FE34 (CcPreparePinWrite.c)
 *     CcUnpinDataForThread @ 0x14064FCC4 (CcUnpinDataForThread.c)
 *     HvViewMapFlush @ 0x140662CF0 (HvViewMapFlush.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140663788 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14066398C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  __int64 v1; // r9
  PVOID v2; // rbx
  char v3; // dl
  void *v4; // rax
  char *i; // rdi

  v2 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v3 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((__int64)Bcb, v3, 0, v1);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  v4 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v4; i += 8 )
  {
    CcUnpinData(v4);
    v4 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v2, 0);
}
