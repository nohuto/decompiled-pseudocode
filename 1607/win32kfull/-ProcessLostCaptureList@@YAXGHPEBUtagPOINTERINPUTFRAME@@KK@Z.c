/*
 * XREFs of ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01088A8 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F35E0 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0009F60 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F3918 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

void __fastcall ProcessLostCaptureList(
        unsigned __int16 a1,
        int a2,
        const struct tagPOINTERINPUTFRAME *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // r14
  struct tagINPUTPOINTERNODE *NodeById; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagHID_PAGEONLY_REQUEST **v12; // rcx
  struct tagHID_PAGEONLY_REQUEST *v13; // rcx
  HWND v14; // rbx

  v5 = a4;
  while ( 1 )
  {
    NodeById = FindNodeById(a1, 0, 0);
    if ( !NodeById
      || (v12 = (struct tagHID_PAGEONLY_REQUEST **)((char *)NodeById + 136),
          *v12 == (struct tagHID_PAGEONLY_REQUEST *)v12) )
    {
      v14 = 0LL;
    }
    else
    {
      v13 = *v12;
      v14 = (HWND)*((_QWORD *)v13 + 2);
      FreeHidPageOnlyRequest(v13, v10, v11);
    }
    if ( !v14 )
      break;
    if ( a2 )
    {
      if ( a3 )
        GeneratePointerMessage(
          (const struct tagPOINTERINFONODE *)(*((_QWORD *)a3 + 11) + 216 * v5),
          (*(_DWORD *)(*((_QWORD *)a3 + 11) + 216 * v5 + 56) != 5) - 1LL,
          0x253u,
          a5,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 13) + 252LL), 6),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 13) + 252LL), 7),
          v14);
    }
  }
}
