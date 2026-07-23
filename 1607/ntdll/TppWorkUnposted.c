/*
 * XREFs of TppWorkUnposted @ 0x1800FE2B0
 * Callers:
 *     <none>
 * Callees:
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWorkUnposted(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // edx
  unsigned __int32 v4; // ecx
  __int64 result; // rax

  v1 = a1 - 200;
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(*(_QWORD *)(v1 + 144), a1, *(_QWORD *)(v1 + 80), *(_QWORD *)(v1 + 88), *(_QWORD *)(v1 + 104));
  _m_prefetchw((const void *)(v1 + 232));
  v2 = *(_DWORD *)(v1 + 232);
  while ( 1 )
  {
    v3 = v2 >> 1;
    if ( !(v2 >> 1) )
      break;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 232), 0, v2);
    if ( v2 == v4 )
      goto LABEL_8;
  }
  v3 = 0;
LABEL_8:
  if ( v3 )
    TppBarrierAdjust((_RTL_SRWLOCK *)(v1 + 56), -v3, 0);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(v1 + 8))(v1);
  return result;
}
