/*
 * XREFs of ??1PredicateHandlerMapping@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180049190
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateHandlerMap___::_1_::dtor$1 @ 0x180072BB0 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_180072BB0.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateHandlerMap___::_1_::dtor$3 @ 0x180072BC8 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_180072BC8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::PredicateHandlerMapping::~PredicateHandlerMapping(
        Windows::Services::TargetedContent::Internal::PredicateHandlerMapping *this,
        __int64 a2)
{
  char *v2; // rbx
  char *v3; // rcx
  char *v4; // rcx

  v2 = (char *)this + 8;
  v3 = (char *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *((_QWORD *)v2 + 3) = 0LL;
  }
  v4 = (char *)*((_QWORD *)v2 + 3);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v2 + 3) = 0LL;
  }
}
