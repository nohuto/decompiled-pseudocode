/*
 * XREFs of CmpAddProcessorConfigurationEntry @ 0x14055CE14
 * Callers:
 *     CmInitializeProcessor @ 0x14060397C (CmInitializeProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401530AC (sprintf_s.c)
 *     strcpy_s @ 0x1401531F4 (strcpy_s.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpInitializeRegistryNode @ 0x14055D330 (CmpInitializeRegistryNode.c)
 */

__int64 __fastcall CmpAddProcessorConfigurationEntry(__int64 a1, int a2, int a3)
{
  char v6; // al
  const char *v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  void *v13; // r14
  NTSTATUS v14; // edi
  const CHAR *v15; // r15
  unsigned int v21; // r12d
  _DWORD *v22; // r8
  unsigned int v23; // r9d
  __int64 v29; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B0h] BYREF
  _STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v41[9]; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Handle; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v43[64]; // [rsp+D0h] [rbp-30h] BYREF
  char DstBuf[128]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&SourceString.Length = -1LL;
  memset(v41, 0, sizeof(v41));
  WORD2(v41[5]) = *(unsigned __int8 *)(a1 + 1616);
  HIWORD(v41[5]) = *(unsigned __int8 *)(a1 + 1617);
  v41[7] = DstBuf;
  v6 = *(_BYTE *)(a1 + 1597);
  v41[3] = 0x100000001LL;
  LODWORD(v41[5]) = a2;
  switch ( v6 )
  {
    case 1:
      v7 = "AMD64 Family %u Model %u Stepping %u";
      break;
    case 2:
      v7 = "Intel64 Family %u Model %u Stepping %u";
      break;
    case 3:
      v7 = "VIA64 Family %u Model %u Stepping %u";
      break;
    default:
      KeBugCheck(0x5Du);
  }
  sprintf_s(
    DstBuf,
    0x80uLL,
    v7,
    (unsigned int)*(char *)(a1 + 1520),
    HIBYTE(*(unsigned __int16 *)(a1 + 1522)),
    (unsigned __int8)*(_WORD *)(a1 + 1522));
  v8 = -1LL;
  do
    ++v8;
  while ( DstBuf[v8] );
  HIDWORD(v41[6]) = v8 + 1;
  result = CmpInitializeRegistryNode(
             (unsigned int)v41,
             a3,
             (unsigned int)&SourceString,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
  if ( (int)result >= 0 )
  {
    memset(v41, 0, sizeof(v41));
    v10 = *(_BYTE *)(a1 + 1520) == 3;
    WORD2(v41[5]) = *(unsigned __int8 *)(a1 + 1616);
    HIWORD(v41[5]) = *(unsigned __int8 *)(a1 + 1617);
    v41[7] = DstBuf;
    v41[3] = 0x200000001LL;
    LODWORD(v41[5]) = a2;
    if ( v10 )
      strcpy_s(DstBuf, 0x80uLL, "80387");
    v11 = -1LL;
    do
      ++v11;
    while ( DstBuf[v11] );
    HIDWORD(v41[6]) = v11 + 1;
    v12 = CmpInitializeRegistryNode((unsigned int)v41, a3, (unsigned int)&Handle, -1, -1, (__int64)&CmpDeviceIndexTable);
    v13 = *(void **)&SourceString.Length;
    v14 = v12;
    if ( v12 >= 0 )
    {
      NtClose(*(HANDLE *)&Handle.Length);
      v15 = *(_BYTE *)(a1 + 1521) ? (const CHAR *)(a1 + 25304) : 0LL;
      _RAX = 0x80000000LL;
      __asm { cpuid }
      *(_DWORD *)(&Handle.MaximumLength + 1) = _RBX;
      Handle.Buffer = (wchar_t *)__PAIR64__(_RDX, _RCX);
      v21 = _RAX;
      if ( (unsigned int)_RAX < 0x80000004 )
        goto LABEL_49;
      v22 = v43;
      v23 = -2147483646;
      do
      {
        _RAX = v23;
        __asm { cpuid }
        *v22 = _RAX;
        ++v23;
        v22[1] = _RBX;
        v22[2] = _RCX;
        v22[3] = _RDX;
        v22 += 4;
      }
      while ( v23 <= 0x80000004 );
      v43[48] = 0;
      if ( !v22 )
        goto LABEL_49;
      RtlInitUnicodeString(&DestinationString, L"ProcessorNameString");
      LODWORD(v29) = 0;
      if ( v43[0] == 32 )
      {
        do
          v29 = (unsigned int)(v29 + 1);
        while ( v43[v29] == 32 );
      }
      RtlInitAnsiString(&SourceString, &v43[(unsigned int)v29]);
      v14 = RtlAnsiStringToUnicodeString(&Handle, &SourceString, 1u);
      if ( v14 >= 0 )
      {
        v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, Handle.Buffer, Handle.Length + 2);
        RtlFreeAnsiString(&Handle);
        if ( v14 >= 0 )
        {
LABEL_49:
          if ( !v15
            || (RtlInitUnicodeString(&DestinationString, L"VendorIdentifier"),
                RtlInitAnsiString(&SourceString, v15),
                v14 = RtlAnsiStringToUnicodeString(&Handle, &SourceString, 1u),
                v14 >= 0)
            && (v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, Handle.Buffer, Handle.Length + 2),
                RtlFreeAnsiString(&Handle),
                v14 >= 0) )
          {
            if ( !*(_QWORD *)(a1 + 25320)
              || (Data = *(_DWORD *)(a1 + 25320),
                  RtlInitUnicodeString(&DestinationString, L"FeatureSet"),
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, &Data, 4u),
                  v14 >= 0) )
            {
              if ( !*(_DWORD *)(a1 + 1524)
                || (RtlInitUnicodeString(&DestinationString, L"~MHz"),
                    v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, (PVOID)(a1 + 1524), 4u),
                    v14 >= 0) )
              {
                if ( !*(_QWORD *)(a1 + 25336)
                  || (RtlInitUnicodeString(&DestinationString, L"Update Revision"),
                      v14 = ZwSetValueKey(v13, &DestinationString, 0, 3u, (PVOID)(a1 + 25336), 8u),
                      v14 >= 0) )
                {
                  if ( *(_BYTE *)(a1 + 1597) == 1
                    && *(_BYTE *)(a1 + 1520) == 21
                    && (*(_WORD *)(a1 + 1522) & 0xFF00) == 0x6500
                    && v21 >= 0x80000001 )
                  {
                    _RAX = 2147483649LL;
                    __asm { cpuid }
                    if ( (_RCX & 0x200) != 0 )
                    {
                      v35 = __readmsr(0xC0010140);
                      if ( (unsigned __int16)v35 > 5u )
                      {
                        v36 = __readmsr(0xC0010141);
                        v40 = v36 & 0x20;
                        RtlInitUnicodeString(&DestinationString, L"AMD OSVW Status");
                        v14 = ZwSetValueKey(v13, &DestinationString, 0, 0xBu, &v40, 8u);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v13 != (void *)-1LL )
      NtClose(v13);
    return (unsigned int)v14;
  }
  return result;
}
