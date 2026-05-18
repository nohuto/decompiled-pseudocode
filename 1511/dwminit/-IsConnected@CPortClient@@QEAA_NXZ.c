/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180005190
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004C30 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 6) != 0LL;
}
