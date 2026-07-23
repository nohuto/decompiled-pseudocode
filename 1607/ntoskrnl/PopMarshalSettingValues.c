/*
 * XREFs of PopMarshalSettingValues @ 0x140501590
 * Callers:
 *     PopGetSettingValue @ 0x140501400 (PopGetSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x14052B6C0 (PopDispatchNotificationsToList.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PopUnreferencePowerSetting @ 0x1403F4B18 (PopUnreferencePowerSetting.c)
 */

__int64 __fastcall PopMarshalSettingValues(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 i; // rdx
  __int64 *v11; // r8
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 j; // rbx
  _DWORD *v15; // rdx
  unsigned int v16; // r14d
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 k; // rbx
  _DWORD *v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = 0;
  v9 = dword_140303D4C;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    v11 = &v22 + i;
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      *v11 = *(_QWORD *)(a1 + 8 * v9 + 64);
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 8 * i + 64);
      *v11 = v13;
      if ( (_DWORD)i == 2 )
      {
        v18 = v24;
        if ( !v13 )
          v18 = v23;
        v24 = v18;
      }
    }
    v8 += 8;
    v12 = (_DWORD *)*v11;
    if ( *v11 )
    {
      ++*v12;
      v8 += v12[1];
    }
  }
  if ( a3 < v8 )
  {
    v17 = -1073741789;
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
    {
      v15 = (_DWORD *)*(&v22 + j);
      if ( v15 )
      {
        *a2 = v15[2];
        a2[1] = v15[1];
        v16 = v15[1];
        memmove(a2 + 2, v15 + 3, v16);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        v16 = 0;
      }
      a2 = (_DWORD *)((char *)a2 + v16 + 8);
    }
    *a4 = v8;
    v17 = 0;
  }
  for ( k = 0LL; (unsigned int)k < 3; k = (unsigned int)(k + 1) )
  {
    v20 = (_DWORD *)*(&v22 + k);
    if ( v20 )
      PopUnreferencePowerSetting(v20);
  }
  return v17;
}
