/*
 * XREFs of RIMComputePTPCurtainRegions @ 0x1C00CD9AC
 * Callers:
 *     RIMComputeVirtualHimetricSize @ 0x1C00CE0EC (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     EtwTraceTouchPadCurtainSize @ 0x1C00A8040 (EtwTraceTouchPadCurtainSize.c)
 *     RtlUnicodeStringCatString @ 0x1C00CE920 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00CE98C (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C00CEA14 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall RIMComputePTPCurtainRegions(_DWORD *a1)
{
  _DWORD *v1; // rbx
  int v2; // edi
  int v3; // esi
  int v4; // r15d
  NTSTATUS v5; // r12d
  NTSTATUS v6; // eax
  const wchar_t *v7; // rdx
  __m128i *p_si128; // r14
  __int64 i; // rdi
  const WCHAR *v10; // rdx
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  int v15; // r9d
  int v16; // r10d
  __int32 v17; // r11d
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  ULONG Lengtha[2]; // [rsp+28h] [rbp-E0h]
  ULONG ResultLength; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengtha; // [rsp+30h] [rbp-D8h]
  ULONG v26; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcchNewDestLength; // [rsp+50h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t *ppszDest; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD *v31; // [rsp+68h] [rbp-A0h]
  size_t pcchDest; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-50h] BYREF
  int v36; // [rsp+C8h] [rbp-40h]
  PCWSTR SourceString[3]; // [rsp+D0h] [rbp-38h]
  _BYTE KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v39; // [rsp+ECh] [rbp-1Ch]
  int v40; // [rsp+F0h] [rbp-18h]
  unsigned int v41; // [rsp+F4h] [rbp-14h]
  char v42; // [rsp+108h] [rbp+0h] BYREF

  SourceString[0] = L"SpaceBarOffset";
  v31 = a1;
  SourceString[1] = L"HorizontalOffset";
  *(_DWORD *)&DestinationString.Length = 45875200;
  SourceString[2] = L"HorizontalOffsetIsNeg";
  v1 = a1;
  v2 = 1500;
  DestinationString.Buffer = (PWSTR)&v42;
  v3 = 1;
  v36 = 1500;
  v26 = 0;
  v4 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = 0;
  if ( RtlUnicodeStringValidateDestWorker(
         &DestinationString,
         &ppszDest,
         &pcchDest,
         0LL,
         *(const size_t *)Length,
         ResultLength) >= 0 )
  {
    pcchNewDestLength = 0LL;
    v6 = RtlWideCharArrayCopyStringWorker(
           ppszDest,
           pcchDest,
           &pcchNewDestLength,
           L"\\Registry\\Machine\\",
           *(size_t *)Lengtha);
    DestinationString.Length = 2 * pcchNewDestLength;
    if ( v6 >= 0 && RtlUnicodeStringCatString(&DestinationString, v7) >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        p_si128 = &si128;
        for ( i = 0LL; i != 3; ++i )
        {
          v10 = SourceString[i];
          v26 = 0;
          RtlInitUnicodeString(&ValueName, v10);
          v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v26);
          if ( v11 >= 0 && v39 == 4 && v40 == 4 )
          {
            v12 = v41;
            if ( v41 >= 0x7FFFFFFF )
              v12 = 0x7FFFFFFF;
            p_si128->m128i_i32[0] = v12;
          }
          else
          {
            v4 = 0;
            v5 = v11;
          }
          p_si128 = (__m128i *)((char *)p_si128 + 4);
        }
        ZwClose(KeyHandle);
        v1 = v31;
        if ( !v4 )
        {
          LODWORD(ResultLengtha) = v5;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x10u,
            (__int64)&WPP_c671d3244828ed8229bc566b772a601b_Traceguids,
            ResultLengtha);
        }
        v2 = v36;
      }
    }
  }
  v13 = si128.m128i_i32[1];
  v14 = (v1[53] - v1[51]) / 2;
  v15 = v14;
  if ( si128.m128i_i32[2] && si128.m128i_i32[1] )
    v13 = -si128.m128i_i32[1];
  v16 = v1[52];
  v17 = si128.m128i_i32[0];
  if ( si128.m128i_i32[3] + v16 - si128.m128i_i32[0] > v16 )
    v16 = si128.m128i_i32[3] + v1[52] - si128.m128i_i32[0];
  v1[55] = v16;
  v18 = v1[51];
  v19 = v14 - v2 - v13 - v17;
  if ( v19 > v18 )
    v18 = v19;
  v1[56] = v18;
  v20 = v1[53];
  if ( v17 + v2 + v15 - v13 < v20 )
    v20 = v17 + v2 + v15 - v13;
  v1[57] = v20;
  if ( v16 == v1[52] && v18 == v1[51] && v20 == v1[53] || v13 > v2 + v17 )
    v3 = 0;
  v1[58] = v3;
  return EtwTraceTouchPadCurtainSize(v16, v18, v20, v3);
}
