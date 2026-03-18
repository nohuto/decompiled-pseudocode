/*
 * XREFs of ?vLockBmpAndPrepareForPunt@PANSURFLOCK@@QEAAXXZ @ 0x1C02885CC
 * Callers:
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C02862A8 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PANSURFLOCK::vLockBmpAndPrepareForPunt(__int64 **this)
{
  __int64 *v2; // rcx
  DHSURF dhsurf; // r8

  v2 = (__int64 *)**this;
  this[1] = v2;
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2[4] + 784));
  dhsurf = (DHSURF)this[1];
  if ( !*((_DWORD *)dhsurf + 10) )
    EngModifySurface(
      (HSURF)(*this)[1],
      *(HDEV *)(*((_QWORD *)dhsurf + 4) + 48LL),
      0,
      0,
      dhsurf,
      *((PVOID *)dhsurf + 1),
      *((_DWORD *)dhsurf + 4),
      0LL);
  ++*((_DWORD *)this[1] + 10);
  EngReleaseSemaphore(*(HSEMAPHORE *)(this[1][4] + 784));
  EngAcquireSemaphore((HSEMAPHORE)this[1][3]);
}
