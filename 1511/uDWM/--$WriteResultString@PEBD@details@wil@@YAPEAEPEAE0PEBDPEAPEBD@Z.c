/*
 * XREFs of ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180075884
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180077A5C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18004FF5A (memcpy_0.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180077A0C (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(char *a1, __int64 a2, wil::details *a3, _QWORD *a4)
{
  wil::details *v5; // rdx
  unsigned __int64 v8; // rax
  const void *v9; // rdx
  size_t v10; // rbx
  size_t v11; // rsi
  char *v12; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  v5 = (wil::details *)&v14;
  if ( a3 )
    v5 = a3;
  v8 = wil::details::ResultStringSize(v5, (const char *)v5);
  v10 = a2 - (_QWORD)a1;
  v11 = v8;
  if ( v8 < v10 )
    v10 = v8;
  memcpy_0(a1, v9, v10);
  v12 = 0LL;
  if ( v10 > 1 )
    v12 = a1;
  if ( a4 )
    *a4 = v12;
  if ( v10 < v11 && v10 )
    a1[v10 - 1] = 0;
  return &a1[v10];
}
