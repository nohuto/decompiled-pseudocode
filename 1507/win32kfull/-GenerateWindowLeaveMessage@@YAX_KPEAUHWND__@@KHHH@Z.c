/*
 * XREFs of ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01F7B4C
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F943C (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 * Callees:
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F77F4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall GenerateWindowLeaveMessage(
        __int64 a1,
        HWND a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  struct tagPOINTERINPUTFRAME *v6; // rax
  int v7; // r9d
  __int64 v8; // r10
  int v9; // r11d
  struct tagPOINTERINPUTFRAME *v10; // rbx

  if ( a1 )
  {
    v6 = FindAndReferenceFrameById(*(_DWORD *)(a1 + 28));
    v10 = v6;
    if ( v6 )
    {
      if ( !v7 )
        GeneratePointerMessage(
          (const struct tagPOINTERINFONODE *)(*((_QWORD *)v6 + 9) + 216LL * *(unsigned int *)(v8 + 32)),
          v8,
          0x24Au,
          v9,
          a5,
          a6,
          0LL);
      UnreferenceFrameInt(v10);
    }
  }
}
