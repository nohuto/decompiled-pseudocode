/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1C00DBAF0
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00BBD90 (DpiFdoSetAdapterPowerState.c)
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00DBCF0 (DpiAcquirePostDisplayInfoFromBgfx.c)
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
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int *Information; // rcx
  signed __int64 v14; // rbx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  unsigned int *v18; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  signed __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+78h] [rbp-88h]
  const wchar_t *v34; // [rsp+80h] [rbp-80h]
  signed __int64 *v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+90h] [rbp-70h]
  signed __int64 *v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  _BYTE v42[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v43[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v44; // [rsp+E4h] [rbp-1Ch]
  int v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( RtlCompareMemory((const void *)(v2 + 512), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v2 + 1439) )
  {
LABEL_22:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  v6 = DpiAcquirePostDisplayInfoFromBgfx(v43);
  v8 = v6;
  if ( v6 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v20[4] = DpiAcquirePostDisplayInfoFromBgfx;
    v20[3] = DpiFdoDetectPostDevice;
    v20[5] = v8;
    WdLogEvent5_WdError(v20);
LABEL_20:
    if ( RtlCompareMemory((const void *)(v2 + 512), &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v29) = 0;
    v34 = L"DisableAutoAcpiPostDeivce";
    v32 = 0LL;
    v33 = 288;
    v35 = &v29;
    v37 = &v29;
    v36 = 67108868;
    v38 = 4;
    v39 = 0LL;
    v40 = 0;
    v41 = 0LL;
    memset(v42, 0, sizeof(v42));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v32, 0LL, 0LL);
    if ( (_DWORD)v29 )
      return 0LL;
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = DpiFdoDetectPostDevice;
    *(_QWORD *)(v28 + 32) = a1;
    WdLogEvent5_WdWarning(v28);
    goto LABEL_22;
  }
  v29 = v46 + (unsigned int)(v45 * v44);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v9 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v2 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v9 )
  {
    v9->IoStatus.Status = -1073741637;
    v9->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
    LODWORD(v12) = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 152), v9);
    if ( (_DWORD)v12 == 259 )
    {
      v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v12 = v23;
      if ( v23 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v11);
        v22[3] = DpiFdoDetectPostDevice;
        v22[4] = KeWaitForSingleObject;
        v22[5] = v12;
LABEL_26:
        WdLogEvent5_WdError(v22);
        return (unsigned int)v12;
      }
      LODWORD(v12) = IoStatusBlock.Status;
    }
    if ( (int)v12 >= 0 )
    {
      Information = (unsigned int *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        return 0LL;
      v14 = v29;
      v15 = 0;
      do
      {
        if ( v15 >= *Information )
          break;
        v16 = 0;
        v17 = Information[9 * v15 + 4];
        if ( v17 )
        {
          v18 = &Information[9 * v15 + 6];
          while ( ((*((_BYTE *)v18 - 4) - 3) & 0xFB) != 0 || *(_QWORD *)v18 > v46 || *(_QWORD *)v18 + v18[2] < v14 )
          {
            ++v16;
            v18 += 5;
            if ( v16 >= v17 )
              goto LABEL_18;
          }
          *a2 = 1;
          v5 = 1;
        }
LABEL_18:
        ++v15;
      }
      while ( !v5 );
      ExFreePoolWithTag(Information, 0);
      goto LABEL_20;
    }
    if ( (_DWORD)v12 == -1073741637 )
      return 0LL;
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v22[3] = DpiFdoDetectPostDevice;
    v22[4] = *(_QWORD *)(v2 + 152);
    v22[5] = (int)v12;
    goto LABEL_26;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10);
  LODWORD(v12) = -1073741670;
  v21[4] = IoBuildSynchronousFsdRequest;
  v21[3] = DpiFdoDetectPostDevice;
  v21[5] = -1073741670LL;
  WdLogEvent5_WdLowResource(v21);
  return (unsigned int)v12;
}
