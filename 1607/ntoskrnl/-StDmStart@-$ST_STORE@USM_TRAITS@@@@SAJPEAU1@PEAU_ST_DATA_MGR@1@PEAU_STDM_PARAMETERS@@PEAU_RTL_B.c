/*
 * XREFs of ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140005158 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     SmHpChunkHeapInitialize @ 0x140002818 (SmHpChunkHeapInitialize.c)
 *     SmHpChunkHeapCleanup @ 0x140004668 (SmHpChunkHeapCleanup.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400056CC (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ST_STORE<SM_TRAITS>::StDmStart(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  PVOID PoolWithTag; // rcx
  PVOID v15; // rdx
  NTSTATUS result; // eax
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v19[5]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE SystemInformation[12]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v21; // [rsp+5Ch] [rbp-1Dh]

  v6 = *a3;
  *(_OWORD *)(a2 + 776) = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 792) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 808) = *(_OWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 832) = v6;
  v11 = a1 + 5624;
  *(_QWORD *)(a2 + 824) = v10;
  v12 = (*(_DWORD *)(a2 + 776) & 0x40000) == 0;
  v13 = *(_QWORD *)(a1 + 3920);
  *(_QWORD *)(a2 + 1880) = v11;
  *(_QWORD *)(a2 + 896) = v13;
  *(_QWORD *)(a2 + 984) = *(_QWORD *)(a1 + 3856);
  *(_QWORD *)(a2 + 1000) = a1 + 3952;
  *(_QWORD *)(a2 + 1752) = *(_QWORD *)(a1 + 4096);
  *(_QWORD *)(a2 + 1872) = a1 + 5632;
  *(_WORD *)(a2 + 976) = *(_WORD *)(a1 + 3932);
  *(_QWORD *)(a2 + 936) = a2 + 24;
  *(_QWORD *)(a2 + 944) = a2 + 88;
  *(_QWORD *)(a2 + 928) = v13;
  if ( !v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    4 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
                    0x74536D73u);
    if ( !PoolWithTag )
      return -1073741670;
    *(_DWORD *)(a2 + 840) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 848) = PoolWithTag;
  }
  if ( (*(_DWORD *)(a2 + 776) & 0x40000) != 0 )
    RtlSetAllBits((PRTL_BITMAP)(a2 + 840));
  v15 = ExAllocatePoolWithTag(
          NonPagedPoolNx,
          4 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
          0x74536D73u);
  if ( !v15 )
    return -1073741670;
  *(_DWORD *)(a2 + 1040) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 1048) = v15;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 1040));
  *(_QWORD *)(a2 + 1016) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 1024) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 1032) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 856) = a6;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 1000) + 24LL) )
  {
    v18 = 0x400000010LL;
    SmHpChunkHeapCleanup(a2 + 192);
    SmHpChunkHeapInitialize((char *)(a2 + 192), (__int64)&v18);
  }
  memset(v19, 0, sizeof(v19));
  if ( (*a3 & 8) != 0 )
  {
    result = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( result < 0 )
      return result;
    v17 = v21 >> 9;
    HIDWORD(v19[0]) = 4;
    if ( v21 >> 9 <= 0x10 )
      v17 = 16;
    LODWORD(v19[0]) = v17;
  }
  else
  {
    LODWORD(v19[0]) = -1;
  }
  v19[1] = ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes;
  v19[2] = ST_STORE<SM_TRAITS>::StNpLeafPageOut;
  v19[3] = ST_STORE<SM_TRAITS>::StNpLeafPageIn;
  v19[4] = ST_STORE<SM_TRAITS>::StNpLeafDelete;
  result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1344), (struct NP_CONTEXT::_NP_PARAMETERS *)v19);
  if ( result >= 0 )
  {
    result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1480), (struct NP_CONTEXT::_NP_PARAMETERS *)v19);
    if ( result >= 0 )
    {
      result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1616), (struct NP_CONTEXT::_NP_PARAMETERS *)v19);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
