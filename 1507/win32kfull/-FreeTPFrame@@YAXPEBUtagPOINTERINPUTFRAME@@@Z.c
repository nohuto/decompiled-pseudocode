/*
 * XREFs of ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F3E8
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022E2D0 (-CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C022F54C (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

void __fastcall FreeTPFrame(const struct tagPOINTERINPUTFRAME *a1)
{
  __int64 v2; // rcx
  const struct tagPOINTERINPUTFRAME **v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD *)a1;
  v3 = (const struct tagPOINTERINPUTFRAME **)*((_QWORD *)a1 + 1);
  if ( *(const struct tagPOINTERINPUTFRAME **)(v2 + 8) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = (const struct tagPOINTERINPUTFRAME *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *((_QWORD *)a1 + 10);
  if ( v5 )
    Win32FreePool(v5);
  HMAssignmentUnlock((char *)a1 + 88);
  FreePointerRawDataList(*((struct tagPOINTERRAWDATA **)a1 + 8));
  Win32FreePool(a1);
}
