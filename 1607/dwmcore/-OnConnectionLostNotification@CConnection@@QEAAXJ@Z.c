/*
 * XREFs of ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x180113A58
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1801139A8 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180037E18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A894C (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

void __fastcall CConnection::OnConnectionLostNotification(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int i; // edi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v3; // rbx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v4; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = this + 3;
  EnterCriticalSection(this + 3);
  for ( i = 1; i < HIDWORD(this->LockSemaphore); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&this->OwningThread, i)
      && (int)CChannelTable::GetMasterTableEntry((CChannelTable *)&this->OwningThread, i, &v4) >= 0 )
    {
      v3 = v4;
      SetEvent(*(HANDLE *)(*((_QWORD *)v4 + 1) + 80LL));
      SetEvent(*((HANDLE *)v3 + 2));
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
}
