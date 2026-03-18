/*
 * XREFs of ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x1800E0FA8
 * Callers:
 *     ?MilConnection_DestroyChannel@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800E0D20 (-MilConnection_DestroyChannel@@YAJPEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800633DC (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x1800E1080 (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1800E14B8 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CConnection::DestroyChannel(CConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int MasterTableEntry; // eax
  unsigned int v6; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v7; // rbx
  CMILRefCountBase *v8; // rcx
  CConnection *v9; // rcx
  int v10; // eax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 24), a2, &v12);
  v6 = MasterTableEntry;
  if ( MasterTableEntry >= 0 )
  {
    v7 = v12;
    v8 = (CMILRefCountBase *)*((_QWORD *)v12 + 1);
    if ( v8 )
    {
      CMILRefCountBase::Release(v8);
      *((_QWORD *)v7 + 1) = 0LL;
    }
    CChannelTable::DestroyHandle((CConnection *)((char *)this + 24), a2);
    LeaveCriticalSection(v2);
    v10 = CConnection::DestroyKernelChannel(v9, a2);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x122u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MasterTableEntry, 0x109u);
    LeaveCriticalSection(v2);
  }
  return v6;
}
