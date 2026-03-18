/*
 * XREFs of VidSchiSelectContextFromThisPriority @ 0x1C00256C0
 * Callers:
 *     VidSchiSelectContext @ 0x1C00255D4 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiIsQuantumLeft @ 0x1C000C920 (VidSchiIsQuantumLeft.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContextFromThisPriority(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  _QWORD *v5; // r14
  int v6; // esi
  __int64 v7; // rbx
  struct _VIDSCH_CONTEXT *result; // rax
  struct _VIDSCH_CONTEXT *v9; // rbp
  struct _VIDSCH_CONTEXT *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = 2 * (a2 + 122LL);
  v4 = 2LL * a2;
  do
  {
    v5 = *(_QWORD **)(a1 + 8 * v3);
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 8 * v4 + 1960) - 8LL;
    result = (struct _VIDSCH_CONTEXT *)(v5 - 1);
    if ( v5 - 1 == (_QWORD *)v7 )
    {
      v10 = (struct _VIDSCH_CONTEXT *)(v5 - 1);
      *((_BYTE *)result + 640) = 1;
    }
    else
    {
      do
      {
        v9 = (struct _VIDSCH_CONTEXT *)(v5 - 1);
        v5 = (_QWORD *)*v5;
        if ( (unsigned int)VidSchiIsQuantumLeft(v9, &v10) )
          break;
        v6 = 1;
      }
      while ( v9 != (struct _VIDSCH_CONTEXT *)v7 );
      result = v10;
    }
  }
  while ( !result && v6 );
  return result;
}
