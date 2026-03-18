/*
 * XREFs of VidSchiSelectContextFromThisPriority @ 0x1C001A20C
 * Callers:
 *     VidSchiSelectContext @ 0x1C001A140 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiIsQuantumLeft @ 0x1C0017760 (VidSchiIsQuantumLeft.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContextFromThisPriority(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  _QWORD *v5; // rbp
  int v6; // edi
  __int64 v7; // rbx
  struct _VIDSCH_CONTEXT *result; // rax
  __int64 v9; // rsi
  struct _VIDSCH_CONTEXT *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = 2LL * a2;
  v4 = 2 * (a2 + 128LL);
  do
  {
    v5 = *(_QWORD **)(a1 + 8 * v3 + 2040);
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 8 * v4) - 8LL;
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
        v9 = (__int64)(v5 - 1);
        v5 = (_QWORD *)*v5;
        if ( (unsigned int)VidSchiIsQuantumLeft(v9, &v10) )
          break;
        v6 = 1;
      }
      while ( v9 != v7 );
      result = v10;
    }
  }
  while ( !result && v6 );
  return result;
}
