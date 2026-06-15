/*
 * XREFs of ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180003A88
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001BF0 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180002D18 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001300 (memcpy_s.c)
 */

char *__fastcall wil::details::WriteResultString<unsigned short const *>(
        char *Destination,
        __int64 a2,
        __int16 *a3,
        _QWORD *a4)
{
  __int16 *v5; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  char *v13; // rax
  __int16 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v5 = &v15;
  if ( a3 )
    v5 = a3;
  if ( v5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v5[v8] );
    v7 = 2 * v8 + 2;
  }
  else
  {
    v7 = 2LL;
  }
  v9 = v7 >> 1;
  v10 = (unsigned __int64)(a2 - (_QWORD)Destination) >> 1;
  v11 = v10;
  if ( v9 < v10 )
    v11 = v9;
  v12 = 2 * v11;
  memcpy_s(Destination, 2 * v10, v5, 2 * v11);
  if ( a4 )
  {
    v13 = 0LL;
    if ( v11 > 1 )
      v13 = Destination;
    *a4 = v13;
  }
  if ( v11 < v9 && v11 )
    *(_WORD *)&Destination[v12 - 2] = 0;
  return &Destination[v12];
}
