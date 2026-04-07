/*
 * XREFs of ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18006D86C
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18006F824 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800498BA (memcpy_0.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x18006F7FC (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

char *__fastcall wil::details::WriteResultString<unsigned short const *>(
        char *a1,
        const unsigned __int16 *a2,
        wil::details *a3,
        _QWORD *a4)
{
  wil::details *v5; // rcx
  unsigned __int64 v8; // rax
  const void *v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  char *v13; // rax
  __int16 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = (wil::details *)&v15;
  v15 = 0;
  if ( a3 )
    v5 = a3;
  v8 = wil::details::ResultStringSize(v5, a2);
  v10 = v8 >> 1;
  v11 = (unsigned __int64)((char *)a2 - a1) >> 1;
  if ( v8 >> 1 < v11 )
    v11 = v8 >> 1;
  v12 = 2 * v11;
  memcpy_0(a1, v9, 2 * v11);
  v13 = 0LL;
  if ( v11 > 1 )
    v13 = a1;
  if ( a4 )
    *a4 = v13;
  if ( v11 < v10 && v11 )
    *(_WORD *)&a1[v12 - 2] = 0;
  return &a1[v12];
}
