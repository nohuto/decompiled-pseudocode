/*
 * XREFs of MiProtectSystemImage @ 0x140520C80
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x140520C1C (MiWriteProtectSystemImages.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiComputeDriverProtection @ 0x140520F94 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectSystemImage(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  BOOL v4; // r15d
  __int64 NumberOfSections; // r12
  int v6; // r10d
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  _BYTE *v9; // rsi
  _DWORD *v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 SectionAlignment; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 PteAddress; // r13
  unsigned __int64 v16; // rdi
  int i; // r12d
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned int v21; // edi
  __int64 v22; // rax
  unsigned __int64 v23; // r10
  int v24; // eax
  unsigned __int64 v25; // r10
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-98h]
  unsigned int v30; // [rsp+24h] [rbp-94h]
  unsigned int v31; // [rsp+28h] [rbp-90h]
  unsigned int v32; // [rsp+2Ch] [rbp-8Ch]
  __int64 v33; // [rsp+30h] [rbp-88h]
  unsigned __int64 v34; // [rsp+38h] [rbp-80h]
  PIMAGE_NT_HEADERS v36; // [rsp+48h] [rbp-70h]
  unsigned __int64 v37; // [rsp+50h] [rbp-68h]
  _BYTE v38[36]; // [rsp+58h] [rbp-60h] BYREF
  int v39; // [rsp+7Ch] [rbp-3Ch]

  v1 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (result = MiGetPdeAddress(v1), (*(_BYTE *)result & 0x81) != 0x81) )
  {
    v36 = RtlImageNtHeader((PVOID)v1);
    v31 = 0;
    v4 = 0;
    if ( v1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
      v31 = 1;
    else
      v4 = (*(_DWORD *)(a1 + 104) & 0x8000000) == 0;
    NumberOfSections = v36->FileHeader.NumberOfSections;
    v6 = v36->FileHeader.NumberOfSections;
    v7 = v1;
    v8 = ((v36->OptionalHeader.SizeOfImage & 0xFFF) != 0) + (v36->OptionalHeader.SizeOfImage >> 12);
    result = v36->FileHeader.SizeOfOptionalHeader;
    v9 = (char *)&v36->OptionalHeader + result;
    if ( v36->FileHeader.NumberOfSections )
    {
      v10 = v9 + 16;
      while ( 1 )
      {
        v11 = v1 + (unsigned int)*(v10 - 1);
        if ( v11 < v7 )
          break;
        v12 = (unsigned int)*(v10 - 2);
        SectionAlignment = v36->OptionalHeader.SectionAlignment;
        if ( *v10 >= (unsigned int)v12 )
          v12 = (unsigned int)*v10;
        v10 += 10;
        result = ~(SectionAlignment - 1);
        v7 = result & (v11 + SectionAlignment + v12 - 1);
        if ( !--v6 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v29 = -1073741824;
      v14 = (unsigned __int64)&v9[40 * NumberOfSections - 1];
      PteAddress = MiGetPteAddress(v1);
      v34 = 0LL;
      v30 = 0;
      result = PteAddress + 8 * v8;
      v16 = 0LL;
      v37 = result;
      for ( i = NumberOfSections + 1; i; --i )
      {
        if ( i == 1 )
        {
          v39 = 0;
          v9 = v38;
          v33 = 0LL;
          v32 = 0;
          v20 = MiGetPteAddress(v14) + 8;
        }
        else
        {
          v18 = *((_DWORD *)v9 + 2);
          v19 = *((unsigned int *)v9 + 3);
          if ( *((_DWORD *)v9 + 4) >= v18 )
            v18 = *((_DWORD *)v9 + 4);
          v32 = v18;
          v33 = v1 + v19;
          v20 = MiGetPteAddress(v1 + v19);
        }
        if ( v16 && v20 > v16 )
        {
          v28 = MiComputeDriverProtection(v31, v30);
          MiSetSystemCodeProtection(a1, v16, v16, v28);
          if ( v16 == PteAddress )
            PteAddress += 8LL;
          v30 = 0;
          v34 = 0LL;
        }
        if ( v20 >= v37 )
        {
          result = (__int64)v38;
          if ( v9 != v38 )
            break;
        }
        v21 = *((_DWORD *)v9 + 9) & 0xE0000000;
        if ( v4 && ((MiFlags & 0x10000) == 0 || (*((_DWORD *)v9 + 9) & 0x20000000) == 0) )
          v21 = *((_DWORD *)v9 + 9) & 0x60000000 | 0x80000000;
        if ( v21 == v29 && (v27 = v36->OptionalHeader.SectionAlignment, v27 <= 0x1000) )
        {
          v26 = v27;
        }
        else
        {
          v22 = MiGetPteAddress(v14);
          v23 = v22;
          if ( v22 == v20 )
          {
            v34 = v20;
            v23 = v22 - 8;
            v30 |= v29 | v21;
          }
          if ( v23 >= PteAddress )
          {
            v24 = MiComputeDriverProtection(v31, v29);
            MiSetSystemCodeProtection(a1, PteAddress, v25, v24);
          }
          PteAddress = v20;
          v29 = v21;
          v26 = v36->OptionalHeader.SectionAlignment;
        }
        v9 += 40;
        v16 = v34;
        result = ~(v26 - 1);
        v14 = (result & (v26 + v32 + v33 - 1)) - 1;
      }
    }
  }
  return result;
}
