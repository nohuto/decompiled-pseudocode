/*
 * XREFs of RcFrameConsolidation @ 0x180095D40
 * Callers:
 *     RtlRestoreContext @ 0x180095A40 (RtlRestoreContext.c)
 * Callees:
 *     ZwContinue @ 0x180093D30 (ZwContinue.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __fastcall RcFrameConsolidation(
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
  __int64 v23; // rax
  volatile __int32 *v25; // rbx
  __int32 v26; // r8d
  __int64 v27; // [rsp-48h] [rbp-48h] BYREF
  __int16 v28; // [rsp-40h] [rbp-40h]
  int v29; // [rsp-38h] [rbp-38h]
  __int64 v30; // [rsp-30h] [rbp-30h]
  __int16 v31; // [rsp-28h] [rbp-28h]
  int v32; // [rsp-18h] [rbp-18h]
  unsigned __int32 v33; // [rsp-14h] [rbp-14h]
  __int16 v34; // [rsp-10h] [rbp-10h]
  __int16 v35; // [rsp-6h] [rbp-6h]
  int v36; // [rsp-4h] [rbp-4h]

  v23 = (*(__int64 (**)(void))(a1 + 32))();
  if ( (v32 & 0xFFFFFFBF) == 0x10000F )
  {
    if ( (v32 & 0x100040) == 0x100040 )
    {
      v25 = (volatile __int32 *)((char *)&STACK[0x288] + SLODWORD(STACK[0x498]));
      v26 = _InterlockedExchange(v25 + 6, v33);
      _xrstor((void *)v25, MEMORY[0x7FFE03E0] & 0xFFFFFFFFFFFFFFFCuLL);
      *((_DWORD *)v25 + 6) = v26;
    }
    _fxrstor(&a23);
    _mm_setcsr(v33);
    v31 = v35;
    v30 = a10;
    v29 = v36;
    v28 = v34;
    v27 = v23;
    __asm { iretq }
  }
  return ZwContinue((PCONTEXT)&v27, 0);
}
