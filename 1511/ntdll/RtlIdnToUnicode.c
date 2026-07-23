/*
 * XREFs of RtlIdnToUnicode @ 0x18006A2A0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIsNormalizedString @ 0x1800026D0 (RtlIsNormalizedString.c)
 *     RtlStringCchLengthW @ 0x18001C914 (RtlStringCchLengthW.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     punycode_decode @ 0x18006A464 (punycode_decode.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800959E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

NTSTATUS __cdecl RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  LONG v6; // r10d
  wchar_t *v7; // r11
  char v8; // r12
  char v9; // di
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r8
  LONG v19; // ebx
  _BYTE *Heap; // rdi
  __int64 i; // rcx
  __int16 v22; // dx
  __int64 j; // rax
  BOOLEAN Normalized; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v25[15]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Src[512]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = SourceStringLength;
  v7 = (wchar_t *)SourceString;
  v8 = Flags;
  v9 = 0;
  if ( !SourceString
    || !DestinationStringLength
    || *DestinationStringLength < 0
    || SourceStringLength < -1
    || *DestinationStringLength > 0 && !DestinationString
    || (Flags & 0xFFFFFFF0) != 0 )
  {
    return -1073741811;
  }
  if ( SourceStringLength == -1 )
  {
    if ( (int)RtlStringCchLengthW(SourceString, 0x203uLL, &v26) < 0 )
      return -1073740010;
    v6 = v26 + 1;
  }
  if ( !v7[v6 - 1] )
    v9 = 1;
  *(_DWORD *)&v25[3] = 511;
  result = punycode_decode(v7, (v8 & 4) != 0, (v8 & 2) != 0, (__int64)v25, (__int64)&v25[7]);
  if ( result < 0 )
    return result;
  if ( v9 )
  {
    if ( (unsigned __int64)*(int *)&v25[3] >= 0x1FF )
      return -1073740010;
    v15 = *(_DWORD *)&v25[3] + 1;
    v16 = *(int *)&v25[3];
    ++*(_DWORD *)&v25[3];
    if ( v16 >= 511 )
      _report_rangecheckfailure(v12, v11, v13, v14);
    Src[v16] = 0;
  }
  else
  {
    v15 = *(_DWORD *)&v25[3];
  }
  if ( (v8 & 8) == 0 && !v25[0] )
  {
    v17 = *(_QWORD *)&v25[7];
    if ( (v8 & 4) != 0
      && (RtlIsNormalizedString(1u, Src, (__int64)(*(_QWORD *)&v25[7] - (_QWORD)Src) >> 1, &Normalized) < 0
       || !Normalized) )
    {
      return -1073740010;
    }
    v18 = (v17 - (__int64)Src) >> 1;
    if ( v18 < v15 - (v9 != 0) )
    {
      v19 = v15 - ((v9 != 0) + 1) - v18;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v19);
      if ( !Heap )
        return -1073741801;
      for ( i = 0LL; i < v19; ++i )
      {
        v22 = *(_WORD *)(v17 + 2 * i + 2);
        if ( (unsigned __int16)(v22 - 65) <= 0x19u )
        {
          *(_WORD *)(v17 + 2 * i + 2) = v22 + 32;
          Heap[i] = 1;
        }
      }
      if ( RtlIsNormalizedString((((v8 & 1) == 0) << 8) | 0xD, (PCWSTR)(v17 + 2), v19, &Normalized) >= 0 && Normalized )
      {
        for ( j = 0LL; j < v19; ++j )
        {
          if ( Heap[j] == 1 )
            *(_WORD *)(v17 + 2 * j + 2) -= 32;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        v15 = *(_DWORD *)&v25[3];
        goto LABEL_19;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return -1073740010;
    }
  }
LABEL_19:
  if ( DestinationString && *DestinationStringLength )
  {
    if ( v15 > *DestinationStringLength )
      return -1073741789;
    memmove(DestinationString, Src, 2LL * v15);
  }
  *DestinationStringLength = v15;
  return 0;
}
