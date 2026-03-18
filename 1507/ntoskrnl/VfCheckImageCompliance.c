/*
 * XREFs of VfCheckImageCompliance @ 0x1407383E8
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _stricmp @ 0x140171FF4 (_stricmp.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140738838 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckImageCompliance(__int64 a1)
{
  PIMAGE_NT_HEADERS v2; // rax
  PIMAGE_NT_HEADERS v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // r14d
  unsigned __int16 Magic; // ax
  int SectionAlignment; // eax
  char Str1[8]; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+38h] [rbp-30h]

  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v2 = RtlImageNtHeader(*(PVOID *)(a1 + 48));
    v3 = v2;
    if ( v2 )
    {
      v4 = (__int64)&v2->OptionalHeader + v2->FileHeader.SizeOfOptionalHeader;
      v5 = 0;
      if ( v2->FileHeader.NumberOfSections )
      {
        do
        {
          if ( (*(_DWORD *)(v4 + 36) & 0xA0000000) == 0xA0000000 )
          {
            *(_QWORD *)Str1 = *(_QWORD *)v4;
            v9 = 0;
            if ( stricmp(Str1, "INIT") || (VfOptionFlags & 0x100) != 0 )
            {
              ViCiPreprocessOptions(
                Response,
                "The image %wZ contains an executable and writable section 0x%p (name %s).",
                8195LL,
                a1 + 88,
                v4,
                Str1);
              VfReportIssueWithOptions(196, 8195, a1 + 88, v4, (ULONG_PTR)Str1, Response);
            }
            if ( (MmVerifierData & 0x1000) != 0 )
              ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 260LL);
            _InterlockedIncrement(&dword_140331D9C);
          }
          Magic = v3->OptionalHeader.Magic;
          if ( Magic == 267 || Magic == 523 )
            SectionAlignment = v3->OptionalHeader.SectionAlignment;
          else
            SectionAlignment = 4096;
          if ( !SectionAlignment || (SectionAlignment & 0xFFF) != 0 )
          {
            *(_QWORD *)Str1 = *(_QWORD *)v4;
            v9 = 0;
            ViCiPreprocessOptions(
              byte_140323048,
              "The image %wZ contains section 0x%p that is not page aligned (name %s).",
              8196LL,
              a1 + 88,
              v4,
              Str1);
            VfReportIssueWithOptions(196, 8196, a1 + 88, v4, (ULONG_PTR)Str1, byte_140323048);
            if ( (MmVerifierData & 0x1000) != 0 )
              ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 264LL);
            _InterlockedIncrement(&dword_140331DA0);
          }
          v4 += 40LL;
          ++v5;
        }
        while ( v5 < v3->FileHeader.NumberOfSections );
      }
    }
  }
}
