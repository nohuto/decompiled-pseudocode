/*
 * XREFs of RIMComputePTPCurtainRegions @ 0x1C00D3538
 * Callers:
 *     RIMComputeVirtualHimetricSize @ 0x1C0005C6C (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     EtwTraceTouchPadCurtainSize @ 0x1C00B5D10 (EtwTraceTouchPadCurtainSize.c)
 *     RtlUnicodeStringCatString @ 0x1C00D41D4 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopyString @ 0x1C00D4240 (RtlUnicodeStringCopyString.c)
 */

__int64 __fastcall RIMComputePTPCurtainRegions(__int64 a1, const wchar_t *a2)
{
  int v2; // r14d
  int v4; // esi
  int v5; // edi
  char v6; // al
  __int32 v7; // r9d
  int v8; // r8d
  int v9; // r15d
  NTSTATUS v10; // r12d
  const wchar_t *v11; // rdx
  __m128i *p_si128; // r14
  __int64 i; // rsi
  const WCHAR *v14; // rdx
  NTSTATUS v15; // eax
  __int32 v16; // ecx
  int v17; // r11d
  int v18; // edx
  __int32 v19; // r10d
  __int32 v20; // ecx
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  ULONG v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h] BYREF
  int v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+ACh] [rbp-5Ch]
  PCWSTR SourceString[6]; // [rsp+B0h] [rbp-58h]
  char KeyValueInformation[4]; // [rsp+E0h] [rbp-28h] BYREF
  int v33; // [rsp+E4h] [rbp-24h]
  int v34; // [rsp+E8h] [rbp-20h]
  __int32 v35; // [rsp+ECh] [rbp-1Ch]
  char v36; // [rsp+F8h] [rbp-10h] BYREF

  SourceString[0] = L"SpaceBarOffset";
  v2 = 1500;
  v29 = 1500;
  SourceString[1] = L"HorizontalOffset";
  v30 = 1500;
  SourceString[2] = L"HorizontalOffsetIsNeg";
  v4 = 1500;
  v5 = 1;
  SourceString[3] = L"AAPDisabled";
  SourceString[4] = L"AAPNonCurtainTop";
  SourceString[5] = L"AAPNonCurtainBaseWidth";
  v6 = *(_BYTE *)(a1 + 232);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (v6 & 4) != 0 )
    goto LABEL_35;
  if ( (v6 & 1) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 240);
    v8 = *(_DWORD *)(a1 + 236);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x20) != 0 )
    goto LABEL_35;
  v23[0] = 0;
  DestinationString.Buffer = (PWSTR)&v36;
  v9 = 1;
  *(_DWORD *)&DestinationString.Length = 45875200;
  v10 = 0;
  if ( RtlUnicodeStringCopyString(&DestinationString, a2) < 0 )
    goto LABEL_19;
  if ( RtlUnicodeStringCatString(&DestinationString, v11) < 0 )
    goto LABEL_19;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_19;
  p_si128 = &si128;
  for ( i = 0LL; i != 6; ++i )
  {
    v14 = SourceString[i];
    v23[0] = 0;
    RtlInitUnicodeString(&ValueName, v14);
    v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, v23);
    if ( v15 >= 0 && v33 == 4 && v34 == 4 )
    {
      p_si128->m128i_i32[0] = v35;
    }
    else
    {
      v9 = 0;
      v10 = v15;
    }
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  ZwClose(KeyHandle);
  if ( !v9 )
  {
    LODWORD(ResultLength) = v10;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x10u,
      (__int64)&WPP_c96a4b6ea92639e1a4a8c71189e6796b_Traceguids,
      ResultLength);
  }
  if ( si128.m128i_i32[3] )
  {
LABEL_35:
    *(_DWORD *)(a1 + 252) |= 1u;
    return EtwTraceTouchPadCurtainSize(
             *(_DWORD *)(a1 + 220),
             *(_DWORD *)(a1 + 224),
             *(_DWORD *)(a1 + 228),
             -__CFSHR__(*(_DWORD *)(a1 + 252), 2));
  }
  v4 = v30;
  v2 = v29;
LABEL_19:
  v7 = si128.m128i_i32[0];
  v8 = si128.m128i_i32[1];
LABEL_20:
  v16 = *(_DWORD *)(a1 + 204);
  v17 = (*(_DWORD *)(a1 + 212) - v16) / 2;
  if ( si128.m128i_i32[2] && v8 )
    v8 = -v8;
  v18 = *(_DWORD *)(a1 + 208);
  v19 = *(_DWORD *)(a1 + 204);
  if ( v2 + v18 - v7 > v18 )
    v18 = v2 + *(_DWORD *)(a1 + 208) - v7;
  *(_DWORD *)(a1 + 220) = v18;
  if ( v17 - v4 - v8 - v7 > v16 )
    v19 = v17 - v4 - v8 - v7;
  *(_DWORD *)(a1 + 224) = v19;
  v20 = *(_DWORD *)(a1 + 212);
  if ( v7 + v4 + v17 - v8 < v20 )
    v20 = v7 + v4 + v17 - v8;
  *(_DWORD *)(a1 + 228) = v20;
  if ( v18 == *(_DWORD *)(a1 + 208) && v19 == *(_DWORD *)(a1 + 204) && v20 == *(_DWORD *)(a1 + 212) || v8 > v4 + v7 )
    v5 = 0;
  *(_DWORD *)(a1 + 252) ^= (*(_DWORD *)(a1 + 252) ^ (2 * v5)) & 2;
  return EtwTraceTouchPadCurtainSize(
           *(_DWORD *)(a1 + 220),
           *(_DWORD *)(a1 + 224),
           *(_DWORD *)(a1 + 228),
           -__CFSHR__(*(_DWORD *)(a1 + 252), 2));
}
