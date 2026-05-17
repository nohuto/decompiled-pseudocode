/*
 * XREFs of TppWorkUnposted @ 0x1800FE2B0
 * Callers:
 *     <none>
 * Callees:
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWorkUnposted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // edx
  unsigned __int32 v7; // ecx
  __int64 result; // rax

  v4 = a1 - 200;
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(*(_QWORD *)(v4 + 144), a1, *(_QWORD *)(v4 + 80), *(_QWORD *)(v4 + 88), *(_QWORD *)(v4 + 104));
  _m_prefetchw((const void *)(v4 + 232));
  v5 = *(_DWORD *)(v4 + 232);
  while ( 1 )
  {
    v6 = v5 >> 1;
    if ( !(v5 >> 1) )
      break;
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 232), 0, v5);
    if ( v5 == v7 )
      goto LABEL_8;
  }
  v6 = 0;
LABEL_8:
  if ( v6 )
    TppBarrierAdjust((volatile signed __int64 *)(v4 + 56), -v6, 0LL, a4);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(v4 + 8))(v4);
  return result;
}
