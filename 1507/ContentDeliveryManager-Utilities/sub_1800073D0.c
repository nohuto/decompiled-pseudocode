/*
 * XREFs of sub_1800073D0 @ 0x1800073D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     sub_180004F50 @ 0x180004F50 (sub_180004F50.c)
 */

__int64 __fastcall sub_1800073D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // rsi
  __int64 v6; // r8
  signed __int32 v7; // eax
  volatile signed __int32 **v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rcx
  unsigned __int64 v12; // rdx
  bool i; // zf
  signed __int64 v14; // rax
  signed __int64 v15; // rsi
  signed __int32 v16; // eax
  volatile signed __int32 *v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h]
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  *a2 = 0LL;
  v18 = v2;
  v5 = v2;
  if ( v2 >= 0 )
  {
    v19 = a1 - 32;
    v8 = sub_180004F50(&v17, &v19);
    v9 = (__int64)*v8;
    *v8 = 0LL;
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      sub_180004160(v10);
    }
    if ( !v9 )
      return 2147942414LL;
    *(_DWORD *)(v9 + 16) = v5;
    v12 = (v9 >> 1) | 0x8000000000000000uLL;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v12, v5);
    for ( i = v5 == v14; ; i = v14 == v15 )
    {
      v15 = v14;
      if ( i )
      {
        *a2 = v9;
        return 0LL;
      }
      if ( v14 < 0 )
        break;
      *(_DWORD *)(v9 + 16) = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v12, v14);
    }
    *(_QWORD *)v9 = &off_18002C280;
    *(_DWORD *)(v9 + 16) = -1073741823;
    *(_DWORD *)(v9 + 12) = -1073741823;
    operator delete((void *)v9);
    v6 = 2 * v15;
    do
      v16 = *(_DWORD *)(2 * v15 + 0xC);
    while ( v16 != 0x7FFFFFFF && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v16 + 1, v16) );
  }
  else
  {
    v6 = 2 * v2;
    do
      v7 = *(_DWORD *)(v6 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v7 + 1, v7) );
  }
  *a2 = v6;
  return 0LL;
}
