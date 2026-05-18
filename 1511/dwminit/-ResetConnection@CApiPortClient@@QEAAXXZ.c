/*
 * XREFs of ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x180004EDC
 * Callers:
 *     DwmpResetPortConnection @ 0x18000460C (DwmpResetPortConnection.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000486C (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004C30 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
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
