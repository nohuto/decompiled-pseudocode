/*
 * XREFs of MemUtilPrioritizeWsPages @ 0x180038B90
 * Callers:
 *     MemUtilEmptyProcess @ 0x180038A00 (MemUtilEmptyProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     MemUtilQueryWorkingSet @ 0x1800390F4 (MemUtilQueryWorkingSet.c)
 */

__int64 __fastcall MemUtilPrioritizeWsPages(void *a1, int a2, char a3)
{
  unsigned int WorkingSet; // ebx
  char *v6; // rbx
  char *v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  char *i; // r8
  int v13; // [rsp+30h] [rbp-39h] BYREF
  LPVOID lpMem; // [rsp+38h] [rbp-31h]
  _QWORD v15[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE SystemInformation[40]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+Fh]

  lpMem = 0LL;
  v13 = a2;
  WorkingSet = MemUtilQueryWorkingSet(a1);
  if ( !WorkingSet )
  {
    v6 = (char *)lpMem + 8;
    qsort((char *)lpMem + 8, *(_QWORD *)lpMem, 8uLL, MemUtilWsVACompare);
    v7 = (char *)lpMem + 8 * MEMORY[0] + 8;
    v8 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v8 >= 0 )
    {
      if ( v6 >= v7 )
        return 0;
      while ( 1 )
      {
        if ( ((*(_QWORD *)v6 & 0x100LL) == 0 || (a3 & 2) != 0) && ((*(_QWORD *)v6 & 0x100LL) != 0 || (a3 & 1) != 0) )
        {
          v9 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFF000uLL;
          v10 = 4096LL;
          if ( v9 > v17 )
            return 0;
          for ( i = v6 + 8;
                i < v7
             && (*(_QWORD *)v6 >> 12) + 1LL == *(_QWORD *)i >> 12
             && ((*(_QWORD *)v6 ^ *(_QWORD *)i) & 0x100LL) == 0;
                i += 8 )
          {
            v6 += 8;
            v10 += 4096LL;
          }
          v15[0] = v9;
          v15[1] = v10;
          v8 = ((__int64 (__fastcall *)(void *, __int64, __int64, _QWORD *, int *, int))NtSetInformationVirtualMemory)(
                 a1,
                 1LL,
                 1LL,
                 v15,
                 &v13,
                 4);
          if ( v8 < 0 )
            break;
        }
        v6 += 8;
        if ( v6 >= v7 )
          return 0;
      }
    }
    return RtlNtStatusToDosError(v8);
  }
  return WorkingSet;
}
