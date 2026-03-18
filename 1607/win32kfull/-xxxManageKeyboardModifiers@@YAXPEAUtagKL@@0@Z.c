/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01D55B0
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C00A9E68 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C01D54C0 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  unsigned __int8 v6[32]; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 384LL) )
  {
    if ( a1 )
    {
      memset(v6, 0, sizeof(v6));
      xxxAdjustPushStateForKL(gptiCurrent, v6, a1, a1, a2);
      xxxAdjustPushStateForKL(gptiCurrent, v6, a2, a1, a2);
      v5 = *((_QWORD *)a1 + 6);
      if ( v5 && (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 80LL) & 1) != 0 && (byte_1C0327724 & 4) == 0 )
        xxxKeyEvent(0x80A2u, 0x21Du, 0, 0LL, 0LL, 0LL, 0, 0, 0LL);
    }
    else
    {
      do
      {
        *(_BYTE *)(*(_QWORD *)(gptiCurrent + 384LL) + v2 + 192) &= 0xAAu;
        *(_BYTE *)(v2 + *(_QWORD *)gafAsyncKeyState) &= 0xAAu;
        gafRawKeyState[v2++] &= 0xAAu;
      }
      while ( v2 < 64 );
    }
  }
}
