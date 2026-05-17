/*
 * XREFs of RcFrameConsolidation @ 0x1800A90D0
 * Callers:
 *     RtlRestoreContext @ 0x1800A8DD0 (RtlRestoreContext.c)
 * Callees:
 *     ZwContinue @ 0x1800A5920 (ZwContinue.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall RcFrameConsolidation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23)
{
  volatile __int32 *v24; // rbx
  __int32 v25; // r8d
  int v26; // [rsp-18h] [rbp-18h]
  unsigned __int32 v27; // [rsp-14h] [rbp-14h]

  (*(void (**)(void))(a1 + 32))();
  if ( (v26 & 0xFFFFFFBF) == 0x10000F )
  {
    if ( (v26 & 0x100040) == 0x100040 )
    {
      v24 = (volatile __int32 *)((char *)&STACK[0x288] + SLODWORD(STACK[0x498]));
      v25 = _InterlockedExchange(v24 + 6, v27);
      _xrstor((void *)v24, MEMORY[0x7FFE03E0] & 0xFFFFFFFFFFFFFFFCuLL);
      *((_DWORD *)v24 + 6) = v25;
    }
    _fxrstor(&a23);
    _mm_setcsr(v27);
    __asm { iretq }
  }
  return ZwContinue();
}
