/*
 * XREFs of PopMarshalSettingValues @ 0x140456F14
 * Callers:
 *     PopGetSettingValue @ 0x140454584 (PopGetSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x1404B4D24 (PopDispatchNotificationsToList.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PopUnreferencePowerSetting @ 0x14045705C (PopUnreferencePowerSetting.c)
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
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 k; // rbx
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+40h] [rbp-28h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v8 = 0;
  v9 = dword_1402DE28C;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    v11 = &v21 + i;
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
        v17 = v23;
        if ( !v13 )
          v17 = v22;
        v23 = v17;
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
    v16 = -1073741789;
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
    {
      v15 = (_DWORD *)*(&v21 + j);
      if ( v15 )
      {
        *a2 = v15[2];
        a2[1] = v15[1];
        memmove(a2 + 2, v15 + 3, (unsigned int)v15[1]);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
      }
      a2 = (_DWORD *)((char *)a2 + (unsigned int)(a2[1] + 8));
    }
    *a4 = v8;
    v16 = 0;
  }
  for ( k = 0LL; (unsigned int)k < 3; k = (unsigned int)(k + 1) )
  {
    v19 = *(&v21 + k);
    if ( v19 )
      PopUnreferencePowerSetting(v19);
  }
  return v16;
}
