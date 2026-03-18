/*
 * XREFs of ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800632B0
 * Callers:
 *     ?SyncFlush@CChannel@@QEAAJXZ @ 0x18004FF64 (-SyncFlush@CChannel@@QEAAJXZ.c)
 * Callees:
 *     ?Commit@CChannel@@QEAAJXZ @ 0x18004FECC (-Commit@CChannel@@QEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800633DC (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::SynchronizeChannel(CConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  bool v5; // zf
  int MasterTableEntry; // eax
  unsigned int v7; // ebx
  CChannel *v8; // rdi
  int v9; // eax
  int v11; // r9d
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-48h]
  __m128i v14; // [rsp+30h] [rbp-38h]
  HANDLE hHandle; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v17; // [rsp+80h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v17 = 0LL;
  v5 = *((_BYTE *)this + 176) == 0;
  v16 = 1;
  if ( v5 )
  {
    v7 = -2003303402;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303402, 0x159u);
LABEL_9:
    LeaveCriticalSection(v2);
    return v7;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 24), a2, &v17);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MasterTableEntry, 0x15Du);
    goto LABEL_9;
  }
  v14 = *(__m128i *)v17;
  hHandle = (HANDLE)*((_QWORD *)v17 + 2);
  LeaveCriticalSection(v2);
  v8 = (CChannel *)_mm_srli_si128(v14, 8).m128i_u64[0];
  v9 = CChannel::SendCommand(v8, &v16, 4u);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 361;
LABEL_12:
    v11 = v9;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v13);
    return v7;
  }
  v9 = CChannel::Commit(v8);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 366;
    goto LABEL_12;
  }
  SetLastError(0);
  if ( WaitForSingleObject(hHandle, 0xFFFFFFFF) == -1 )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    v13 = 377;
    if ( (v7 & 0x80000000) == 0 )
      v7 = -2003304445;
    v11 = v7;
    goto LABEL_18;
  }
  return v7;
}
