/*
 * XREFs of ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01F76AC
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F943C (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 * Callees:
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F77F4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z @ 0x1C01FBDA0 (-AddLostCaptureTarget@PointerList@@YAXGPEAUHWND__@@@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall GenerateCaptureLostMessage(__int64 a1, HWND a2, __int64 a3, __int64 a4, int a5)
{
  struct tagPOINTERINPUTFRAME *v5; // rax
  int v6; // r9d
  unsigned __int64 v7; // r10
  unsigned int v8; // r11d
  struct tagPOINTERINPUTFRAME *v9; // rdi
  __int64 v10; // rbx
  HWND v11; // r8

  if ( a1 )
  {
    v5 = FindAndReferenceFrameById(*(_DWORD *)(a1 + 28));
    v9 = v5;
    if ( v5 )
    {
      v10 = *((_QWORD *)v5 + 9) + 216LL * *(unsigned int *)(v7 + 32);
      if ( (unsigned int)GeneratePointerMessage((const struct tagPOINTERINFONODE *)v10, v7, 0x252u, v8, v6, a5, 0LL) )
        PointerList::AddLostCaptureTarget((PointerList *)*(unsigned __int16 *)(v10 + 60), *(_QWORD *)(v10 + 80), v11);
      UnreferenceFrameInt(v9);
    }
  }
}
