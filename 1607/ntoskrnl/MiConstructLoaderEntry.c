/*
 * XREFs of MiConstructLoaderEntry @ 0x14048115C
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MiInitializeLoadedModuleList @ 0x1407B1234 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiManageSubsectionView @ 0x1400138A0 (MiManageSubsectionView.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiProcessLoaderEntry @ 0x140082CAC (MiProcessLoaderEntry.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCaptureImageExceptionValues @ 0x140480EE0 (MiCaptureImageExceptionValues.c)
 *     ExpCovGetSectionInfo @ 0x1404826D8 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x140482734 (MiLockdownSections.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140547A34 (ExCovReadjustUnloadedModuleEntry.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, int a5, __int64 *a6)
{
  SIZE_T v9; // rdx
  char v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  PVOID PoolWithTag; // rax
  _WORD *v14; // rsi
  unsigned int v15; // ebx
  char *v16; // rbx
  PIMAGE_NT_HEADERS v17; // rax
  PIMAGE_NT_HEADERS v18; // rsi
  unsigned __int64 NumberOfSections; // r10
  char *v20; // r15
  unsigned int v21; // ebp
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v25; // r8d
  char *v26; // r15
  unsigned __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // r14
  unsigned __int64 v34; // r12
  SIZE_T v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  unsigned __int64 v40; // rdx
  _OWORD *v41; // rbx
  char *v42; // r14
  char *v43; // rcx
  int v44; // r12d
  unsigned int v45; // r12d
  unsigned int v46; // r8d
  __int64 v47; // rbp
  unsigned int *v48; // r15
  __int64 v49; // rax
  unsigned int v50; // r13d
  unsigned int v51; // edx
  unsigned __int128 v52; // rax
  __int64 v53; // r14
  __int16 v54; // r8
  unsigned __int64 v55; // rsi
  char *AnyMultiplexedVm; // rax
  __int64 SectionInfo; // rax
  int v59; // [rsp+20h] [rbp-E8h]
  unsigned int v60; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v61; // [rsp+28h] [rbp-E0h]
  _IMAGE_DATA_DIRECTORY *v62; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v63; // [rsp+38h] [rbp-D0h]
  PVOID P[2]; // [rsp+40h] [rbp-C8h]
  _OWORD *v65; // [rsp+50h] [rbp-B8h]
  __int64 v66; // [rsp+58h] [rbp-B0h]
  __int64 v67[21]; // [rsp+60h] [rbp-A8h] BYREF
  int v69; // [rsp+120h] [rbp+18h] BYREF
  int v70; // [rsp+128h] [rbp+20h]

  v70 = a4;
  v61 = 0LL;
  v9 = *(unsigned __int16 *)a3 + 2LL;
  *a6 = 0LL;
  v10 = a4;
  v11 = 0LL;
  v12 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x54446D4Du);
  P[1] = PoolWithTag;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  LOWORD(P[0]) = *(_WORD *)a3;
  WORD1(P[0]) = *(_WORD *)a3;
  memmove(PoolWithTag, a3[1], *(unsigned __int16 *)a3);
  v14[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v16 = *(char **)(a1 + 48);
  v63 = (unsigned __int64)v16;
  v17 = RtlImageNtHeader(v16);
  v18 = v17;
  v69 = v10 & 1;
  if ( (v10 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v59 = 0;
  }
  else
  {
    NumberOfSections = v17->FileHeader.NumberOfSections;
    v59 = v17->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v15 = -1073741520;
LABEL_65:
      ExFreePoolWithTag(P[1], 0);
      if ( v11 )
        ExFreePoolWithTag((PVOID)v11, 0);
      if ( v12 )
        MiReturnResidentAvailable(v12);
      return v15;
    }
  }
  v62 = 0LL;
  v20 = 0LL;
  v21 = 0;
  if ( (v10 & 1) != 0 )
  {
    v21 = 32;
    if ( v17->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v17->OptionalHeader.DataDirectory[6].VirtualAddress;
      v62 = &v18->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v18->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v18->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v21 = Size + 32;
              v25 = 0;
              v26 = &v16[VirtualAddress];
              v27 = Size / 0x1C;
              if ( v27 )
              {
                do
                {
                  v28 = *((_DWORD *)v26 + 5);
                  if ( v28 )
                  {
                    if ( v28 < SizeOfImage )
                    {
                      v29 = *((_DWORD *)v26 + 4);
                      if ( v29 + v28 < SizeOfImage )
                        v21 += v29;
                    }
                  }
                  ++v25;
                  v26 += 28;
                }
                while ( v25 < v27 );
              }
              v20 = &v26[-28 * v25];
            }
          }
        }
      }
      v21 = (v21 + 7) & 0xFFFFFFF8;
    }
  }
  v30 = ((v18->OptionalHeader.SizeOfImage & 0xFFF) != 0) + (v18->OptionalHeader.SizeOfImage >> 12);
  v31 = 8 * (((v30 & 0x3F) != 0) + (v30 >> 6)) + 16;
  v32 = v31 + 250;
  v33 = (unsigned int)v31;
  if ( v31 >= 0xFFFFFFFFFFFFFF06uLL || v31 == 0 )
  {
LABEL_22:
    v15 = -1073741701;
    v12 = 0LL;
    goto LABEL_65;
  }
  if ( v21 )
  {
    if ( v32 + v21 <= v32 )
      goto LABEL_22;
    v32 += v21;
  }
  v34 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v35 = v34 + v32;
  if ( v34 + v32 <= v32 )
    goto LABEL_22;
  if ( (_DWORD)NumberOfSections )
  {
    if ( v35 + 4LL * (unsigned int)NumberOfSections <= v35 )
      goto LABEL_22;
    v35 += 4LL * (unsigned int)NumberOfSections;
  }
  v65 = ExAllocatePoolWithTag(NonPagedPoolNx, v35, 0x644C6D4Du);
  v11 = (__int64)v65;
  if ( !v65 )
  {
    v12 = 0LL;
LABEL_64:
    v15 = -1073741670;
    goto LABEL_65;
  }
  v36 = *(_QWORD *)(a1 + 112);
  v66 = v36;
  if ( v36 )
  {
    v37 = *(_QWORD *)MiSectionControlArea(v36);
    v39 = v38;
    LOBYTE(v39) = (*(_DWORD *)(v37 + 8) & 0xFFF) != 0;
    v40 = (unsigned int)(v39 + (*(_DWORD *)(v37 + 8) >> 12));
    v61 = (unsigned int)v40;
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, v40, v38) )
    {
      v12 = 0LL;
      goto LABEL_64;
    }
  }
  memset(v65, 0, v35);
  v41 = v65 + 10;
  v42 = (char *)v65 + v33 + 248;
  *((_QWORD *)v65 + 30) = (char *)v65 + 248;
  v43 = &v42[v21];
  *((_QWORD *)v65 + 27) = v61;
  *((_QWORD *)v65 + 29) = v42;
  if ( v59 )
    *((_QWORD *)v65 + 28) = &v43[v34];
  *v65 = *(_OWORD *)a1;
  v65[1] = *(_OWORD *)(a1 + 16);
  v65[2] = *(_OWORD *)(a1 + 32);
  v65[3] = *(_OWORD *)(a1 + 48);
  v65[4] = *(_OWORD *)(a1 + 64);
  v65[5] = *(_OWORD *)(a1 + 80);
  v65[6] = *(_OWORD *)(a1 + 96);
  v65[7] = *(_OWORD *)(a1 + 112);
  v65[8] = *(_OWORD *)(a1 + 128);
  v65[9] = *(_OWORD *)(a1 + 144);
  if ( v18->OptionalHeader.MajorOperatingSystemVersion >= 5u && v18->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v65 + 26) |= 0x8000000u;
  if ( (v18->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v65 + 26) |= 0x20u;
  *((_QWORD *)v65 + 12) = v43;
  *((_WORD *)v65 + 44) = *(_WORD *)a2;
  *((_WORD *)v65 + 45) = *(_WORD *)a2;
  memmove(v43, a2[1], *(unsigned __int16 *)a2);
  v44 = v69;
  *(_WORD *)(*((_QWORD *)v65 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v65 + 5) = 0LL;
  *(_OWORD *)((char *)v65 + 72) = *(_OWORD *)P;
  if ( v44 )
  {
    *((_DWORD *)v65 + 26) |= 0x20000000u;
    *((_QWORD *)v65 + 5) = v42;
    *(_DWORD *)v42 = 84302;
    *((_DWORD *)v42 + 1) = v21;
    *((_WORD *)v42 + 4) = v18->FileHeader.Machine;
    *((_WORD *)v42 + 5) = v18->FileHeader.Characteristics;
    *((_DWORD *)v42 + 3) = v18->FileHeader.TimeDateStamp;
    *((_DWORD *)v42 + 4) = v18->OptionalHeader.CheckSum;
    *((_DWORD *)v42 + 5) = v18->OptionalHeader.SizeOfImage;
    *((_QWORD *)v42 + 3) = v63;
    if ( v20 )
    {
      memmove(v42 + 32, v20, v62->Size);
      v45 = v62->Size;
      v60 = 0;
      v46 = 0;
      if ( v45 / 0x1CuLL )
      {
        v47 = 0LL;
        v48 = (unsigned int *)(v20 + 16);
        do
        {
          v49 = v48[1];
          v50 = *v48;
          if ( (_DWORD)v49
            && (v51 = v18->OptionalHeader.SizeOfImage, (unsigned int)v49 < v51)
            && (unsigned int)v49 + v50 > (unsigned int)v49
            && (unsigned int)v49 + v50 < v51 )
          {
            memmove(&v42[v45 + 32], (const void *)(v63 + v49), v50);
            v46 = v60;
            *(_DWORD *)&v42[28 * v47 + 52] = v45;
            v45 += v50;
          }
          else
          {
            *(_DWORD *)&v42[28 * v47 + 52] = 0;
          }
          v47 = ++v46;
          v52 = v62->Size * (unsigned __int128)0x2492492492492493uLL;
          v48 += 7;
          v60 = v46;
        }
        while ( v46 < (*((_QWORD *)&v52 + 1) + (((unsigned __int64)v62->Size - *((_QWORD *)&v52 + 1)) >> 1)) >> 4 );
        v11 = (__int64)v65;
        v41 = v65 + 10;
      }
      v44 = v69;
    }
  }
  *(_QWORD *)(v11 + 56) = v63 + v18->OptionalHeader.AddressOfEntryPoint;
  *(_DWORD *)(v11 + 120) = v18->OptionalHeader.CheckSum;
  if ( v66 )
  {
    v53 = MiSectionControlArea(v66);
    v54 = *(_WORD *)(v11 + 110) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v53 + 15LL) >> 4);
    *(_WORD *)(v11 + 110) = v54;
    *(_WORD *)(v11 + 110) = v54 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v53 + 15LL) >> 1) & 7));
  }
  else
  {
    v53 = 0LL;
  }
  *(_DWORD *)(v11 + 152) = v18->OptionalHeader.SizeOfImage;
  *(_DWORD *)(v11 + 156) = v18->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v66 )
    v55 = *(unsigned int *)(*(_QWORD *)v53 + 8LL);
  else
    v55 = (unsigned __int64)*(unsigned int *)(v11 + 64) >> 12;
  if ( !v44 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( !(unsigned int)MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, v55, 0) )
    {
      v12 = v61;
      goto LABEL_64;
    }
    *((_QWORD *)v41 + 5) = v55;
    *((_QWORD *)v41 + 6) = v55;
  }
  if ( a5 == 1 )
    *((_DWORD *)v41 + 9) &= 0xFFFFFFFC;
  else
    *((_DWORD *)v41 + 9) = *((_DWORD *)v41 + 9) & 0xFFFFFFFC | 1;
  if ( (dword_1403A9134 & 1) != 0 || (v70 & 2) != 0 )
    *((_DWORD *)v41 + 9) |= 4u;
  *(_QWORD *)(v11 + 128) = 0LL;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*(_QWORD *)(v11 + 48), &v69);
    if ( SectionInfo )
    {
      *(_DWORD *)(v11 + 124) = v69;
      *(_QWORD *)(v11 + 128) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", (const void *)v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1LL);
    }
  }
  MiProcessLoaderEntry((int *)v11, 1);
  if ( !v44 && v66 )
  {
    *((_DWORD *)v41 + 8) = -2;
    *((_QWORD *)v41 + 2) = v63 | 3;
    *((_QWORD *)v41 + 3) = (v55 << 12) + v63 - 1;
    v67[0] = v53;
    MiManageSubsectionView(v67, v41, 3);
  }
  *a6 = v11;
  return 0LL;
}
