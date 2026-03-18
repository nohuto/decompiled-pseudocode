/*
 * XREFs of FindNext @ 0x1C02DC17C
 * Callers:
 *     fsc_OverscaleToBold @ 0x1C02DC368 (fsc_OverscaleToBold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindNext(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        _BYTE *a4,
        _BYTE *a5,
        unsigned __int8 a6,
        char **a7,
        _BYTE *a8)
{
  char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  char *v11; // rbx
  char v12; // bp
  char v13; // r15
  char v14; // al
  char v15; // r8
  char *v17; // rcx
  char v18; // r8
  char v19; // r8
  char *v20; // r14
  char v21; // r9
  char v22; // r9
  char v23; // [rsp+28h] [rbp+8h] BYREF

  v23 = 0;
  if ( a3 >= a1 - 1 )
    return 0LL;
  v8 = &v23;
  v9 = a2;
  v10 = (__int64)&a4[a2 - 1];
  v11 = &a5[v9];
  if ( a5 != (_BYTE *)v10 )
    v8 = v11 + 1;
  v12 = 7 - a6;
  v13 = a6 + 1;
  v14 = (unsigned __int8)*v8 >> (7 - a6);
  v15 = (v14 | (*v11 << (a6 + 1))) & 0x80;
  if ( ((unsigned __int8)*v11 & BitON[a6]) != 0 )
  {
    if ( !v15 )
    {
      *a8 = a6;
      *a7 = v11;
      return 1LL;
    }
LABEL_9:
    v17 = &v23;
    if ( a5 != (_BYTE *)v10 )
      v17 = a5 + 1;
    v18 = BitON[(unsigned __int8)(v14 | (*v11 << (a6 + 1))) + 16];
    if ( v18 <= 4 && ((unsigned __int8)((*a5 << v13) | ((unsigned __int8)*v17 >> v12)) & EndMask[v18 + 1]) == 0 )
    {
      v19 = a6 + 1 + v18;
      if ( v19 < 8 )
      {
        *a8 = v19;
LABEL_23:
        *a7 = v11;
        return 1LL;
      }
      *a8 = v19 - 8;
      goto LABEL_26;
    }
    return 0LL;
  }
  if ( v15 )
    goto LABEL_9;
  v20 = &v23;
  if ( a5 == a4 )
  {
    v8 = &v23;
  }
  else
  {
    v20 = a5 - 1;
    v8 = v11 - 1;
  }
  v21 = byte_1C02ED5F8[((unsigned __int8)(*v8 << v13) | ((unsigned __int64)(unsigned __int8)*v11 >> v12)) + 536];
  if ( v21 < 8
    && v21 >= 2
    && (StartMask[v21 + 1] & (unsigned __int8)((*v20 << v13) | (*a5 >> v12))) == StartMask[v21 + 1] )
  {
    v22 = a6 - 7 + v21;
    if ( v22 >= 0 )
    {
      *a8 = v22;
      goto LABEL_23;
    }
    *a8 = v22 + 8;
LABEL_26:
    *a7 = v8;
    return 1LL;
  }
  return 0LL;
}
