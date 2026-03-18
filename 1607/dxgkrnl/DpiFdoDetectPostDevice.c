/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1C00E3374
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00DF6A8 (DpiFdoSetAdapterPowerState.c)
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00E3564 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rsi
  char v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  signed __int64 v9; // r13
  PIRP v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  _DWORD *Information; // rcx
  __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  _DWORD *v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+78h] [rbp-88h]
  const wchar_t *v34; // [rsp+80h] [rbp-80h]
  int *v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+90h] [rbp-70h]
  int *v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp-50h]
  _BYTE v41[40]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v42[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v43; // [rsp+E4h] [rbp-1Ch]
  int v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( RtlCompareMemory((const void *)(v2 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v2 + 2559) )
  {
LABEL_22:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  v6 = DpiAcquirePostDisplayInfoFromBgfx(v42);
  v8 = v6;
  if ( v6 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = v8;
    WdLogEvent5_WdError(v20);
LABEL_20:
    if ( RtlCompareMemory((const void *)(v2 + 544), &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    v29 = 0;
    v34 = L"DisableAutoAcpiPostDeivce";
    v32 = 0LL;
    v33 = 288;
    v35 = &v29;
    v37 = &v29;
    v36 = 67108868;
    v38 = 4;
    v39 = 0LL;
    v40 = 0;
    memset(v41, 0, sizeof(v41));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v32, 0LL, 0LL);
    if ( v29 )
      return 0LL;
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdWarning(v28);
    goto LABEL_22;
  }
  v9 = v45 + (unsigned int)(v44 * v43);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v10 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v2 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v10 )
  {
    v10->IoStatus.Status = -1073741637;
    v10->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
    LODWORD(v13) = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 152), v10);
    if ( (_DWORD)v13 == 259 )
    {
      v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = v23;
      if ( v23 )
      {
        v22 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v22 + 24) = v13;
LABEL_26:
        WdLogEvent5_WdError(v22);
        return (unsigned int)v13;
      }
      LODWORD(v13) = IoStatusBlock.Status;
    }
    if ( (int)v13 >= 0 )
    {
      Information = (_DWORD *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        return 0LL;
      v15 = 0LL;
      do
      {
        if ( (unsigned int)v15 >= *Information )
          break;
        v16 = 0;
        v17 = Information[9 * v15 + 4];
        if ( v17 )
        {
          v18 = &Information[9 * v15 + 6];
          while ( ((*((_BYTE *)v18 - 4) - 3) & 0xFB) != 0
               || *(_QWORD *)v18 > v45
               || *(_QWORD *)v18 + (unsigned int)v18[2] < v9 )
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
        v15 = (unsigned int)(v15 + 1);
      }
      while ( !v5 );
      ExFreePoolWithTag(Information, 0);
      goto LABEL_20;
    }
    if ( (_DWORD)v13 == -1073741637 )
      return 0LL;
    v22 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(v2 + 152);
    *(_QWORD *)(v22 + 32) = (int)v13;
    goto LABEL_26;
  }
  v21 = WdLogNewEntry5_WdLowResource(v11);
  LODWORD(v13) = -1073741670;
  *(_QWORD *)(v21 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v21);
  return (unsigned int)v13;
}
