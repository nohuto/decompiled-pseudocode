/*
 * XREFs of EtwTraceDeniedTokenCreation @ 0x1406A1474
 * Callers:
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     TraceLoggingProviderEnabled @ 0x14010CF00 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14045CB04 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTraceDeniedTokenCreation(__int64 a1, UNICODE_STRING *a2)
{
  UNICODE_STRING *p_DestinationString; // rsi
  unsigned __int16 Length; // r12
  char v6; // r15
  UNICODE_STRING *v7; // rdi
  UNICODE_STRING *v8; // rbx
  wchar_t *Buffer; // r14
  UNICODE_STRING v10; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v12; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v13; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v15; // [rsp+98h] [rbp-70h]
  __int64 v16; // [rsp+A0h] [rbp-68h]
  wchar_t *v17; // [rsp+A8h] [rbp-60h]
  _DWORD v18[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  wchar_t *v21; // [rsp+C8h] [rbp-40h]
  _DWORD v22[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  wchar_t *v25; // [rsp+E8h] [rbp-20h]
  _DWORD v26[2]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  wchar_t *v29; // [rsp+108h] [rbp+0h]
  _DWORD v30[2]; // [rsp+110h] [rbp+8h] BYREF

  *(_QWORD *)&v10.MaximumLength = 0LL;
  v10.Length = 0;
  *(_DWORD *)((char *)&v10.Buffer + 2) = 0;
  HIWORD(v10.Buffer) = 0;
  if ( TraceLoggingProviderEnabled(&stru_1402F3640, (UCHAR)a2, 0x200000000001uLL) )
  {
    p_DestinationString = *(UNICODE_STRING **)(a1 + 1128);
    if ( !p_DestinationString->Length )
    {
      RtlInitUnicodeString(&DestinationString, L"Unknown");
      p_DestinationString = &DestinationString;
    }
    EtwpQueryProcessCommandLine(a1, (__int64)&v10);
    Length = v10.Length;
    v6 = 1;
    if ( !v10.Length )
    {
      v6 = 0;
      RtlInitUnicodeString(&v10, L"Unknown");
      Length = v10.Length;
    }
    if ( !a2 || (v7 = a2 + 6, !a2[6].Length) )
    {
      RtlInitUnicodeString(&v12, L"Unknown");
      v7 = &v12;
    }
    if ( !a2 || (v8 = a2 + 7, !v8->Length) )
    {
      RtlInitUnicodeString(&v13, L"Unknown");
      v8 = &v13;
    }
    Buffer = v10.Buffer;
    if ( stru_1402F3640.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3640, 0x200000000001uLL) )
    {
      v16 = 2LL;
      v15 = v18;
      v17 = p_DestinationString->Buffer;
      v18[0] = p_DestinationString->Length;
      v19 = v22;
      v22[0] = Length;
      v23 = v26;
      v25 = v7->Buffer;
      v26[0] = v7->Length;
      v27 = v30;
      v29 = v8->Buffer;
      v30[0] = v8->Length;
      v18[1] = 0;
      v20 = 2LL;
      v21 = Buffer;
      v22[1] = 0;
      v24 = 2LL;
      v26[1] = 0;
      v28 = 2LL;
      v30[1] = 0;
      TlgWrite(&stru_1402F3640, &unk_14027E691, 0LL, 0LL, 0xAu, &pData);
    }
    if ( v6 )
      ExFreePoolWithTag(Buffer, 0);
  }
}
