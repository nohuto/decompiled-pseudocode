/*
 * XREFs of FastGetProfileKeysW @ 0x1C007E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000F670 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C0032120 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, __int64 a2, char *a3, __int64 *a4)
{
  __int64 v6; // rdi
  void *v7; // r14
  ULONG v8; // ebx
  ULONG v9; // r12d
  NTSTATUS v10; // eax
  ULONG v11; // ebp
  const void *v12; // r15
  ULONG v13; // ebx
  void *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-268h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-260h]
  char KeyValueInformation[8]; // [rsp+40h] [rbp-258h] BYREF
  unsigned int Size; // [rsp+48h] [rbp-250h]
  size_t Size_4; // [rsp+4Ch] [rbp-24Ch] BYREF

  v19 = a4;
  v6 = 0LL;
  v7 = OpenCacheKeyEx(a1, a2, 0x20019u, 0LL);
  if ( !v7
    || (*a4 = 0LL,
        v8 = 0,
        v9 = 0,
        v10 = ZwEnumerateValueKey(v7, 0, KeyValueBasicInformation, KeyValueInformation, 0x200u, &ResultLength),
        v10 == -2147483622) )
  {
LABEL_20:
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)&a3[2 * v16] );
    v13 = v16 + 1;
    v17 = (char *)Win32AllocPoolWithQuota();
    v6 = (__int64)v17;
    if ( !v17 || (int)RtlStringCchCopyW(v17, v13, a3) < 0 )
      v13 = 0;
  }
  else
  {
    v11 = ResultLength;
    do
    {
      if ( v10 < 0 )
      {
        if ( v6 )
          Win32FreePool();
        goto LABEL_20;
      }
      ResultLength = v8;
      v8 += Size + 2;
      if ( v6 )
      {
        v12 = (const void *)v6;
        if ( v11 < ((v8 + 4097) & 0xFFFFF000) )
        {
          v15 = (void *)Win32AllocPoolWithQuota();
          v6 = (__int64)v15;
          if ( v15 )
            memmove(v15, v12, v11);
          Win32FreePool();
          v11 = (v8 + 4097) & 0xFFFFF000;
        }
      }
      else
      {
        v11 = (v8 + 4097) & 0xFFFFF000;
        v6 = Win32AllocPoolWithQuota();
      }
      if ( !v6 )
        goto LABEL_20;
      memmove((void *)(v6 + 2 * ((unsigned __int64)ResultLength >> 1)), &Size_4, Size);
      ++v9;
      *(_WORD *)(v6 + 2 * ((unsigned __int64)(ResultLength + Size) >> 1)) = 0;
      v10 = ZwEnumerateValueKey(v7, v9, KeyValueBasicInformation, KeyValueInformation, 0x200u, &ResultLength);
    }
    while ( v10 != -2147483622 );
    if ( !v9 )
      goto LABEL_20;
    v13 = v8 >> 1;
  }
  if ( v7 )
    ZwClose(v7);
  if ( v6 )
    *(_WORD *)(v6 + 2LL * v13) = 0;
  *v19 = v6;
  return v13;
}
