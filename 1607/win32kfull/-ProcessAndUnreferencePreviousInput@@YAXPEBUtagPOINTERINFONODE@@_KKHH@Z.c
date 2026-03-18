/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F0AEC
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01EED40 (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01EF1E8 (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
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
  __int64 v11; // r8
  _DWORD *v12; // rdx
  HWND v13; // rdx
  int v14; // r9d

  if ( (*((_DWORD *)a1 + 17) & 1) == 0 )
  {
    if ( a2 )
    {
      v9 = 0;
      v10 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
      if ( v10 )
      {
        v12 = (_DWORD *)(*((_QWORD *)v10 + 11) + 216LL * *(unsigned int *)(a2 + 32));
        if ( (*v12 & 0x80u) == 0 )
        {
          v9 = 1;
          *v12 |= 0x80u;
        }
        UnreferenceFrameInt(v10, (__int64)v12, v11);
        if ( v9 )
        {
          v14 = *(_DWORD *)a1;
          if ( (*(_DWORD *)a1 & 0x1000) == 0 )
          {
            if ( (v14 & 8) != 0 )
              GenerateWindowLeaveMessage(a2, v13, a3, (unsigned int)-__CFSHR__(v14, 7), a4, a5);
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              GenerateCaptureLostMessage(a2, v13, a3, a4, a5);
          }
          PointerList::UnreferenceMsgData(a2, 1LL);
        }
      }
    }
  }
}
