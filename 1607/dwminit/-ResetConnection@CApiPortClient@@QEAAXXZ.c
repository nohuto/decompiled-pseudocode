/*
 * XREFs of ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x1800053A8
 * Callers:
 *     DwmpResetPortConnection @ 0x18000473C (DwmpResetPortConnection.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180004C24 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800050B4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 */

void __fastcall CApiPortClient::ResetConnection(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  CApiPortClient *v2; // rcx

  EnterCriticalSection(&CriticalSection);
  if ( CApiPortClient::IsConnected(v1) )
    CApiPortClient::Disconnect(v2);
  LeaveCriticalSection(&CriticalSection);
}
