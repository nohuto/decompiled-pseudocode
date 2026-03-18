/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z @ 0x18000DB88
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18000D9F0 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x180170DB0 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(
        CInteractionProcessor *this,
        struct IManipulationResource *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  *((_BYTE *)this + 409) &= ~1u;
  v2 = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_BYTE *)this + 408) = 0;
  *(_QWORD *)((char *)this + 412) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_BYTE *)this + 144) &= 0xF9u;
  *((_DWORD *)this + 35) = 0;
  *((_BYTE *)this + 296) &= 0xF9u;
  *((_DWORD *)this + 73) = 0;
  *(_QWORD *)((char *)this + 844) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 213) = 0;
  *((_WORD *)this + 420) = 0;
  if ( !*(_QWORD *)this )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, 0LL);
  if ( (*((_BYTE *)this + 856) & 8) == 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 120LL))(*(_QWORD *)this);
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 72LL))(*((_QWORD *)this + 19), 0LL);
    if ( (*((_BYTE *)this + 856) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 120LL))(*((_QWORD *)this + 19));
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v2;
}
