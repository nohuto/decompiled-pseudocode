/*
 * XREFs of ?lock@?$weak_ptr@VEvent@Wrappers@WRL@Microsoft@@@std@@QEBA?AV?$shared_ptr@VEvent@Wrappers@WRL@Microsoft@@@2@XZ @ 0x18008D2CC
 * Callers:
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18008CF28 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::weak_ptr<Microsoft::WRL::Wrappers::Event>::lock(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rdi

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = qword_1800D2FA0;
  v4 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent;
  if ( qword_1800D2FA0 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v5 + 1, v5) )
      {
        v6 = (volatile signed __int32 *)a2[1];
        if ( v6 )
        {
          if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
            if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
          }
        }
        a2[1] = v3;
        *a2 = v4;
        return a2;
      }
    }
  }
  return a2;
}
