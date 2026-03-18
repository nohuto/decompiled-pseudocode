/*
 * XREFs of ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0155248
 * Callers:
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall UserAtomicCheck::Detach(UserAtomicCheck *this)
{
  *(_BYTE *)this = 1;
  --gdwInAtomicOperation;
  UserAtomicCheck::UnregisterStack(this);
}
