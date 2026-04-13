/*
 * XREFs of sub_1800137FC @ 0x1800137FC
 * Callers:
 *     sub_18000D558 @ 0x18000D558 (sub_18000D558.c)
 *     sub_18000D5E4 @ 0x18000D5E4 (sub_18000D5E4.c)
 *     sub_18001040C @ 0x18001040C (sub_18001040C.c)
 * Callees:
 *     sub_180018C64 @ 0x180018C64 (sub_180018C64.c)
 */

__int64 sub_1800137FC(__int64 a1, const wchar_t *a2, ...)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rsi
  wchar_t *v7; // r14
  size_t v8; // rsi
  int v9; // eax
  bool v10; // zf
  unsigned __int64 v11; // rax
  int Value[18]; // [rsp+20h] [rbp-48h] BYREF
  va_list Args; // [rsp+80h] [rbp+18h] BYREF

  va_start(Args, a2);
  v4 = 32LL;
  while ( 1 )
  {
    v5 = sub_180018C64(a1, v4);
    if ( v5 < 0 )
      break;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(wchar_t **)a1;
    set_errno(0);
    v5 = 0;
    if ( (unsigned __int64)(v6 - 1) > 0x7FFFFFFE )
      v5 = -2147024809;
    if ( v5 < 0 )
    {
      if ( v6 )
        *v7 = 0;
    }
    else
    {
      v8 = v6 - 1;
      v5 = 0;
      v9 = vsnwprintf(v7, v8, a2, Args);
      if ( v9 < 0 || v9 > v8 )
      {
        v7[v8] = 0;
        v5 = -2147024774;
      }
      else if ( v9 == v8 )
      {
        v7[v8] = 0;
      }
    }
    v10 = v5 == -2147024774;
    if ( v5 == -2147024774 )
    {
      get_errno(Value);
      v5 = -2147024809;
      if ( Value[0] != 22 )
        v5 = -2147024774;
      v10 = v5 == -2147024774;
    }
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v4 = v11 + 32;
      if ( v11 + 32 < v11 )
      {
        v4 = -1LL;
        v5 = -2147024362;
      }
      else
      {
        v5 = 0;
      }
      if ( v5 >= 0 )
        continue;
    }
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = -1LL;
      return (unsigned int)v5;
    }
    break;
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return (unsigned int)v5;
}
