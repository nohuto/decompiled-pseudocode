/*
 * XREFs of sub_1400114A8 @ 0x1400114A8
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 *     sub_1400121A8 @ 0x1400121A8 (sub_1400121A8.c)
 * Callees:
 *     memset @ 0x14000C48C (memset.c)
 *     sub_140011678 @ 0x140011678 (sub_140011678.c)
 *     sub_140011738 @ 0x140011738 (sub_140011738.c)
 */

__int64 sub_1400114A8(_WORD *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, int a5, _WORD *a6, ...)
{
  unsigned __int64 v7; // rdi
  int v10; // ebx
  _WORD *v11; // r13
  _WORD *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  _WORD *v17; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v7 = a2 >> 1;
  v10 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *a1 = 0;
  }
  else
  {
    v17 = a1;
    v11 = a1;
    v18[0] = a2 >> 1;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &unk_14001B0E8;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v10 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
      if ( v7 )
        *a1 = 0;
    }
    else if ( v7 )
    {
      v18[0] = 0LL;
      v13 = sub_140011738((_DWORD)a1, v7, (unsigned int)v18, (_DWORD)v12, (__int64)va);
      v14 = v18[0];
      v10 = v13;
      v7 -= v18[0];
      v18[0] = v7;
      v11 = &a1[v14];
      v17 = v11;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 )
        {
          v15 = (a2 & 1) + 2 * v7;
          if ( v15 > 2 )
            memset(v11 + 1, (unsigned __int8)a5, v15 - 2);
        }
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = (a2 & 1) + 2 * v7;
        return (unsigned int)v10;
      }
      v10 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_140011678(a1, a2, a3, &v17, v18, a5);
      v11 = v17;
      v7 = v18[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_22;
  }
  return (unsigned int)v10;
}
