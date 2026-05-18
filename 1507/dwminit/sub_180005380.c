/*
 * XREFs of sub_180005380 @ 0x180005380
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180005380(__int64 a1, const WCHAR *a2, __int64 a3)
{
  UINT v4; // ebx
  __int64 v6; // rcx
  _WORD *v7; // rdx
  __int16 v8; // ax
  _DWORD *v9; // rax
  struct _PORT_VIEW *v10; // r9
  NTSTATUS v11; // eax
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[192]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( a3 )
  {
    ConnectionInformationLength = 188;
    v6 = 94LL;
    v7 = v16;
    do
    {
      if ( v6 == -2147483552 )
        break;
      v8 = *(_WORD *)((char *)v7 + a3 - (_QWORD)v16);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
    {
      --v7;
      v4 = -2147024774;
    }
    *v7 = 0;
    if ( (v4 & 0x80000000) != 0 )
    {
      sub_180003B24(1u, (__int64)&unk_180009390, 8LL, v4, 245);
      return v4;
    }
  }
  else
  {
    ConnectionInformationLength = 0;
  }
  if ( !*(_QWORD *)(a1 + 72) && *(_DWORD *)(a1 + 60) )
  {
    v9 = HeapAlloc(*(HANDLE *)(a1 + 80), 8u, 0x30uLL);
    *(_QWORD *)(a1 + 72) = v9;
    if ( !v9 )
    {
      v4 = -2147024882;
      sub_180003B24(1u, (__int64)&unk_180009390, 8LL, 0x8007000E, 258);
      return v4;
    }
    *v9 = 48;
    *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL) = *(unsigned int *)(a1 + 60);
    *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL) = *(_QWORD *)(a1 + 64);
  }
  v10 = *(struct _PORT_VIEW **)(a1 + 72);
  if ( !v10 || !v10->SectionHandle )
    v10 = 0LL;
  v11 = NtConnectPort(
          (PHANDLE)(a1 + 48),
          &DestinationString,
          &SecurityQos,
          v10,
          0LL,
          0LL,
          (PVOID)((unsigned __int64)v16 & -(__int64)(a3 != 0)),
          &ConnectionInformationLength);
  if ( v11 >= 0 )
  {
    *(_BYTE *)(a1 + 56) = 1;
  }
  else
  {
    v4 = v11 | 0x10000000;
    sub_180003B24(1u, (__int64)&unk_180009390, 8LL, v11 | 0x10000000, 275);
  }
  return v4;
}
