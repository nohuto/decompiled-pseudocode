/*
 * XREFs of NtLockProductActivationKeys @ 0x140567ED8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscat_s @ 0x1401535B8 (wcscat_s.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     wcsncat_s @ 0x1401536D8 (wcsncat_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ZwLockRegistryKey @ 0x14015C1F0 (ZwLockRegistryKey.c)
 *     IsRegistryKeyLocked @ 0x14056826C (IsRegistryKeyLocked.c)
 */

NTSTATUS __stdcall NtLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  __int16 v3; // r8
  unsigned __int64 i; // rdx
  __int64 j; // r8
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // edi
  int v9; // esi
  unsigned __int64 v10; // r11
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  ULONG v13; // esi
  NTSTATUS k; // eax
  NTSTATUS v15; // edi
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  bool v18; // sf
  __int64 v19; // rcx
  _BYTE v20[8]; // [rsp+30h] [rbp-908h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-900h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-8F8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-8E8h] BYREF
  UNICODE_STRING v25; // [rsp+60h] [rbp-8D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-8C8h] BYREF
  OBJECT_ATTRIBUTES v27; // [rsp+A0h] [rbp-898h] BYREF
  WCHAR SourceString[8]; // [rsp+D0h] [rbp-868h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-858h]
  __int128 v30; // [rsp+F0h] [rbp-848h]
  __int64 v31; // [rsp+100h] [rbp-838h]
  int v32; // [rsp+108h] [rbp-830h]
  _BYTE KeyInformation[12]; // [rsp+110h] [rbp-828h] BYREF
  unsigned int v34; // [rsp+11Ch] [rbp-81Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-818h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-428h] BYREF

  KeyHandle = 0LL;
  *(_OWORD *)SourceString = xmmword_140279858;
  v29 = xmmword_140279868;
  v30 = xmmword_140279878;
  v31 = 0x2C7EFB57828734DALL;
  v32 = 593434642;
  v3 = -21647;
  for ( i = 0LL; i < 0x1E; ++i )
    v3 = SourceString[i] ^ (SourceString[i] + v3);
  if ( v3 != -18097 )
    return -1073741823;
  for ( j = 52LL; j >= 0; --j )
  {
    v6 = *(_DWORD *)((char *)SourceString + j);
    v7 = *(_DWORD *)((char *)&SourceString[2] + j);
    v8 = -957401312;
    v9 = 32;
    v10 = 3337565984LL;
    do
    {
      v7 -= (v8 + abWPAStringKey[(v10 >> 11) & 3]) ^ (v6 + ((16 * v6) ^ (v6 >> 5)));
      v8 += 1640531527;
      v10 = v8;
      v6 -= (v8 + abWPAStringKey[v8 & 3]) ^ (v7 + ((16 * v7) ^ (v7 >> 5)));
      --v9;
    }
    while ( v9 );
    *(_DWORD *)((char *)SourceString + j) = v6;
    *(_DWORD *)((char *)&SourceString[2] + j) = v7;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( pSafeMode )
    {
      v19 = (__int64)pSafeMode;
      if ( (unsigned __int64)pSafeMode >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v19 = *(_DWORD *)v19;
      *pSafeMode = InitSafeBootMode;
    }
  }
  else if ( pSafeMode )
  {
    *pSafeMode = InitSafeBootMode;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = result;
  if ( result >= 0 )
  {
    v13 = 0;
    for ( k = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength);
          ;
          k = ZwEnumerateKey(KeyHandle, v13, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength) )
    {
      v15 = k;
      if ( k == -2147483622 )
        break;
      if ( k < 0 )
      {
        v12 = k;
        break;
      }
      if ( v34 + 64 > 0x400 )
      {
        v12 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v34 >> 1);
        wcscat_s(Dst, 0x200uLL, L"\\");
        RtlInitUnicodeString(&v25, Dst);
        v27.Length = 48;
        v27.RootDirectory = 0LL;
        v27.Attributes = 576;
        v27.ObjectName = &v25;
        *(_OWORD *)&v27.SecurityDescriptor = 0LL;
        v16 = ZwOpenKey(&Handle, 0x20019u, &v27);
        if ( v16 < 0 )
        {
          v12 = v16;
        }
        else
        {
          v17 = IsRegistryKeyLocked(Handle, v20);
          v18 = v17 < 0;
          if ( v17 >= 0 )
          {
            if ( !v20[0] )
              v17 = ZwLockRegistryKey(Handle);
            v18 = v17 < 0;
          }
          if ( v18 )
            v12 = v17;
          ZwClose(Handle);
        }
        ++v13;
      }
    }
    ZwClose(KeyHandle);
    if ( v15 == -2147483622 )
      return 0;
    return v12;
  }
  return result;
}
