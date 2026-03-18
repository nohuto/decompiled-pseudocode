/*
 * XREFs of ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00B91E4
 * Callers:
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxPSMGetTextExtent @ 0x1C00B92A4 (xxxPSMGetTextExtent.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 */

__int64 __fastcall xxxMB_FindLongestString(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // rsi
  int v6; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r10d
  struct tagSIZE v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h]

  v4 = L" ";
  v13 = 0LL;
  v6 = 0;
  v14 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v8 = 11LL;
  v9 = gpsi + 916LL;
  do
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v9 + 2 * v10) );
    if ( (int)v10 > v6 )
    {
      v6 = v10;
      v4 = (unsigned __int16 *)v9;
    }
    v9 += 40LL;
    --v8;
  }
  while ( v8 );
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread, v9) )
    xxxClientGetTextExtentPointW(a1);
  else
    GreGetTextExtentW(a1, L"0", v11, &v13, v11);
  xxxPSMGetTextExtent(a1, v4);
  return (unsigned int)(v14 + 2 * v13.cx);
}
