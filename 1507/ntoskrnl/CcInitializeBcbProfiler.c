/*
 * XREFs of CcInitializeBcbProfiler @ 0x14079A2C4
 * Callers:
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     KeInitializeTimer @ 0x140021268 (KeInitializeTimer.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14002B11C (RtlSectionTableFromVirtualAddress.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     RtlLookupFunctionTable @ 0x14012D42C (RtlLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x140133FD0 (RtlpConvertFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140134CBC (RtlpLookupPrimaryFunctionEntry.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     KiGetLoadOptions @ 0x1407E9194 (KiGetLoadOptions.c)
 */

char CcInitializeBcbProfiler()
{
  struct _KTIMER *PoolWithTag; // rax
  const char *LoadOptions; // rax
  _IMAGE_NT_HEADERS64 *v2; // r9
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  void *v6; // rax
  int v7; // esi
  PIMAGE_SECTION_HEADER v8; // rbx
  unsigned int *v9; // r8
  unsigned int VirtualAddress; // r9d
  unsigned int *v11; // rdi
  int v12; // r14d
  unsigned int *v13; // r10
  unsigned int PhysicalAddress; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int128 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // ecx
  int v25; // ecx
  ULONG v26; // r10d
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r8d
  struct _KTIMER *Dpc; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int128 v39; // rax
  _BYTE *v40; // rax
  unsigned int *v41; // rax
  char Blink; // di
  _QWORD *v43; // r10
  _ULARGE_INTEGER Flink; // rdx
  const char *v45; // r8
  unsigned int v46; // r11d
  const char *v47; // rax
  const char *v48; // rcx
  unsigned int v49; // r9d
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  const char *v52; // rax
  _ULARGE_INTEGER v53; // rdx
  int v54; // r8d
  unsigned __int8 *v55; // r10
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  LARGE_INTEGER v59; // r10
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  char SubStr[16]; // [rsp+30h] [rbp-69h] BYREF
  int v64; // [rsp+40h] [rbp-59h]
  int v65; // [rsp+44h] [rbp-55h]
  int v66; // [rsp+48h] [rbp-51h]
  int v67; // [rsp+4Ch] [rbp-4Dh]
  int v68; // [rsp+50h] [rbp-49h]
  int v69; // [rsp+54h] [rbp-45h]
  int v70; // [rsp+58h] [rbp-41h]
  int v71; // [rsp+5Ch] [rbp-3Dh]
  int v72; // [rsp+60h] [rbp-39h]
  int v73; // [rsp+64h] [rbp-35h]
  int v74; // [rsp+68h] [rbp-31h]
  int v75; // [rsp+6Ch] [rbp-2Dh]
  int v76; // [rsp+70h] [rbp-29h]
  int v77; // [rsp+74h] [rbp-25h]
  int v78; // [rsp+78h] [rbp-21h]
  int v79; // [rsp+7Ch] [rbp-1Dh]
  int v80; // [rsp+80h] [rbp-19h]
  __int64 v81; // [rsp+88h] [rbp-11h]
  __int64 v82; // [rsp+90h] [rbp-9h]
  __int64 v83; // [rsp+98h] [rbp-1h]
  __int64 v84[10]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned int v85; // [rsp+100h] [rbp+67h] BYREF
  int v86; // [rsp+108h] [rbp+6Fh]
  int v87; // [rsp+110h] [rbp+77h]
  int v88; // [rsp+118h] [rbp+7Fh]

  LOBYTE(PoolWithTag) = MEMORY[0xFFFFF780000002D4];
  if ( (MEMORY[0xFFFFF780000002D4] & 0xFE) == 0 )
  {
    v86 = 348127232;
    SubStr[0] = __ROR4__(348127232, 54);
    v87 = 146743;
    SubStr[1] = __ROR4__(133120, 171);
    v88 = 17920;
    SubStr[2] = __ROL4__(17920, 56);
    v76 = -1979711488;
    SubStr[3] = __ROR4__(-1979711488, 57);
    v77 = 69219642;
    SubStr[4] = __ROR4__(69206016, 180);
    v75 = 2528;
    SubStr[5] = __ROL4__(2528, 59);
    v67 = -268435452;
    SubStr[6] = __ROR4__(-268435452, 60);
    v78 = -2147470025;
    SubStr[7] = __ROR4__(-2147483638, 189);
    v69 = 232;
    SubStr[8] = __ROL4__(232, 62);
    SubStr[9] = 0;
    LoadOptions = (const char *)KiGetLoadOptions();
    PoolWithTag = (struct _KTIMER *)strstr(LoadOptions, SubStr);
    if ( !PoolWithTag )
    {
      v2 = RtlImageNtHeader((PVOID)0x140000000LL);
      v3 = __rdtsc();
      v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
      v81 = *((_QWORD *)&v4 + 1);
      v5 = v4 ^ *((_QWORD *)&v4 + 1);
      *((_QWORD *)&v4 + 1) = (((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v6 = sub_140406000;
      if ( v5 - 100 * ((*((_QWORD *)&v4 + 1) + ((unsigned __int64)(v5 - *((_QWORD *)&v4 + 1)) >> 1)) >> 6) >= 0x32 )
      {
        v7 = 1;
      }
      else
      {
        v7 = 0;
        v6 = CcBcbProfiler;
      }
      v8 = RtlSectionTableFromVirtualAddress(v2, (PVOID)0x140000000LL, (unsigned int)v6 - 0x40000000);
      v9 = (unsigned int *)RtlLookupFunctionTable((unsigned __int64)v8, v84, &v85);
      if ( !v9 || v85 < 0xC )
      {
        v17 = -1073741701;
LABEL_58:
        v74 = 5072;
        KeBugCheckEx(__ROL4__(5072, 188), 6uLL, (ULONG_PTR)v8, v17, 0LL);
      }
      VirtualAddress = v8->VirtualAddress;
      v11 = 0LL;
      v12 = 0;
      v13 = &v9[3 * (v85 / 0xC)];
      PhysicalAddress = v8->Misc.PhysicalAddress;
      if ( v8->SizeOfRawData > PhysicalAddress )
        PhysicalAddress = v8->SizeOfRawData;
      v15 = PhysicalAddress + VirtualAddress;
      do
      {
        v16 = *v9;
        if ( *v9 >= VirtualAddress )
        {
          if ( v16 >= v15 )
            break;
          v12 = (int)v9;
          if ( !v11 )
            v11 = v9;
        }
        if ( v16 >= v15 )
          break;
        v9 += 3;
      }
      while ( v9 != v13 );
      if ( !v11 )
      {
        v17 = -1073741569;
        goto LABEL_58;
      }
      v18 = __rdtsc();
      v19 = (__ROR8__(v18, 3) ^ v18) * (unsigned __int128)0x7010008004002001uLL;
      v83 = *((_QWORD *)&v19 + 1);
      v20 = v19 ^ *((_QWORD *)&v19 + 1);
      PoolWithTag = (struct _KTIMER *)(10 * (((unsigned __int64)v19 ^ *((_QWORD *)&v19 + 1)) / 0xA));
      if ( (unsigned __int64)(v20 - (_QWORD)PoolWithTag) < 5 )
      {
        v21 = __rdtsc();
        v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
        v82 = *((_QWORD *)&v22 + 1);
        v23 = ((unsigned __int64)v22 ^ *((_QWORD *)&v22 + 1)) % 0xB;
        if ( (unsigned int)v23 > 5 )
        {
          v27 = v23 - 6;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  v66 = -1333354875;
                  v26 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v30 = __rdtsc();
                  v31 = __ROR8__(v30, 3);
                  v32 = (((v31 ^ v30) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v31 ^ v30));
                  v26 = ((((((v32 % 0x1A + 97) << 8) | ((v32 >> 5) % 0x1A + 65)) << 8) | ((v32 >> 10) % 0x1A + 97)) << 8) | ((v32 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                v68 = 1684422978;
                v26 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              v70 = -2100910376;
              v26 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v72 = 1314342514;
            v26 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v23 == 5 )
        {
          v65 = 680282605;
          v26 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 == 1 )
              {
                v71 = -1474152136;
                v26 = __ROR4__(-1474152133, 15);
              }
              else
              {
                v80 = 1728537748;
                v26 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              v79 = -2051698419;
              v26 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            v73 = -1297272415;
            v26 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          v64 = -795291432;
          v26 = __ROR4__(-795291432, 6);
        }
        PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, v26);
        Dpc = PoolWithTag;
        if ( PoolWithTag )
        {
          KeInitializeTimer(PoolWithTag + 1);
          Dpc->Header.LockNV = 275;
          Dpc->DueTime.QuadPart = (unsigned __int64)CcBcbProfiler;
          Dpc->TimerListEntry.Flink = (struct _LIST_ENTRY *)Dpc;
          *(_QWORD *)&Dpc->Processor = 0LL;
          Dpc->Header.WaitListHead.Blink = 0LL;
          v34 = __rdtsc();
          v35 = __ROR8__(v34, 3);
          Dpc[2].TimerListEntry.Flink = (struct _LIST_ENTRY *)((0x7010008004002001LL * (v35 ^ v34)) ^ (((v35 ^ v34) * (unsigned __int128)0x7010008004002001uLL) >> 64));
          v36 = __rdtsc();
          v37 = __ROR8__(v36, 3);
          LOBYTE(Dpc[2].TimerListEntry.Blink) = ((0x7010008004002001LL * (v37 ^ v36)) ^ (((v37 ^ v36)
                                                                                        * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                              % 0x3F
                                              + 1;
          v38 = __rdtsc();
          Dpc[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)0x140000000LL;
          v39 = (__ROR8__(v38, 3) ^ v38) * (unsigned __int128)0x7010008004002001uLL;
          v40 = (_BYTE *)RtlpConvertFunctionEntry(
                           (__int64)&v11[3
                                       * (((unsigned __int64)v39 ^ *((_QWORD *)&v39 + 1))
                                        % (unsigned int)((v12 - (int)v11) / 12))],
                           0x140000000uLL);
          v41 = (unsigned int *)RtlpLookupPrimaryFunctionEntry(
                                  v40,
                                  (__int64)Dpc[2].Header.WaitListHead.Flink,
                                  (unsigned __int64)Dpc[2].Header.WaitListHead.Flink + *(unsigned int *)v40);
          Blink = (char)Dpc[2].TimerListEntry.Blink;
          v43 = v41;
          Flink = (_ULARGE_INTEGER)Dpc[2].TimerListEntry.Flink;
          *(_QWORD *)&Dpc[2].Header.Lock = v41;
          v45 = (char *)Dpc[2].Header.WaitListHead.Flink + *v41;
          v46 = v41[1] - *v41;
          v47 = v45;
          v48 = &v45[v46];
          if ( v45 < v48 )
          {
            do
            {
              _mm_prefetch(v47, 0);
              v47 += 64;
            }
            while ( v47 < v48 );
          }
          v49 = v46;
          if ( v46 >= 8 )
          {
            v50 = (unsigned __int64)v46 >> 3;
            do
            {
              v49 -= 8;
              Flink.QuadPart = __ROL8__(*(_QWORD *)v45 ^ Flink.QuadPart, Blink);
              v45 += 8;
              --v50;
            }
            while ( v50 );
          }
          for ( ; v49; --v49 )
          {
            v51 = *(unsigned __int8 *)v45++;
            Flink.QuadPart = __ROL8__(v51 ^ Flink.QuadPart, Blink);
          }
          Dpc[2].DueTime = Flink;
          v52 = (const char *)v43;
          if ( v43 < (_QWORD *)((char *)v43 + 12) )
          {
            do
            {
              _mm_prefetch(v52, 0);
              v52 += 64;
            }
            while ( v52 < (const char *)v43 + 12 );
          }
          v53.QuadPart = __ROL8__(*v43 ^ Flink.QuadPart, Blink);
          v54 = 4;
          v55 = (unsigned __int8 *)(v43 + 1);
          do
          {
            v56 = *v55++;
            v53.QuadPart = __ROL8__(v56 ^ v53.QuadPart, Blink);
            --v54;
          }
          while ( v54 );
          Dpc[2].DueTime = v53;
          LODWORD(Dpc[2].Header.WaitListHead.Blink) = v46;
          HIDWORD(Dpc[2].TimerListEntry.Blink) = v7;
          if ( v7 )
          {
            Dpc[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Dpc;
            *(_QWORD *)&Dpc[3].Header.Lock = sub_140406000;
            Dpc[2].Dpc = 0LL;
          }
          v57 = __rdtsc();
          v58 = __ROR8__(v57, 3);
          v59.QuadPart = -1200000000LL
                       - ((0x7010008004002001LL * (v58 ^ v57)) ^ (((v58 ^ v57) * (unsigned __int128)0x7010008004002001uLL) >> 64))
                       % 0x5F5E100;
          v60 = __rdtsc();
          v61 = __ROR8__(v60, 3) ^ v60;
          LOBYTE(PoolWithTag) = KeSetCoalescableTimer(
                                  Dpc + 1,
                                  v59,
                                  0,
                                  ((0x7010008004002001LL * v61) ^ ((v61 * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                % 0x2710,
                                  (PKDPC)Dpc);
        }
      }
    }
  }
  return (char)PoolWithTag;
}
