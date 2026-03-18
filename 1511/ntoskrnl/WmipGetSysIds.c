/*
 * XREFs of WmipGetSysIds @ 0x14065F02C
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1404848DC (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipFindSMBiosStructure @ 0x14065ECA8 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14065EDA4 (WmipFindSysIdTable.c)
 *     WmipParseSysIdTable @ 0x14065F2B8 (WmipParseSysIdTable.c)
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
  __int64 v15; // rsi
  _OWORD *PoolWithTag; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-50h] BYREF
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v21[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a1;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !WmipSysIdRead )
  {
    if ( (int)WmipFindSysIdTable(v21, v17, &NumberOfBytes) < 0 )
    {
      SMBiosStructure = WmipFindSMBiosStructure(1, v21, &BaseAddress, &NumberOfBytes);
      if ( SMBiosStructure >= 0 )
      {
        WmipSysId1394 = 0LL;
        WmipSysId1394Count = 0;
        v15 = v21[0];
        if ( *(_BYTE *)(v21[0] + 1LL) <= 8u )
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
            SMBiosStructure = 0;
          }
          else
          {
            ExFreePoolWithTag(0LL, 0);
            SMBiosStructure = -1073741823;
          }
          HIDWORD(NumberOfBytes) = SMBiosStructure;
        }
        if ( BaseAddress )
          MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
      }
    }
    else
    {
      v18 = 0;
      LODWORD(BaseAddress) = 0;
      SMBiosStructure = WmipParseSysIdTable(v21[0], NumberOfBytes, 0, (unsigned int)&v18, 0LL, (__int64)&BaseAddress);
      if ( SMBiosStructure >= 0 )
      {
        v9 = (unsigned int)(16 * v18);
        v10 = v9 + 8 * (_DWORD)BaseAddress;
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
                              v21[0],
                              NumberOfBytes,
                              (_DWORD)v11,
                              (unsigned int)&v18,
                              v14,
                              (__int64)&BaseAddress);
          if ( SMBiosStructure < 0 )
          {
            ExFreePoolWithTag(v12, 0);
          }
          else
          {
            WmipSysIdUuid = (__int64)v12;
            WmipSysIdUuidCount = v18;
            WmipSysId1394 = v14;
            WmipSysId1394Count = (int)BaseAddress;
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
