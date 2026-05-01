/*
 * XREFs of ?OnCommitWarning@ResourceSetCallback@@UEAAJPEAX@Z @ 0x18002A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetCallback::OnCommitWarning(ResourceSetCallback *this, void *a2)
{
  return ResourceSetCallback::SendData(this, a2, 2LL, 0LL);
}
