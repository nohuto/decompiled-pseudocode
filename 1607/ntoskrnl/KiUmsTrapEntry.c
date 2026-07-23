/*
 * XREFs of KiUmsTrapEntry @ 0x140170DC0
 * Callers:
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 * Callees:
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 */

__int64 __fastcall KiUmsTrapEntry(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  _QWORD v4[5]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-180h]
  __int64 v6; // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v7)(); // [rsp+38h] [rbp-170h]
  __int64 v8; // [rsp+48h] [rbp-160h]
  __int64 v9; // [rsp+50h] [rbp-158h]
  char *v10; // [rsp+58h] [rbp-150h]
  char v11; // [rsp+70h] [rbp-138h] BYREF

  *(_QWORD *)(v2 - 128) = a1;
  *(_QWORD *)(v2 - 120) = v1;
  v4[4] = v2 + 272;
  v5 = v2 + 272 - (_QWORD)v4;
  v6 = v5 - 424;
  v7 = KiUmsTrapEntryContinue;
  v10 = &v11;
  v9 = v2 - 128;
  v8 |= 1uLL;
  KiSwapToUmsThread(v4);
  return KiUmsFastReturnToUser();
}
