/*
 * XREFs of ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@@Z @ 0x18002F1E0
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002EC94 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerCheckRequestSatisfiability(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2)
{
  unsigned int v2; // r8d
  _QWORD *v4; // rcx
  unsigned int v5; // r10d
  unsigned int v6; // r10d
  _QWORD *v7; // rcx
  __int64 v8; // r9

  v2 = 0;
  if ( (*((_DWORD *)a2 + 42) & 1) == 0 )
  {
LABEL_5:
    if ( *(_DWORD *)a2 <= (unsigned int)(*((_DWORD *)a1 + 110) - *((_DWORD *)a1 + 111)) )
    {
      if ( (*((_DWORD *)a2 + 42) & 1) == 0 )
        return v2;
      v6 = 0;
      v7 = (_QWORD *)((char *)a2 + 8);
      v8 = a1 - a2;
      while ( (~*(_QWORD *)((char *)v7 + v8 + 240) & *v7) == 0LL )
      {
        ++v6;
        ++v7;
        if ( v6 >= 0x14 )
          return v2;
      }
    }
    return (unsigned int)-1073741670;
  }
  v4 = (_QWORD *)((char *)a2 + 8);
  v5 = 0;
  while ( (~*(_QWORD *)((char *)v4 + a1 - a2 + 80) & *v4) == 0LL )
  {
    ++v5;
    ++v4;
    if ( v5 >= 0x14 )
      goto LABEL_5;
  }
  return (unsigned int)-1073741811;
}
