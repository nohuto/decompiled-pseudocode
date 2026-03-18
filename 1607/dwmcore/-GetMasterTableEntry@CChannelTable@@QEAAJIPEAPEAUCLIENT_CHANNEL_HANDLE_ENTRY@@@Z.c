/*
 * XREFs of ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A894C
 * Callers:
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A84F8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800A8624 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A88A8 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180113894 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x180113A58 (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180113B74 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180037E18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannelTable::GetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  int v6; // r10d

  v3 = 0;
  if ( HANDLE_TABLE::ValidEntry(this, a2) )
  {
    *v5 = *(_QWORD *)(v4 + 24) + (unsigned int)(v6 * *(_DWORD *)(v4 + 8));
  }
  else
  {
    v3 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x2Eu);
  }
  return v3;
}
