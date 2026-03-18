/*
 * XREFs of VidSchiSelectContextFromThisPriority @ 0x1C0021D30
 * Callers:
 *     VidSchiSelectContext @ 0x1C0021C64 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiIsQuantumLeft @ 0x1C000DBC0 (VidSchiIsQuantumLeft.c)
 */

volatile signed __int32 *__fastcall VidSchiSelectContextFromThisPriority(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *v6; // rbp
  int v7; // edi
  __int64 v8; // rbx
  volatile signed __int32 *result; // rax
  __int64 v10; // rsi
  volatile signed __int32 *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = 2LL * a2;
  v5 = 2 * (a2 + 120LL);
  do
  {
    v6 = *(_QWORD **)(a1 + 8 * v4 + 1912);
    v7 = 0;
    v8 = *(_QWORD *)(a1 + 8 * v5) - 8LL;
    result = (volatile signed __int32 *)(v6 - 1);
    if ( v6 - 1 == (_QWORD *)v8 )
    {
      v11 = (volatile signed __int32 *)(v6 - 1);
      *((_BYTE *)result + 640) = 1;
    }
    else
    {
      do
      {
        v10 = (__int64)(v6 - 1);
        v6 = (_QWORD *)*v6;
        if ( (unsigned int)VidSchiIsQuantumLeft(v10, &v11, a3) )
          break;
        v7 = 1;
      }
      while ( v10 != v8 );
      result = v11;
    }
  }
  while ( !result && v7 );
  return result;
}
