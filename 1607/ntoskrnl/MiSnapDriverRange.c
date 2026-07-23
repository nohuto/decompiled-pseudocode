/*
 * XREFs of MiSnapDriverRange @ 0x14047C564
 * Callers:
 *     MiFreeDriverInitialization @ 0x14047C25C (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x14047C4D0 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x14047D840 (MiHandleDriverNonPagedSections.c)
 *     MiBackSingleImageWithPagefile @ 0x140547918 (MiBackSingleImageWithPagefile.c)
 *     MiEnablePagingOfDriver @ 0x140554134 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x1407BC1C8 (MmDiscardDriverSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmImageSectionPagable @ 0x14047C974 (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  void *v10; // rbp
  PIMAGE_NT_HEADERS v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  PIMAGE_NT_HEADERS v14; // rdx
  unsigned __int64 SectionAlignment; // r15
  unsigned int NumberOfSections; // r12d
  __int64 SizeOfOptionalHeader; // r9
  unsigned __int64 PteAddress; // rsi
  unsigned __int64 v19; // r14
  _DWORD *v20; // rbx
  unsigned int v21; // ebp
  int v22; // ecx
  int v23; // eax
  void *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rax
  __int16 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 result; // rax
  unsigned int v31; // edi
  unsigned __int64 v32; // rax
  char v33; // [rsp+20h] [rbp-B8h]
  void *v34; // [rsp+28h] [rbp-B0h]
  __int64 v35; // [rsp+30h] [rbp-A8h]
  PIMAGE_NT_HEADERS v38; // [rsp+58h] [rbp-80h]
  unsigned __int64 v39; // [rsp+60h] [rbp-78h]
  _DWORD v40[10]; // [rsp+68h] [rbp-70h] BYREF

  memset(v40, 0, sizeof(v40));
  *a5 = 0LL;
  *a6 = 0LL;
  v10 = *(void **)(a1 + 48);
  v34 = v10;
  v11 = RtlImageNtHeader(v10);
  v38 = v11;
  v12 = a4 - (_QWORD)v10;
  v13 = 0LL;
  v14 = v11;
  v39 = a4 - (_QWORD)v10;
  SectionAlignment = v11->OptionalHeader.SectionAlignment;
  if ( SectionAlignment > 0x1000 )
  {
    SectionAlignment = 4096LL;
    v33 = 1;
  }
  else
  {
    v33 = 0;
  }
  NumberOfSections = v11->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v11->FileHeader.SizeOfOptionalHeader;
  v35 = SizeOfOptionalHeader;
  PteAddress = 0LL;
  v40[9] = 0x40000000;
  v19 = 0LL;
  v40[4] = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v11 + 24 - (_DWORD)v10;
  v40[2] = v40[4];
  while ( 1 )
  {
    if ( a2 )
      v20 = (_DWORD *)((char *)&v14->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v20 = v40;
    v21 = v20[2];
    if ( v20[4] >= v21 )
      v21 = v20[4];
    if ( a4 != v13 )
      break;
    if ( (a3 & 8) != 0 )
    {
      if ( (v20[9] & 0xE0000000) == 0 )
        goto LABEL_24;
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        v22 = MmImageSectionPagable(v20);
        v13 = 0LL;
LABEL_22:
        SizeOfOptionalHeader = v35;
        goto LABEL_23;
      }
      if ( (a3 & 4) != 0 )
      {
        v23 = MmImageSectionPagable(v20);
        v13 = 0LL;
        v22 = v23 == 0;
        if ( (v20[9] & 0xE0000000) == 0 )
          v22 = 0;
        goto LABEL_22;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v22 = v20[9] & 0x20000000;
        goto LABEL_23;
      }
      if ( (a3 & 0x20) == 0 )
      {
        if ( !*v20 && v20 != v40 )
          return 0LL;
        v22 = v20[9] & 0x2000000;
        if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *v20 == 1414090313 )
          v22 = v13;
LABEL_23:
        if ( !v22 )
          goto LABEL_24;
        goto LABEL_29;
      }
      if ( *(_BYTE *)v20 != 80
        || *((_BYTE *)v20 + 1) != 65
        || *((_BYTE *)v20 + 2) != 71
        || *((_BYTE *)v20 + 3) != 69
        || *((_BYTE *)v20 + 4) != 75
        || *((_BYTE *)v20 + 5) != 68 )
      {
        goto LABEL_24;
      }
    }
LABEL_29:
    if ( !PteAddress )
      PteAddress = MiGetPteAddress(((unsigned __int64)v34 + (unsigned int)v20[3] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v25 = v21;
    v24 = v34;
    v26 = MiGetPteAddress(~(SectionAlignment - 1) & ((unsigned __int64)v34
                                                   + SectionAlignment
                                                   + (unsigned int)v20[3]
                                                   + v25
                                                   - 1));
    v19 = v26;
    if ( (v27 & 0xFFF) == 0 || (a3 & 0xC) == 0 || SectionAlignment >= 0x1000 )
      v19 = v26 - 8;
    if ( v33 == 1 )
      goto LABEL_25;
LABEL_26:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v28 = (unsigned int)v20[2];
        if ( v20[4] >= (unsigned int)v28 )
          v28 = (unsigned int)v20[4];
        v29 = MiGetPteAddress(((~(SectionAlignment - 1) & ((unsigned __int64)v24
                                                         + SectionAlignment
                                                         + (unsigned int)v20[3]
                                                         + v28
                                                         - 1))
                             + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v29 )
        {
          *a5 = PteAddress;
          *a6 = v29;
        }
      }
      return 0LL;
    }
    v14 = v38;
    v12 = v39;
  }
  v32 = (unsigned int)v20[3];
  if ( v12 >= v32 && v12 < (unsigned int)v32 + v21 )
    goto LABEL_29;
LABEL_24:
  v24 = v34;
LABEL_25:
  if ( !PteAddress )
    goto LABEL_26;
  if ( PteAddress > v19 )
  {
    PteAddress = v13;
    goto LABEL_26;
  }
  v31 = a2 + 1;
  if ( v31 > NumberOfSections )
    v31 = v13;
  *a5 = PteAddress;
  result = v31;
  *a6 = v19;
  return result;
}
