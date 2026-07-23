/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x18001559C
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180011320 (RtlInitAnsiString.c)
 *     ApiSetResolveToHost @ 0x180015BEC (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182D0 (RtlAnsiStringToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     RtlCompareUnicodeStrings @ 0x1800195A0 (RtlCompareUnicodeStrings.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x180031778 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     LdrGetDllHandleByName @ 0x18007AEE0 (LdrGetDllHandleByName.c)
 *     RtlxOemStringToUnicodeSize @ 0x180088360 (RtlxOemStringToUnicodeSize.c)
 *     _strnicmp @ 0x180097EC0 (_strnicmp.c)
 */

const IMAGE_DELAYLOAD_DESCRIPTOR *LdrpSnapKernelBaseExtensions()
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *result; // rax
  const IMAGE_DELAYLOAD_DESCRIPTOR *v1; // r13
  wchar_t *Buffer; // rbx
  unsigned int v3; // edi
  ULONG v4; // r15d
  ULONG v5; // r14d
  const IMAGE_DELAYLOAD_DESCRIPTOR *v6; // r12
  const CHAR *v7; // rsi
  unsigned int v8; // edi
  int v9; // eax
  unsigned __int16 v10; // si
  char v11; // bl
  __int64 v12; // r8
  int Descriptor; // eax
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v16; // [rsp+50h] [rbp-18h] BYREF
  PCWCH String2; // [rsp+58h] [rbp-10h]
  char v18; // [rsp+B0h] [rbp+48h] BYREF
  ULONG Size; // [rsp+B8h] [rbp+50h] BYREF
  PVOID DllHandle; // [rsp+C0h] [rbp+58h] BYREF
  void *ApiSetMap; // [rsp+C8h] [rbp+60h]

  DllHandle = 0LL;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  result = (const IMAGE_DELAYLOAD_DESCRIPTOR *)RtlImageDirectoryEntryToData(DllHandle, 1u, 0xDu, &Size);
  v1 = result;
  if ( result )
  {
    Buffer = 0LL;
    v3 = 0;
    v4 = Size >> 5;
    v5 = 0;
    *(_DWORD *)&UnicodeString.Length = 0;
    ApiSetMap = NtCurrentPeb()->ApiSetMap;
    UnicodeString.Buffer = 0LL;
    if ( Size >> 5 )
    {
      do
      {
        v6 = &v1[v5];
        if ( !v6->DllNameRVA )
          break;
        v7 = (char *)DllHandle + v6->DllNameRVA;
        if ( !strnicmp(v7, "EXT-", 4uLL) )
        {
          RtlInitAnsiString(&DestinationString, v7);
          if ( NlsMbCodePageTag )
            v8 = RtlxOemStringToUnicodeSize(&DestinationString);
          else
            v8 = 2 * DestinationString.Length + 2;
          if ( v8 > UnicodeString.MaximumLength )
          {
            if ( v8 >= 0xFFFE )
            {
              v3 = -1073741675;
              break;
            }
            if ( Buffer )
              RtlFreeAnsiString(&UnicodeString);
            UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v8);
            Buffer = UnicodeString.Buffer;
            if ( !UnicodeString.Buffer )
            {
              v3 = -1073741670;
              break;
            }
            UnicodeString.MaximumLength = v8;
          }
          else
          {
            UnicodeString.Length = 0;
          }
          RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
          LdrpLogDllState(0LL, &UnicodeString, 5328LL);
          v9 = ApiSetResolveToHost(
                 (_DWORD)ApiSetMap,
                 (unsigned int)&UnicodeString,
                 0,
                 (unsigned int)&v18,
                 (__int64)&v16);
          v10 = v16;
          v3 = v9;
          v11 = v18;
          if ( v9 >= 0 && v18 )
          {
            if ( v16 )
              v12 = 5329LL;
            else
              v12 = 5330LL;
          }
          else
          {
            v12 = 5331LL;
          }
          LdrpLogDllState(0LL, &UnicodeString, v12);
          if ( v11
            && !RtlCompareUnicodeStrings(LdrpKernel32DllName.Buffer, 0xCuLL, String2, (unsigned __int64)v10 >> 1, 1u) )
          {
            Descriptor = LdrpResolveDelayLoadDescriptor(DllHandle, &v1[v5]);
            Buffer = UnicodeString.Buffer;
            v3 = Descriptor;
            if ( Descriptor < 0 )
              break;
            v3 = 0;
          }
          else
          {
            Buffer = UnicodeString.Buffer;
          }
        }
        ++v5;
      }
      while ( v5 < v4 );
      if ( Buffer )
        RtlFreeAnsiString(&UnicodeString);
    }
    return (const IMAGE_DELAYLOAD_DESCRIPTOR *)v3;
  }
  return result;
}
