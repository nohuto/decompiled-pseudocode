/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00639D0
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00627D8 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8C64 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(struct tagGRAPHICS_DEVICE *a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned __int16 v6; // r15
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 v10; // bx
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v18; // eax
  const WCHAR *v19; // rax
  WCHAR *v20; // r14
  NTSTATUS v21; // ebx
  __int64 v22; // rax
  _DWORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+90h] [rbp-70h]
  const wchar_t *v27; // [rsp+98h] [rbp-68h]
  unsigned int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  _DWORD *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  _BYTE v35[32]; // [rsp+D8h] [rbp-28h] BYREF

  v23[0] = 0;
  v6 = a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3);
  *(_QWORD *)(v8 + 24) = a1;
  WdLogEvent5_WdTrace(v8);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.DefaultType = 4;
  QueryTable.DefaultData = v23;
  v27 = L"Attach.ToDesktop";
  QueryTable.DefaultLength = 4;
  v29 = 4;
  v31 = 4;
  *a4 = 0;
  v30 = v23;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 32;
  QueryTable.EntryContext = a3;
  v25 = 0LL;
  v26 = 32;
  v28 = a4;
  v32 = 0LL;
  v33 = 0;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  v9 = *((_DWORD *)a1 + 40);
  if ( (v9 & 0x2000000) != 0 )
  {
    v10 = -1;
  }
  else if ( (v9 & 0x4000000) != 0 )
  {
    v10 = v6;
  }
  else
  {
    v10 = 0;
  }
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 1LL,
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
  v19 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0LL, 0LL, 0LL, 0, 0LL, v10);
  v20 = (WCHAR *)v19;
  if ( v19 )
  {
    v21 = RtlQueryRegistryValues(0x40000000u, v19, &QueryTable, 0LL, 0LL);
    ZwClose(v20);
    if ( v21 >= 0 )
    {
LABEL_6:
      if ( !v6 )
      {
        if ( (*((_DWORD *)a1 + 40) & 0x6000000) == 0 )
        {
LABEL_9:
          v16 = WdLogNewEntry5_WdTrace(v14, v13, v15);
          *(_QWORD *)(v16 + 24) = *a3;
          *(_QWORD *)(v16 + 32) = *a4;
          WdLogEvent5_WdTrace(v16);
          return 1LL;
        }
LABEL_8:
        *a4 = 0;
        goto LABEL_9;
      }
      if ( v6 == 0xFFFF )
      {
        v18 = (*((_DWORD *)a1 + 40) >> 25) & 1;
      }
      else
      {
        if ( (*((_DWORD *)a1 + 40) & 0x2000000) != 0 )
          goto LABEL_8;
        v18 = *((_DWORD *)a1 + 69);
      }
      *a4 = v18;
      goto LABEL_9;
    }
  }
  v22 = WdLogNewEntry5_WdTrace(v14, v13, v15);
  WdLogEvent5_WdTrace(v22);
  return 0LL;
}
