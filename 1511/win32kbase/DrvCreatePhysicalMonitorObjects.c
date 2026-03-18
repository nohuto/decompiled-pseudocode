/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C0082540
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0082100 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     IsCreatePhysicalMonitorSupported_0 @ 0x1C0001738 (IsCreatePhysicalMonitorSupported_0.c)
 *     CreatePhysicalMonitorWrap_0 @ 0x1C0001740 (CreatePhysicalMonitorWrap_0.c)
 *     IsDestroyPhysicalMonitorSupported_0 @ 0x1C0001748 (IsDestroyPhysicalMonitorSupported_0.c)
 *     DestroyPhysicalMonitor_0 @ 0x1C0001750 (DestroyPhysicalMonitor_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C0061AA0 (UpdateMonitorDevices.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0082784 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAX@Z @ 0x1C0082B6C (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAX@Z.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C0083804 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0083840 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        volatile void *Address)
{
  __int64 v7; // rsi
  __int64 v8; // r12
  enum _MODE v9; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  struct tagGRAPHICS_DEVICE *v13; // rsi
  __int64 v14; // rcx
  int DeviceFromNameAndValidateDevice; // ebx
  unsigned int v16; // r15d
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdi
  struct tagGRAPHICS_DEVICE *v20; // r8
  int ProtectedOutput; // eax
  unsigned __int64 v22; // rax
  __int64 i; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 j; // rdi
  __int64 v28; // rax
  unsigned int v29[2]; // [rsp+30h] [rbp-68h] BYREF
  int v30; // [rsp+38h] [rbp-60h]
  int v31; // [rsp+3Ch] [rbp-5Ch]
  struct tagGRAPHICS_DEVICE *v32[11]; // [rsp+40h] [rbp-58h] BYREF

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
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, v9, v32);
  if ( DeviceFromNameAndValidateDevice >= 0 )
  {
    DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v32[0], v29);
    if ( DeviceFromNameAndValidateDevice >= 0 )
    {
      v16 = v29[0];
      if ( a5 < v29[0] )
      {
        DeviceFromNameAndValidateDevice = -1071774234;
        goto LABEL_37;
      }
      v17 = 8LL * v29[0];
      v14 = 0xFFFFFFFFLL;
      if ( v17 > 0xFFFFFFFF )
      {
        LODWORD(v17) = -1;
        DeviceFromNameAndValidateDevice = -1073741675;
      }
      else
      {
        DeviceFromNameAndValidateDevice = 0;
      }
      if ( DeviceFromNameAndValidateDevice < 0 )
        goto LABEL_37;
      v13 = (struct tagGRAPHICS_DEVICE *)PALLOCMEM2((unsigned int)v17, 1986291527LL, 1);
      v32[2] = v13;
      if ( !v13 )
      {
        DeviceFromNameAndValidateDevice = -1073741801;
        goto LABEL_37;
      }
      v18 = 0LL;
      v19 = 0LL;
      v14 = (__int64)v32[0];
      while ( (unsigned int)v19 < *(_DWORD *)(v14 + 224) )
      {
        *(_QWORD *)v29 = 5 * v19;
        v20 = *(struct tagGRAPHICS_DEVICE **)(v14 + 232);
        v32[1] = v20;
        if ( (*((_DWORD *)v20 + 5 * v19) & 1) != 0 )
        {
          if ( v12 == v16 )
            goto LABEL_35;
          if ( (_DWORD)v8 )
          {
            if ( (_DWORD)v8 != 1 )
            {
LABEL_35:
              DeviceFromNameAndValidateDevice = -1071774233;
              goto LABEL_37;
            }
            DeviceFromNameAndValidateDevice = IsCreatePhysicalMonitorSupported_0();
            if ( DeviceFromNameAndValidateDevice >= 0 )
              DeviceFromNameAndValidateDevice = CreatePhysicalMonitorWrap_0();
          }
          else
          {
            ProtectedOutput = COPM::CreateProtectedOutput(
                                (struct tagGRAPHICS_DEVICE *)((char *)v13 + 8 * v18),
                                a4,
                                (struct _LUID *)((char *)v20 + 20 * v19 + 8),
                                *((_DWORD *)v20 + 5 * v19 + 1),
                                (void **)v13 + v18);
            DeviceFromNameAndValidateDevice = 0;
            if ( ProtectedOutput < 0 )
              DeviceFromNameAndValidateDevice = ProtectedOutput;
          }
          if ( DeviceFromNameAndValidateDevice < 0 )
            goto LABEL_37;
          v18 = (unsigned int)(v18 + 1);
          ++v12;
          v14 = (__int64)v32[0];
        }
        v19 = (unsigned int)(v19 + 1);
      }
      v22 = 8LL * a5;
      v14 = 0xFFFFFFFFLL;
      if ( v22 > 0xFFFFFFFF )
      {
        LODWORD(v22) = -1;
        DeviceFromNameAndValidateDevice = -1073741675;
      }
      else
      {
        DeviceFromNameAndValidateDevice = 0;
      }
      if ( DeviceFromNameAndValidateDevice < 0 )
        goto LABEL_37;
      ProbeForWrite(Address, (unsigned int)v22, 8u);
      ProbeForWrite(a6, 4uLL, 4u);
      if ( v12 > a5 )
      {
        DeviceFromNameAndValidateDevice = -1071774234;
        v31 = -1071774234;
      }
      else
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v30 = i;
          if ( (unsigned int)i >= v12 )
            break;
          *((_QWORD *)Address + i) = *((_QWORD *)v13 + i);
        }
        *a6 = v12;
      }
    }
  }
  if ( DeviceFromNameAndValidateDevice >= 0 )
  {
    Win32FreePool();
    v25 = WdLogNewEntry5_WdTrace(v24);
    WdLogEvent5_WdTrace(v25);
    return 0LL;
  }
LABEL_37:
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
  v28 = WdLogNewEntry5_WdTrace(v14);
  *(_QWORD *)(v28 + 24) = DeviceFromNameAndValidateDevice;
  WdLogEvent5_WdTrace(v28);
  return (unsigned int)DeviceFromNameAndValidateDevice;
}
