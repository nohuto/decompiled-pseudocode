/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140038D60
 * Callers:
 *     ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z @ 0x14003A1E0 (-Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012620 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x140014DB4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140014DE8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x14001518C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x14001521C (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x1400385F0 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140039104 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::Initialize(
        struct _RTL_CRITICAL_SECTION *this,
        void *a2,
        void *a3,
        __int64 a4,
        void *a5,
        ULONG_PTR a6,
        unsigned int a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v11; // ebx
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  signed int v14; // eax
  unsigned int *v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  SIZE_T dwNumberOfBytesToMap; // rbx
  SIZE_T v20; // r14
  unsigned int *v21; // rax
  signed int LastError; // eax
  int *OwningThread; // rcx
  int v24; // eax
  unsigned int LockSemaphore; // r8d
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  HANDLE v32; // rcx
  void *v33; // rax
  unsigned int *v34; // rax

  v7 = this - 9;
  EnterCriticalSection(this - 9);
  if ( LODWORD(this[-8].DebugInfo) )
  {
    v11 = -2005139440;
    goto LABEL_39;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
    || (((unsigned __int64)a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v11 = -2147024890;
    goto LABEL_39;
  }
  this->LockSemaphore = a5;
  this->SpinCount = a6;
  this[-7].LockSemaphore = a3;
  v12 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, 0x160uLL);
  v13 = v12;
  if ( v12 )
  {
    v15 = v12 + 45;
    v16 = (void *)AERTGetDLLRTHeap();
    v18 = (void *)AE_ALLOCATE_SAFEMULT(v17, *v15, v16, AERTAllocate);
    this[-8].OwningThread = v18;
    if ( v18 )
    {
      memcpy_0(v18, v15, *v15);
      if ( CCrossProcessBaseEndpoint::IsValidControlData(
             (CCrossProcessBaseEndpoint *)&this[-10].LockSemaphore,
             (struct ControlData *)v13) )
      {
        dwNumberOfBytesToMap = v13[82];
        UnmapViewOfFile(v13);
        v20 = (unsigned int)dwNumberOfBytesToMap;
        v21 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
        v13 = v21;
        if ( v21 )
        {
          v11 = AERTLockMemory(v21, dwNumberOfBytesToMap);
          if ( v11 < 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x18u,
                (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
                v11);
            }
            v11 = 0;
          }
          OwningThread = (int *)this[-8].OwningThread;
          this[-6].LockSemaphore = 0LL;
          *(_QWORD *)&this[-6].LockCount = 0LL;
          LODWORD(this[-8].LockSemaphore) = *((unsigned __int16 *)OwningThread + 82);
          *((float *)&this[-7].SpinCount + 1) = (float)OwningThread[39];
          if ( *((_WORD *)OwningThread + 76) == 0xFFFE )
            v24 = *((unsigned __int16 *)OwningThread + 85);
          else
            v24 = *((unsigned __int16 *)OwningThread + 83);
          LockSemaphore = (unsigned int)this[-8].LockSemaphore;
          LODWORD(this[-8].SpinCount) = v24;
          v26 = OwningThread[36] - OwningThread[35];
          v27 = a7;
          LODWORD(this[-7].SpinCount) = v26;
          v28 = v26 / LockSemaphore;
          if ( a7 <= v28 )
          {
            if ( !a7 )
              v27 = v28;
            HIDWORD(this[-8].LockSemaphore) = v27;
            v29 = AERTCreateZoneHeap(LockSemaphore * v27);
            this[-7].OwningThread = v29;
            if ( v29 )
            {
              v31 = AE_ALLOCATE_SAFEMULT(
                      v30,
                      (unsigned int)(HIDWORD(this[-8].LockSemaphore) * LODWORD(this[-8].LockSemaphore)),
                      v29,
                      AERTZoneAllocate);
              this[-7].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v31;
              if ( v31 )
              {
                v34 = (unsigned int *)this[-8].OwningThread;
                *(_QWORD *)&this[-8].LockCount = v13;
                *(_QWORD *)&this[-7].LockCount = (char *)v13 + v34[34];
                _InterlockedExchange((volatile __int32 *)&this[-8], 1);
                goto LABEL_39;
              }
              v11 = -2147024882;
              v32 = this[-7].OwningThread;
              if ( v32 )
              {
                AERTDestroyZoneHeap(v32);
                this[-7].OwningThread = 0LL;
              }
            }
            else
            {
              v11 = -2147024882;
            }
            AERTUnlockMemory(v13, v20);
          }
          else
          {
            v11 = -2147024809;
          }
        }
        else
        {
          LastError = GetLastError();
          v11 = LastError;
          if ( LastError > 0 )
            v11 = (unsigned __int16)LastError | 0x80070000;
        }
      }
      else
      {
        v11 = -2005139387;
      }
      v33 = (void *)AERTGetDLLRTHeap();
      AERTFree(this[-8].OwningThread, v33);
      this[-8].OwningThread = 0LL;
    }
    else
    {
      v11 = -2147024882;
    }
    if ( v13 )
      UnmapViewOfFile(v13);
  }
  else
  {
    v14 = GetLastError();
    v11 = v14;
    if ( v14 > 0 )
      v11 = (unsigned __int16)v14 | 0x80070000;
  }
LABEL_39:
  LeaveCriticalSection(v7);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
        v11);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::Initialize", 0x3FBu, v11);
  }
  return (unsigned int)v11;
}
