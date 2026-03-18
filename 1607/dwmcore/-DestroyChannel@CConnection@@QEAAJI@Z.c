/*
 * XREFs of ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180113894
 * Callers:
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x180114B50 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x18004AC00 (-Release@CChannel@@UEAAKXZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A894C (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x180113968 (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180113B74 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CConnection::DestroyChannel(struct _RTL_CRITICAL_SECTION *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int MasterTableEntry; // eax
  unsigned int v6; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v7; // rbx
  CChannel *v8; // rcx
  CConnection *v9; // rcx
  int v10; // eax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = this + 3;
  EnterCriticalSection(this + 3);
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)&this->OwningThread, a2, &v12);
  v6 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MasterTableEntry, 0xEDu);
    LeaveCriticalSection(v2);
  }
  else
  {
    v7 = v12;
    v8 = (CChannel *)*((_QWORD *)v12 + 1);
    if ( v8 )
    {
      CChannel::Release(v8);
      *((_QWORD *)v7 + 1) = 0LL;
    }
    CChannelTable::DestroyHandle((CChannelTable *)&this->OwningThread, a2);
    LeaveCriticalSection(v2);
    v10 = CConnection::DestroyKernelChannel(v9, a2);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x106u);
  }
  return v6;
}
