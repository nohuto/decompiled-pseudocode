/*
 * XREFs of ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180005174
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004914 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004A90 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x180005138 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::DisconnectIfDeferred(CPortClient *this)
{
  if ( *((_DWORD *)this + 10) )
    CPortClient::Disconnect(this);
}
