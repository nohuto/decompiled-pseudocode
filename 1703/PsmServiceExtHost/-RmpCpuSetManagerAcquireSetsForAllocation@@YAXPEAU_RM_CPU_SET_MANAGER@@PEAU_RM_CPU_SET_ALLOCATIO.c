/*
 * XREFs of ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@@Z @ 0x18002ED7C
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EC94 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpCpuSetManagerAcquireSetsForAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a3)
{
  unsigned int i; // edx
  unsigned int v7; // r10d
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v13; // rcx
  _WORD SystemInformation[88]; // [rsp+20h] [rbp-E8h] BYREF

  memset_0(SystemInformation, 0, 0xA8uLL);
  if ( (*((_BYTE *)a3 + 172) & 1) != 0
    && NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0xA8u, 0LL) < 0 )
  {
    *((_DWORD *)a3 + 43) &= ~1u;
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( (i || *((_DWORD *)a3 + 42)) && (i != 1 || *((_DWORD *)a3 + 43)) )
    {
      v7 = 0;
      v8 = 0LL;
      do
      {
        v9 = *(_QWORD *)((char *)a1 + v8 + 248);
        while ( _BitScanReverse64(&v13, v9) )
        {
          v9 &= ~(1LL << v13);
          if ( i )
          {
            if ( i != 1
              || (*((_BYTE *)a3 + 172) & 1) == 0
              || v7 >= SystemInformation[0]
              || (v10 = *(_QWORD *)&SystemInformation[v8 / 2 + 4], !_bittest64(&v10, v13)) )
            {
LABEL_19:
              *(_QWORD *)((char *)a1 + v8 + 248) &= ~(1LL << v13);
              *((_DWORD *)a1 + 112) |= 1u;
              --*((_DWORD *)a1 + 110);
              *(_QWORD *)((char *)a2 + v8 + 96) |= 1LL << v13;
              if ( ++*((_DWORD *)a2 + 64) == *(_DWORD *)a3 )
                return;
            }
          }
          else
          {
            if ( (*((_BYTE *)a3 + 168) & 1) == 0 )
              goto LABEL_19;
            v11 = *(_QWORD *)((char *)a3 + v8 + 8);
            if ( _bittest64(&v11, v13) )
              goto LABEL_19;
          }
        }
        ++v7;
        v8 += 8LL;
      }
      while ( v7 < 0x14 );
    }
  }
}
