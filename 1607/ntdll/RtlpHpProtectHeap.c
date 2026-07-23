/*
 * XREFs of RtlpHpProtectHeap @ 0x1800F9E20
 * Callers:
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800FBF38 (RtlpHpLargeAllocationProtect.c)
 */

__int64 __fastcall RtlpHpProtectHeap(char **BaseAddress, ULONG NewProtect)
{
  __int64 v2; // r15
  __int64 v4; // r8
  NTSTATUS v5; // eax
  char *i; // rbx
  char *v7; // rax
  NTSTATUS VirtualMemory; // eax
  NTSTATUS v9; // eax
  char *v10; // rbx
  int v12; // eax
  char *v13; // rax
  unsigned __int64 j; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-40h] BYREF
  _BYTE MemoryInformation[24]; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h]
  ULONG OldProtect; // [rsp+B0h] [rbp+40h] BYREF
  PVOID BaseAddressa; // [rsp+B8h] [rbp+48h] BYREF

  v2 = NewProtect;
  LODWORD(v4) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  BaseAddress,
                  MemoryBasicInformation,
                  MemoryInformation,
                  0x30uLL,
                  0LL);
  if ( (int)v4 >= 0 )
  {
    RegionSize = v17;
    BaseAddressa = BaseAddress;
    v5 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
    v4 = (unsigned int)v5;
    if ( v5 >= 0 )
    {
      for ( i = BaseAddress[12]; ; i = *(char **)i )
      {
        if ( i == (char *)(BaseAddress + 12) )
        {
          v10 = BaseAddress[7];
          if ( v10 )
          {
LABEL_14:
            while ( 1 )
            {
              v12 = RtlpHpLargeAllocationProtect(v10, v2, v4);
              v4 = (unsigned int)v12;
              if ( v12 < 0 )
                break;
              v13 = *(char **)v10;
              if ( !*(_QWORD *)v10 )
              {
                v13 = (char *)*((_QWORD *)v10 + 1);
                if ( !v13 )
                {
                  for ( j = (unsigned __int64)v10; ; v10 = (char *)j )
                  {
                    j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !j )
                      break;
                    if ( *(_QWORD *)(j + 8) && *(char **)(j + 8) != v10 )
                    {
                      v10 = *(char **)(j + 8);
                      goto LABEL_14;
                    }
                  }
                  return (unsigned int)v4;
                }
              }
              v10 = v13;
            }
          }
          else
          {
            LODWORD(v4) = 0;
          }
          return (unsigned int)v4;
        }
        BaseAddressa = i;
        v7 = i;
        if ( i < i + 0x100000 )
          break;
LABEL_9:
        ;
      }
      while ( 1 )
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v7,
                          MemoryBasicInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        v4 = (unsigned int)VirtualMemory;
        if ( VirtualMemory < 0 )
          break;
        if ( v18 == 4096 )
        {
          RegionSize = v17;
          v9 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
          v4 = (unsigned int)v9;
          if ( v9 < 0 )
            break;
        }
        v7 = (char *)BaseAddressa + v17;
        BaseAddressa = v7;
        if ( v7 >= i + 0x100000 )
          goto LABEL_9;
      }
    }
  }
  return (unsigned int)v4;
}
