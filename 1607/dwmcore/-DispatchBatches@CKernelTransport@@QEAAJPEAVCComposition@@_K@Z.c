/*
 * XREFs of ?DispatchBatches@CKernelTransport@@QEAAJPEAVCComposition@@_K@Z @ 0x180036E7C
 * Callers:
 *     ?ProcessBatches@CCrossThreadComposition@@IEAAJ_K@Z @ 0x180038B90 (-ProcessBatches@CCrossThreadComposition@@IEAAJ_K@Z.c)
 * Callees:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18003B930 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK@Z @ 0x18003BA24 (-OpenChannel@CComposition@@IEAAJIK@Z.c)
 *     ?ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800434E4 (-ProcessDataOnChannelSameProcess@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800435F8 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKernelTransport::DispatchBatches(CKernelTransport *this, struct CComposition *a2, __int64 a3)
{
  unsigned int v4; // ebx
  int ConnectionBatch; // eax
  struct UCE_RDP_HEADER *i; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct UCE_RDP_HEADER *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v4 = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*(_QWORD *)this, &v13, &v12);
  if ( ConnectionBatch >= 0 )
  {
    for ( i = v12; ; v12 = i )
    {
      if ( !i )
        return v4;
      v4 = 0;
      switch ( *(_DWORD *)i )
      {
        case 5:
          v10 = CComposition::OpenChannel(a2, *((_DWORD *)i + 4), *((_DWORD *)i + 5));
          v4 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1D3u);
          break;
        case 6:
          v11 = CComposition::CloseChannel(a2, *((_DWORD *)i + 4));
          v4 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1DFu);
          break;
        case 7:
          v9 = CComposition::ProcessDataOnChannel(a2, i);
          v4 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1D7u);
          break;
        case 8:
          v8 = CComposition::ProcessDataOnChannelSameProcess(a2, i);
          v4 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1DBu);
          break;
        default:
          goto LABEL_11;
      }
      i = v12;
LABEL_11:
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xBEu);
        return v4;
      }
      i = (struct UCE_RDP_HEADER *)*((_QWORD *)i + 1);
    }
  }
  v4 = ConnectionBatch | 0x10000000;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ConnectionBatch | 0x10000000, 0xBAu);
  return v4;
}
