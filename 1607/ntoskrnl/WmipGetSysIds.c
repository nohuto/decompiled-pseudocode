/*
 * XREFs of WmipGetSysIds @ 0x14069D774
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipFindSMBiosStructure @ 0x14069D378 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14069D49C (WmipFindSysIdTable.c)
 *     WmipParseSysIdTable @ 0x14069DA24 (WmipParseSysIdTable.c)
 */

__int64 __fastcall WmipGetSysIds(_QWORD *a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rdi
  int SMBiosStructure; // edi
  __int64 v9; // r14
  unsigned int v10; // eax
  PVOID v11; // rax
  void *v12; // rsi
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rdi
  _OWORD *PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+30h] [rbp-68h] BYREF
  int v21; // [rsp+34h] [rbp-64h] BYREF
  int v22; // [rsp+38h] [rbp-60h]
  _BYTE v23[4]; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v24; // [rsp+40h] [rbp-58h] BYREF
  unsigned int NumberOfBytes; // [rsp+44h] [rbp-54h] BYREF
  int NumberOfBytes_4; // [rsp+48h] [rbp-50h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-40h] BYREF

  v7 = a1;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !WmipSysIdRead )
  {
    if ( (int)WmipFindSysIdTable(&NumberOfBytes_4, v23, &v24) < 0 )
    {
      SMBiosStructure = WmipFindSMBiosStructure(1, &v27, &BaseAddress, &NumberOfBytes);
      v22 = SMBiosStructure;
      if ( SMBiosStructure >= 0 )
      {
        WmipSysId1394 = 0LL;
        WmipSysId1394Count = 0;
        v15 = v27;
        if ( *(_BYTE *)(v27 + 1) <= 8u )
        {
          WmipSysIdUuid = 0LL;
          WmipSysIdUuidCount = 0;
        }
        else
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x73696D57u);
          if ( PoolWithTag )
          {
            *PoolWithTag = *(_OWORD *)(v15 + 8);
            WmipSysIdUuidCount = 1;
            WmipSysIdUuid = (__int64)PoolWithTag;
            v22 = 0;
          }
          else
          {
            ExFreePoolWithTag(0LL, 0);
            v22 = -1073741823;
          }
        }
        if ( BaseAddress )
          MmUnmapIoSpace(BaseAddress, NumberOfBytes);
        ExReleaseResourceLite(&WmipSMBiosLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
        SMBiosStructure = v22;
      }
    }
    else
    {
      v20 = 0;
      v21 = 0;
      SMBiosStructure = WmipParseSysIdTable(NumberOfBytes_4, v24, 0, (unsigned int)&v20, 0LL, (__int64)&v21);
      if ( SMBiosStructure >= 0 )
      {
        v9 = (unsigned int)(16 * v20);
        v10 = v9 + 8 * v21;
        if ( v10 )
        {
          v11 = ExAllocatePoolWithTag(PagedPool, v10, 0x73696D57u);
          v12 = v11;
          if ( !v11 )
          {
            KeReleaseMutex(&WmipSMMutex, 0);
            return 3221225626LL;
          }
          v14 = (__int64)v11 + v9;
          SMBiosStructure = WmipParseSysIdTable(
                              NumberOfBytes_4,
                              v24,
                              (_DWORD)v11,
                              (unsigned int)&v20,
                              v14,
                              (__int64)&v21);
          if ( SMBiosStructure < 0 )
          {
            ExFreePoolWithTag(v12, 0);
          }
          else
          {
            WmipSysIdUuid = (__int64)v12;
            WmipSysIdUuidCount = v20;
            WmipSysId1394 = v14;
            WmipSysId1394Count = v21;
          }
        }
      }
    }
    WmipSysIdRead = SMBiosStructure != -1073741670;
    WmipSysIdStatus = SMBiosStructure;
    v7 = a1;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  result = (unsigned int)WmipSysIdStatus;
  if ( WmipSysIdStatus >= 0 )
  {
    *v7 = WmipSysIdUuid;
    *a2 = WmipSysIdUuidCount;
    *a3 = WmipSysId1394;
    *a4 = WmipSysId1394Count;
  }
  return result;
}
