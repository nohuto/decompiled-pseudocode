/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x180045664
 * Callers:
 *     EtwpStartUmLogger @ 0x180044BE8 (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1800F3EE4 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180045B3C (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpAddProviderTrackingInfo @ 0x180045C24 (EtwpAddProviderTrackingInfo.c)
 *     EtwpGetTimeZoneInformation @ 0x180045CB0 (EtwpGetTimeZoneInformation.c)
 *     EtwpCreateFile @ 0x1800470F0 (EtwpCreateFile.c)
 *     RtlQueryPerformanceCounter @ 0x18004A7B0 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A5180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A51C0 (NtWriteFile.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x1800A55A0 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x1800A5780 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A59E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, __int64 a2, int a3, char a4)
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
  __int64 LowPart; // r13
  int HighPart; // r15d
  NTSTATUS v22; // eax
  size_t v23; // r8
  unsigned int v24; // ecx
  char *v25; // r9
  int v26; // eax
  __int64 v27; // rax
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v32; // [rsp+68h] [rbp-98h]
  _DWORD Size[3]; // [rsp+6Ch] [rbp-94h]
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-80h] BYREF
  __int64 FileInformation; // [rsp+88h] [rbp-78h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-60h]
  char ThreadInformation[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  unsigned int v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v43; // [rsp+DCh] [rbp-24h]
  _BYTE v44[20]; // [rsp+E4h] [rbp-1Ch] BYREF
  _QWORD v45[7]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD SystemInformation[16]; // [rsp+130h] [rbp+30h] BYREF
  char FsInformation[20]; // [rsp+170h] [rbp+70h] BYREF
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
      ByteOffset.QuadPart = 0LL;
      File = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
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
            v22 = NtWriteFile(v15, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, *(_DWORD *)(a1 + 208), &ByteOffset, 0LL);
            *(_DWORD *)(a1 + 400) = HighPart;
            File = v22;
            *(_DWORD *)(a1 + 344) = HighPart;
            *(_DWORD *)(a1 + 208) = LowPart;
            *(_QWORD *)(a1 + 360) = LowPart;
            *(_QWORD *)(a1 + 144) = v15;
            *(_QWORD *)(a1 + 368) = (unsigned int)(LowPart * HighPart);
LABEL_34:
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
        memmove(&Buffer[9], v25, v23);
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
        if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0
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
        Buffer[16].HighPart = *(_DWORD *)(a1 + 328);
        Buffer[17].LowPart = *(_DWORD *)(a1 + 332);
        Buffer[16].LowPart = SystemInformation[1];
        Buffer[44].QuadPart = v45[0] - v45[4];
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
      if ( (*(_DWORD *)(a1 + 332) & 0x4000000) != 0 )
      {
        Buffer[5].HighPart = 3;
        if ( ZwQueryVolumeInformationFile(v15, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
        {
          LODWORD(Length) = ~(v48 - 1) & (Buffer[6].LowPart + v48 - 1);
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
        if ( (v17 = *(unsigned int *)(a1 + 328), !(_DWORD)v17)
          || (v18 = *(_DWORD *)(a1 + 332), (v18 & 0x20) == 0)
          || ((v18 & 0x2000) == 0 ? (v27 = v17 << 20) : (v27 = v17 << 10),
              FileInformation = v27,
              File = ZwSetInformationFile(v15, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v15;
          *(_DWORD *)(a1 + 400) = 1;
          *(_DWORD *)(a1 + 344) = 1;
          *(_QWORD *)(a1 + 368) = (unsigned int)Length;
          *(_QWORD *)(a1 + 360) = (unsigned int)Length;
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
    goto LABEL_34;
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
