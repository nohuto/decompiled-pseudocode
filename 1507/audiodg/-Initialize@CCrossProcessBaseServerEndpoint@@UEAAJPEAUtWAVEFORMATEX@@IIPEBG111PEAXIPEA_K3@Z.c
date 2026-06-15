/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140015D40
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003FB0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140016240 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1400162C0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001633C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140016374 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016540 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016640 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x140018A90 (-SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14003970C (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14003D114 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::Initialize(
        CCrossProcessBaseServerEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        LPCWSTR lpName,
        LPCWSTR a7,
        char *a8,
        _QWORD *a9,
        unsigned int a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12)
{
  __int64 v12; // r14
  struct _RTL_CRITICAL_SECTION *v13; // rdi
  __int64 (__fastcall *v17)(CCrossProcessBaseEndpoint *__hidden, unsigned int); // rdi
  int wFormatTag; // eax
  unsigned __int64 v19; // rcx
  int v20; // esi
  unsigned int v21; // ebx
  void *v22; // rax
  void *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // r15d
  int cbSize; // eax
  unsigned int v27; // r13d
  unsigned int v28; // r12d
  unsigned int v29; // r14d
  void *v30; // rcx
  void *v31; // rax
  DWORD dwMaximumSizeLow; // edi
  HANDLE v33; // rax
  CCrossProcessBaseServerEndpoint *v34; // rsi
  _DWORD *v35; // rax
  _DWORD *v36; // rbx
  HANDLE v37; // rax
  __int64 v38; // rdx
  char *v39; // rcx
  char *v40; // r8
  __int16 v41; // ax
  signed int SecurityDescriptor; // ebx
  void *v44; // rax
  void *v45; // rcx
  signed int LastError; // eax
  signed int v47; // eax
  signed int v48; // eax
  bool v49; // sf
  signed int v50; // eax
  char *v51; // rcx
  char *v52; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-88h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+48h] [rbp-70h] BYREF
  _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+60h] [rbp-58h] BYREF
  _DWORD *pvAddressa; // [rsp+C0h] [rbp+8h]

  v12 = a4;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 360);
  FileMappingAttributes.lpSecurityDescriptor = 0LL;
  *(_QWORD *)&FileMappingAttributes.bInheritHandle = 0LL;
  EventAttributes.lpSecurityDescriptor = 0LL;
  FileMappingAttributes.nLength = 0;
  EventAttributes.nLength = 0;
  *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 360);
  EnterCriticalSection((LPCRITICAL_SECTION)this - 9);
  if ( *((_DWORD *)this - 80) )
  {
    SecurityDescriptor = -2005139440;
  }
  else if ( a11 )
  {
    if ( a12 )
    {
      if ( a2 )
      {
        v17 = *(__int64 (__fastcall **)(CCrossProcessBaseEndpoint *__hidden, unsigned int))(*((_QWORD *)this - 47) + 48LL);
        if ( v17 == CCrossProcessBaseEndpoint::SetStreamFlags )
          CCrossProcessBaseEndpoint::SetStreamFlags((CCrossProcessBaseServerEndpoint *)((char *)this - 376), a10);
        else
          v17((CCrossProcessBaseServerEndpoint *)((char *)this - 376), a10);
        *((_DWORD *)this - 74) = a2->nBlockAlign;
        *((float *)this - 61) = (float)(int)a2->nSamplesPerSec;
        if ( a2->wFormatTag == 0xFFFE )
          wFormatTag = a2[1].wFormatTag;
        else
          wFormatTag = a2->wBitsPerSample;
        v19 = v12 * *((unsigned int *)this - 74);
        *((_DWORD *)this - 72) = wFormatTag;
        if ( v19 > 0xFFFFFFFF )
        {
          SecurityDescriptor = -2147024362;
        }
        else
        {
          v20 = 0;
          v21 = v19;
          if ( *((_DWORD *)this + 14) == 1 )
            v20 = v19;
          v22 = AERTCreateZoneHeap((unsigned int)v19);
          *((_QWORD *)this - 33) = v22;
          if ( v22 )
          {
            if ( is_mul_ok(1uLL, v21) )
              v23 = AERTZoneAllocate(v21, v22);
            else
              v23 = 0LL;
            *((_QWORD *)this - 35) = v23;
            if ( !v23 )
            {
              v34 = this;
              SecurityDescriptor = -2147024882;
              goto LABEL_65;
            }
            v24 = *((_DWORD *)this - 74);
            if ( a3 % v24 )
              a3 = v24 * (a3 / v24 + 1);
            *((_DWORD *)this - 62) = a3;
            if ( *((_DWORD *)this + 14) == 1 )
            {
              v25 = a3 / v24 / (unsigned int)v12 + 3;
              if ( v25 < 0x19 )
                v25 = 25;
            }
            else
            {
              v25 = 0;
            }
            cbSize = a2->cbSize;
            v27 = cbSize + 172;
            v28 = (cbSize + 471) & 0xFFFFFF80;
            v29 = ((v25 << 6) + v28 + 1023) & 0xFFFFFC00;
            v30 = AERTGetDLLRTHeap();
            if ( is_mul_ok(1uLL, v27) )
              v31 = AERTAllocate(v27, v30);
            else
              v31 = 0LL;
            *((_QWORD *)this - 38) = v31;
            if ( !v31 )
            {
              v34 = this;
              SecurityDescriptor = -2147024882;
              goto LABEL_65;
            }
            FileMappingAttributes.nLength = 24;
            FileMappingAttributes.lpSecurityDescriptor = 0LL;
            FileMappingAttributes.bInheritHandle = 0;
            EventAttributes.nLength = 24;
            EventAttributes.lpSecurityDescriptor = 0LL;
            EventAttributes.bInheritHandle = 0;
            if ( a5 )
            {
              SecurityDescriptor = CreateSecurityDescriptor(a5, 0xF001Fu, &FileMappingAttributes.lpSecurityDescriptor);
              if ( SecurityDescriptor < 0
                || (SecurityDescriptor = CreateSecurityDescriptor(a5, 0x1F0003u, &EventAttributes.lpSecurityDescriptor),
                    SecurityDescriptor < 0) )
              {
                v34 = this;
LABEL_64:
                v44 = AERTGetDLLRTHeap();
                AERTFree(*((void **)v34 - 38), v44);
                *((_QWORD *)v34 - 38) = 0LL;
LABEL_65:
                v45 = (void *)*((_QWORD *)v34 - 33);
                if ( v45 )
                {
                  AERTDestroyZoneHeap(v45);
                  *((_QWORD *)v34 - 33) = 0LL;
                }
                goto LABEL_39;
              }
            }
            dwMaximumSizeLow = a3 + v29 + v20;
            v33 = CreateFileMappingW(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &FileMappingAttributes,
                    4u,
                    0,
                    dwMaximumSizeLow,
                    lpName);
            v34 = this;
            *((_QWORD *)this + 1) = v33;
            if ( !v33 )
            {
              LastError = GetLastError();
              SecurityDescriptor = LastError;
              if ( LastError > 0 )
                SecurityDescriptor = (unsigned __int16)LastError | 0x80070000;
              goto LABEL_64;
            }
            if ( GetLastError() == 183 )
            {
              SecurityDescriptor = -2147024713;
            }
            else
            {
              v35 = MapViewOfFile(*((HANDLE *)this + 1), 0xF001Fu, 0, 0, dwMaximumSizeLow);
              pvAddressa = v35;
              if ( v35 )
              {
                if ( VirtualLock(v35, dwMaximumSizeLow) )
                {
                  v36 = pvAddressa;
                }
                else
                {
                  v48 = IncreaseProcessWorkingSet(dwMaximumSizeLow);
                  if ( v48 < 0 )
                  {
                    v36 = pvAddressa;
                  }
                  else
                  {
                    v36 = pvAddressa;
                    if ( VirtualLock(pvAddressa, dwMaximumSizeLow) )
                      goto LABEL_29;
                    v48 = GetLastError();
                    v49 = v48 < 0;
                    if ( v48 > 0 )
                    {
                      v48 = (unsigned __int16)v48 | 0x80070000;
                      v49 = v48 < 0;
                    }
                    if ( !v49 )
                      goto LABEL_29;
                  }
                  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
                    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
                  {
                    WPP_SF_D(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
                      19LL,
                      &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
                      (unsigned int)v48);
                  }
                }
LABEL_29:
                v37 = CreateEventW(&EventAttributes, 1, 1, a7);
                *((_QWORD *)v34 - 32) = v37;
                if ( v37 )
                {
                  if ( GetLastError() != 183 )
                  {
                    *((_DWORD *)v34 - 73) = a4;
                    **((_DWORD **)v34 - 38) = v27;
                    *(_DWORD *)(*((_QWORD *)v34 - 38) + 132LL) = v25;
                    *(_DWORD *)(*((_QWORD *)v34 - 38) + 136LL) = v28;
                    *(_DWORD *)(*((_QWORD *)v34 - 38) + 140LL) = v29;
                    *(_DWORD *)(*((_QWORD *)v34 - 38) + 144LL) = v29 + a3;
                    *(_DWORD *)(*((_QWORD *)v34 - 38) + 148LL) = dwMaximumSizeLow;
                    if ( a8 )
                    {
                      v38 = 64LL;
                      v39 = (char *)(*((_QWORD *)v34 - 38) + 4LL);
                      v40 = (char *)(a8 - v39);
                      while ( v38 != -2147483582 )
                      {
                        v41 = *(_WORD *)&v40[(_QWORD)v39];
                        if ( !v41 )
                          break;
                        *(_WORD *)v39 = v41;
                        v39 += 2;
                        if ( !--v38 )
                        {
                          v39 -= 2;
                          break;
                        }
                      }
                      *(_WORD *)v39 = 0;
                      a9[4] = (char *)v34 + 24;
                    }
                    memcpy_0((void *)(*((_QWORD *)v34 - 38) + 152LL), a2, a2->cbSize + 18LL);
                    memcpy_0(v36 + 43, *((const void **)v34 - 38), v27);
                    memset_0(v36, 0, 0xA8uLL);
                    *((_QWORD *)v34 - 39) = v36;
                    WerRegisterMemoryBlock(v36, 0xA8u);
                    *((_QWORD *)v34 - 34) = (char *)v36 + *(unsigned int *)(*((_QWORD *)v34 - 38) + 136LL);
                    v36[42] = 1162888004;
                    SecurityDescriptor = 0;
                    *a11 = *((_QWORD *)v34 + 1);
                    *a12 = *((_QWORD *)v34 - 32);
                    *((_DWORD *)v34 - 80) = 1;
                    goto LABEL_39;
                  }
                  SecurityDescriptor = -2147024713;
                }
                else
                {
                  v50 = GetLastError();
                  SecurityDescriptor = v50;
                  if ( v50 > 0 )
                    SecurityDescriptor = (unsigned __int16)v50 | 0x80070000;
                }
                UnmapViewOfFile(pvAddressa);
                goto LABEL_87;
              }
              v47 = GetLastError();
              SecurityDescriptor = v47;
              if ( v47 > 0 )
                SecurityDescriptor = (unsigned __int16)v47 | 0x80070000;
            }
LABEL_87:
            v51 = (char *)*((_QWORD *)v34 + 1);
            if ( (unsigned __int64)(v51 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              CloseHandle(v51);
              *((_QWORD *)v34 + 1) = 0LL;
            }
            v52 = (char *)*((_QWORD *)v34 - 32);
            if ( (unsigned __int64)(v52 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              CloseHandle(v52);
              *((_QWORD *)v34 - 32) = 0LL;
            }
            goto LABEL_64;
          }
          SecurityDescriptor = -2147024882;
        }
LABEL_39:
        v13 = lpCriticalSection;
        goto LABEL_40;
      }
      SecurityDescriptor = -2147467261;
    }
    else
    {
      SecurityDescriptor = -2147467261;
    }
  }
  else
  {
    SecurityDescriptor = -2147467261;
  }
LABEL_40:
  if ( EventAttributes.lpSecurityDescriptor )
  {
    LocalFree(EventAttributes.lpSecurityDescriptor);
    EventAttributes.lpSecurityDescriptor = 0LL;
  }
  if ( FileMappingAttributes.lpSecurityDescriptor )
  {
    LocalFree(FileMappingAttributes.lpSecurityDescriptor);
    FileMappingAttributes.lpSecurityDescriptor = 0LL;
  }
  LeaveCriticalSection(v13);
  if ( SecurityDescriptor < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      20LL,
      &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      (unsigned int)SecurityDescriptor);
  }
  return (unsigned int)SecurityDescriptor;
}
