/*
 * XREFs of ??1?$function@$$A6AJXZ@wistd@@QEAA@XZ @ 0x180023F8C
 * Callers:
 *     ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180021D38 (-CommitTDLItemWithRetry@@YAJV-$function@$$A6AJXZ@wistd@@0@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall wistd::function<long (void)>::~function<long (void)>(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 v5; // r14

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    LOBYTE(a2) = v2 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 96), a2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 96), a2);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}
