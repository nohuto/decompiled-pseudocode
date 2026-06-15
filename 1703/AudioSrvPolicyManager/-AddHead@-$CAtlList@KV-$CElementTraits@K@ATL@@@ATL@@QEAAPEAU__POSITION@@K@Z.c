/*
 * XREFs of ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x18001C5EC
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001B22C (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead(__int64 *a1, int a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v11; // rcx

  v3 = *a1;
  if ( !a1[4] )
  {
    v5 = *((unsigned int *)a1 + 10);
    if ( v5 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x18 )
        goto LABEL_8;
      v5 *= 24LL;
    }
    if ( ~v5 >= 8 )
    {
      v6 = malloc(v5 + 8);
      v7 = v6;
      if ( !v6 )
        goto LABEL_19;
      *v6 = a1[3];
      a1[3] = (__int64)v6;
LABEL_9:
      if ( v7 )
      {
        v8 = *((_DWORD *)a1 + 10);
        for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
        {
          *i = a1[4];
          a1[4] = (__int64)i;
        }
        goto LABEL_13;
      }
LABEL_19:
      ATL::AtlThrowImpl(-2147024882);
    }
LABEL_8:
    v7 = 0LL;
    goto LABEL_9;
  }
LABEL_13:
  result = (__int64 *)a1[4];
  v11 = *result;
  if ( result )
    *((_DWORD *)result + 4) = a2;
  a1[4] = v11;
  result[1] = 0LL;
  *result = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = (__int64)result;
  *a1 = (__int64)result;
  return result;
}
