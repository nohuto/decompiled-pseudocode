/*
 * XREFs of ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C01C0D20
 * Callers:
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01BF6D4 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0464 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0BBC (-FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E6F3C (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreePointerRawDataList(struct tagPOINTERRAWDATA *a1, __int64 a2, __int64 a3)
{
  struct tagPOINTERRAWDATA *v3; // rdi
  struct tagPOINTERRAWDATA *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = v3;
      v3 = (struct tagPOINTERRAWDATA *)*((_QWORD *)v3 + 3);
      Win32FreePool(*((_QWORD *)v4 + 2), a2, a3);
      Win32FreePool(v4, v5, v6);
    }
    while ( v3 );
  }
}
