/*
 * XREFs of ?GetAppMemoryInformation@System@Windows@@YAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180005E30
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003790 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000DE40 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Windows::System::GetAppMemoryInformation(
        Windows::System *this,
        unsigned __int64 *a2,
        struct _PROCESS_JOB_MEMORY_INFO *a3)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // rax
  __int128 v7; // xmm1
  unsigned __int64 v8; // xmm0_8
  ULONG v9; // [rsp+30h] [rbp-68h] BYREF
  __int128 ProcessInformation; // [rsp+38h] [rbp-60h] BYREF
  __int128 v11; // [rsp+48h] [rbp-50h]
  unsigned __int64 v12; // [rsp+58h] [rbp-40h]
  char SystemInformation[16]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v14; // [rsp+70h] [rbp-28h]

  result = NtQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessBasePriority|0x40,
             &ProcessInformation,
             0x28u,
             0LL);
  if ( result >= 0 )
  {
    v6 = v12;
    if ( !v12 )
    {
      v6 = *((_QWORD *)&v11 + 1);
      if ( !*((_QWORD *)&v11 + 1) )
      {
        result = NtQuerySystemInformation(MaxSystemInfoClass|SystemFullMemoryInformation, SystemInformation, 0x20u, &v9);
        if ( result < 0 )
          return result;
        v6 = v14 * (unsigned int)RmpPageSize;
      }
    }
    *(_QWORD *)this = v6;
    if ( a2 )
    {
      v7 = v11;
      *(_OWORD *)a2 = ProcessInformation;
      v8 = v12;
      *((_OWORD *)a2 + 1) = v7;
      a2[4] = v8;
    }
    return 0;
  }
  return result;
}
