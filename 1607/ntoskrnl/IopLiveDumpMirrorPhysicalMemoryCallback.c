/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403DB598
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindNextForwardRunClearEx @ 0x140112F58 (RtlFindNextForwardRunClearEx.c)
 *     IopLiveDumpFilterAndMarkPage @ 0x1403DAF74 (IopLiveDumpFilterAndMarkPage.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 i; // r14
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = IopLiveDumpContext;
  v3 = a1 >> 12;
  v4 = *(_QWORD *)(IopLiveDumpContext + 400);
  v5 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v6 = v5 + v3 - 1;
  if ( v3 < v4 )
  {
    if ( v6 >= v4 )
    {
      v6 = v4 - 1;
      v5 = v4 - v3;
    }
    if ( v5 )
    {
      v13[0] = v6 + 1;
      v13[1] = *(_QWORD *)(IopLiveDumpContext + 408);
      do
      {
        NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v13, v3, &v14);
        v8 = v14;
        v9 = NextForwardRunClear;
        if ( NextForwardRunClear )
          v10 = v14 - v3;
        else
          v10 = v5;
        for ( i = 0LL; i < v10; ++i )
          IopLiveDumpFilterAndMarkPage(i + v3, v2);
        if ( v5 <= v10 + v9 )
        {
          v5 = 0LL;
        }
        else
        {
          v5 -= v10 + v9;
          v3 = v8 + v9;
        }
      }
      while ( v5 );
    }
  }
  return 0LL;
}
