/*
 * XREFs of CcMapData @ 0x14047A8B0
 * Callers:
 *     HvpViewMapViewOfPrimaryFile @ 0x1405EB6B4 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1405EB7E0 (HvpViewRemapViewOfPrimaryFile.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400A3F00 (CcMapAndRead.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v6; // bl
  ULONG v8; // r9d
  void *VirtualAddress; // rax
  __int64 *v10; // rdi
  BOOLEAN result; // al
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = Flags;
  v8 = Flags & 1;
  if ( v8 )
    __incgsdword(0x5E10u);
  else
    __incgsdword(0x5E0Cu);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  if ( v8 )
  {
    VirtualAddress = (void *)CcGetVirtualAddress(
                               (__int64)FileObject->SectionObjectPointer->SharedCacheMap,
                               FileOffset->QuadPart,
                               &v13,
                               &v14,
                               (v6 & 0x40) != 0,
                               0);
    v10 = (__int64 *)Buffer;
    *Buffer = VirtualAddress;
  }
  else
  {
    v10 = (__int64 *)Buffer;
    result = CcPinFileData((__int64)FileObject, FileOffset, Length, 1, 0, v6, &v13, Buffer, v12);
    if ( !result )
    {
      __incgsdword(0x5E4Cu);
      return result;
    }
  }
  if ( (v6 & 0x10) == 0 )
    CcMapAndRead(Length, 0, 1, *v10);
  __addgsdword(0x5E50u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
  *Bcb = (PVOID)(v13 + 1);
  return 1;
}
