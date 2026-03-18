/*
 * XREFs of ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C026530C
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 * Callees:
 *     LongLongToLong @ 0x1C01C20A0 (LongLongToLong.c)
 */

__int64 __fastcall ERECTL::bOffsetSubtract(ERECTL *this, struct _POINTL *a2)
{
  int v2; // ebx
  __int64 x; // rbp
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // r9
  int v10; // esi
  _DWORD *v11; // r9
  _DWORD *v12; // r10
  int v13; // r11d
  __int64 result; // rax
  LONG plResult; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_DWORD *)this;
  x = a2->x;
  if ( LongLongToLong(*(int *)this - x, &plResult) < 0 )
    return 0LL;
  if ( LongLongToLong(*(int *)(v4 + 8) - x, &plResult) < 0 )
    return 0LL;
  v7 = *(_DWORD *)(v5 + 4);
  v8 = *(int *)(v6 + 4);
  if ( LongLongToLong(v7 - v8, &plResult) < 0 )
    return 0LL;
  v10 = *(_DWORD *)(v9 + 12);
  if ( LongLongToLong(v10 - v8, &plResult) < 0 )
    return 0LL;
  result = 1LL;
  *v11 = v2 - x;
  v11[2] = v13 - *v12;
  v11[1] = v7 - v12[1];
  v11[3] = v10 - v12[1];
  return result;
}
