/*
 * XREFs of ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A4010
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800A3D2C (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x180092F04 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A40B4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

__int64 __fastcall CChannelTable::AssignChannelEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  int MasterTableEntry; // eax
  unsigned int v7; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v8; // rsi
  HANDLE EventW; // rax
  int v11; // r9d
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  MasterTableEntry = HANDLE_TABLE::AssignEntry(this, a2, 1);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v13 = 67;
LABEL_8:
    v11 = MasterTableEntry;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v13);
    return v7;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry(this, a2, &v14);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v13 = 69;
    goto LABEL_8;
  }
  v8 = v14;
  *((_QWORD *)v14 + 1) = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v8 + 2) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    v13 = 72;
    if ( (v7 & 0x80000000) == 0 )
      v7 = -2003304445;
    v11 = v7;
    goto LABEL_14;
  }
  ++*((_DWORD *)this + 8);
  *a3 = v8;
  return v7;
}
