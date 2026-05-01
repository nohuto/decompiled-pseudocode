/*
 * XREFs of ?RmpCpuSetManagerSweepInvalidSetsCallback@@YAEPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@PEAX@Z @ 0x18001D810
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCpuSetManagerMarkAllocationDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18000352C (-RmpCpuSetManagerMarkAllocationDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerRemoveCpuSetFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KK@Z @ 0x18001DD14 (-RmpCpuSetManagerRemoveCpuSetFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCAT.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@K@Z @ 0x180030FA8 (-RmpCpuSetManagerReleaseAllocationInternal@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATI.c)
 */

unsigned __int8 __fastcall RmpCpuSetManagerSweepInvalidSetsCallback(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        void *a3)
{
  char v3; // r15
  _QWORD *v4; // rsi
  int v5; // r13d
  unsigned int v6; // ebp
  __int64 v8; // r14
  __int64 v10; // r11
  unsigned __int64 v12; // r11
  __int64 v14; // r12
  const GUID *cData; // r8
  const GUID *v16; // r9
  int v17; // [rsp+30h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-88h] BYREF
  struct _RM_CPU_SET_ALLOCATION *v19; // [rsp+60h] [rbp-68h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  int *v21; // [rsp+70h] [rbp-58h]
  const GUID *v22; // [rsp+78h] [rbp-50h]

  v3 = 0;
  v4 = (_QWORD *)((char *)a2 + 112);
  v5 = 0;
  v6 = 0;
  v8 = a1 - a2;
  do
  {
    v10 = *v4 & *(_QWORD *)((char *)v4 + v8 - 40);
    if ( v10 != *v4 )
    {
      v3 = 1;
      v12 = *v4 & ~v10;
      while ( _BitScanForward64((unsigned __int64 *)&v14, v12) )
      {
        RmpCpuSetManagerRemoveCpuSetFromAllocation(a1, a2, v6, v14);
        _bittestandreset64((__int64 *)&v12, (unsigned int)v14);
        ++v5;
      }
      RmpCpuSetManagerMarkAllocationDirty(a1, a2);
    }
    ++v6;
    ++v4;
  }
  while ( v6 < 0x14 );
  if ( v3 )
  {
    if ( !*((_DWORD *)a2 + 68) )
      RmpCpuSetManagerMarkAllocationDirty(a1, (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 360));
    if ( *((_DWORD *)a2 + 70) == 2 )
      RmpCpuSetManagerReleaseAllocationInternal(a1, a2, 1u);
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
    {
      v19 = a2;
      v21 = &v17;
      v20 = 8LL;
      v17 = v5;
      v22 = cData;
      TlgWrite((TraceLoggingHProvider)&pData, &unk_1800412AA, cData, v16, (UINT32)cData, &pData);
    }
  }
  return 1;
}
