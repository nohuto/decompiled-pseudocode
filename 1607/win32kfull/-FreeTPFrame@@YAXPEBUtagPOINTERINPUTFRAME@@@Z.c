/*
 * XREFs of ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0BBC
 * Callers:
 *     ?CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01BFA00 (-CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C01C0D20 (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

void __fastcall FreeTPFrame(const struct tagPOINTERINPUTFRAME *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  const struct tagPOINTERINPUTFRAME **v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = *(_QWORD *)a1;
  v5 = (const struct tagPOINTERINPUTFRAME **)*((_QWORD *)a1 + 1);
  if ( *(const struct tagPOINTERINPUTFRAME **)(v4 + 8) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = (const struct tagPOINTERINPUTFRAME *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *((_QWORD *)a1 + 11);
  if ( v6 )
    Win32FreePool(v6, a2, a3);
  v7 = *((_QWORD *)a1 + 12);
  if ( v7 )
    Win32FreePool(v7, a2, a3);
  HMAssignmentUnlock((char *)a1 + 104);
  FreePointerRawDataList(*((struct tagPOINTERRAWDATA **)a1 + 10));
  Win32FreePool(a1, v8, v9);
}
