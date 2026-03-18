/*
 * XREFs of MiSnapDriverRange @ 0x1403CEF0C
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x1403CD9BC (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x1403CE89C (MiDisablePagingOfDriver.c)
 *     MiBackSingleImageWithPagefile @ 0x14050CCBC (MiBackSingleImageWithPagefile.c)
 *     MiEnablePagingOfDriver @ 0x140520BB0 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x14074E43C (MmDiscardDriverSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmImageSectionPagable @ 0x1403CF324 (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  void *v9; // rbx
  unsigned __int64 v10; // r8
  PIMAGE_NT_HEADERS v11; // rdx
  unsigned __int64 SectionAlignment; // r12
  unsigned int NumberOfSections; // r15d
  __int64 SizeOfOptionalHeader; // r9
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v16; // r14
  _DWORD *v17; // rdi
  unsigned int v18; // ebx
  int v19; // ecx
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 result; // rax
  unsigned int v25; // esi
  unsigned __int64 v26; // rax
  char v27; // [rsp+20h] [rbp-B8h]
  void *v28; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v30; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+58h] [rbp-80h]
  PIMAGE_NT_HEADERS v33; // [rsp+60h] [rbp-78h]
  _DWORD v34[10]; // [rsp+68h] [rbp-70h] BYREF

  memset(v34, 0, sizeof(v34));
  *a5 = 0LL;
  *a6 = 0LL;
  v9 = *(void **)(a1 + 48);
  v28 = v9;
  v33 = RtlImageNtHeader(v9);
  v10 = a4 - (_QWORD)v9;
  v11 = v33;
  v30 = a4 - (_QWORD)v9;
  SectionAlignment = v33->OptionalHeader.SectionAlignment;
  if ( SectionAlignment > 0x1000 )
  {
    SectionAlignment = 4096LL;
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  NumberOfSections = v33->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v33->FileHeader.SizeOfOptionalHeader;
  v32 = SizeOfOptionalHeader;
  PteAddress = 0LL;
  v34[9] = 0x40000000;
  v16 = 0LL;
  v34[4] = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v33 + 24 - (_DWORD)v9;
  v34[2] = v34[4];
  while ( 1 )
  {
    if ( a2 )
      v17 = (_DWORD *)((char *)&v11->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v17 = v34;
    v18 = v17[2];
    if ( v17[4] >= v18 )
      v18 = v17[4];
    if ( a4 )
    {
      v26 = (unsigned int)v17[3];
      if ( v10 < v26 || v10 >= v18 + (unsigned int)v26 )
        break;
    }
    else
    {
      if ( (a3 & 8) != 0 )
        goto LABEL_23;
      if ( (a3 & 1) != 0 )
      {
        v19 = MmImageSectionPagable(v17);
        goto LABEL_17;
      }
      if ( (a3 & 4) != 0 )
      {
        if ( (unsigned int)MmImageSectionPagable(v17) || (v17[9] & 0xE0000000) == 0 )
          break;
      }
      else
      {
        if ( (a3 & 0x10) != 0 )
        {
          v19 = v17[9] & 0x20000000;
          goto LABEL_17;
        }
        if ( (a3 & 0x20) == 0 )
        {
          if ( !*v17 && v17 != v34 )
            return 0LL;
          v19 = v17[9] & 0x2000000;
          if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *v17 == 1414090313 )
            v19 = 0;
LABEL_17:
          if ( !v19 )
            break;
          goto LABEL_23;
        }
        if ( *(_BYTE *)v17 != 80
          || *((_BYTE *)v17 + 1) != 65
          || *((_BYTE *)v17 + 2) != 71
          || *((_BYTE *)v17 + 3) != 69
          || *((_BYTE *)v17 + 4) != 75
          || *((_BYTE *)v17 + 5) != 68 )
        {
          break;
        }
      }
    }
LABEL_23:
    if ( !PteAddress )
      PteAddress = MiGetPteAddress(((unsigned __int64)v28 + (unsigned int)v17[3] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v20 = ~(SectionAlignment - 1) & ((unsigned __int64)v28 + SectionAlignment + (unsigned int)v17[3] + v18 - 1);
    v21 = MiGetPteAddress(v20);
    v16 = v21;
    if ( (v20 & 0xFFF) == 0 || (a3 & 0xC) == 0 || SectionAlignment >= 0x1000 )
      v16 = v21 - 8;
    if ( v27 == 1 )
      break;
LABEL_19:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v22 = (unsigned int)v17[2];
        if ( v17[4] >= (unsigned int)v22 )
          v22 = (unsigned int)v17[4];
        v23 = MiGetPteAddress(((~(SectionAlignment - 1) & ((unsigned __int64)v28
                                                         + SectionAlignment
                                                         + (unsigned int)v17[3]
                                                         + v22
                                                         - 1))
                             + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v23 )
        {
          *a5 = PteAddress;
          *a6 = v23;
        }
      }
      return 0LL;
    }
    v11 = v33;
    v10 = v30;
    SizeOfOptionalHeader = v32;
  }
  if ( !PteAddress )
    goto LABEL_19;
  if ( PteAddress > v16 )
  {
    PteAddress = 0LL;
    goto LABEL_19;
  }
  v25 = a2 + 1;
  if ( v25 > NumberOfSections )
    v25 = 0;
  *a5 = PteAddress;
  result = v25;
  *a6 = v16;
  return result;
}
