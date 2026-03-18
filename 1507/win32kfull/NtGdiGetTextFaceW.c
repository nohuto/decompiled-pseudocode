/*
 * XREFs of NtGdiGetTextFaceW @ 0x1C002FA90
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextFaceW @ 0x1C002FB84 (GreGetTextFaceW.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextFaceW(HDC a1, int a2, char *a3)
{
  HDC v5; // rax
  int v6; // edi
  BOOL v7; // r12d
  const void *v8; // rsi
  int TextFaceW; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v13; // r8

  v5 = a1;
  v6 = 0;
  v7 = 1;
  v8 = 0LL;
  if ( a2 > 0 && a3 )
  {
    if ( (unsigned __int64)a2 <= 0x1388000 )
      v8 = (const void *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
    v7 = v8 != 0LL;
    v5 = a1;
  }
  if ( v7 )
  {
    TextFaceW = GreGetTextFaceW(v5);
    v6 = TextFaceW;
    if ( TextFaceW > 0 && a3 )
    {
      if ( TextFaceW > a2 )
        v6 = 0;
      if ( v6 )
      {
        v13 = 2LL * v6;
        if ( (unsigned __int64)&a3[v13] > W32UserProbeAddress || &a3[v13] <= a3 )
          *W32UserProbeAddress = 0;
        memmove(a3, v8, v13);
      }
    }
    if ( v8 )
      FreeTmpBuffer(v8, v10, v11, v12);
  }
  return (unsigned int)v6;
}
