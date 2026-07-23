/*
 * XREFs of MiProtectSystemImage @ 0x1405973F8
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x140597344 (MiWriteProtectSystemImages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiComputeDriverProtection @ 0x140597764 (MiComputeDriverProtection.c)
 */

char __fastcall MiProtectSystemImage(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 SizeOfOptionalHeader; // rax
  PIMAGE_NT_HEADERS v4; // r11
  BOOL v5; // r12d
  __int64 NumberOfSections; // r13
  int v7; // r10d
  unsigned __int64 v8; // rdx
  _BYTE *v9; // r15
  _DWORD *v10; // r9
  char *v11; // r8
  __int64 v12; // rdx
  __int64 SectionAlignment; // rcx
  ULONG_PTR v14; // r10
  __int64 v15; // rdx
  ULONG_PTR v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // r8
  int i; // r13d
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  ULONG_PTR v25; // rsi
  unsigned int v26; // ebp
  ULONG_PTR v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  ULONG_PTR v34; // r10
  unsigned int v36; // [rsp+20h] [rbp-98h]
  unsigned int v37; // [rsp+24h] [rbp-94h]
  unsigned int v38; // [rsp+28h] [rbp-90h]
  unsigned int v39; // [rsp+2Ch] [rbp-8Ch]
  ULONG_PTR v40; // [rsp+30h] [rbp-88h]
  char *v41; // [rsp+38h] [rbp-80h]
  ULONG_PTR v42; // [rsp+40h] [rbp-78h]
  _IMAGE_NT_HEADERS64 *v44; // [rsp+50h] [rbp-68h]
  _BYTE v45[36]; // [rsp+58h] [rbp-60h] BYREF
  int v46; // [rsp+7Ch] [rbp-3Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  if ( (*(_BYTE *)(8 * ((v1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (LOBYTE(SizeOfOptionalHeader) = *(_BYTE *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81,
        (_BYTE)SizeOfOptionalHeader != 0x81) )
  {
    v37 = 0;
    v4 = RtlImageNtHeader((PVOID)v1);
    v44 = v4;
    v5 = 0;
    if ( v1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
      v37 = 1;
    else
      v5 = (*(_DWORD *)(v2 + 104) & 0x8000000) == 0;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v7 = v4->FileHeader.NumberOfSections;
    v8 = v1;
    SizeOfOptionalHeader = v4->FileHeader.SizeOfOptionalHeader;
    v9 = (char *)&v4->OptionalHeader + SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      v10 = v9 + 16;
      while ( 1 )
      {
        v11 = (char *)(v1 + (unsigned int)*(v10 - 1));
        if ( (unsigned __int64)v11 < v8 )
          break;
        v12 = (unsigned int)*(v10 - 2);
        SectionAlignment = v4->OptionalHeader.SectionAlignment;
        if ( *v10 >= (unsigned int)v12 )
          v12 = (unsigned int)*v10;
        v10 += 10;
        SizeOfOptionalHeader = ~(SectionAlignment - 1);
        v8 = SizeOfOptionalHeader & (unsigned __int64)&v11[SectionAlignment - 1 + v12];
        if ( !--v7 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v14 = 0LL;
      v40 = 0LL;
      LOBYTE(SizeOfOptionalHeader) = 0;
      v15 = 3221225472LL;
      v16 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39 = -1073741824;
      v17 = 0;
      v18 = (unsigned __int64)&v9[40 * NumberOfSections - 1];
      v36 = 0;
      v19 = v16 + 8LL * (((v4->OptionalHeader.SizeOfImage & 0xFFF) != 0) + (v4->OptionalHeader.SizeOfImage >> 12));
      v42 = v19;
      for ( i = NumberOfSections + 1; i; --i )
      {
        if ( i == 1 )
        {
          v46 = 0;
          v9 = v45;
          v41 = 0LL;
          v23 = v18;
          v38 = 0;
          v24 = 0x97FFFFFFFF8LL;
        }
        else
        {
          v21 = *((_DWORD *)v9 + 2);
          v22 = *((unsigned int *)v9 + 3);
          if ( *((_DWORD *)v9 + 4) >= v21 )
            v21 = *((_DWORD *)v9 + 4);
          v41 = (char *)(v1 + v22);
          v23 = v1 + v22;
          v38 = v21;
          v24 = 0x98000000000LL;
          v17 = v36;
        }
        v25 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - v24;
        if ( v14 && v25 > v14 )
        {
          v33 = MiComputeDriverProtection(v37, v17);
          MiSetSystemCodeProtection(v2, v34, v34, v33);
          if ( v40 == v16 )
            v16 += 8LL;
          v4 = v44;
          v14 = 0LL;
          v15 = v39;
          v17 = 0;
          v19 = v42;
          v36 = 0;
          v40 = 0LL;
        }
        if ( v25 >= v19 )
        {
          SizeOfOptionalHeader = (__int64)v45;
          if ( v9 != v45 )
            break;
        }
        v26 = *((_DWORD *)v9 + 9) & 0xE0000000;
        if ( v5 )
        {
          v17 = v36;
          if ( (MiFlags & 0x30000) == 0 || (*((_DWORD *)v9 + 9) & 0x20000000) == 0 )
            v26 = *((_DWORD *)v9 + 9) & 0x60000000 | 0x80000000;
        }
        if ( v26 == (_DWORD)v15 && (v32 = v4->OptionalHeader.SectionAlignment, v32 <= 0x1000) )
        {
          v15 = v39;
          v29 = v32;
        }
        else
        {
          v27 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v27 == v25 )
          {
            v40 = v25;
            v27 -= 8LL;
            v14 = v25;
            v36 = v15 | v26 | v17;
          }
          if ( v27 >= v16 )
          {
            if ( v27 >= v19 )
              v27 = v19 - 8;
            v28 = MiComputeDriverProtection(v37, v15);
            MiSetSystemCodeProtection(a1, v16, v27, v28);
            v14 = v40;
            v4 = v44;
            v19 = v42;
          }
          v29 = v4->OptionalHeader.SectionAlignment;
          v15 = v26;
          v39 = v26;
          v16 = v25;
        }
        v9 += 40;
        v2 = a1;
        v30 = (__int64)&v41[v29 - 1 + v38];
        v31 = v29 - 1;
        v17 = v36;
        SizeOfOptionalHeader = ~v31;
        v18 = (SizeOfOptionalHeader & v30) - 1;
      }
    }
  }
  return SizeOfOptionalHeader;
}
