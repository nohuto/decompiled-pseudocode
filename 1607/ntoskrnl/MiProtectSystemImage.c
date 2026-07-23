/*
 * XREFs of MiProtectSystemImage @ 0x140554204
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x1405541A0 (MiWriteProtectSystemImages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiComputeDriverProtection @ 0x1405544F8 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectSystemImage(__int64 a1)
{
  char *v1; // rbx
  __int64 result; // rax
  int v4; // r12d
  PIMAGE_NT_HEADERS v5; // r11
  __int64 NumberOfSections; // r13
  int v7; // r10d
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  _BYTE *v10; // rbp
  _DWORD *v11; // r9
  char *v12; // r8
  __int64 v13; // rdx
  __int64 SectionAlignment; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  _QWORD *v17; // rdi
  int i; // r13d
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 PteAddress; // rax
  int v22; // r9d
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r8
  unsigned int v26; // edi
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // r8
  unsigned int v30; // r9d
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r10
  int v33; // eax
  unsigned __int64 v34; // r10
  _QWORD *v35; // r11
  __int64 v36; // rcx
  unsigned int v37; // eax
  int v38; // eax
  unsigned int v39; // [rsp+20h] [rbp-98h]
  unsigned int v40; // [rsp+24h] [rbp-94h]
  unsigned int v41; // [rsp+28h] [rbp-90h]
  int v42; // [rsp+2Ch] [rbp-8Ch]
  unsigned __int64 v43; // [rsp+30h] [rbp-88h]
  _QWORD *v44; // [rsp+38h] [rbp-80h]
  char *v45; // [rsp+40h] [rbp-78h]
  _QWORD *v46; // [rsp+48h] [rbp-70h]
  PIMAGE_NT_HEADERS v48; // [rsp+58h] [rbp-60h]
  _BYTE v49[36]; // [rsp+60h] [rbp-58h] BYREF
  int v50; // [rsp+84h] [rbp-34h]

  v1 = *(char **)(a1 + 48);
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    v4 = 0;
    v40 = 0;
    v5 = RtlImageNtHeader(v1);
    v48 = v5;
    if ( (unsigned __int64)v1 >= qword_140326950 && (unsigned __int64)v1 < qword_140326950 + 0x8000000000LL )
    {
      v40 = 1;
    }
    else if ( (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    {
      v4 = 1;
    }
    NumberOfSections = v5->FileHeader.NumberOfSections;
    v7 = v5->FileHeader.NumberOfSections;
    v8 = (unsigned __int64)v1;
    v9 = ((v5->OptionalHeader.SizeOfImage & 0xFFF) != 0) + (v5->OptionalHeader.SizeOfImage >> 12);
    result = v5->FileHeader.SizeOfOptionalHeader;
    v10 = (char *)&v5->OptionalHeader + result;
    if ( v5->FileHeader.NumberOfSections )
    {
      v11 = v10 + 16;
      while ( 1 )
      {
        v12 = &v1[*(v11 - 1)];
        if ( (unsigned __int64)v12 < v8 )
          break;
        v13 = (unsigned int)*(v11 - 2);
        SectionAlignment = v5->OptionalHeader.SectionAlignment;
        if ( *v11 >= (unsigned int)v13 )
          v13 = (unsigned int)*v11;
        v11 += 10;
        result = ~(SectionAlignment - 1);
        v8 = result & (unsigned __int64)&v12[SectionAlignment - 1 + v13];
        if ( !--v7 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v42 = -1073741824;
      v15 = (unsigned __int64)&v10[40 * NumberOfSections - 1];
      result = MiGetPteAddress((unsigned __int64)v1);
      v44 = (_QWORD *)result;
      v39 = 0;
      v16 = result + 8 * v9;
      v17 = 0LL;
      v43 = v16;
      v46 = 0LL;
      for ( i = NumberOfSections + 1; i; --i )
      {
        if ( i == 1 )
        {
          v50 = 0;
          v10 = v49;
          v45 = 0LL;
          v41 = 0;
          v24 = MiGetPteAddress(v15) + 8;
        }
        else
        {
          v19 = *((_DWORD *)v10 + 2);
          v20 = *((unsigned int *)v10 + 3);
          if ( *((_DWORD *)v10 + 4) >= v19 )
            v19 = *((_DWORD *)v10 + 4);
          v41 = v19;
          v45 = &v1[v20];
          PteAddress = MiGetPteAddress((unsigned __int64)&v1[v20]);
          v23 = v39;
          v24 = PteAddress;
          v25 = v43;
        }
        if ( v17 && v24 > (unsigned __int64)v17 )
        {
          v38 = MiComputeDriverProtection(v40, v23, v25);
          MiSetSystemCodeProtection(a1, v17, (unsigned __int64)v17, v38);
          if ( v17 == v44 )
            ++v44;
          v22 = v42;
          v25 = v43;
          v39 = 0;
          v46 = 0LL;
        }
        if ( v24 >= v25 )
        {
          result = (__int64)v49;
          if ( v10 != v49 )
            break;
        }
        v26 = *((_DWORD *)v10 + 9) & 0xE0000000;
        if ( v4 == 1 && ((MiFlags & 0x4000) == 0 || (*((_DWORD *)v10 + 9) & 0x20000000) == 0) )
          v26 = *((_DWORD *)v10 + 9) & 0x60000000 | 0x80000000;
        if ( v26 == v22 && (v37 = v48->OptionalHeader.SectionAlignment, v37 <= 0x1000) )
        {
          v36 = v37;
        }
        else
        {
          v27 = MiGetPteAddress(v15);
          v32 = v27;
          if ( v27 == v24 )
          {
            v46 = (_QWORD *)v24;
            v32 = v27 - 8;
            v39 = v30 | v26 | v28;
          }
          if ( v32 >= v31 )
          {
            v33 = MiComputeDriverProtection(v40, v30, v29);
            MiSetSystemCodeProtection(a1, v35, v34, v33);
          }
          v44 = (_QWORD *)v24;
          v42 = v26;
          v36 = v48->OptionalHeader.SectionAlignment;
        }
        v10 += 40;
        v17 = v46;
        result = ~(v36 - 1);
        v15 = (result & (unsigned __int64)&v45[v36 - 1 + v41]) - 1;
      }
    }
  }
  return result;
}
