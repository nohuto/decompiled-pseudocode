/*
 * XREFs of NtLockProductActivationKeys @ 0x1405343A4
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcscat_s @ 0x140149C68 (wcscat_s.c)
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     wcsncat_s @ 0x140149D88 (wcsncat_s.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140150C60 (ZwEnumerateKey.c)
 *     ZwLockRegistryKey @ 0x1401525E0 (ZwLockRegistryKey.c)
 *     IsRegistryKeyLocked @ 0x1405347A8 (IsRegistryKeyLocked.c)
 */

NTSTATUS __stdcall NtLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  __int16 v4; // r8
  unsigned __int64 i; // rdx
  __int64 j; // r8
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // esi
  int v10; // r14d
  unsigned __int64 v11; // r11
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  ULONG v14; // esi
  NTSTATUS k; // eax
  NTSTATUS v16; // edi
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  bool v19; // sf
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  _BYTE v22[8]; // [rsp+30h] [rbp-918h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-910h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-908h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-900h] BYREF
  UNICODE_STRING v26; // [rsp+50h] [rbp-8F8h] BYREF
  OBJECT_ATTRIBUTES v27; // [rsp+60h] [rbp-8E8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-8B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-888h] BYREF
  WCHAR SourceString[8]; // [rsp+D0h] [rbp-878h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-868h]
  __int128 v32; // [rsp+F0h] [rbp-858h]
  __int64 v33; // [rsp+100h] [rbp-848h]
  int v34; // [rsp+108h] [rbp-840h]
  _BYTE KeyInformation[12]; // [rsp+110h] [rbp-838h] BYREF
  unsigned int v36; // [rsp+11Ch] [rbp-82Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-828h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-438h] BYREF

  KeyHandle = 0LL;
  *(_OWORD *)SourceString = xmmword_14024FEC0;
  v31 = xmmword_14024FED0;
  v32 = xmmword_14024FEE0;
  v33 = 0x2C7EFB57828734DALL;
  v34 = 593434642;
  v4 = -21647;
  for ( i = 0LL; i < 0x1E; ++i )
    v4 = SourceString[i] ^ (SourceString[i] + v4);
  if ( v4 != -18097 )
    return -1073741823;
  for ( j = 52LL; j >= 0; --j )
  {
    v7 = *(_DWORD *)((char *)SourceString + j);
    v8 = *(_DWORD *)((char *)&SourceString[2] + j);
    v9 = -957401312;
    v10 = 32;
    v11 = 3337565984LL;
    do
    {
      v8 -= (v9 + abWPAStringKey[(v11 >> 11) & 3]) ^ (v7 + ((16 * v7) ^ (v7 >> 5)));
      v9 += 1640531527;
      v11 = v9;
      v7 -= (v9 + abWPAStringKey[v9 & 3]) ^ (v8 + ((16 * v8) ^ (v8 >> 5)));
      --v10;
    }
    while ( v10 );
    *(_DWORD *)((char *)SourceString + j) = v7;
    *(_DWORD *)((char *)&SourceString[2] + j) = v8;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( pPrivateVer )
    {
      v20 = pPrivateVer;
      if ( (unsigned __int64)pPrivateVer >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = *v20;
      *pPrivateVer = *pPrivateVer >= 0x2D44 ? 0x2F5E : 0;
    }
    if ( pSafeMode )
    {
      v21 = pSafeMode;
      if ( (unsigned __int64)pSafeMode >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = *v21;
      *pSafeMode = InitSafeBootMode;
    }
  }
  else
  {
    if ( pPrivateVer )
      *pPrivateVer = *pPrivateVer >= 0x2D44 ? 0x2F5E : 0;
    if ( pSafeMode )
      *pSafeMode = InitSafeBootMode;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v13 = result;
  if ( result >= 0 )
  {
    v14 = 0;
    for ( k = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength);
          ;
          k = ZwEnumerateKey(KeyHandle, v14, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength) )
    {
      v16 = k;
      if ( k == -2147483622 )
        break;
      if ( k < 0 )
      {
        v13 = k;
        break;
      }
      if ( v36 + 64 > 0x400 )
      {
        v13 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v36 >> 1);
        wcscat_s(Dst, 0x200uLL, L"\\");
        RtlInitUnicodeString(&v26, Dst);
        v27.Length = 48;
        v27.RootDirectory = 0LL;
        v27.Attributes = 576;
        v27.ObjectName = &v26;
        *(_OWORD *)&v27.SecurityDescriptor = 0LL;
        v17 = ZwOpenKey(&Handle, 0x20019u, &v27);
        if ( v17 < 0 )
        {
          v13 = v17;
        }
        else
        {
          v18 = IsRegistryKeyLocked(Handle, v22);
          v19 = v18 < 0;
          if ( v18 >= 0 )
          {
            if ( !v22[0] )
              v18 = ZwLockRegistryKey(Handle);
            v19 = v18 < 0;
          }
          if ( v19 )
            v13 = v18;
          ZwClose(Handle);
        }
        ++v14;
      }
    }
    ZwClose(KeyHandle);
    if ( v16 == -2147483622 )
      return 0;
    return v13;
  }
  return result;
}
