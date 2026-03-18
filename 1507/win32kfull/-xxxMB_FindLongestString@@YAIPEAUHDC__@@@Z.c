/*
 * XREFs of ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C013815C
 * Callers:
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0128938 (CALL_LPK.c)
 *     xxxPSMGetTextExtent @ 0x1C013821C (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxMB_FindLongestString(HDC a1)
{
  unsigned __int16 *v1; // rsi
  int v3; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r10d
  struct tagSIZE v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h]

  v1 = L" ";
  v10 = 0LL;
  v3 = 0;
  v11 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = 11LL;
  v6 = gpsi + 916LL;
  do
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    if ( (int)v7 > v3 )
    {
      v3 = v7;
      v1 = (unsigned __int16 *)v6;
    }
    v6 += 40LL;
    --v5;
  }
  while ( v5 );
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, &szOneChar, v8, &v10);
  else
    GreGetTextExtentW(a1, (__m128i *)&szOneChar, v8, &v10, v8);
  xxxPSMGetTextExtent(a1, v1);
  return (unsigned int)(v11 + 2 * v10.cx);
}
