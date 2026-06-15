/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50
 * Callers:
 *     ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x1400142A0 (-Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 * Callees:
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140015480 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400154F8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015570 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400155EC (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140015620 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015E50 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140015F0C (-AERTFree@@YAXPEAX0@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x140017C20 (-SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14003978C (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
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
  void *v35; // rax
  _DWORD *v36; // rbx
  int v37; // eax
  HANDLE v38; // rax
  __int64 v39; // rdx
  char *v40; // rcx
  char *v41; // r8
  __int16 v42; // ax
  signed int SecurityDescriptor; // ebx
  void *v45; // rax
  void *v46; // rcx
  signed int v47; // eax
  signed int v48; // eax
  signed int LastError; // eax
  char *v50; // rcx
  char *v51; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-88h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+48h] [rbp-70h] BYREF
  _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+60h] [rbp-58h] BYREF
  LPCVOID lpBaseAddressa; // [rsp+C0h] [rbp+8h]

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
            if ( v23 )
            {
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
              v28 = (cbSize + 479) & 0xFFFFFF80;
              v29 = ((v25 << 6) + v28 + 1023) & 0xFFFFFC00;
              v30 = AERTGetDLLRTHeap();
              if ( is_mul_ok(1uLL, v27) )
                v31 = AERTAllocate(v27, v30);
              else
                v31 = 0LL;
              *((_QWORD *)this - 38) = v31;
              if ( v31 )
              {
                FileMappingAttributes.nLength = 24;
                FileMappingAttributes.lpSecurityDescriptor = 0LL;
                FileMappingAttributes.bInheritHandle = 0;
                EventAttributes.nLength = 24;
                EventAttributes.lpSecurityDescriptor = 0LL;
                EventAttributes.bInheritHandle = 0;
                if ( a5
                  && ((SecurityDescriptor = CreateSecurityDescriptor(
                                              a5,
                                              0xF001Fu,
                                              &FileMappingAttributes.lpSecurityDescriptor),
                       SecurityDescriptor < 0)
                   || (SecurityDescriptor = CreateSecurityDescriptor(
                                              a5,
                                              0x1F0003u,
                                              &EventAttributes.lpSecurityDescriptor),
                       SecurityDescriptor < 0)) )
                {
                  v34 = this;
                }
                else
                {
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
                  if ( v33 )
                  {
                    if ( GetLastError() == 183 )
                    {
                      SecurityDescriptor = -2147024713;
                    }
                    else
                    {
                      v35 = MapViewOfFile(*((HANDLE *)this + 1), 0xF001Fu, 0, 0, dwMaximumSizeLow);
                      lpBaseAddressa = v35;
                      if ( v35 )
                      {
                        v36 = v35;
                        v37 = AERTLockMemory(v35, dwMaximumSizeLow);
                        if ( v37 < 0
                          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
                          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
                        {
                          WPP_SF_D(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            19LL,
                            &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
                            (unsigned int)v37);
                        }
                        v38 = CreateEventW(&EventAttributes, 1, 1, a7);
                        *((_QWORD *)v34 - 32) = v38;
                        if ( v38 )
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
                              v39 = 64LL;
                              v40 = (char *)(*((_QWORD *)v34 - 38) + 4LL);
                              v41 = (char *)(a8 - v40);
                              while ( v39 != -2147483582 )
                              {
                                v42 = *(_WORD *)&v41[(_QWORD)v40];
                                if ( !v42 )
                                  break;
                                *(_WORD *)v40 = v42;
                                v40 += 2;
                                if ( !--v39 )
                                {
                                  v40 -= 2;
                                  break;
                                }
                              }
                              *(_WORD *)v40 = 0;
                              a9[4] = (char *)v34 + 24;
                            }
                            memcpy_0((void *)(*((_QWORD *)v34 - 38) + 152LL), a2, a2->cbSize + 18LL);
                            memcpy_0(v36 + 45, *((const void **)v34 - 38), v27);
                            memset_0(v36, 0, 0xB0uLL);
                            *((_QWORD *)v34 - 39) = v36;
                            WerRegisterMemoryBlock(v36, 0xB0u);
                            *((_QWORD *)v34 - 34) = (char *)v36 + *(unsigned int *)(*((_QWORD *)v34 - 38) + 136LL);
                            v36[44] = 1162888004;
                            SecurityDescriptor = 0;
                            *a11 = *((_QWORD *)v34 + 1);
                            *a12 = *((_QWORD *)v34 - 32);
                            *((_DWORD *)v34 - 80) = 1;
                            goto LABEL_38;
                          }
                          SecurityDescriptor = -2147024713;
                        }
                        else
                        {
                          LastError = GetLastError();
                          SecurityDescriptor = LastError;
                          if ( LastError > 0 )
                            SecurityDescriptor = (unsigned __int16)LastError | 0x80070000;
                        }
                        UnmapViewOfFile(lpBaseAddressa);
                      }
                      else
                      {
                        v48 = GetLastError();
                        SecurityDescriptor = v48;
                        if ( v48 > 0 )
                          SecurityDescriptor = (unsigned __int16)v48 | 0x80070000;
                      }
                    }
                    v50 = (char *)*((_QWORD *)v34 + 1);
                    if ( (unsigned __int64)(v50 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      CloseHandle(v50);
                      *((_QWORD *)v34 + 1) = 0LL;
                    }
                    v51 = (char *)*((_QWORD *)v34 - 32);
                    if ( (unsigned __int64)(v51 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      CloseHandle(v51);
                      *((_QWORD *)v34 - 32) = 0LL;
                    }
                  }
                  else
                  {
                    v47 = GetLastError();
                    SecurityDescriptor = v47;
                    if ( v47 > 0 )
                      SecurityDescriptor = (unsigned __int16)v47 | 0x80070000;
                  }
                }
                v45 = AERTGetDLLRTHeap();
                AERTFree(*((void **)v34 - 38), v45);
                *((_QWORD *)v34 - 38) = 0LL;
              }
              else
              {
                v34 = this;
                SecurityDescriptor = -2147024882;
              }
            }
            else
            {
              v34 = this;
              SecurityDescriptor = -2147024882;
            }
            v46 = (void *)*((_QWORD *)v34 - 33);
            if ( v46 )
            {
              AERTDestroyZoneHeap(v46);
              *((_QWORD *)v34 - 33) = 0LL;
            }
          }
          else
          {
            SecurityDescriptor = -2147024882;
          }
        }
LABEL_38:
        v13 = lpCriticalSection;
        goto LABEL_39;
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
LABEL_39:
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
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20LL,
      &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      (unsigned int)SecurityDescriptor);
  }
  return (unsigned int)SecurityDescriptor;
}
