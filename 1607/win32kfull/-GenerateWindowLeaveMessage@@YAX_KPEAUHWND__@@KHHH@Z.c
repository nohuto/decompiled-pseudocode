/*
 * XREFs of ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01EF1E8
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F0AEC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
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
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  unsigned int v11; // r11d
  struct tagPOINTERINPUTFRAME *v12; // rbx

  if ( a1 )
  {
    v6 = FindAndReferenceFrameById(*(_DWORD *)(a1 + 28));
    v12 = v6;
    if ( v6 )
    {
      if ( !v9 )
        GeneratePointerMessage(
          (const struct tagPOINTERINFONODE *)(*((_QWORD *)v6 + 11) + 216LL * *(unsigned int *)(v10 + 32)),
          v10,
          586LL,
          v11,
          a5,
          a6,
          0LL);
      UnreferenceFrameInt(v12, v7, v8);
    }
  }
}
