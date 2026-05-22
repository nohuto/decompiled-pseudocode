/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent___0 @ 0x1800A3F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent___0()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = qword_1800D2FA0;
  if ( qword_1800D2FA0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(qword_1800D2FA0 + 12), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 8LL))(v0);
  }
  return result;
}
