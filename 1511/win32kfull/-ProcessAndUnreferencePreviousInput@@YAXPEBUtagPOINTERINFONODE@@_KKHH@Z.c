/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F98EC
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01F7B5C (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01F7FFC (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall ProcessAndUnreferencePreviousInput(
        const struct tagPOINTERINFONODE *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  int v9; // esi
  struct tagPOINTERINPUTFRAME *v10; // rax
  _DWORD *v11; // rdx
  HWND v12; // rdx

  if ( (*((_DWORD *)a1 + 17) & 1) == 0 )
  {
    if ( a2 )
    {
      v9 = 0;
      v10 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
      if ( v10 )
      {
        v11 = (_DWORD *)(*((_QWORD *)v10 + 9) + 216LL * *(unsigned int *)(a2 + 32));
        if ( (*v11 & 0x80u) == 0 )
        {
          v9 = 1;
          *v11 |= 0x80u;
        }
        UnreferenceFrameInt(v10);
        if ( v9 )
        {
          if ( (*(_DWORD *)a1 & 8) != 0 )
            GenerateWindowLeaveMessage(a2, v12, a3, (unsigned int)-__CFSHR__(*(_DWORD *)a1, 7), a4, a5);
          if ( (*(_DWORD *)a1 & 0x40) != 0 )
            GenerateCaptureLostMessage(a2, v12, a3, a4, a5);
          PointerList::UnreferenceMsgData(a2, 1LL);
        }
      }
    }
  }
}
