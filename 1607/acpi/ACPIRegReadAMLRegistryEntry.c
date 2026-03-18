/*
 * XREFs of ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0004DA0 (ACPIMapNamedTable.c)
 *     ACPILoadProcessDSDT @ 0x1C00A668C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1C00A6C1C (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004C64 (WPP_RECORDER_SF_s.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00554D8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C0055D50 (WPP_RECORDER_SF_Ld.c)
 *     OSOpenHandle @ 0x1C0080C4C (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1C0080E48 (ACPIRegLocalCopyString.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C009E090 (ACPIRegReadEntireAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1C009E5EC (OSOpenLargestSubkey.c)
 */

bool __fastcall ACPIRegReadAMLRegistryEntry(__int64 *a1)
{
  bool v1; // si
  __int64 v2; // r15
  char *PoolWithTag; // rax
  char *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-28h]
  unsigned int v19; // [rsp+90h] [rbp+48h]
  HANDLE Handle; // [rsp+A8h] [rbp+60h] BYREF

  Handle = 0LL;
  v1 = 0;
  v2 = *a1;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x59uLL, 0x53706341u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x59uLL);
  qmemcpy(v5, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\", 68);
  v6 = (_BYTE *)ACPIRegLocalCopyString(v5 + 68, v2, 4LL);
  *v6 = 92;
  v7 = (_BYTE *)ACPIRegLocalCopyString(v6 + 1, v2 + 10, 6LL);
  *v7 = 92;
  *(_BYTE *)ACPIRegLocalCopyString(v7 + 1, v2 + 16, 8LL) = 0;
  LOBYTE(v8) = 2;
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    11,
    30,
    (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
    (__int64)v5);
  v9 = OSOpenHandle(v5, 0LL, &Handle);
  if ( v9 >= 0 )
  {
    v12 = OSOpenLargestSubkey(Handle);
    if ( v12 >= 0 )
    {
      v14 = OSReadRegValue("Action");
      if ( v14 < 0 )
      {
        WPP_RECORDER_SF_Ld(WPP_GLOBAL_Control->DeviceExtension, v15, v16, v17, v18, v14, 4);
      }
      else if ( v19 )
      {
        if ( v19 > 2 )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            11,
            34,
            (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
            v19);
        }
      }
      else
      {
        v1 = (int)ACPIRegReadEntireAcpiTable(0LL, a1) >= 0;
      }
    }
    else
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        11,
        32,
        (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
        v12);
    }
  }
  else
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      11,
      31,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v9);
  }
  ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  return v1;
}
