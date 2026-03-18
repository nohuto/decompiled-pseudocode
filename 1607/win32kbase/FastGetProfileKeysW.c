/*
 * XREFs of FastGetProfileKeysW @ 0x1C0054A10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     UserReAllocPoolWithQuota @ 0x1C0054C50 (UserReAllocPoolWithQuota.c)
 *     OpenCacheKeyEx @ 0x1C0055BA0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

unsigned __int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, __int64 a2, void *a3, _QWORD *a4)
{
  _WORD *v5; // r15
  __int64 v6; // rbp
  char *v7; // rbx
  ULONG Length; // r12d
  void *v9; // r13
  _DWORD *v10; // r15
  ULONG v11; // esi
  unsigned int v12; // edi
  NTSTATUS v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  char *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // [rsp+30h] [rbp-278h]
  ULONG ResultLength; // [rsp+34h] [rbp-274h] BYREF
  void *Src; // [rsp+38h] [rbp-270h]
  _QWORD *v24; // [rsp+40h] [rbp-268h]
  _BYTE KeyValueInformation[512]; // [rsp+50h] [rbp-258h] BYREF

  v24 = a4;
  Src = a3;
  v5 = a3;
  v21 = 0;
  v6 = 0LL;
  v7 = 0LL;
  Length = 512;
  v9 = (void *)OpenCacheKeyEx(a1);
  if ( !v9 )
  {
    v12 = 0;
    v11 = 0;
    goto LABEL_12;
  }
  *a4 = 0LL;
  v10 = KeyValueInformation;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = ZwEnumerateValueKey(v9, v11, KeyValueBasicInformation, v10, Length, &ResultLength);
      if ( v13 == -2147483643 )
        break;
      if ( v13 < 0 )
        goto LABEL_11;
      v14 = (v10[2] + v12 + 4099) & 0xFFFFF000;
      if ( v21 < v14 )
      {
        if ( v7 )
        {
          v15 = UserReAllocPoolWithQuota(v7);
          if ( !v15 )
            goto LABEL_11;
          v7 = (char *)v15;
        }
        else
        {
          v7 = (char *)Win32AllocPoolWithQuota();
          if ( !v7 )
            goto LABEL_11;
        }
      }
      v21 = v14;
      memmove(&v7[2 * ((unsigned __int64)v12 >> 1)], v10 + 3, (unsigned int)v10[2]);
      *(_WORD *)&v7[2 * ((unsigned __int64)(v12 + v10[2]) >> 1)] = 0;
      v12 += v10[2] + 2;
LABEL_7:
      ++v11;
    }
    if ( ResultLength <= Length )
      break;
    if ( v6 )
    {
      Win32FreePool();
      v10 = KeyValueInformation;
      Length = 512;
    }
    v20 = Win32AllocPoolWithQuota();
    v6 = v20;
    if ( !v20 )
      goto LABEL_7;
    Length = ResultLength;
    v10 = (_DWORD *)v20;
  }
LABEL_11:
  v5 = Src;
LABEL_12:
  if ( !v11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v5[v17] );
    v18 = (unsigned int)(2 * v17 + 4);
    v19 = (char *)Win32AllocPoolWithQuota();
    v7 = v19;
    if ( v19 )
    {
      memmove(v19, v5, v18 - 2);
      v12 = v18 - 2;
    }
  }
  if ( v9 )
    ZwClose(v9);
  if ( v6 )
    Win32FreePool();
  if ( v7 )
    *(_WORD *)&v7[2 * ((unsigned __int64)v12 >> 1)] = 0;
  *v24 = v7;
  return (unsigned __int64)v12 >> 1;
}
