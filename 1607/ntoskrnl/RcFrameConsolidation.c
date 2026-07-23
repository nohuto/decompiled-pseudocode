/*
 * XREFs of RcFrameConsolidation @ 0x140167880
 * Callers:
 *     RtlRestoreContext @ 0x1401675D0 (RtlRestoreContext.c)
 * Callees:
 *     ZwContinue @ 0x14015AA50 (ZwContinue.c)
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
        __int64 a10)
{
  __int64 v10; // rax
  __int64 v12; // [rsp-48h] [rbp-48h] BYREF
  __int16 v13; // [rsp-40h] [rbp-40h]
  int v14; // [rsp-38h] [rbp-38h]
  __int64 v15; // [rsp-30h] [rbp-30h]
  __int16 v16; // [rsp-28h] [rbp-28h]
  int v17; // [rsp-18h] [rbp-18h]
  unsigned int v18; // [rsp-14h] [rbp-14h]
  __int16 v19; // [rsp-10h] [rbp-10h]
  __int16 v20; // [rsp-6h] [rbp-6h]
  int v21; // [rsp-4h] [rbp-4h]

  v10 = (*(__int64 (**)(void))(a1 + 32))();
  if ( (v17 & 0xFFFFFFBF) == 0x10000F )
  {
    _mm_setcsr(v18);
    v16 = v20;
    v15 = a10;
    v14 = v21;
    v13 = v19;
    v12 = v10;
    _disable();
    __asm { iretq }
  }
  return ZwContinue((PCONTEXT)&v12, 0);
}
