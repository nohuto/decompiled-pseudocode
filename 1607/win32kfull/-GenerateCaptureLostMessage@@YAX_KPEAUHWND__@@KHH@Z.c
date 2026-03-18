/*
 * XREFs of ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01EED40
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F0AEC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01F34D4 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 */

void __fastcall GenerateCaptureLostMessage(__int64 a1, HWND a2, __int64 a3, __int64 a4, int a5)
{
  struct tagPOINTERINPUTFRAME *v5; // rax
  int v6; // r9d
  unsigned __int64 v7; // r10
  unsigned int v8; // r11d
  struct tagPOINTERINPUTFRAME *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  HWND v12; // r8

  if ( a1 )
  {
    v5 = FindAndReferenceFrameById(*(_DWORD *)(a1 + 28));
    v9 = v5;
    if ( v5 )
    {
      v10 = *((_QWORD *)v5 + 11) + 216LL * *(unsigned int *)(v7 + 32);
      if ( (unsigned int)GeneratePointerMessage((const struct tagPOINTERINFONODE *)v10, v7, 0x252u, v8, v6, a5, 0LL) )
        PointerList::AddLostCaptureTarget((PointerList *)*(unsigned __int16 *)(v10 + 60), *(_QWORD *)(v10 + 80), v12);
      UnreferenceFrameInt(v9, v11, (__int64)v12);
    }
  }
}
