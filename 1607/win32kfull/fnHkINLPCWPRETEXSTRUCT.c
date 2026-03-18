/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C022E410
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxCallNextHookEx @ 0x1C00EE654 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 */

__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  unsigned __int8 *v8; // r11
  __int64 v9; // rcx
  __int64 Valid; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+58h] [rbp-10h]

  v6 = a2;
  v8 = *(unsigned __int8 **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 432);
  v9 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v9 )
  {
    Valid = PhkNextValid(v9);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 12 )
        return 0LL;
    }
  }
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  v13 = v6;
  v12[2] = a3;
  v12[1] = a4;
  v15 = 0LL;
  v12[0] = *((_QWORD *)v8 + 13);
  return xxxCallNextHookEx(0, (*v8 >> 4) & 1, (__int64)v12);
}
