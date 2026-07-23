/*
 * XREFs of PopBatteryDeviceState @ 0x14066ED80
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(wchar_t *a1, __int64 a2)
{
  wchar_t *v3; // r8
  unsigned __int16 v4; // di
  __int16 v5; // si
  wchar_t *v6; // r14
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rbx
  __int128 v12; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)&String2.Length = 0;
  v3 = a1;
  String2.Buffer = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    v7 = 0x7FFFLL;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v7;
    }
    while ( v7 );
    if ( !v7 )
      return (unsigned int)-1073741811;
    String2.Buffer = v3;
    v4 = 2 * (0x7FFF - v7);
    v6 = v3;
    String2.Length = v4;
    v5 = v4 + 2;
    String2.MaximumLength = v4 + 2;
  }
  if ( v4 > 8u
    && (RtlPrefixUnicodeString(&PopDevicePrefixNt, &String2, 0)
     || RtlPrefixUnicodeString(&PopDevicePrefixWin32, &String2, 0)) )
  {
    String2.Buffer = v6 + 4;
    String2.Length = v4 - 8;
    String2.MaximumLength = v5 - 8;
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
    PopAcquireRwLockShared(PopCB);
    v9 = qword_1403035C0;
    if ( (__int64 *)qword_1403035C0 == &qword_1403035C0 )
      goto LABEL_19;
    do
    {
      v10 = *(__m128i *)(v9 + 32);
      v11 = v9;
      *(_QWORD *)&v15.Length = *(_QWORD *)(v9 + 32);
      v15.Length -= 8;
      v15.MaximumLength -= 8;
      v15.Buffer = (wchar_t *)(_mm_srli_si128(v10, 8).m128i_u64[0] + 8);
      if ( RtlEqualUnicodeString(&String2, &v15, 1u) )
        break;
      v9 = *(_QWORD *)v9;
      v11 = 0LL;
    }
    while ( (__int64 *)v9 != &qword_1403035C0 );
    if ( !v11 )
    {
LABEL_19:
      v8 = -1073741772;
    }
    else if ( *(_DWORD *)(v11 + 104) == 3 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v11 + 112);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v11 + 128);
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(v11 + 144);
      v12 = *(_OWORD *)(v11 + 148);
      v8 = 0;
      *(_OWORD *)(a2 + 36) = v12;
    }
    else
    {
      v8 = -1073741661;
    }
    PopReleaseRwLock(PopCB);
    PopReleaseRwLock(&PopPolicyDeviceLock);
  }
  else
  {
    return (unsigned int)-1073741773;
  }
  return v8;
}
