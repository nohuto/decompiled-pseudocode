/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1C00D00D0
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00CFC00 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r14
  char v5; // r15
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  PIRP v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int *Information; // rcx
  signed __int64 v16; // rbx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int v19; // r11d
  unsigned int *v20; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  signed __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h]
  const wchar_t *v36; // [rsp+80h] [rbp-80h]
  signed __int64 *v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+90h] [rbp-70h]
  signed __int64 *v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  _BYTE v44[32]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v45[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( RtlCompareMemory((const void *)(v2 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v2 + 1479) )
  {
LABEL_22:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  v6 = DpiAcquirePostDisplayInfoFromBgfx(v45, 0, 1);
  v8 = v6;
  if ( v6 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v22[4] = DpiAcquirePostDisplayInfoFromBgfx;
    v22[3] = DpiFdoDetectPostDevice;
    v22[5] = v8;
    WdLogEvent5_WdError(v22);
LABEL_20:
    if ( RtlCompareMemory((const void *)(v2 + 544), &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v31) = 0;
    v36 = L"DisableAutoAcpiPostDeivce";
    v34 = 0LL;
    v35 = 288;
    v37 = &v31;
    v39 = &v31;
    v38 = 67108868;
    v40 = 4;
    v41 = 0LL;
    v42 = 0;
    v43 = 0LL;
    memset(v44, 0, sizeof(v44));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v34, 0LL, 0LL);
    if ( (_DWORD)v31 )
      return 0LL;
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = DpiFdoDetectPostDevice;
    *(_QWORD *)(v30 + 32) = a1;
    WdLogEvent5_WdWarning(v30);
    goto LABEL_22;
  }
  v31 = v46 + (unsigned int)(v45[2] * v45[1]);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v9 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v2 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v9 )
  {
    v9->IoStatus.Status = -1073741637;
    v9->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
    LODWORD(v14) = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 152), v9);
    if ( (_DWORD)v14 == 259 )
    {
      v25 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v14 = v25;
      if ( v25 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v24[3] = DpiFdoDetectPostDevice;
        v24[4] = KeWaitForSingleObject;
        v24[5] = v14;
LABEL_26:
        WdLogEvent5_WdError(v24);
        return (unsigned int)v14;
      }
      LODWORD(v14) = IoStatusBlock.Status;
    }
    if ( (int)v14 >= 0 )
    {
      Information = (unsigned int *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        return 0LL;
      v16 = v31;
      v17 = 0;
      do
      {
        if ( v17 >= *Information )
          break;
        v18 = 0;
        v19 = Information[9 * v17 + 4];
        if ( v19 )
        {
          v20 = &Information[9 * v17 + 6];
          while ( ((*((_BYTE *)v20 - 4) - 3) & 0xFB) != 0 || *(_QWORD *)v20 > v46 || *(_QWORD *)v20 + v20[2] < v16 )
          {
            ++v18;
            v20 += 5;
            if ( v18 >= v19 )
              goto LABEL_18;
          }
          *a2 = 1;
          v5 = 1;
        }
LABEL_18:
        ++v17;
      }
      while ( !v5 );
      ExFreePoolWithTag(Information, 0);
      goto LABEL_20;
    }
    if ( (_DWORD)v14 == -1073741637 )
      return 0LL;
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v24[3] = DpiFdoDetectPostDevice;
    v24[4] = *(_QWORD *)(v2 + 152);
    v24[5] = (int)v14;
    goto LABEL_26;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10, 0LL, v11, v12);
  LODWORD(v14) = -1073741670;
  v23[4] = IoBuildSynchronousFsdRequest;
  v23[3] = DpiFdoDetectPostDevice;
  v23[5] = -1073741670LL;
  WdLogEvent5_WdLowResource(v23);
  return (unsigned int)v14;
}
