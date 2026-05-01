/*
 * XREFs of ?Clear@TaskList@ComTaskPool@Internal@Windows@@QEAAXXZ @ 0x180010710
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x18000F984 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800107B4 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
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
