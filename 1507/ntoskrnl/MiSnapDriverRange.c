/*
 * XREFs of MiSnapDriverRange @ 0x140574030
 * Callers:
 *     MiBackSingleImageWithPagefile @ 0x140571514 (MiBackSingleImageWithPagefile.c)
 *     MiFreeDriverInitialization @ 0x140573BE0 (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x140573F50 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x14057516C (MiHandleDriverNonPagedSections.c)
 *     MiEnablePagingOfDriver @ 0x1405972D8 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x1407E7104 (MmDiscardDriverSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmImageSectionPagable @ 0x1404F5320 (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  void *v9; // r14
  unsigned __int64 v10; // r8
  PIMAGE_NT_HEADERS v11; // rdx
  unsigned __int64 SectionAlignment; // r12
  unsigned int NumberOfSections; // r13d
  __int64 SizeOfOptionalHeader; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  _DWORD *v17; // rbx
  unsigned int v18; // r14d
  int v19; // ecx
  void *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int v26; // esi
  unsigned __int64 v27; // rax
  char v28; // [rsp+20h] [rbp-A8h]
  void *v29; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v31; // [rsp+48h] [rbp-80h]
  __int64 v33; // [rsp+58h] [rbp-70h]
  PIMAGE_NT_HEADERS v34; // [rsp+60h] [rbp-68h]
  _DWORD v35[10]; // [rsp+68h] [rbp-60h] BYREF

  memset(v35, 0, sizeof(v35));
  *a5 = 0LL;
  *a6 = 0LL;
  v9 = *(void **)(a1 + 48);
  v29 = v9;
  v34 = RtlImageNtHeader(v9);
  v10 = a4 - (_QWORD)v9;
  v11 = v34;
  v31 = a4 - (_QWORD)v9;
  SectionAlignment = v34->OptionalHeader.SectionAlignment;
  if ( SectionAlignment > 0x1000 )
  {
    SectionAlignment = 4096LL;
    v28 = 1;
  }
  else
  {
    v28 = 0;
  }
  NumberOfSections = v34->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v34->FileHeader.SizeOfOptionalHeader;
  v33 = SizeOfOptionalHeader;
  v15 = 0LL;
  v16 = 0LL;
  v35[4] = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v34 + 24 - (_DWORD)v9;
  v35[2] = v35[4];
  while ( 1 )
  {
    if ( a2 )
      v17 = (_DWORD *)((char *)&v11->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v17 = v35;
    v18 = v17[2];
    if ( v17[4] >= v18 )
      v18 = v17[4];
    if ( a4 )
      break;
    if ( (a3 & 8) != 0 )
      goto LABEL_23;
    if ( (a3 & 1) != 0 )
    {
      v19 = MmImageSectionPagable((__int64)v17);
      goto LABEL_17;
    }
    if ( (a3 & 4) != 0 )
    {
      if ( (unsigned int)MmImageSectionPagable((__int64)v17) )
        goto LABEL_18;
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
        if ( !*v17 && v17 != v35 )
          return 0LL;
        v19 = v17[9] & 0x2000000;
        if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *v17 == 1414090313 )
          v19 = 0;
LABEL_17:
        if ( !v19 )
          goto LABEL_18;
        goto LABEL_23;
      }
      if ( *(_BYTE *)v17 != 80
        || *((_BYTE *)v17 + 1) != 65
        || *((_BYTE *)v17 + 2) != 71
        || *((_BYTE *)v17 + 3) != 69
        || *((_BYTE *)v17 + 4) != 75
        || *((_BYTE *)v17 + 5) != 68 )
      {
        goto LABEL_18;
      }
    }
LABEL_23:
    if ( !v15 )
      v15 = ((((unsigned __int64)v29 + (unsigned int)v17[3] + 4095) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v18;
    v20 = v29;
    v22 = SectionAlignment + (unsigned int)v17[3] + v21;
    v16 = ((~(SectionAlignment - 1) >> 9) & (((unsigned __int64)v29 + v22 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (a3 & 0xC) == 0 || SectionAlignment >= 0x1000 )
      v16 = ((~(SectionAlignment - 1) >> 9) & (((unsigned __int64)v29 + v22 - 1) >> 9) & 0x7FFFFFFFF8LL)
          - 0x98000000008LL;
    if ( v28 == 1 )
      goto LABEL_19;
LABEL_20:
    if ( ++a2 > NumberOfSections )
    {
      if ( v15 )
      {
        v23 = (unsigned int)v17[2];
        if ( v17[4] >= (unsigned int)v23 )
          v23 = (unsigned int)v17[4];
        v24 = ((((~(SectionAlignment - 1) & ((unsigned __int64)v20 + SectionAlignment + (unsigned int)v17[3] + v23 - 1))
               + 4095) >> 9) & 0x7FFFFFFFF8LL)
            - 0x98000000008LL;
        if ( v15 <= v24 )
        {
          *a5 = v15;
          *a6 = v24;
        }
      }
      return 0LL;
    }
    v11 = v34;
    v10 = v31;
    SizeOfOptionalHeader = v33;
  }
  v27 = (unsigned int)v17[3];
  if ( v10 >= v27 && v10 < v18 + (unsigned int)v27 )
    goto LABEL_23;
LABEL_18:
  v20 = v29;
LABEL_19:
  if ( !v15 )
    goto LABEL_20;
  if ( (a3 & 0xC) != 0 )
  {
    if ( v15 <= v16 )
      goto LABEL_43;
    v16 = v15;
  }
  if ( v15 > v16 )
  {
    v15 = 0LL;
    goto LABEL_20;
  }
LABEL_43:
  v26 = a2 + 1;
  if ( v26 > NumberOfSections )
    v26 = 0;
  *a5 = v15;
  *a6 = v16;
  return v26;
}
