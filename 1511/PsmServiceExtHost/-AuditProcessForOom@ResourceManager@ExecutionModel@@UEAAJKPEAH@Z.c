/*
 * XREFs of ?AuditProcessForOom@ResourceManager@ExecutionModel@@UEAAJKPEAH@Z @ 0x18003BCB0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002904 (RmpActivityHostFindProcessResourceSet.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AuditProcessForOom(
        ExecutionModel::ResourceManager *this,
        DWORD a2,
        int *a3)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // r13
  __int64 ProcessResourceSet; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  signed int LastError; // eax
  NTSTATUS v12; // eax
  unsigned __int64 v13; // r15
  char *lpMinimumApplicationAddress; // rsi
  NTSTATUS v15; // eax
  HANDLE v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 VirtualMemoryInformation; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  _SYSTEM_INFO SystemInfo; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v24[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h]
  __int64 ProcessInformation; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v27[11]; // [rsp+C8h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( a3 )
  {
    *a3 = 0;
    RtlEnterCriticalSection(&RmpGlobalLock);
    ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
    v8 = ProcessResourceSet;
    if ( ProcessResourceSet )
    {
      if ( (*(_BYTE *)(ProcessResourceSet + 1434) & 0x40) != 0
        || (v9 = *(int *)(ProcessResourceSet + 1408), (unsigned int)v9 <= 0x29)
        && (v10 = 0x24704100001LL, _bittest64(&v10, v9)) )
      {
        v6 = *(_QWORD *)(v8 + 1464);
      }
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( v6 )
    {
      v17 = OpenProcess(0x410u, 0, a2);
      if ( v17 )
      {
        ProcessInformation = 0LL;
        memset_0(v27, 0, 0x50uLL);
        v12 = NtQueryInformationProcess(v17, ProcessVmCounters, &ProcessInformation, 0x58u, 0LL);
        if ( v12 < 0 )
        {
LABEL_30:
          v5 = v12 | 0x10000000;
        }
        else if ( v27[0] >= v6 )
        {
          SystemInfo.dwOemId = 0;
          memset_0(&SystemInfo.dwPageSize, 0, 0x2CuLL);
          GetSystemInfo(&SystemInfo);
          VirtualMemoryInformation = 0LL;
          v13 = 0LL;
          v19 = 0LL;
          lpMinimumApplicationAddress = (char *)SystemInfo.lpMinimumApplicationAddress;
          v20 = 0LL;
          v21 = 0LL;
          while ( lpMinimumApplicationAddress < SystemInfo.lpMaximumApplicationAddress )
          {
            v15 = NtQueryVirtualMemory(
                    v17,
                    lpMinimumApplicationAddress,
                    MemoryBasicVlmInformation,
                    &VirtualMemoryInformation,
                    0x20uLL,
                    0LL);
            if ( v15 < 0 )
            {
              if ( v15 != -1073741503 )
              {
                v5 = v15 | 0x10000000;
                break;
              }
              v23 = 0LL;
              memset_0(v24, 0, 0x28uLL);
              v12 = NtQueryVirtualMemory(v17, lpMinimumApplicationAddress, MemoryBasicInformation, &v23, 0x30uLL, 0LL);
              if ( v12 < 0 )
                goto LABEL_30;
              lpMinimumApplicationAddress += v25;
            }
            else
            {
              if ( HIDWORD(v19) == 0x20000 )
              {
                v13 += v21;
              }
              else if ( HIDWORD(v19) == 0x8000000 )
              {
                v13 += v20;
              }
              if ( v13 > v6 )
              {
                *a3 = 1;
                break;
              }
              lpMinimumApplicationAddress += v20;
            }
          }
        }
        else
        {
          *a3 = 0;
        }
      }
      else
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
      }
      tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v17);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v5;
}
