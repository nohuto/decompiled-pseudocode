/*
 * XREFs of PssNtFreeRemoteSnapshot @ 0x1800F65A0
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180093CF0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall PssNtFreeRemoteSnapshot(HANDLE ProcessHandle, PVOID *a2)
{
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  int Buffer; // [rsp+50h] [rbp-B0h] BYREF
  int v8; // [rsp+54h] [rbp-ACh]
  HANDLE v9; // [rsp+380h] [rbp+280h]
  HANDLE v10; // [rsp+398h] [rbp+298h]
  HANDLE v11; // [rsp+3B0h] [rbp+2B0h]
  HANDLE v12; // [rsp+3C8h] [rbp+2C8h]
  HANDLE v13; // [rsp+3E8h] [rbp+2E8h]
  HANDLE SourceHandle; // [rsp+408h] [rbp+308h]

  result = ZwReadVirtualMemory(ProcessHandle, a2, &Buffer, 0x430uLL, &RegionSize);
  if ( result >= 0 )
  {
    if ( RegionSize == 1072 )
    {
      if ( Buffer == 1146311504 )
      {
        if ( (v8 & 1) == 0 || (v8 & 2) != 0 )
        {
          return -1073741637;
        }
        else
        {
          if ( (v8 & 4) != 0 )
          {
            BaseAddress = a2[106];
            RegionSize = 0LL;
            ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
          }
          if ( SourceHandle )
            ZwDuplicateObject(ProcessHandle, SourceHandle, 0LL, 0LL, 0, 0, 1u);
          if ( v13 )
            ZwDuplicateObject(ProcessHandle, v13, 0LL, 0LL, 0, 0, 1u);
          if ( v11 )
            ZwDuplicateObject(ProcessHandle, v11, 0LL, 0LL, 0, 0, 1u);
          if ( v12 )
            ZwDuplicateObject(ProcessHandle, v12, 0LL, 0LL, 0, 0, 1u);
          if ( v10 )
            ZwDuplicateObject(ProcessHandle, v10, 0LL, 0LL, 0, 0, 1u);
          if ( v9 )
            ZwDuplicateObject(ProcessHandle, v9, 0LL, 0LL, 0, 0, 1u);
          BaseAddress = a2;
          RegionSize = 0LL;
          ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
          return 0;
        }
      }
      else
      {
        return -1073741816;
      }
    }
    else
    {
      return -2147483635;
    }
  }
  return result;
}
