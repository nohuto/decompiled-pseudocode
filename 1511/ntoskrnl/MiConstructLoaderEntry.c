/*
 * XREFs of MiConstructLoaderEntry @ 0x1403CE188
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiInitializeLoadedModuleList @ 0x14074BAF4 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiProcessLoaderEntry @ 0x14001A270 (MiProcessLoaderEntry.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpCovGetSectionInfo @ 0x1403CFE54 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x1403CFEB0 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x1403CFF70 (MiCaptureImageExceptionValues.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404C64C4 (ExCovReadjustUnloadedModuleEntry.c)
 */

__int64 __fastcall MiConstructLoaderEntry(
        __int64 a1,
        const void **a2,
        unsigned __int16 *a3,
        char a4,
        int a5,
        char **a6)
{
  __int64 v8; // rdx
  char *v10; // rdi
  unsigned __int64 v11; // r12
  PVOID PoolWithTag; // rax
  _WORD *v14; // rsi
  size_t v15; // r8
  const void *v16; // rdx
  char *v17; // rbx
  PIMAGE_NT_HEADERS v18; // rax
  PIMAGE_NT_HEADERS v19; // rsi
  int v20; // r8d
  unsigned __int64 NumberOfSections; // r10
  char *v22; // r15
  unsigned int v23; // ebp
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r13
  SIZE_T v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  unsigned __int64 v33; // rdx
  char *v34; // rbx
  char *v35; // r14
  char *v36; // rcx
  __int128 v37; // xmm0
  int v38; // r13d
  unsigned __int64 v39; // r15
  __int64 v40; // rbp
  __int64 v41; // r14
  __int16 v42; // r8
  unsigned __int64 v43; // rsi
  __int64 SectionInfo; // rax
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v49; // r8d
  char *v50; // r15
  unsigned __int64 v51; // rcx
  unsigned int v52; // eax
  int v53; // edx
  unsigned __int64 v54; // r13
  unsigned int v55; // r8d
  char *v56; // rbx
  _IMAGE_DATA_DIRECTORY *v57; // r12
  __int64 v58; // rbp
  unsigned int *v59; // r15
  __int64 v60; // rax
  unsigned int v61; // ecx
  unsigned int v62; // r8d
  unsigned __int128 v63; // rax
  unsigned int v64; // ebx
  int v65; // [rsp+20h] [rbp-108h]
  _IMAGE_DATA_DIRECTORY *v66; // [rsp+28h] [rbp-100h]
  unsigned int v67; // [rsp+28h] [rbp-100h]
  int v68; // [rsp+30h] [rbp-F8h] BYREF
  char *v69; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v70; // [rsp+40h] [rbp-E8h]
  PVOID P[2]; // [rsp+48h] [rbp-E0h]
  __int64 v72; // [rsp+58h] [rbp-D0h]
  char *v73; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+68h] [rbp-C0h]
  __int64 v75[23]; // [rsp+70h] [rbp-B8h] BYREF
  int v78; // [rsp+140h] [rbp+18h]
  unsigned int v79; // [rsp+140h] [rbp+18h]

  v8 = *a3;
  v10 = 0LL;
  v70 = 0LL;
  *a6 = 0LL;
  v11 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)257, v8 + 2, 0x54446D4Du);
  P[1] = PoolWithTag;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v15 = *a3;
  v16 = (const void *)*((_QWORD *)a3 + 1);
  LOWORD(P[0]) = v15;
  WORD1(P[0]) = v15;
  memmove(PoolWithTag, v16, v15);
  v14[(unsigned __int64)*a3 >> 1] = 0;
  v17 = *(char **)(a1 + 48);
  v69 = v17;
  v18 = RtlImageNtHeader(v17);
  v19 = v18;
  v20 = a4 & 1;
  v65 = v20;
  if ( (a4 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v78 = 0;
  }
  else
  {
    NumberOfSections = v18->FileHeader.NumberOfSections;
    v78 = v18->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v64 = -1073741520;
      goto LABEL_77;
    }
  }
  v66 = 0LL;
  v22 = 0LL;
  v23 = 0;
  if ( v20 )
  {
    v23 = 32;
    if ( v18->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v18->OptionalHeader.DataDirectory[6].VirtualAddress;
      v66 = &v19->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v19->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v19->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v23 = Size + 32;
              v49 = 0;
              v50 = &v17[VirtualAddress];
              v51 = Size / 0x1C;
              if ( v51 )
              {
                do
                {
                  v52 = *((_DWORD *)v50 + 5);
                  if ( v52 )
                  {
                    if ( v52 < SizeOfImage )
                    {
                      v53 = *((_DWORD *)v50 + 4);
                      if ( v53 + v52 < SizeOfImage )
                        v23 += v53;
                    }
                  }
                  ++v49;
                  v50 += 28;
                }
                while ( v49 < v51 );
              }
              v22 = &v50[-28 * v49];
            }
          }
        }
      }
      v23 = (v23 + 7) & 0xFFFFFFF8;
    }
  }
  v24 = ((v19->OptionalHeader.SizeOfImage & 0xFFF) != 0) + (v19->OptionalHeader.SizeOfImage >> 12);
  v25 = 8 * (((v24 & 0x3F) != 0) + (v24 >> 6)) + 16;
  v26 = v25 + 250;
  v74 = v25;
  if ( v25 >= 0xFFFFFFFFFFFFFF06uLL || v25 == 0 )
    goto LABEL_74;
  if ( v23 )
  {
    if ( v26 + v23 <= v26 )
      goto LABEL_74;
    v26 += v23;
  }
  v27 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v28 = v26 + v27;
  if ( v26 + v27 <= v26 )
  {
LABEL_74:
    v64 = -1073741701;
    goto LABEL_77;
  }
  if ( (_DWORD)NumberOfSections )
  {
    if ( v28 + 4LL * (unsigned int)NumberOfSections > v28 )
    {
      v28 += 4LL * (unsigned int)NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_74;
  }
LABEL_11:
  v73 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x644C6D4Du);
  v10 = v73;
  if ( !v73 )
    goto LABEL_76;
  v29 = *(_QWORD *)(a1 + 112);
  v72 = v29;
  if ( v29 )
  {
    v30 = *(_QWORD *)MiSectionControlArea(v29);
    v32 = v31;
    LOBYTE(v32) = (*(_DWORD *)(v30 + 8) & 0xFFF) != 0;
    v33 = (unsigned int)(v32 + (*(_DWORD *)(v30 + 8) >> 12));
    v11 = (unsigned int)v33;
    v70 = (unsigned int)v33;
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, v33, v31) )
    {
      v11 = 0LL;
      goto LABEL_76;
    }
    _InterlockedExchangeAdd64(&qword_1402FF658, (unsigned int)v11);
  }
  memset(v73, 0, v28);
  v34 = v73 + 160;
  v35 = &v73[v74 + 248];
  *((_QWORD *)v73 + 30) = v73 + 248;
  v36 = &v35[v23];
  *((_QWORD *)v10 + 29) = v35;
  *((_QWORD *)v10 + 27) = v11;
  if ( v78 )
    *((_QWORD *)v10 + 28) = &v36[v27];
  *(_OWORD *)v10 = *(_OWORD *)a1;
  *((_OWORD *)v10 + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)v10 + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v10 + 3) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v10 + 4) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)v10 + 5) = *(_OWORD *)(a1 + 80);
  *((_OWORD *)v10 + 6) = *(_OWORD *)(a1 + 96);
  *((_OWORD *)v10 + 7) = *(_OWORD *)(a1 + 112);
  *((_OWORD *)v10 + 8) = *(_OWORD *)(a1 + 128);
  *((_OWORD *)v10 + 9) = *(_OWORD *)(a1 + 144);
  if ( v19->OptionalHeader.MajorOperatingSystemVersion >= 5u && v19->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v10 + 26) |= 0x8000000u;
  if ( (v19->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v10 + 26) |= 0x20u;
  *((_QWORD *)v10 + 12) = v36;
  *((_WORD *)v10 + 44) = *(_WORD *)a2;
  *((_WORD *)v10 + 45) = *(_WORD *)a2;
  memmove(v36, a2[1], *(unsigned __int16 *)a2);
  v37 = *(_OWORD *)P;
  v38 = v65;
  *(_WORD *)(*((_QWORD *)v10 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v10 + 5) = 0LL;
  *(_OWORD *)(v10 + 72) = v37;
  if ( !v65 )
    goto LABEL_23;
  *((_DWORD *)v10 + 26) |= 0x20000000u;
  *((_QWORD *)v10 + 5) = v35;
  *(_DWORD *)v35 = 84302;
  *((_DWORD *)v35 + 1) = v23;
  *((_WORD *)v35 + 4) = v19->FileHeader.Machine;
  *((_WORD *)v35 + 5) = v19->FileHeader.Characteristics;
  *((_DWORD *)v35 + 3) = v19->FileHeader.TimeDateStamp;
  *((_DWORD *)v35 + 4) = v19->OptionalHeader.CheckSum;
  *((_DWORD *)v35 + 5) = v19->OptionalHeader.SizeOfImage;
  *((_QWORD *)v35 + 3) = v69;
  if ( !v22 )
    goto LABEL_23;
  memmove(v35 + 32, v22, v66->Size);
  v54 = v66->Size;
  v79 = 0;
  v55 = 0;
  if ( !(v54 / 0x1C) )
    goto LABEL_66;
  v56 = v69;
  v57 = v66;
  v58 = 0LL;
  v59 = (unsigned int *)(v22 + 16);
  do
  {
    v60 = v59[1];
    v61 = *v59;
    v67 = *v59;
    if ( (_DWORD)v60 )
    {
      v62 = v19->OptionalHeader.SizeOfImage;
      if ( (unsigned int)v60 < v62 && v61 + (unsigned int)v60 > (unsigned int)v60 && v61 + (unsigned int)v60 < v62 )
      {
        memmove(&v35[(unsigned int)v54 + 32], &v56[v60], v61);
        v55 = v79;
        *(_DWORD *)&v35[28 * v58 + 52] = v54;
        LODWORD(v54) = v67 + v54;
        goto LABEL_64;
      }
      v55 = v79;
    }
    *(_DWORD *)&v35[28 * v58 + 52] = 0;
LABEL_64:
    v58 = ++v55;
    v63 = v57->Size * (unsigned __int128)0x2492492492492493uLL;
    v59 += 7;
    v79 = v55;
  }
  while ( v55 < (*((_QWORD *)&v63 + 1) + (((unsigned __int64)v57->Size - *((_QWORD *)&v63 + 1)) >> 1)) >> 4 );
  v10 = v73;
  v11 = v70;
  v34 = v73 + 160;
LABEL_66:
  v38 = v65;
LABEL_23:
  v39 = (unsigned __int64)v69;
  v40 = v72;
  *((_QWORD *)v10 + 7) = &v69[v19->OptionalHeader.AddressOfEntryPoint];
  *((_DWORD *)v10 + 30) = v19->OptionalHeader.CheckSum;
  if ( v40 )
  {
    v41 = MiSectionControlArea(v40);
    v42 = *((_WORD *)v10 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v41 + 15LL) >> 4);
    *((_WORD *)v10 + 55) = v42;
    *((_WORD *)v10 + 55) = v42 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v41 + 15LL) >> 1) & 7));
  }
  else
  {
    v41 = 0LL;
  }
  *((_DWORD *)v10 + 38) = v19->OptionalHeader.SizeOfImage;
  *((_DWORD *)v10 + 39) = v19->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v10);
  MiLockdownSections(v10);
  if ( v40 )
    v43 = *(unsigned int *)(*(_QWORD *)v41 + 8LL);
  else
    v43 = (unsigned __int64)*((unsigned int *)v10 + 16) >> 12;
  if ( v38 )
  {
LABEL_30:
    if ( a5 == 1 )
      *((_DWORD *)v34 + 9) &= 0xFFFFFFFC;
    else
      *((_DWORD *)v34 + 9) = *((_DWORD *)v34 + 9) & 0xFFFFFFFC | 1;
    if ( (dword_1403810E8 & 1) != 0 || (a4 & 2) != 0 )
      *((_DWORD *)v34 + 9) |= 4u;
    *((_QWORD *)v10 + 16) = 0LL;
    if ( ExCovMaxPagedPoolToUse )
    {
      SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v10 + 6), &v68);
      if ( SectionInfo )
      {
        *((_DWORD *)v10 + 31) = v68;
        *((_QWORD *)v10 + 16) = SectionInfo;
        DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v10);
        ExCovReadjustUnloadedModuleEntry(v10, 1LL);
      }
    }
    MiProcessLoaderEntry(v10, 1);
    if ( !v38 )
    {
      if ( v40 )
      {
        *((_DWORD *)v34 + 8) = -2;
        *((_QWORD *)v34 + 2) = v39 | 3;
        *((_QWORD *)v34 + 3) = (v43 << 12) + v39 - 1;
        v75[0] = v41;
        MiManageSubsectionView((__int64)v75, v34, 3);
      }
    }
    *a6 = v10;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)MiChargeWsles((ULONG_PTR)&dword_1402FFA80, v43, 0LL) )
    {
      *((_QWORD *)v34 + 5) = v43;
      *((_QWORD *)v34 + 6) = v43;
      goto LABEL_30;
    }
LABEL_76:
    v64 = -1073741670;
LABEL_77:
    ExFreePoolWithTag(P[1], 0);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    if ( v11 )
    {
      MiReturnResidentAvailable(v11);
      _InterlockedExchangeAdd64(&qword_1402FF660, v11);
    }
    return v64;
  }
}
