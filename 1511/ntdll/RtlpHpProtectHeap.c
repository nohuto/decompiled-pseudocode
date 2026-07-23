/*
 * XREFs of RtlpHpProtectHeap @ 0x1800F2860
 * Callers:
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800F2418 (RtlpHpLargeAllocationProtect.c)
 */

__int64 __fastcall RtlpHpProtectHeap(char **BaseAddress, ULONG NewProtect)
{
  NTSTATUS VirtualMemory; // r8d
  char *i; // rbx
  char *v6; // rax
  char *v7; // rbx
  char *v9; // rax
  unsigned __int64 j; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-40h] BYREF
  _BYTE MemoryInformation[24]; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  ULONG OldProtect; // [rsp+B0h] [rbp+40h] BYREF
  PVOID BaseAddressa; // [rsp+B8h] [rbp+48h] BYREF

  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    MemoryBasicInformation,
                    MemoryInformation,
                    0x30uLL,
                    0LL);
  if ( VirtualMemory >= 0 )
  {
    RegionSize = v13;
    BaseAddressa = BaseAddress;
    VirtualMemory = ZwProtectVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &BaseAddressa,
                      &RegionSize,
                      NewProtect,
                      &OldProtect);
    if ( VirtualMemory >= 0 )
    {
      for ( i = BaseAddress[12]; ; i = *(char **)i )
      {
        if ( i == (char *)(BaseAddress + 12) )
        {
          v7 = BaseAddress[7];
          if ( v7 )
          {
LABEL_14:
            while ( 1 )
            {
              VirtualMemory = RtlpHpLargeAllocationProtect((__int64)v7, NewProtect);
              if ( VirtualMemory < 0 )
                break;
              v9 = *(char **)v7;
              if ( !*(_QWORD *)v7 )
              {
                v9 = (char *)*((_QWORD *)v7 + 1);
                if ( !v9 )
                {
                  for ( j = (unsigned __int64)v7; ; v7 = (char *)j )
                  {
                    j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !j )
                      break;
                    if ( *(_QWORD *)(j + 8) && *(char **)(j + 8) != v7 )
                    {
                      v7 = *(char **)(j + 8);
                      goto LABEL_14;
                    }
                  }
                  return (unsigned int)VirtualMemory;
                }
              }
              v7 = v9;
            }
          }
          else
          {
            return 0;
          }
          return (unsigned int)VirtualMemory;
        }
        BaseAddressa = i;
        v6 = i;
        if ( i < i + 0x100000 )
          break;
LABEL_9:
        ;
      }
      while ( 1 )
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v6,
                          MemoryBasicInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        if ( VirtualMemory < 0 )
          break;
        if ( v14 == 4096 )
        {
          RegionSize = v13;
          VirtualMemory = ZwProtectVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            &BaseAddressa,
                            &RegionSize,
                            NewProtect,
                            &OldProtect);
          if ( VirtualMemory < 0 )
            break;
        }
        v6 = (char *)BaseAddressa + v13;
        BaseAddressa = v6;
        if ( v6 >= i + 0x100000 )
          goto LABEL_9;
      }
    }
  }
  return (unsigned int)VirtualMemory;
}
