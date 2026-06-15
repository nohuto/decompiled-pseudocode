/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039F40
 * Callers:
 *     ?Initialize@CCrossProcessClientInputEndpoint@@UEAAJ_K00I@Z @ 0x14003BDD0 (-Initialize@CCrossProcessClientInputEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400154F8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400155EC (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140015620 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015E50 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140015F0C (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140015F7C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140039738 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x14003A2E0 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::Initialize(
        struct _RTL_CRITICAL_SECTION *this,
        void *a2,
        void *a3,
        void *a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r15
  signed int v10; // ebx
  unsigned int *v11; // rax
  unsigned int *v12; // rsi
  signed int v13; // eax
  unsigned int *v14; // rbx
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  SIZE_T dwNumberOfBytesToMap; // rbx
  SIZE_T v19; // r14
  unsigned int *v20; // rax
  signed int LastError; // eax
  signed int v22; // eax
  int *OwningThread; // rcx
  int v24; // eax
  unsigned int LockSemaphore; // r8d
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rdx
  HANDLE v33; // rcx
  void *v34; // rax
  unsigned int *v36; // rax

  v5 = this - 9;
  EnterCriticalSection(this - 9);
  if ( LODWORD(this[-8].DebugInfo) )
  {
    v10 = -2005139440;
  }
  else if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
         && (((unsigned __int64)a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    this[-7].LockSemaphore = a3;
    this->LockSemaphore = a4;
    v11 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, 0x160uLL);
    v12 = v11;
    if ( v11 )
    {
      v14 = v11 + 45;
      v15 = (void *)AERTGetDLLRTHeap();
      v17 = (void *)AE_ALLOCATE_SAFEMULT(v16, *v14, v15, AERTAllocate);
      this[-8].OwningThread = v17;
      if ( v17 )
      {
        memcpy_0(v17, v14, *v14);
        if ( CCrossProcessBaseEndpoint::IsValidControlData(
               (CCrossProcessBaseEndpoint *)&this[-10].LockSemaphore,
               (struct ControlData *)v12) )
        {
          dwNumberOfBytesToMap = v12[82];
          UnmapViewOfFile(v12);
          v19 = (unsigned int)dwNumberOfBytesToMap;
          v20 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
          v12 = v20;
          if ( v20 )
          {
            v22 = AERTLockMemory(v20, dwNumberOfBytesToMap);
            v10 = v22;
            if ( v22 < 0 )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
              {
                WPP_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x18u,
                  (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
                  v22);
              }
              v10 = 0;
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
            v27 = a5;
            LODWORD(this[-7].SpinCount) = v26;
            v28 = v26 / LockSemaphore;
            if ( a5 <= v28 )
            {
              if ( !a5 )
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
                  v36 = (unsigned int *)this[-8].OwningThread;
                  *(_QWORD *)&this[-8].LockCount = v12;
                  *(_QWORD *)&this[-7].LockCount = (char *)v12 + v36[34];
                  _InterlockedExchange((volatile __int32 *)&this[-8], 1);
                  goto LABEL_38;
                }
                v10 = -2147024882;
                v33 = this[-7].OwningThread;
                if ( v33 )
                {
                  AERTDestroyZoneHeap(v33, v32);
                  this[-7].OwningThread = 0LL;
                }
              }
              else
              {
                v10 = -2147024882;
              }
              AERTUnlockMemory(v12, v19);
            }
            else
            {
              v10 = -2147024809;
            }
          }
          else
          {
            LastError = GetLastError();
            v10 = LastError;
            if ( LastError > 0 )
              v10 = (unsigned __int16)LastError | 0x80070000;
          }
        }
        else
        {
          v10 = -2005139387;
        }
        v34 = (void *)AERTGetDLLRTHeap();
        AERTFree(this[-8].OwningThread, v34);
        this[-8].OwningThread = 0LL;
      }
      else
      {
        v10 = -2147024882;
      }
      if ( v12 )
        UnmapViewOfFile(v12);
    }
    else
    {
      v13 = GetLastError();
      v10 = v13;
      if ( v13 > 0 )
        v10 = (unsigned __int16)v13 | 0x80070000;
    }
  }
  else
  {
    v10 = -2147024890;
  }
LABEL_38:
  LeaveCriticalSection(v5);
  if ( v10 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, v10);
  }
  return (unsigned int)v10;
}
