/*
 * XREFs of ComputePTPCurtainRegions @ 0x1C01D09CC
 * Callers:
 *     ComputeVirtualHimetricSize @ 0x1C01D0CB0 (ComputeVirtualHimetricSize.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0125D94 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0125EDC (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputePTPCurtainRegions(__int64 a1)
{
  int v1; // r14d
  int v3; // esi
  int v4; // edi
  char v5; // al
  __int32 v6; // r9d
  int v7; // r8d
  __m128i *p_si128; // r14
  __int64 i; // rsi
  const WCHAR *v10; // rdx
  __int32 v11; // ecx
  int v12; // r11d
  int v13; // edx
  __int32 v14; // r10d
  __int32 v15; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v19; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h] BYREF
  int v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A4h] [rbp-5Ch]
  PCWSTR SourceString[4]; // [rsp+A8h] [rbp-58h]
  char KeyValueInformation[4]; // [rsp+C8h] [rbp-38h] BYREF
  int v27; // [rsp+CCh] [rbp-34h]
  int v28; // [rsp+D0h] [rbp-30h]
  __int32 v29; // [rsp+D4h] [rbp-2Ch]
  char v30; // [rsp+E0h] [rbp-20h] BYREF

  SourceString[0] = L"SpaceBarOffset";
  v1 = 1500;
  v23 = 1500;
  SourceString[1] = L"HorizontalOffset";
  v24 = 1500;
  SourceString[2] = L"HorizontalOffsetIsNeg";
  v3 = 1500;
  v4 = 1;
  SourceString[3] = L"AAPDisabled";
  v5 = *(_BYTE *)(a1 + 232);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (v5 & 4) != 0 )
    goto LABEL_32;
  if ( (v5 & 1) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 240);
    v7 = *(_DWORD *)(a1 + 236);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x20) != 0 )
    goto LABEL_32;
  ResultLength = 0;
  v19.Buffer = (PWSTR)&v30;
  *(_DWORD *)&v19.Length = 45875200;
  if ( (int)RtlUnicodeStringCopyString(&v19, (char *)L"\\Registry\\Machine\\") < 0 )
    goto LABEL_16;
  if ( (int)RtlUnicodeStringCatString(&v19, L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad") < 0 )
    goto LABEL_16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v19;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_16;
  p_si128 = &si128;
  for ( i = 0LL; i != 4; ++i )
  {
    v10 = SourceString[i];
    ResultLength = 0;
    RtlInitUnicodeString(&DestinationString, v10);
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
      p_si128->m128i_i32[0] = v29;
    }
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  ZwClose(KeyHandle);
  if ( si128.m128i_i32[3] )
  {
LABEL_32:
    *(_DWORD *)(a1 + 252) |= 1u;
    return EtwTraceTouchPadCurtainSize(
             *(unsigned int *)(a1 + 220),
             *(unsigned int *)(a1 + 224),
             *(unsigned int *)(a1 + 228),
             (unsigned int)-__CFSHR__(*(_DWORD *)(a1 + 252), 2));
  }
  v3 = v24;
  v1 = v23;
LABEL_16:
  v6 = si128.m128i_i32[0];
  v7 = si128.m128i_i32[1];
LABEL_17:
  v11 = *(_DWORD *)(a1 + 204);
  v12 = (*(_DWORD *)(a1 + 212) - v11) / 2;
  if ( si128.m128i_i32[2] && v7 )
    v7 = -v7;
  v13 = *(_DWORD *)(a1 + 208);
  v14 = *(_DWORD *)(a1 + 204);
  if ( v1 + v13 - v6 > v13 )
    v13 = v1 + *(_DWORD *)(a1 + 208) - v6;
  *(_DWORD *)(a1 + 220) = v13;
  if ( v12 - v3 - v7 - v6 > v11 )
    v14 = v12 - v3 - v7 - v6;
  *(_DWORD *)(a1 + 224) = v14;
  v15 = *(_DWORD *)(a1 + 212);
  if ( v6 + v3 + v12 - v7 < v15 )
    v15 = v6 + v3 + v12 - v7;
  *(_DWORD *)(a1 + 228) = v15;
  if ( v13 == *(_DWORD *)(a1 + 208) && v14 == *(_DWORD *)(a1 + 204) && v15 == *(_DWORD *)(a1 + 212) || v7 > v3 + v6 )
    v4 = 0;
  *(_DWORD *)(a1 + 252) ^= (*(_DWORD *)(a1 + 252) ^ (2 * v4)) & 2;
  return EtwTraceTouchPadCurtainSize(
           *(unsigned int *)(a1 + 220),
           *(unsigned int *)(a1 + 224),
           *(unsigned int *)(a1 + 228),
           (unsigned int)-__CFSHR__(*(_DWORD *)(a1 + 252), 2));
}
