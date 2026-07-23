/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x180054904
 * Callers:
 *     EtwpLogger @ 0x180052AE0 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x18005395C (EtwpStartUmLogger.c)
 *     EtwpBufferingModeFlush @ 0x1800FD694 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     EtwpAddProviderTrackingInfo @ 0x180054EB8 (EtwpAddProviderTrackingInfo.c)
 *     EtwpCreateFile @ 0x180054F38 (EtwpCreateFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180056FCC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetTimeZoneInformation @ 0x1800570B4 (EtwpGetTimeZoneInformation.c)
 *     RtlQueryPerformanceCounter @ 0x18005BED0 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A6520 (NtWriteFile.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x1800A6900 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A6D40 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     EtwpGenerateFileName @ 0x1800FDE14 (EtwpGenerateFileName.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, int a3, char a4)
{
  __int64 v7; // r14
  bool v8; // zf
  SIZE_T Length; // r15
  NTSTATUS File; // ebx
  int v11; // r13d
  LARGE_INTEGER *Buffer; // rsi
  LARGE_INTEGER v13; // rax
  struct _PEB *v14; // rcx
  HANDLE v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ecx
  size_t v20; // r8
  unsigned int v21; // ecx
  char *v22; // r9
  int v23; // eax
  __int64 LowPart; // r13
  int HighPart; // r15d
  NTSTATUS v26; // eax
  __int64 v27; // rax
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v32; // [rsp+68h] [rbp-98h]
  _DWORD Size[3]; // [rsp+6Ch] [rbp-94h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp-88h] BYREF
  void *Src; // [rsp+80h] [rbp-80h]
  __int64 FileInformation; // [rsp+88h] [rbp-78h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-60h]
  char ThreadInformation[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  unsigned int v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v43; // [rsp+DCh] [rbp-24h]
  _BYTE v44[20]; // [rsp+E4h] [rbp-1Ch] BYREF
  char FsInformation[20]; // [rsp+F8h] [rbp-8h] BYREF
  int v46; // [rsp+10Ch] [rbp+Ch]
  _QWORD v47[6]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD SystemInformation[16]; // [rsp+140h] [rbp+40h] BYREF

  Size[0] = a3;
  Src = a2;
  v30 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v47, 0, sizeof(v47));
  v43 = 0LL;
  memset(v44, 0, sizeof(v44));
  v7 = 0LL;
  v42 = 0;
  v8 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v32 = a2 != 0LL;
  FileHandle = 0LL;
  if ( !v8 )
    EtwpGenerateFileName(a1 + 184, a1 + 200, a1 + 168);
  Length = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v11 = a3 + 72;
LABEL_10:
    Buffer = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
      return (unsigned int)-1073741801;
    File = EtwpCreateFile(SourceString, ReturnLength, (__int64)&FileHandle);
    if ( File < 0 )
    {
      v15 = FileHandle;
    }
    else if ( a4 )
    {
      v15 = FileHandle;
      *(_QWORD *)&Size[1] = 0LL;
      File = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, (PLARGE_INTEGER)&Size[1], 0LL);
      if ( File >= 0 )
      {
        if ( (Buffer[17].LowPart & 2) == 0
          && BYTE4(Buffer[13].QuadPart) == MEMORY[0x7FFE026C]
          && BYTE5(Buffer[13].QuadPart) == MEMORY[0x7FFE0270]
          && Buffer[18].HighPart == 8 )
        {
          LowPart = Buffer[13].LowPart;
          HighPart = Buffer[17].HighPart;
          if ( (unsigned int)(LowPart - 1024) <= 0xFFFC00
            && HighPart
            && Buffer[15].QuadPart
            && Buffer[14].HighPart == *(_DWORD *)(a1 + 204) )
          {
            Buffer[15].QuadPart = 0LL;
            v26 = NtWriteFile(
                    v15,
                    0LL,
                    0LL,
                    0LL,
                    &IoStatusBlock,
                    Buffer,
                    *(_DWORD *)(a1 + 208),
                    (PLARGE_INTEGER)&Size[1],
                    0LL);
            *(_DWORD *)(a1 + 392) = HighPart;
            File = v26;
            *(_DWORD *)(a1 + 336) = HighPart;
            *(_DWORD *)(a1 + 208) = LowPart;
            *(_QWORD *)(a1 + 352) = LowPart;
            *(_QWORD *)(a1 + 144) = v15;
            *(_QWORD *)(a1 + 360) = (unsigned int)(LowPart * HighPart);
LABEL_33:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
            return (unsigned int)File;
          }
        }
        File = -1073741811;
      }
    }
    else
    {
      Buffer->LowPart = Length;
      Buffer[6].HighPart = 262145;
      Buffer[6].LowPart = (v11 + 7) & 0xFFFFFFF8;
      if ( v32 )
      {
        v20 = Size[0];
        v21 = 0;
        v22 = (char *)Src;
        if ( Size[0] )
        {
          do
          {
            v7 = (__int64)&v22[v21 + 32];
            *(_DWORD *)(v7 + 32) = *(_DWORD *)(a1 + 324) & 0x4101000 | 0x10001;
            *(_DWORD *)(v7 + 36) = 1;
            *(_DWORD *)v7 = *(_DWORD *)(a1 + 208);
            if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 208) > 0x100000u
              || *(_DWORD *)(v7 + 12) > 0x100u )
            {
              *(_WORD *)(v7 + 6) = 2;
            }
            else
            {
              *(_WORD *)(v7 + 6) = 1281;
            }
            v21 += (*(unsigned __int16 *)&v22[v21 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v21 < (unsigned int)v20 );
        }
        if ( *(_DWORD *)(v7 + 44) == 4 )
          v23 = *(_DWORD *)(v7 + 264);
        else
          v23 = *(_DWORD *)(v7 + 272);
        *(_DWORD *)(a1 + 16) = v23;
        memmove(&Buffer[9], v22, v20);
      }
      else
      {
        Buffer[9].LowPart = -1073610752;
        Buffer[9].HighPart = v11 - 72;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v13.QuadPart = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v13.QuadPart = __rdtsc();
        }
        else
        {
          PerformanceCounter.QuadPart = 0LL;
          RtlQueryPerformanceCounter(&PerformanceCounter);
          v13 = PerformanceCounter;
        }
        Buffer[11] = v13;
        Buffer[10].HighPart = v40;
        Buffer[10].LowPart = v41;
        Buffer[12].LowPart = *(_QWORD *)&v44[4] / (__int64)SystemInformation[1];
        Buffer[12].HighPart = *(_QWORD *)&v44[12] / (__int64)SystemInformation[1];
        v14 = NtCurrentPeb();
        BYTE4(Buffer[13].QuadPart) = v14->OSMajorVersion;
        BYTE5(Buffer[13].QuadPart) = v14->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          HIWORD(Buffer[13].QuadPart) = 2;
        }
        else
        {
          HIWORD(Buffer[13].QuadPart) = 1281;
        }
        Buffer[14].LowPart = v14->OSBuildNumber;
        Buffer[47].LowPart = *(_DWORD *)(a1 + 16);
        Buffer[14].HighPart = *(_DWORD *)(a1 + 204);
        Buffer[18].HighPart = 8;
        Buffer[18].LowPart = 1;
        Buffer[13].LowPart = Length;
        Buffer[17].HighPart = 1;
        Buffer[16].HighPart = *(_DWORD *)(a1 + 320);
        Buffer[17].LowPart = *(_DWORD *)(a1 + 324);
        Buffer[16].LowPart = SystemInformation[1];
        Buffer[44].QuadPart = v47[0] - v47[4];
        Buffer[19].HighPart = v30;
        Buffer[20].QuadPart = 0LL;
        Buffer[21].QuadPart = 0LL;
        memmove(&Buffer[48], *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (char *)&Buffer[48] + *(unsigned __int16 *)(a1 + 152) + 2,
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        EtwpGetTimeZoneInformation(&Buffer[22]);
        Buffer[45].QuadPart = MEMORY[0x7FFE0300];
        Buffer[46] = *(LARGE_INTEGER *)a1;
        Buffer[11] = *(LARGE_INTEGER *)(a1 + 8);
      }
      v15 = FileHandle;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        Buffer[5].HighPart = 3;
        if ( ZwQueryVolumeInformationFile(v15, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
        {
          LODWORD(Length) = ~(v46 - 1) & (Buffer[6].LowPart + v46 - 1);
          Buffer->LowPart = Length;
        }
      }
      Buffer->HighPart = Buffer[6].LowPart;
      EtwpAddProviderTrackingInfo(a1, Buffer, (unsigned int)Length);
      v16 = Buffer[6].LowPart;
      if ( (unsigned int)v16 < (unsigned int)Length && (unsigned int)v16 > 0x48 )
        memset((char *)Buffer + v16, 255, (unsigned int)(Length - v16));
      File = NtWriteFile(v15, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
      if ( File >= 0 )
      {
        if ( (v17 = *(unsigned int *)(a1 + 320), !(_DWORD)v17)
          || (v18 = *(_DWORD *)(a1 + 324), (v18 & 0x20) == 0)
          || ((v18 & 0x2000) == 0 ? (v27 = v17 << 20) : (v27 = v17 << 10),
              FileInformation = v27,
              File = ZwSetInformationFile(v15, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v15;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)Length;
          *(_QWORD *)(a1 + 352) = (unsigned int)Length;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_DWORD *)(a1 + 456) = 0;
            *(_DWORD *)(a1 + 460) = 0;
            *(_DWORD *)(a1 + 452) = 0;
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
    File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    if ( File >= 0 )
    {
      File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, &v42, 0x20u, 0LL);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v47, 0x30u, 0LL);
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
