/*
 * XREFs of ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x1800FF8FC
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800FF7E0 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180092D18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A40B4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

void __fastcall CConnection::OnConnectionLostNotification(CConnection *this)
{
  unsigned int i; // edi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v3; // rbx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v4; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  for ( i = 1; i < *((_DWORD *)this + 9); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CConnection *)((char *)this + 24), i)
      && (int)CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 24), i, &v4) >= 0 )
    {
      v3 = v4;
      SetEvent(*(HANDLE *)(*((_QWORD *)v4 + 1) + 88LL));
      SetEvent(*((HANDLE *)v3 + 2));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
