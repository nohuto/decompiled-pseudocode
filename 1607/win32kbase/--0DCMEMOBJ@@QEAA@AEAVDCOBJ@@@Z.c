/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002F030
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D064 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C005C908 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  DC **v2; // rdi
  __int64 v4; // rax
  struct _W32THREAD *ThreadWin32Thread; // rax
  _QWORD *v6; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v2 = a2;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  LOBYTE(a2) = 1;
  v4 = HmgAlloc(2552LL, a2, 1LL);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)this + 2544LL) = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v6 = (_QWORD *)(*(_QWORD *)this + 1504LL);
    if ( *(_QWORD *)this != -1504LL )
    {
      *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
      v6[2] = 0LL;
      *v6 = &CPushLock::`vftable';
    }
    *(_QWORD *)(*(_QWORD *)this + 1536LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*v2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 536LL;
    DC::vCopyTo(*v2, this);
  }
  return this;
}
