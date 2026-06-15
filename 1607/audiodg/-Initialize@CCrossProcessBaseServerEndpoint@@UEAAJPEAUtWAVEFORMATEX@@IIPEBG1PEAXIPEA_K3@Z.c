/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140013600
 * Callers:
 *     ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x1400142D0 (-Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012620 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012A20 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140013C6C (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140014D40 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x140014DB4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140014DE8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x14001521C (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x140017290 (-SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::Initialize(
        CCrossProcessBaseServerEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        char *a6,
        _QWORD *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10)
{
  __int64 v10; // rdi
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  unsigned int v13; // r15d
  CCrossProcessBaseEndpoint *v16; // rcx
  __int64 (__fastcall *v17)(CCrossProcessBaseEndpoint *__hidden, unsigned int); // rax
  int wFormatTag; // eax
  unsigned __int64 v19; // rcx
  int v20; // esi
  unsigned int v21; // ebx
  void *v22; // rax
  void *v23; // rax
  unsigned int v24; // ecx
  bool v25; // zf
  int cbSize; // eax
  unsigned int v27; // r13d
  unsigned int v28; // r12d
  unsigned int v29; // r14d
  void *v30; // rcx
  __int64 v31; // rax
  signed int SecurityDescriptor; // ebx
  DWORD dwMaximumSizeLow; // edi
  HANDLE v34; // rax
  CCrossProcessBaseServerEndpoint *v35; // rsi
  void *v36; // rax
  _DWORD *v37; // rbx
  int v38; // eax
  HANDLE v39; // rax
  __int64 v40; // rdx
  char *v41; // rcx
  char *v42; // r8
  __int16 v43; // ax
  signed int v45; // eax
  signed int v46; // eax
  signed int LastError; // eax
  char *v48; // rcx
  char *v49; // rcx
  void *v50; // rax
  void *v51; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-88h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+48h] [rbp-70h] BYREF
  _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+60h] [rbp-58h] BYREF
  LPCVOID lpBaseAddressa; // [rsp+C0h] [rbp+8h]

  v10 = a4;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 360);
  FileMappingAttributes.lpSecurityDescriptor = 0LL;
  *(_QWORD *)&FileMappingAttributes.bInheritHandle = 0LL;
  v13 = 0;
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
  else if ( a9 )
  {
    if ( a10 )
    {
      if ( a2 )
      {
        v16 = (CCrossProcessBaseServerEndpoint *)((char *)this - 376);
        v17 = *(__int64 (__fastcall **)(CCrossProcessBaseEndpoint *__hidden, unsigned int))(*((_QWORD *)this - 47) + 48LL);
        if ( v17 == CCrossProcessBaseEndpoint::SetStreamFlags )
          CCrossProcessBaseEndpoint::SetStreamFlags(v16, a8);
        else
          v17(v16, a8);
        *((_DWORD *)this - 74) = a2->nBlockAlign;
        *((float *)this - 61) = (float)(int)a2->nSamplesPerSec;
        if ( a2->wFormatTag == 0xFFFE )
          wFormatTag = a2[1].wFormatTag;
        else
          wFormatTag = a2->wBitsPerSample;
        v19 = v10 * *((unsigned int *)this - 74);
        *((_DWORD *)this - 72) = wFormatTag;
        if ( v19 <= 0xFFFFFFFF )
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
              v25 = *((_DWORD *)this + 14) == 1;
              *((_DWORD *)this - 62) = a3;
              if ( v25 )
              {
                v13 = a3 / v24 / (unsigned int)v10 + 3;
                if ( v13 < 0x19 )
                  v13 = 25;
              }
              cbSize = a2->cbSize;
              v27 = cbSize + 172;
              v28 = (cbSize + 479) & 0xFFFFFF80;
              v29 = ((v13 << 6) + v28 + 1023) & 0xFFFFFC00;
              v30 = (void *)AERTGetDLLRTHeap();
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
                  v35 = this;
                }
                else
                {
                  dwMaximumSizeLow = a3 + v29 + v20;
                  v34 = CreateFileMappingW(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &FileMappingAttributes,
                          4u,
                          0,
                          dwMaximumSizeLow,
                          0LL);
                  v35 = this;
                  *((_QWORD *)this + 1) = v34;
                  if ( v34 )
                  {
                    if ( GetLastError() == 183 )
                    {
                      SecurityDescriptor = -2147024713;
                    }
                    else
                    {
                      v36 = MapViewOfFile(*((HANDLE *)this + 1), 0xF001Fu, 0, 0, dwMaximumSizeLow);
                      lpBaseAddressa = v36;
                      if ( v36 )
                      {
                        v37 = v36;
                        v38 = AERTLockMemory(v36, dwMaximumSizeLow);
                        if ( v38 < 0
                          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
                          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
                        {
                          WPP_SF_D(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            19LL,
                            &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
                            (unsigned int)v38);
                        }
                        v39 = CreateEventW(&EventAttributes, 1, 1, 0LL);
                        *((_QWORD *)v35 - 32) = v39;
                        if ( v39 )
                        {
                          if ( GetLastError() != 183 )
                          {
                            *((_DWORD *)v35 - 73) = a4;
                            **((_DWORD **)v35 - 38) = v27;
                            *(_DWORD *)(*((_QWORD *)v35 - 38) + 132LL) = v13;
                            *(_DWORD *)(*((_QWORD *)v35 - 38) + 136LL) = v28;
                            *(_DWORD *)(*((_QWORD *)v35 - 38) + 140LL) = v29;
                            *(_DWORD *)(*((_QWORD *)v35 - 38) + 144LL) = v29 + a3;
                            *(_DWORD *)(*((_QWORD *)v35 - 38) + 148LL) = dwMaximumSizeLow;
                            if ( a6 )
                            {
                              v40 = 64LL;
                              v41 = (char *)(*((_QWORD *)v35 - 38) + 4LL);
                              v42 = (char *)(a6 - v41);
                              while ( v40 != -2147483582 )
                              {
                                v43 = *(_WORD *)&v42[(_QWORD)v41];
                                if ( !v43 )
                                  break;
                                *(_WORD *)v41 = v43;
                                v41 += 2;
                                if ( !--v40 )
                                {
                                  v41 -= 2;
                                  break;
                                }
                              }
                              *(_WORD *)v41 = 0;
                              a7[4] = (char *)v35 + 24;
                            }
                            memcpy_0((void *)(*((_QWORD *)v35 - 38) + 152LL), a2, a2->cbSize + 18LL);
                            memcpy_0(v37 + 45, *((const void **)v35 - 38), v27);
                            memset_0(v37, 0, 0xB0uLL);
                            *((_QWORD *)v35 - 39) = v37;
                            WerRegisterMemoryBlock(v37, 0xB0u);
                            *((_QWORD *)v35 - 34) = (char *)v37 + *(unsigned int *)(*((_QWORD *)v35 - 38) + 136LL);
                            v37[44] = 1162888004;
                            SecurityDescriptor = 0;
                            *a9 = *((_QWORD *)v35 + 1);
                            *a10 = *((_QWORD *)v35 - 32);
                            *((_DWORD *)v35 - 80) = 1;
                            goto LABEL_39;
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
                        v46 = GetLastError();
                        SecurityDescriptor = v46;
                        if ( v46 > 0 )
                          SecurityDescriptor = (unsigned __int16)v46 | 0x80070000;
                      }
                    }
                    v48 = (char *)*((_QWORD *)v35 + 1);
                    if ( (unsigned __int64)(v48 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      CloseHandle(v48);
                      *((_QWORD *)v35 + 1) = 0LL;
                    }
                    v49 = (char *)*((_QWORD *)v35 - 32);
                    if ( (unsigned __int64)(v49 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      CloseHandle(v49);
                      *((_QWORD *)v35 - 32) = 0LL;
                    }
                  }
                  else
                  {
                    v45 = GetLastError();
                    SecurityDescriptor = v45;
                    if ( v45 > 0 )
                      SecurityDescriptor = (unsigned __int16)v45 | 0x80070000;
                  }
                }
                v50 = (void *)AERTGetDLLRTHeap();
                AERTFree(*((void **)v35 - 38), v50);
                *((_QWORD *)v35 - 38) = 0LL;
              }
              else
              {
                v35 = this;
                SecurityDescriptor = -2147024882;
              }
            }
            else
            {
              v35 = this;
              SecurityDescriptor = -2147024882;
            }
            v51 = (void *)*((_QWORD *)v35 - 33);
            if ( v51 )
            {
              AERTDestroyZoneHeap(v51);
              *((_QWORD *)v35 - 33) = 0LL;
            }
          }
          else
          {
            SecurityDescriptor = -2147024882;
          }
LABEL_39:
          v11 = lpCriticalSection;
          goto LABEL_40;
        }
        SecurityDescriptor = -2147024362;
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
  LeaveCriticalSection(v11);
  if ( SecurityDescriptor < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
        (unsigned int)SecurityDescriptor);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseServerEndpoint::Initialize", 0x302u, SecurityDescriptor);
  }
  return (unsigned int)SecurityDescriptor;
}
