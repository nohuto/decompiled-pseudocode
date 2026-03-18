/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00568A8
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00556B0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BAB74 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0020430 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned __int16 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 v10; // bx
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // eax
  const WCHAR *v17; // rax
  WCHAR *v18; // r14
  NTSTATUS v19; // ebx
  __int64 v20; // rax
  _DWORD v21[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h]
  const wchar_t *v25; // [rsp+98h] [rbp-68h]
  unsigned int *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  _DWORD *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  _BYTE v33[32]; // [rsp+D8h] [rbp-28h] BYREF

  v21[0] = 0;
  v8 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v8 + 24) = a1;
  WdLogEvent5_WdTrace(v8);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = v21;
  v25 = L"Attach.ToDesktop";
  QueryTable.DefaultLength = 4;
  v24 = 288;
  v27 = 67108868;
  v29 = 4;
  *a4 = 0;
  v28 = v21;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = a3;
  v23 = 0LL;
  v26 = a4;
  v30 = 0LL;
  v31 = 0;
  v32 = 0LL;
  memset(v33, 0, sizeof(v33));
  v9 = *((_DWORD *)a1 + 40);
  if ( (v9 & 0x2000000) != 0 )
  {
    v10 = -1;
  }
  else if ( (v9 & 0x4000000) != 0 )
  {
    v10 = a2;
  }
  else
  {
    v10 = 0;
  }
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 1,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 0LL,
                                                 v10);
  v12 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    ZwClose(v12);
    goto LABEL_6;
  }
  v17 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL, v10);
  v18 = (WCHAR *)v17;
  if ( v17 )
  {
    v19 = RtlQueryRegistryValues(0x40000000u, v17, &QueryTable, 0LL, 0LL);
    ZwClose(v18);
    if ( v19 >= 0 )
    {
LABEL_6:
      if ( !a2 )
      {
        if ( (*((_DWORD *)a1 + 40) & 0x6000000) == 0 )
        {
LABEL_9:
          v14 = WdLogNewEntry5_WdTrace(v13);
          *(_QWORD *)(v14 + 24) = *a3;
          *(_QWORD *)(v14 + 32) = *a4;
          WdLogEvent5_WdTrace(v14);
          return 1LL;
        }
LABEL_8:
        *a4 = 0;
        goto LABEL_9;
      }
      if ( a2 == 0xFFFF )
      {
        v16 = (*((_DWORD *)a1 + 40) >> 25) & 1;
      }
      else
      {
        if ( (*((_DWORD *)a1 + 40) & 0x2000000) != 0 )
          goto LABEL_8;
        v16 = *((_DWORD *)a1 + 69);
      }
      *a4 = v16;
      goto LABEL_9;
    }
  }
  v20 = WdLogNewEntry5_WdTrace(v13);
  WdLogEvent5_WdTrace(v20);
  return 0LL;
}
