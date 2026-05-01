/*
 * XREFs of ?RmpCpuSetManagerReleaseSetsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x1800310B0
 * Callers:
 *     ?RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001D5F4 (-RmpCpuSetManagerRebalanceTopologyChange@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z @ 0x18001DA0C (-RmpCpuSetManagerMoveCpuSet@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@1KK@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall RmpCpuSetManagerReleaseSetsFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        int a3)
{
  unsigned __int64 *v4; // rbx
  int v7; // esi
  unsigned int i; // edi
  __int64 v10; // rax
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  struct _RM_CPU_SET_ALLOCATION *v16; // [rsp+60h] [rbp-58h]
  int v17; // [rsp+68h] [rbp-50h]
  int v18; // [rsp+6Ch] [rbp-4Ch]
  int *v19; // [rsp+70h] [rbp-48h]
  int v20; // [rsp+78h] [rbp-40h]
  int v21; // [rsp+7Ch] [rbp-3Ch]

  v4 = (unsigned __int64 *)((char *)a2 + 112);
  v7 = a3;
  for ( i = 0; i < 0x14; ++i )
  {
    if ( *v4 )
    {
      if ( !v7 )
        break;
      do
      {
        if ( !_BitScanForward64((unsigned __int64 *)&v10, *v4) )
          break;
        RmpCpuSetManagerMoveCpuSet(a1, (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 648), a2, i, v10);
        --v7;
      }
      while ( v7 );
      if ( !v7 )
        break;
    }
    ++v4;
  }
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
    {
      v18 = 0;
      v21 = 0;
      v19 = &v14;
      v16 = a2;
      v17 = 8;
      v14 = a3;
      v20 = (int)cData;
      TlgWrite(cData, &unk_1800411DE, v12, v13, (UINT32)cData, &pData);
    }
  }
}
