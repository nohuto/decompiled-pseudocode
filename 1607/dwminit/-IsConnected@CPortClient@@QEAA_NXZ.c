/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180005660
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800050B4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 6) != 0LL;
}
