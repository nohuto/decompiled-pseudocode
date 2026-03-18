/*
 * XREFs of ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1C00E4B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CChannel::UnlockAndUnreference(DirectComposition::CChannel *this)
{
  DirectComposition::CChannel::Unlock(this);
  DirectComposition::CChannel::Release(this);
}
