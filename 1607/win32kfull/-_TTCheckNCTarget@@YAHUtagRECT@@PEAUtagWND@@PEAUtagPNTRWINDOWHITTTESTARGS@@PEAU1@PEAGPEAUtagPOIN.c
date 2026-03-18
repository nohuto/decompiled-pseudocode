/*
 * XREFs of ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C0221CCC
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0221EF0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 * Callees:
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0221104 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     TouchTargetingRankForRect @ 0x1C024823C (TouchTargetingRankForRect.c)
 */

__int64 __fastcall _TTCheckNCTarget(
        struct tagRECT *a1,
        struct tagWND *a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        unsigned __int16 *a5,
        struct tagPOINT *a6,
        struct tagRECT *a7,
        unsigned int a8)
{
  __int16 v8; // r15
  __int64 v10; // r8
  unsigned __int16 v14; // ax
  unsigned __int16 *v15; // rsi
  unsigned __int16 v16; // bx
  struct tagRECT *v17; // rax
  struct tagRECT v18; // xmm0
  struct tagPOINT *v19; // rcx
  struct tagRECT v21; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-38h] BYREF
  struct tagPOINT v23; // [rsp+80h] [rbp+8h] BYREF

  v8 = a8;
  v10 = *((_QWORD *)a3 + 5);
  v22 = *a1;
  v21 = v22;
  v14 = TouchTargetingRankForRect((unsigned int)&v22, (unsigned int)&v21, v10, (_DWORD)a4, (__int64)&v23, a8);
  v15 = a5;
  v16 = v14;
  if ( v14 >= *a5 || v14 >= 0xFFDu || !(unsigned int)TTBetterTarget(a2, v14, a3, a4, v8) )
    return 0LL;
  v17 = a7;
  v18 = *a1;
  v19 = a6;
  *v15 = v16;
  *v17 = v18;
  *v19 = v23;
  return 1LL;
}
