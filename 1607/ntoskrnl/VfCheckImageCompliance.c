/*
 * XREFs of VfCheckImageCompliance @ 0x140703D48
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _stricmp @ 0x14014D904 (_stricmp.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407043D0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckImageCompliance(__int64 a1)
{
  int v2; // r15d
  PIMAGE_NT_HEADERS v3; // rax
  PIMAGE_NT_HEADERS v4; // rdi
  __int64 v5; // rsi
  _IMAGE_DATA_DIRECTORY *v6; // r14
  unsigned int v7; // r12d
  unsigned int v8; // ecx
  unsigned __int16 Magic; // ax
  int SectionAlignment; // eax
  unsigned int VirtualAddress; // ecx
  __int64 Size; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r15
  _WORD *v15; // rsi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // [rsp+30h] [rbp-20h]
  char Str1[8]; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+40h] [rbp-10h]

  v2 = 1;
  if ( (MmVerifierData & 0x2000000) == 0 )
    return;
  v3 = RtlImageNtHeader(*(PVOID *)(a1 + 48));
  v4 = v3;
  if ( !v3 )
    return;
  v5 = (__int64)&v3->OptionalHeader + v3->FileHeader.SizeOfOptionalHeader;
  v6 = &v3->OptionalHeader.DataDirectory[12];
  if ( !v3->OptionalHeader.DataDirectory[12].VirtualAddress || !v3->OptionalHeader.DataDirectory[12].Size )
    v2 = 0;
  v7 = 0;
  if ( v3->FileHeader.NumberOfSections )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 36) & 0xA0000000) == 0xA0000000 )
      {
        *(_QWORD *)Str1 = *(_QWORD *)v5;
        v19 = 0;
        if ( stricmp(Str1, "INIT") || (VfOptionFlags & 0x100) != 0 )
        {
          ViCiPreprocessOptions(
            Response,
            "The image %wZ contains an executable and writable section 0x%p (name %s).",
            8195LL,
            a1 + 88,
            v5,
            Str1);
          VfReportIssueWithOptions(196, 8195, a1 + 88, v5, (ULONG_PTR)Str1, Response);
          if ( (MmVerifierData & 0x1000) != 0 )
            ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 260LL);
          _InterlockedIncrement(&dword_1403072DC);
        }
      }
      if ( v2 )
      {
        v8 = *(_DWORD *)(v5 + 12);
        if ( v8 <= v6->VirtualAddress
          && *(_DWORD *)(v5 + 8) + v8 > v6->VirtualAddress
          && (*(_DWORD *)(v5 + 36) & 0x20000000) != 0 )
        {
          *(_QWORD *)Str1 = *(_QWORD *)v5;
          v19 = 0;
          ViCiPreprocessOptions(
            byte_1402F98F0,
            "The image %wZ contains an IAT, 0x%p in executable section (name %s).",
            8198LL,
            a1 + 88,
            v6,
            Str1);
          VfReportIssueWithOptions(196, 8198, a1 + 88, (int)v6, (ULONG_PTR)Str1, byte_1402F98F0);
          if ( (MmVerifierData & 0x1000) != 0 )
            ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 272LL);
          _InterlockedIncrement(&dword_1403072E8);
        }
      }
      Magic = v4->OptionalHeader.Magic;
      if ( Magic == 267 || Magic == 523 )
        SectionAlignment = v4->OptionalHeader.SectionAlignment;
      else
        SectionAlignment = 4096;
      if ( !SectionAlignment || (SectionAlignment & 0xFFF) != 0 )
      {
        *(_QWORD *)Str1 = *(_QWORD *)v5;
        v19 = 0;
        ViCiPreprocessOptions(
          byte_1402F98F4,
          "The image %wZ contains section 0x%p that is not page aligned (name %s).",
          8196LL,
          a1 + 88,
          v5,
          Str1);
        VfReportIssueWithOptions(196, 8196, a1 + 88, v5, (ULONG_PTR)Str1, byte_1402F98F4);
        if ( (MmVerifierData & 0x1000) != 0 )
          ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 264LL);
        _InterlockedIncrement(&dword_1403072E0);
      }
      v5 += 40LL;
      ++v7;
    }
    while ( v7 < v4->FileHeader.NumberOfSections );
  }
  if ( v4->OptionalHeader.Magic != 523 )
    return;
  VirtualAddress = v4->OptionalHeader.DataDirectory[5].VirtualAddress;
  if ( !VirtualAddress )
    return;
  Size = v4->OptionalHeader.DataDirectory[5].Size;
  if ( !(_DWORD)Size )
    return;
  v13 = *(_QWORD *)(a1 + 48) + VirtualAddress;
  v14 = v13 + Size;
  v17 = v13 + Size;
  if ( v13 >= v13 + Size )
    return;
  do
  {
    v15 = (_WORD *)(v13 + 8);
    v16 = v13 + *(unsigned int *)(v13 + 4);
    if ( v13 + 8 >= v16 )
      goto LABEL_45;
    do
    {
      if ( !(*v15 >> 12) )
        goto LABEL_43;
      if ( *v15 >> 12 == 10 )
      {
        if ( (*v15 & 0xFFFu) <= 0xFF8 )
          goto LABEL_43;
        ViCiPreprocessOptions(
          &dword_1402F98E8,
          "The image %wZ contains straddled relocs 0x%p in reloc section %p.",
          8197LL,
          a1 + 88,
          v13,
          v15);
        VfReportIssueWithOptions(196, 8197, a1 + 88, v13, (ULONG_PTR)v15, &dword_1402F98E8);
      }
      else
      {
        ViCiPreprocessOptions(
          byte_1402F98EC,
          "The image %wZ contains unsupported relocs 0x%p in reloc section %p.",
          8197LL,
          a1 + 88,
          v13,
          v15);
        VfReportIssueWithOptions(196, 8197, a1 + 88, v13, (ULONG_PTR)v15, byte_1402F98EC);
      }
      if ( (MmVerifierData & 0x1000) != 0 )
        ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 268LL);
      _InterlockedIncrement(&dword_1403072E4);
LABEL_43:
      ++v15;
    }
    while ( (unsigned __int64)v15 < v16 );
    v14 = v17;
LABEL_45:
    v13 = v16;
  }
  while ( v16 < v14 );
}
