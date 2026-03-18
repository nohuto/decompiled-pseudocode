/*
 * XREFs of NtGdiTransformPoints @ 0x1C00DDE20
 * Callers:
 *     <none>
 * Callees:
 *     GreTransformPoints @ 0x1C00DDF64 (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiTransformPoints(HDC a1, char *Src, char *a3, __int64 a4, int a5)
{
  __int64 v5; // rsi
  unsigned int v9; // edi
  _BYTE *v10; // rbx
  size_t v11; // r8
  size_t v12; // r8
  _BYTE Srca[80]; // [rsp+50h] [rbp-98h] BYREF

  v5 = (int)a4;
  v9 = 1;
  v10 = Srca;
  if ( (int)a4 > 0 )
  {
    if ( (int)a4 > 10 )
    {
      v10 = 0LL;
      if ( (unsigned __int64)(int)a4 <= 0x4E2000 )
        v10 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)(8 * a4));
    }
    if ( v10 )
    {
      v11 = 8 * v5;
      if ( 8 * v5 && ((unsigned __int64)&Src[v11] > W32UserProbeAddress || &Src[v11] < Src) )
        *W32UserProbeAddress = 0;
      memmove(v10, Src, v11);
    }
    else
    {
      v9 = 0;
    }
    if ( v9 )
    {
      v9 = GreTransformPoints(a1, a5);
      if ( v9 )
      {
        v12 = 8LL * (int)v5;
        if ( (unsigned __int64)&a3[v12] > W32UserProbeAddress || &a3[v12] <= a3 )
          *W32UserProbeAddress = 0;
        memmove(a3, v10, v12);
      }
    }
    if ( v10 && v10 != Srca )
      FreeTmpBuffer(v10, Src, a3, a4);
  }
  return v9;
}
