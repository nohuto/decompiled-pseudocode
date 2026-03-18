/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01DDD34
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0080AC8 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C01DDC44 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
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
      if ( v5 && (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 80LL) & 1) != 0 && (byte_1C0322AA4 & 4) == 0 )
        xxxKeyEvent(0x80A2u, 0x21Du, 0, 0LL, 0LL, 0LL, 0, 0, 0LL);
    }
    else
    {
      do
      {
        *(_BYTE *)(*(_QWORD *)(gptiCurrent + 384LL) + v2 + 184) &= 0xAAu;
        *(_BYTE *)(v2 + *(_QWORD *)gafAsyncKeyState) &= 0xAAu;
        gafRawKeyState[v2++] &= 0xAAu;
      }
      while ( v2 < 64 );
    }
  }
}
