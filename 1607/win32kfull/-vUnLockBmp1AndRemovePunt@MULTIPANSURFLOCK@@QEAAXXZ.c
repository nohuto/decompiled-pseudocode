/*
 * XREFs of ?vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0288D74
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C028633C (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C02863D0 (--1PANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt(MULTIPANSURFLOCK *this)
{
  DHSURF dhsurf; // rax

  if ( *(_QWORD *)this )
  {
    EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 1) + 24LL));
    EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 784LL));
    --*(_DWORD *)(*((_QWORD *)this + 1) + 40LL);
    dhsurf = (DHSURF)*((_QWORD *)this + 1);
    if ( !*((_DWORD *)dhsurf + 10) )
      EngModifySurface(
        *(HSURF *)(*(_QWORD *)this + 8LL),
        *(HDEV *)(*((_QWORD *)dhsurf + 4) + 48LL),
        0x394ABu,
        3u,
        dhsurf,
        0LL,
        0,
        0LL);
    EngReleaseSemaphore(*(HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 784LL));
    *(_QWORD *)this = 0LL;
  }
}
