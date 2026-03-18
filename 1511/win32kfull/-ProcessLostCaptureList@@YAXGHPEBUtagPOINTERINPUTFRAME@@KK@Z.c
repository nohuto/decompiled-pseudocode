/*
 * XREFs of ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FF94
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0114B2C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC340 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F7CA4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC678 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
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
  struct tagHID_PAGEONLY_REQUEST **v10; // rcx
  struct tagHID_PAGEONLY_REQUEST *v11; // rcx
  HWND v12; // rbx

  v5 = a4;
  while ( 1 )
  {
    NodeById = FindNodeById(a1, 0, 0);
    if ( !NodeById
      || (v10 = (struct tagHID_PAGEONLY_REQUEST **)((char *)NodeById + 136),
          *v10 == (struct tagHID_PAGEONLY_REQUEST *)v10) )
    {
      v12 = 0LL;
    }
    else
    {
      v11 = *v10;
      v12 = (HWND)*((_QWORD *)v11 + 2);
      FreeHidPageOnlyRequest(v11);
    }
    if ( !v12 )
      break;
    if ( a2 )
    {
      if ( a3 )
        GeneratePointerMessage(
          (const struct tagPOINTERINFONODE *)(*((_QWORD *)a3 + 9) + 216 * v5),
          (*(_DWORD *)(*((_QWORD *)a3 + 9) + 216 * v5 + 56) != 5) - 1LL,
          0x253u,
          a5,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 11) + 252LL), 6),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a3 + 11) + 252LL), 7),
          v12);
    }
  }
}
