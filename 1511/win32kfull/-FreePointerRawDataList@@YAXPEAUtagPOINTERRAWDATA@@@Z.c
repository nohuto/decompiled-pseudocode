/*
 * XREFs of ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C022F92C
 * Callers:
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1074 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022E398 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F140 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F968 (-FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreePointerRawDataList(struct tagPOINTERRAWDATA *a1)
{
  struct tagPOINTERRAWDATA *v1; // rdi
  struct tagPOINTERRAWDATA *v2; // rbx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = (struct tagPOINTERRAWDATA *)*((_QWORD *)v1 + 3);
      Win32FreePool(*((_QWORD *)v2 + 2));
      Win32FreePool(v2);
    }
    while ( v1 );
  }
}
