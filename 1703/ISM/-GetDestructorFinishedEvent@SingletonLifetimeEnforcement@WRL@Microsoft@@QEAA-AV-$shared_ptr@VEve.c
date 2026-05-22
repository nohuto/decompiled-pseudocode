/*
 * XREFs of ?GetDestructorFinishedEvent@SingletonLifetimeEnforcement@WRL@Microsoft@@QEAA?AV?$shared_ptr@VEvent@Wrappers@WRL@Microsoft@@@std@@XZ @ 0x18008E7A0
 * Callers:
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18008CF28 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::SingletonLifetimeEnforcement::GetDestructorFinishedEvent(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rbx
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  result = a2;
  a2[1] = v3;
  *a2 = v4;
  return result;
}
