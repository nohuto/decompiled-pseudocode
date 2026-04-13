/*
 * XREFs of ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180008878
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180009128 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180009604 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::TaskList::Clear(Windows::Internal::ComTaskPool::TaskList *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // r14

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = v1[3];
    v1[3] = 0LL;
    if ( *((_QWORD **)this + 1) == v1 )
      *((_QWORD *)this + 1) = 0LL;
    while ( v1 )
    {
      v3 = v1[2];
      if ( v3 )
      {
        v1[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      operator delete(v1);
      v1 = *(_QWORD **)this;
      if ( !*(_QWORD *)this )
        break;
      *(_QWORD *)this = v1[3];
      v1[3] = 0LL;
      if ( *((_QWORD **)this + 1) == v1 )
        *((_QWORD *)this + 1) = 0LL;
    }
  }
}
