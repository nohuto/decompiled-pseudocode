/*
 * XREFs of sub_18000BC34 @ 0x18000BC34
 * Callers:
 *     sub_18000D108 @ 0x18000D108 (sub_18000D108.c)
 *     sub_18000D280 @ 0x18000D280 (sub_18000D280.c)
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     sub_18000BCC0 @ 0x18000BCC0 (sub_18000BCC0.c)
 *     atexit @ 0x1800261E4 (atexit.c)
 */

LPVOID sub_18000BC34()
{
  BOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (dword_18003ACCC & 1) == 0 )
  {
    dword_18003ACCC |= 1u;
    atexit(sub_1800280C0);
  }
  InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_18003ACD8;
    qword_18003ACD8 = (__int64)off_18002E1C0;
    sub_18000BCC0(&qword_18003ACD8);
    InitOnceComplete(&InitOnce, 0, &qword_18003ACD8);
  }
  return Context;
}
