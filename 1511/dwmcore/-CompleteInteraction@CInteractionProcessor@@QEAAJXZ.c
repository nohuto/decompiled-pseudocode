/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJXZ @ 0x180005C64
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x180005E00 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x1801436A0 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(CInteractionProcessor *this)
{
  unsigned int v1; // edi
  __int64 v3; // rsi

  *((_BYTE *)this + 364) &= 0xFCu;
  v1 = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  *((_BYTE *)this + 128) &= 0xF5u;
  *((_DWORD *)this + 31) = 0;
  *((_BYTE *)this + 264) &= 0xF5u;
  *((_DWORD *)this + 65) = 0;
  *(_QWORD *)((char *)this + 628) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 159) = 0;
  *((_WORD *)this + 312) = 0;
  if ( *(_QWORD *)this
    && ((*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this), (v3 = *((_QWORD *)this + 17)) != 0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v1;
}
