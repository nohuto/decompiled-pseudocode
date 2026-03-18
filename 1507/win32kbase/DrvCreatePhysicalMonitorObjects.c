/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C0067880
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0067420 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     IsCreatePhysicalMonitorSupported_0 @ 0x1C0001798 (IsCreatePhysicalMonitorSupported_0.c)
 *     CreatePhysicalMonitorWrap_0 @ 0x1C00017A0 (CreatePhysicalMonitorWrap_0.c)
 *     IsDestroyPhysicalMonitorSupported_0 @ 0x1C00017A8 (IsDestroyPhysicalMonitorSupported_0.c)
 *     DestroyPhysicalMonitor_0 @ 0x1C00017B0 (DestroyPhysicalMonitor_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C0066420 (UpdateMonitorDevices.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0067AC0 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAX@Z @ 0x1C0067DA0 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAX@Z.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C0068934 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0068B64 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x1C00B3AEC (-RtlULongMult@@YAJKKPEAK@Z.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *Address)
{
  __int64 v7; // rsi
  __int64 v8; // r13
  enum _MODE v9; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  struct tagGRAPHICS_DEVICE *v13; // rsi
  __int64 i; // rdx
  struct tagGRAPHICS_DEVICE *v15; // rcx
  int DeviceFromNameAndValidateDevice; // ebx
  struct tagGRAPHICS_DEVICE *v17; // r8
  int v18; // r15d
  __int64 v19; // r12
  __int64 v20; // rdi
  int ProtectedOutput; // eax
  _QWORD *v22; // r15
  unsigned int *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 j; // rdi
  __int64 v30; // rax
  size_t Size; // [rsp+30h] [rbp-68h] BYREF
  int v32; // [rsp+38h] [rbp-60h]
  int v33; // [rsp+3Ch] [rbp-5Ch]
  struct tagGRAPHICS_DEVICE *v34[11]; // [rsp+40h] [rbp-58h] BYREF
  SIZE_T Length; // [rsp+B8h] [rbp+20h] BYREF

  LODWORD(Length) = a4;
  v7 = a4;
  v8 = a3;
  v9 = (int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v11[3] = a1;
  v11[4] = v8;
  v11[5] = v7;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  v12 = 0;
  v13 = 0LL;
  UpdateMonitorDevices();
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, v9, v34);
  if ( DeviceFromNameAndValidateDevice >= 0 )
  {
    DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v34[0], (unsigned int *)&Size);
    if ( DeviceFromNameAndValidateDevice >= 0 )
    {
      v18 = Size;
      if ( a5 < (unsigned int)Size )
      {
        DeviceFromNameAndValidateDevice = -1071774234;
        goto LABEL_31;
      }
      DeviceFromNameAndValidateDevice = RtlULongMult(8u, Size, (unsigned int *)&Size);
      if ( DeviceFromNameAndValidateDevice >= 0 )
      {
        v13 = (struct tagGRAPHICS_DEVICE *)PALLOCMEM2((unsigned int)Size, 1986291527LL, 1);
        v34[2] = v13;
        if ( !v13 )
        {
          DeviceFromNameAndValidateDevice = -1073741801;
          goto LABEL_31;
        }
        v19 = 0LL;
        v20 = 0LL;
        v15 = v34[0];
        while ( (unsigned int)v20 < *((_DWORD *)v15 + 56) )
        {
          i = 5 * v20;
          Size = 5 * v20;
          v17 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v15 + 29);
          v34[1] = v17;
          if ( (*((_DWORD *)v17 + 5 * v20) & 1) != 0 )
          {
            if ( v12 == v18 )
              goto LABEL_30;
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 != 1 )
              {
LABEL_30:
                DeviceFromNameAndValidateDevice = -1071774233;
                goto LABEL_31;
              }
              DeviceFromNameAndValidateDevice = IsCreatePhysicalMonitorSupported_0();
              if ( DeviceFromNameAndValidateDevice >= 0 )
                DeviceFromNameAndValidateDevice = CreatePhysicalMonitorWrap_0();
            }
            else
            {
              ProtectedOutput = COPM::CreateProtectedOutput(
                                  (struct tagGRAPHICS_DEVICE *)((char *)v13 + 8 * v19),
                                  (enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS)Length,
                                  (struct _LUID *)((char *)v17 + 20 * v20 + 8),
                                  *((_DWORD *)v17 + 5 * v20 + 1),
                                  (void **)v13 + v19);
              DeviceFromNameAndValidateDevice = 0;
              if ( ProtectedOutput < 0 )
                DeviceFromNameAndValidateDevice = ProtectedOutput;
            }
            if ( DeviceFromNameAndValidateDevice < 0 )
              goto LABEL_31;
            v19 = (unsigned int)(v19 + 1);
            ++v12;
            v15 = v34[0];
          }
          v20 = (unsigned int)(v20 + 1);
        }
        DeviceFromNameAndValidateDevice = RtlULongMult(8u, a5, (unsigned int *)&Length);
        if ( DeviceFromNameAndValidateDevice >= 0 )
        {
          v22 = Address;
          ProbeForWrite(Address, (unsigned int)Length, (ULONG)v15);
          v23 = a6;
          ProbeForWrite(a6, 4uLL, 4u);
          if ( v12 > a5 )
          {
            DeviceFromNameAndValidateDevice = -1071774234;
            v33 = -1071774234;
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v32 = i;
              if ( (unsigned int)i >= v12 )
                break;
              v22[i] = *((_QWORD *)v13 + i);
            }
            *v23 = v12;
          }
        }
      }
    }
  }
  if ( DeviceFromNameAndValidateDevice >= 0 )
  {
    Win32FreePool();
    v27 = WdLogNewEntry5_WdTrace(v25, v24, v26);
    WdLogEvent5_WdTrace(v27);
    return 0LL;
  }
LABEL_31:
  if ( v13 )
  {
    if ( v12 )
    {
      for ( j = 0LL; (unsigned int)j < v12; j = (unsigned int)(j + 1) )
      {
        OPMDestroyProtectedOutput(*((void **)v13 + j));
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 == 1 && (int)IsDestroyPhysicalMonitorSupported_0() >= 0 )
            DestroyPhysicalMonitor_0();
        }
        else
        {
          OPMDestroyProtectedOutput(*((void **)v13 + j));
        }
      }
    }
    Win32FreePool();
  }
  v30 = WdLogNewEntry5_WdTrace(v15, i, v17);
  *(_QWORD *)(v30 + 24) = DeviceFromNameAndValidateDevice;
  WdLogEvent5_WdTrace(v30);
  return (unsigned int)DeviceFromNameAndValidateDevice;
}
