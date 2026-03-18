/*
 * XREFs of ?vUnLockBmp2AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C028A428
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C02879EC (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIPANSURFLOCK::vUnLockBmp2AndRemovePunt(MULTIPANSURFLOCK *this)
{
  DHSURF dhsurf; // rax

  if ( *((_QWORD *)this + 2) )
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 3) + 24LL));
    EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 784LL));
    --*(_DWORD *)(*((_QWORD *)this + 3) + 40LL);
    dhsurf = (DHSURF)*((_QWORD *)this + 3);
    if ( !*((_DWORD *)dhsurf + 10) )
      EngModifySurface(
        *(HSURF *)(*((_QWORD *)this + 2) + 8LL),
        *(HDEV *)(*((_QWORD *)dhsurf + 4) + 48LL),
        0x394ABu,
        3u,
        dhsurf,
        0LL,
        0,
        0LL);
    EngReleaseSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 784LL));
    *((_QWORD *)this + 2) = 0LL;
  }
}
