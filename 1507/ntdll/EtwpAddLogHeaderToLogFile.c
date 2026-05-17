/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x18000C5FC
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 *     EtwpBufferingModeFlush @ 0x1800F4044 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpAddProviderTrackingInfo @ 0x180009E9C (EtwpAddProviderTrackingInfo.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18000CAAC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetTimeZoneInformation @ 0x18000CB94 (EtwpGetTimeZoneInformation.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlQueryPerformanceCounter @ 0x180059550 (RtlQueryPerformanceCounter.c)
 *     EtwpCreateFile @ 0x1800787B8 (EtwpCreateFile.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtReadFile @ 0x180093960 (NtReadFile.c)
 *     NtWriteFile @ 0x180093980 (NtWriteFile.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x180093B70 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x180093D90 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     EtwpGenerateFileName @ 0x1800F4D30 (EtwpGenerateFileName.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // r15
  NTSTATUS File; // ebx
  int v11; // r13d
  __int64 Heap; // rsi
  unsigned __int64 v13; // rax
  struct _PEB *v14; // rcx
  HANDLE v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v20; // r13
  int v21; // r15d
  NTSTATUS v22; // eax
  size_t v23; // r8
  unsigned int v24; // ecx
  char *v25; // r9
  int v26; // eax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v32; // [rsp+68h] [rbp-98h]
  _DWORD Size[3]; // [rsp+6Ch] [rbp-94h]
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[16]; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-60h]
  _BYTE v39[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v43; // [rsp+DCh] [rbp-24h]
  _BYTE v44[20]; // [rsp+E4h] [rbp-1Ch] BYREF
  _QWORD v45[7]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD SystemInformation[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v47[20]; // [rsp+170h] [rbp+70h] BYREF
  int v48; // [rsp+184h] [rbp+84h]

  Size[0] = a3;
  *(_QWORD *)&Size[1] = a2;
  v30 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v45, 0, 48);
  v43 = 0LL;
  memset(v44, 0, sizeof(v44));
  v7 = 0LL;
  v42 = 0;
  v8 = (*(_BYTE *)(a1 + 332) & 8) == 0;
  v32 = a2 != 0;
  Handle = 0LL;
  if ( !v8 )
    EtwpGenerateFileName(a1 + 184, a1 + 200, a1 + 168);
  v9 = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v11 = a3 + 72;
LABEL_10:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v9);
    if ( !Heap )
      return (unsigned int)-1073741801;
    File = EtwpCreateFile(SourceString, v28, (__int64)&Handle);
    if ( File < 0 )
    {
      v15 = Handle;
    }
    else if ( a4 )
    {
      v15 = Handle;
      v34 = 0LL;
      File = NtReadFile(Handle, 0LL, 0LL, 0LL, v37, Heap, v9, &v34, 0LL);
      if ( File >= 0 )
      {
        if ( (*(_BYTE *)(Heap + 136) & 2) == 0
          && *(_BYTE *)(Heap + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(Heap + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(Heap + 148) == 8 )
        {
          v20 = *(unsigned int *)(Heap + 104);
          v21 = *(_DWORD *)(Heap + 140);
          if ( (unsigned int)(v20 - 1024) <= 0xFFFC00
            && v21
            && *(_QWORD *)(Heap + 120)
            && *(_DWORD *)(Heap + 116) == *(_DWORD *)(a1 + 204) )
          {
            *(_QWORD *)(Heap + 120) = 0LL;
            v22 = NtWriteFile(v15, 0LL, 0LL, 0LL, v37, Heap, *(_DWORD *)(a1 + 208), &v34, 0LL);
            *(_DWORD *)(a1 + 400) = v21;
            File = v22;
            *(_DWORD *)(a1 + 344) = v21;
            *(_DWORD *)(a1 + 208) = v20;
            *(_QWORD *)(a1 + 360) = v20;
            *(_QWORD *)(a1 + 144) = v15;
            *(_QWORD *)(a1 + 368) = (unsigned int)(v20 * v21);
LABEL_33:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
            return (unsigned int)File;
          }
        }
        File = -1073741811;
      }
    }
    else
    {
      *(_DWORD *)Heap = v9;
      *(_DWORD *)(Heap + 52) = 262145;
      *(_DWORD *)(Heap + 48) = (v11 + 7) & 0xFFFFFFF8;
      if ( v32 )
      {
        v23 = Size[0];
        v24 = 0;
        v25 = *(char **)&Size[1];
        if ( Size[0] )
        {
          do
          {
            v7 = (__int64)&v25[v24 + 32];
            *(_DWORD *)(v7 + 32) = *(_DWORD *)(a1 + 332) & 0x4101000 | 0x10001;
            *(_DWORD *)(v7 + 36) = 1;
            *(_DWORD *)v7 = *(_DWORD *)(a1 + 208);
            if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 208) > 0x100000u
              || *(_DWORD *)(v7 + 12) > 0x100u )
            {
              *(_WORD *)(v7 + 6) = 2;
            }
            else
            {
              *(_WORD *)(v7 + 6) = 1281;
            }
            v24 += (*(unsigned __int16 *)&v25[v24 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v24 < (unsigned int)v23 );
        }
        if ( *(_DWORD *)(v7 + 44) == 4 )
          v26 = *(_DWORD *)(v7 + 264);
        else
          v26 = *(_DWORD *)(v7 + 272);
        *(_DWORD *)(a1 + 16) = v26;
        memmove((void *)(Heap + 72), v25, v23);
      }
      else
      {
        *(_DWORD *)(Heap + 72) = -1073610752;
        *(_DWORD *)(Heap + 76) = v11 - 72;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v13 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v13 = __rdtsc();
        }
        else
        {
          v35 = 0LL;
          RtlQueryPerformanceCounter(&v35);
          v13 = v35;
        }
        *(_QWORD *)(Heap + 88) = v13;
        *(_DWORD *)(Heap + 84) = v40;
        *(_DWORD *)(Heap + 80) = v41;
        *(_DWORD *)(Heap + 96) = *(_QWORD *)&v44[4] / (__int64)SystemInformation[1];
        *(_DWORD *)(Heap + 100) = *(_QWORD *)&v44[12] / (__int64)SystemInformation[1];
        v14 = NtCurrentPeb();
        *(_BYTE *)(Heap + 108) = v14->OSMajorVersion;
        *(_BYTE *)(Heap + 109) = v14->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          *(_WORD *)(Heap + 110) = 2;
        }
        else
        {
          *(_WORD *)(Heap + 110) = 1281;
        }
        *(_DWORD *)(Heap + 112) = v14->OSBuildNumber;
        *(_DWORD *)(Heap + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(Heap + 148) = 8;
        *(_DWORD *)(Heap + 144) = 1;
        *(_DWORD *)(Heap + 104) = v9;
        *(_DWORD *)(Heap + 140) = 1;
        *(_DWORD *)(Heap + 132) = *(_DWORD *)(a1 + 328);
        *(_DWORD *)(Heap + 136) = *(_DWORD *)(a1 + 332);
        *(_DWORD *)(Heap + 128) = SystemInformation[1];
        *(_QWORD *)(Heap + 352) = v45[0] - v45[4];
        *(_DWORD *)(Heap + 156) = v30;
        *(_QWORD *)(Heap + 160) = 0LL;
        *(_QWORD *)(Heap + 168) = 0LL;
        memmove((void *)(Heap + 384), *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (void *)(Heap + *(unsigned __int16 *)(a1 + 152) + 386LL),
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        EtwpGetTimeZoneInformation((void *)(Heap + 176));
        *(_QWORD *)(Heap + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(Heap + 368) = *(_QWORD *)a1;
        *(_QWORD *)(Heap + 88) = *(_QWORD *)(a1 + 8);
      }
      v15 = Handle;
      if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0 )
      {
        *(_DWORD *)(Heap + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v15, v37, v47, 24LL, 3) >= 0 )
        {
          LODWORD(v9) = ~(v48 - 1) & (*(_DWORD *)(Heap + 48) + v48 - 1);
          *(_DWORD *)Heap = v9;
        }
      }
      *(_DWORD *)(Heap + 4) = *(_DWORD *)(Heap + 48);
      EtwpAddProviderTrackingInfo(a1, Heap, v9);
      v16 = *(unsigned int *)(Heap + 48);
      if ( (unsigned int)v16 < (unsigned int)v9 && (unsigned int)v16 > 0x48 )
        memset((void *)(Heap + v16), 255, (unsigned int)(v9 - v16));
      File = NtWriteFile(v15, 0LL, 0LL, 0LL, v37, Heap, v9, 0LL, 0LL);
      if ( File >= 0 )
      {
        if ( (v17 = *(unsigned int *)(a1 + 328), !(_DWORD)v17)
          || (v18 = *(_DWORD *)(a1 + 332), (v18 & 0x20) == 0)
          || ((v18 & 0x2000) == 0 ? (v27 = v17 << 20) : (v27 = v17 << 10),
              v36 = v27,
              File = ZwSetInformationFile(v15, v37, &v36, 8LL, 20),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v15;
          *(_DWORD *)(a1 + 400) = 1;
          *(_DWORD *)(a1 + 344) = 1;
          *(_QWORD *)(a1 + 368) = (unsigned int)v9;
          *(_QWORD *)(a1 + 360) = (unsigned int)v9;
          if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0 )
          {
            *(_DWORD *)(a1 + 464) = 0;
            *(_DWORD *)(a1 + 468) = 0;
            *(_DWORD *)(a1 + 460) = 0;
          }
          v15 = 0LL;
        }
      }
    }
    if ( v15 )
      NtClose(v15);
    goto LABEL_33;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread(-2LL, 0LL, v39);
    if ( File >= 0 )
    {
      v28 = 0;
      File = ZwQueryInformationThread(-2LL, 1LL, &v42);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v45, 0x30u, 0LL);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v30);
          if ( File >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 168) + *(unsigned __int16 *)(a1 + 152) + 388;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)File;
}
