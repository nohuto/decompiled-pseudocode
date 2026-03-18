/*
 * XREFs of MiConstructLoaderEntry @ 0x140576044
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiInitializeLoadedModuleList @ 0x1407D9810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiProcessLoaderEntry @ 0x1400253E0 (MiProcessLoaderEntry.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404531A0 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovGetSectionInfo @ 0x140576758 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x1405767B4 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140576874 (MiCaptureImageExceptionValues.c)
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
  __int64 v34; // r9
  char *v35; // rbx
  char *v36; // r14
  char *v37; // rcx
  __int128 v38; // xmm0
  int v39; // r13d
  unsigned __int64 v40; // r15
  __int64 v41; // rbp
  __int64 v42; // r14
  __int16 v43; // r8
  unsigned __int64 v44; // rsi
  __int64 SectionInfo; // rax
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v50; // r8d
  char *v51; // r15
  unsigned __int64 v52; // rcx
  unsigned int v53; // eax
  int v54; // edx
  unsigned __int64 v55; // r13
  unsigned int v56; // r8d
  char *v57; // rbx
  _IMAGE_DATA_DIRECTORY *v58; // r12
  __int64 v59; // rbp
  unsigned int *v60; // r15
  __int64 v61; // rax
  unsigned int v62; // ecx
  unsigned int v63; // r8d
  unsigned __int128 v64; // rax
  unsigned int v65; // ebx
  int v66; // [rsp+20h] [rbp-108h]
  _IMAGE_DATA_DIRECTORY *v67; // [rsp+28h] [rbp-100h]
  unsigned int v68; // [rsp+28h] [rbp-100h]
  int v69; // [rsp+30h] [rbp-F8h] BYREF
  char *v70; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v71; // [rsp+40h] [rbp-E8h]
  PVOID P[2]; // [rsp+48h] [rbp-E0h]
  __int64 v73; // [rsp+58h] [rbp-D0h]
  char *v74; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v75; // [rsp+68h] [rbp-C0h]
  __int64 v76[23]; // [rsp+70h] [rbp-B8h] BYREF
  int v79; // [rsp+140h] [rbp+18h]
  unsigned int v80; // [rsp+140h] [rbp+18h]

  v8 = *a3;
  v10 = 0LL;
  v71 = 0LL;
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
  v70 = v17;
  v18 = RtlImageNtHeader(v17);
  v19 = v18;
  v20 = a4 & 1;
  v66 = v20;
  if ( (a4 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v79 = 0;
  }
  else
  {
    NumberOfSections = v18->FileHeader.NumberOfSections;
    v79 = v18->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v65 = -1073741520;
      goto LABEL_77;
    }
  }
  v67 = 0LL;
  v22 = 0LL;
  v23 = 0;
  if ( v20 )
  {
    v23 = 32;
    if ( v18->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v18->OptionalHeader.DataDirectory[6].VirtualAddress;
      v67 = &v19->OptionalHeader.DataDirectory[6];
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
              v50 = 0;
              v51 = &v17[VirtualAddress];
              v52 = Size / 0x1C;
              if ( v52 )
              {
                do
                {
                  v53 = *((_DWORD *)v51 + 5);
                  if ( v53 )
                  {
                    if ( v53 < SizeOfImage )
                    {
                      v54 = *((_DWORD *)v51 + 4);
                      if ( v54 + v53 < SizeOfImage )
                        v23 += v54;
                    }
                  }
                  ++v50;
                  v51 += 28;
                }
                while ( v50 < v52 );
              }
              v22 = &v51[-28 * v50];
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
  v75 = v25;
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
    v65 = -1073741701;
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
  v74 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x644C6D4Du);
  v10 = v74;
  if ( !v74 )
    goto LABEL_76;
  v29 = *(_QWORD *)(a1 + 112);
  v73 = v29;
  if ( v29 )
  {
    v30 = *(_QWORD *)MiSectionControlArea(v29);
    v32 = v31;
    LOBYTE(v32) = (*(_DWORD *)(v30 + 8) & 0xFFF) != 0;
    v33 = (unsigned int)(v32 + (*(_DWORD *)(v30 + 8) >> 12));
    v11 = (unsigned int)v33;
    v71 = (unsigned int)v33;
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, v33, v31, v34) )
    {
      v11 = 0LL;
      goto LABEL_76;
    }
    _InterlockedExchangeAdd64(&qword_14034FB18, (unsigned int)v11);
  }
  memset(v74, 0, v28);
  v35 = v74 + 160;
  v36 = &v74[v75 + 248];
  *((_QWORD *)v74 + 30) = v74 + 248;
  v37 = &v36[v23];
  *((_QWORD *)v10 + 29) = v36;
  *((_QWORD *)v10 + 27) = v11;
  if ( v79 )
    *((_QWORD *)v10 + 28) = &v37[v27];
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
  *((_QWORD *)v10 + 12) = v37;
  *((_WORD *)v10 + 44) = *(_WORD *)a2;
  *((_WORD *)v10 + 45) = *(_WORD *)a2;
  memmove(v37, a2[1], *(unsigned __int16 *)a2);
  v38 = *(_OWORD *)P;
  v39 = v66;
  *(_WORD *)(*((_QWORD *)v10 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v10 + 5) = 0LL;
  *(_OWORD *)(v10 + 72) = v38;
  if ( !v66 )
    goto LABEL_23;
  *((_DWORD *)v10 + 26) |= 0x20000000u;
  *((_QWORD *)v10 + 5) = v36;
  *(_DWORD *)v36 = 84302;
  *((_DWORD *)v36 + 1) = v23;
  *((_WORD *)v36 + 4) = v19->FileHeader.Machine;
  *((_WORD *)v36 + 5) = v19->FileHeader.Characteristics;
  *((_DWORD *)v36 + 3) = v19->FileHeader.TimeDateStamp;
  *((_DWORD *)v36 + 4) = v19->OptionalHeader.CheckSum;
  *((_DWORD *)v36 + 5) = v19->OptionalHeader.SizeOfImage;
  *((_QWORD *)v36 + 3) = v70;
  if ( !v22 )
    goto LABEL_23;
  memmove(v36 + 32, v22, v67->Size);
  v55 = v67->Size;
  v80 = 0;
  v56 = 0;
  if ( !(v55 / 0x1C) )
    goto LABEL_67;
  v57 = v70;
  v58 = v67;
  v59 = 0LL;
  v60 = (unsigned int *)(v22 + 16);
  do
  {
    v61 = v60[1];
    v62 = *v60;
    v68 = *v60;
    if ( (_DWORD)v61 )
    {
      v63 = v19->OptionalHeader.SizeOfImage;
      if ( (unsigned int)v61 < v63 && v62 + (unsigned int)v61 > (unsigned int)v61 && v62 + (unsigned int)v61 < v63 )
      {
        memmove(&v36[(unsigned int)v55 + 32], &v57[v61], v62);
        v56 = v80;
        *(_DWORD *)&v36[28 * v59 + 52] = v55;
        LODWORD(v55) = v68 + v55;
        goto LABEL_65;
      }
      v56 = v80;
    }
    *(_DWORD *)&v36[28 * v59 + 52] = 0;
LABEL_65:
    v59 = ++v56;
    v64 = v58->Size * (unsigned __int128)0x2492492492492493uLL;
    v60 += 7;
    v80 = v56;
  }
  while ( v56 < (*((_QWORD *)&v64 + 1) + (((unsigned __int64)v58->Size - *((_QWORD *)&v64 + 1)) >> 1)) >> 4 );
  v10 = v74;
  v11 = v71;
  v35 = v74 + 160;
LABEL_67:
  v39 = v66;
LABEL_23:
  v40 = (unsigned __int64)v70;
  v41 = v73;
  *((_QWORD *)v10 + 7) = &v70[v19->OptionalHeader.AddressOfEntryPoint];
  *((_DWORD *)v10 + 30) = v19->OptionalHeader.CheckSum;
  if ( v41 )
  {
    v42 = MiSectionControlArea(v41);
    v43 = *((_WORD *)v10 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v42 + 15LL) >> 4);
    *((_WORD *)v10 + 55) = v43;
    *((_WORD *)v10 + 55) = v43 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v42 + 15LL) >> 1) & 7));
  }
  else
  {
    v42 = 0LL;
  }
  *((_DWORD *)v10 + 38) = v19->OptionalHeader.SizeOfImage;
  *((_DWORD *)v10 + 39) = v19->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v10);
  MiLockdownSections(v10);
  if ( v41 )
    v44 = *(unsigned int *)(*(_QWORD *)v42 + 8LL);
  else
    v44 = (unsigned __int64)*((unsigned int *)v10 + 16) >> 12;
  if ( v39 )
  {
LABEL_30:
    if ( a5 == 1 )
      *((_DWORD *)v35 + 9) &= 0xFFFFFFFC;
    else
      *((_DWORD *)v35 + 9) = *((_DWORD *)v35 + 9) & 0xFFFFFFFC | 1;
    if ( (dword_1403D00D8 & 1) != 0 || (a4 & 2) != 0 )
      *((_DWORD *)v35 + 9) |= 4u;
    *((_QWORD *)v10 + 16) = 0LL;
    if ( ExCovMaxPagedPoolToUse )
    {
      SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v10 + 6), &v69);
      if ( SectionInfo )
      {
        *((_DWORD *)v10 + 31) = v69;
        *((_QWORD *)v10 + 16) = SectionInfo;
        DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v10);
        ExCovReadjustUnloadedModuleEntry((__int64)v10, 1);
      }
    }
    MiProcessLoaderEntry((PVOID *)v10, 1);
    if ( !v39 )
    {
      if ( v41 )
      {
        *((_DWORD *)v35 + 8) = -2;
        *((_QWORD *)v35 + 2) = v40 | 3;
        *((_QWORD *)v35 + 3) = (v44 << 12) + v40 - 1;
        v76[0] = v42;
        MiManageSubsectionView(v76, v35, 3);
      }
    }
    *a6 = v10;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)MiChargeWsles((__int64)dword_14034FF40, v44, 0) )
    {
      *((_QWORD *)v35 + 5) = v44;
      *((_QWORD *)v35 + 6) = v44;
      goto LABEL_30;
    }
LABEL_76:
    v65 = -1073741670;
LABEL_77:
    ExFreePoolWithTag(P[1], 0);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    if ( v11 )
    {
      MiReturnResidentAvailable(v11);
      _InterlockedExchangeAdd64(&qword_14034FB20, v11);
    }
    return v65;
  }
}
