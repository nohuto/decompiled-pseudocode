/*
 * XREFs of ComputePTPCurtainRegions @ 0x1C01CEDDC
 * Callers:
 *     ComputeVirtualHimetricSize @ 0x1C01CF050 (ComputeVirtualHimetricSize.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D160 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D2A8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall ComputePTPCurtainRegions(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // esi
  __m128i *p_si128; // r14
  __int64 i; // rdi
  const WCHAR *v6; // rdx
  int v7; // eax
  __int32 v8; // ecx
  int v9; // r8d
  int v10; // eax
  int v11; // r9d
  int v12; // r10d
  __int32 v13; // r11d
  __int32 v14; // eax
  __int64 v15; // rdx
  __int32 v16; // ecx
  ULONG ResultLength; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v19; // [rsp+40h] [rbp-C8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h] BYREF
  int v24; // [rsp+A8h] [rbp-60h]
  PCWSTR SourceString[3]; // [rsp+B0h] [rbp-58h]
  char KeyValueInformation[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v27; // [rsp+CCh] [rbp-3Ch]
  int v28; // [rsp+D0h] [rbp-38h]
  unsigned int v29; // [rsp+D4h] [rbp-34h]
  char v30; // [rsp+E8h] [rbp-20h] BYREF

  SourceString[0] = L"SpaceBarOffset";
  *(_DWORD *)&v19.Length = 45875200;
  SourceString[1] = L"HorizontalOffset";
  v2 = 1500;
  SourceString[2] = L"HorizontalOffsetIsNeg";
  v24 = 1500;
  v19.Buffer = (PWSTR)&v30;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  ResultLength = 0;
  v3 = 1;
  if ( (int)RtlUnicodeStringCopyString(&v19, (char *)L"\\Registry\\Machine\\") >= 0
    && (int)RtlUnicodeStringCatString(&v19, L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad") >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v19;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      p_si128 = &si128;
      for ( i = 0LL; i != 3; ++i )
      {
        v6 = SourceString[i];
        ResultLength = 0;
        RtlInitUnicodeString(&DestinationString, v6);
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) >= 0
          && v27 == 4
          && v28 == 4 )
        {
          v7 = v29;
          if ( v29 >= 0x7FFFFFFF )
            v7 = 0x7FFFFFFF;
          p_si128->m128i_i32[0] = v7;
        }
        p_si128 = (__m128i *)((char *)p_si128 + 4);
      }
      ZwClose(KeyHandle);
      v2 = v24;
    }
  }
  v8 = a1[51];
  v9 = si128.m128i_i32[1];
  v10 = (a1[53] - v8) / 2;
  v11 = v10;
  if ( si128.m128i_i32[2] && si128.m128i_i32[1] )
    v9 = -si128.m128i_i32[1];
  v12 = a1[52];
  v13 = si128.m128i_i32[0];
  if ( si128.m128i_i32[3] + v12 - si128.m128i_i32[0] > v12 )
    v12 = si128.m128i_i32[3] + a1[52] - si128.m128i_i32[0];
  a1[55] = v12;
  v14 = v10 - v2 - v9 - v13;
  v15 = (unsigned int)v8;
  if ( v14 > v8 )
    v15 = (unsigned int)v14;
  a1[56] = v15;
  v16 = a1[53];
  if ( v13 + v2 + v11 - v9 < v16 )
    v16 = v13 + v2 + v11 - v9;
  a1[57] = v16;
  if ( v12 == a1[52] && (_DWORD)v15 == a1[51] && v16 == a1[53] || v9 > v2 + v13 )
    v3 = 0;
  a1[58] = v3;
  return EtwTraceTouchPadCurtainSize((unsigned int)v12, v15, (unsigned int)v16, v3);
}
