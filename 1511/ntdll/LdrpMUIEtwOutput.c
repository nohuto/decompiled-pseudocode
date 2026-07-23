/*
 * XREFs of LdrpMUIEtwOutput @ 0x1800D420C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084CF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _itow_s @ 0x18009FAB0 (_itow_s.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpMUIEtwOutput(PVOID BaseAddress, __int64 a2, unsigned int a3, char a4)
{
  int ModuleInfoFromVirtualMemory; // esi
  unsigned int v9; // edi
  wchar_t *v10; // rdx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR Source[4]; // [rsp+50h] [rbp-B0h]
  wchar_t Buffer[64]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[264]; // [rsp+F0h] [rbp-10h] BYREF

  Source[0] = L"Type:";
  Source[1] = L" Name:";
  Source[2] = L" Language:";
  Source[3] = L" Item:";
  ModuleInfoFromVirtualMemory = 0;
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&Destination.Length = 34078720;
    Destination.Buffer = SourceString;
    v9 = 0;
    RtlAppendUnicodeToString(&Destination, L"SR - ");
    do
    {
      RtlAppendUnicodeToString(&Destination, Source[v9]);
      if ( (*(_QWORD *)(a2 + 8LL * v9) & 0xFFFFFFFFFFFF0000uLL) == 0 || v9 == 3 )
      {
        itow_s(*(_DWORD *)(a2 + 8LL * v9), Buffer, 0x40uLL, 10);
        v10 = Buffer;
      }
      else
      {
        v10 = *(wchar_t **)(a2 + 8LL * v9);
      }
      RtlAppendUnicodeToString(&Destination, v10);
      ++v9;
    }
    while ( v9 < a3 );
    LdrpTraceLoadMUIDll(&Destination, MEMORY[0x7FFE0384]);
    memset(SourceString, 0, Destination.Length);
  }
  if ( (a4 & 1) != 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(
                                    BaseAddress,
                                    SourceString,
                                    0x208u,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL);
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      RtlInitUnicodeString(&Destination, SourceString);
      LdrpTraceLoadMUIDll(&Destination, MEMORY[0x7FFE0384]);
    }
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
