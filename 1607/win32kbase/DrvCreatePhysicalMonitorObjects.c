/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C0083F00
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0083B40 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     IsCreatePhysicalMonitorSupported_0 @ 0x1C00017A8 (IsCreatePhysicalMonitorSupported_0.c)
 *     CreatePhysicalMonitorWrap_0 @ 0x1C00017B0 (CreatePhysicalMonitorWrap_0.c)
 *     IsDestroyPhysicalMonitorSupported_0 @ 0x1C00017B8 (IsDestroyPhysicalMonitorSupported_0.c)
 *     DestroyPhysicalMonitor_0 @ 0x1C00017C0 (DestroyPhysicalMonitor_0.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C005F930 (UpdateMonitorDevices.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C0084168 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0084198 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C00851A4 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00851E0 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *Address)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  enum _MODE v9; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  struct tagGRAPHICS_DEVICE *v13; // rsi
  __int64 v14; // rcx
  int DeviceFromNameAndValidateDevice; // ebx
  struct tagGRAPHICS_DEVICE *v16; // r13
  unsigned int v17; // r15d
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  _QWORD *v23; // r15
  unsigned int *v24; // rdi
  __int64 i; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v29; // rdi
  int v30; // r12d
  __int64 v31; // rax
  int v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-54h]
  int v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+3Ch] [rbp-4Ch]
  struct tagGRAPHICS_DEVICE *v36[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+90h] [rbp+8h] BYREF
  int v38; // [rsp+A0h] [rbp+18h]
  _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v39; // [rsp+A8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
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
  v33 = 0;
  v13 = 0LL;
  UpdateMonitorDevices();
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, v9, v36);
  if ( DeviceFromNameAndValidateDevice < 0
    || (v16 = v36[0],
        DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v36[0], &v37),
        DeviceFromNameAndValidateDevice < 0) )
  {
LABEL_26:
    if ( DeviceFromNameAndValidateDevice < 0 )
      goto LABEL_39;
    Win32FreePool();
    v27 = WdLogNewEntry5_WdTrace(v26);
    WdLogEvent5_WdTrace(v27);
    return 0LL;
  }
  else
  {
    v17 = v37;
    if ( a5 < v37 )
    {
      DeviceFromNameAndValidateDevice = -1071774234;
      goto LABEL_39;
    }
    v18 = 8LL * v37;
    if ( v18 > 0xFFFFFFFF )
    {
      LODWORD(v18) = -1;
      DeviceFromNameAndValidateDevice = -1073741675;
    }
    else
    {
      DeviceFromNameAndValidateDevice = 0;
    }
    if ( DeviceFromNameAndValidateDevice >= 0 )
    {
      v13 = (struct tagGRAPHICS_DEVICE *)PALLOCMEM2((unsigned int)v18, 1986291527LL, 1);
      v36[1] = v13;
      if ( !v13 )
      {
        DeviceFromNameAndValidateDevice = -1073741801;
        goto LABEL_39;
      }
      v19 = 0;
      v37 = 0;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= *((_DWORD *)v16 + 56) )
        {
          v22 = 8LL * a5;
          if ( v22 > 0xFFFFFFFF )
          {
            LODWORD(v22) = -1;
            DeviceFromNameAndValidateDevice = -1073741675;
          }
          else
          {
            DeviceFromNameAndValidateDevice = 0;
          }
          if ( DeviceFromNameAndValidateDevice >= 0 )
          {
            v23 = Address;
            ProbeForWrite(Address, (unsigned int)v22, 8u);
            v24 = a6;
            ProbeForWrite(a6, 4uLL, 4u);
            if ( v12 > a5 )
            {
              DeviceFromNameAndValidateDevice = -1071774234;
              v35 = -1071774234;
            }
            else
            {
              for ( i = 0LL; ; i = (unsigned int)(i + 1) )
              {
                v34 = i;
                if ( (unsigned int)i >= v12 )
                  break;
                v23[i] = *((_QWORD *)v13 + i);
              }
              *v24 = v12;
            }
            goto LABEL_26;
          }
          break;
        }
        v21 = *((_QWORD *)v16 + 29);
        if ( (*(_DWORD *)(v21 + 20 * v20) & 1) != 0 )
        {
          if ( v12 == v17 )
            goto LABEL_37;
          if ( v38 )
          {
            if ( v38 != 1 )
            {
LABEL_37:
              DeviceFromNameAndValidateDevice = -1071774233;
              break;
            }
            DeviceFromNameAndValidateDevice = IsCreatePhysicalMonitorSupported_0();
            if ( DeviceFromNameAndValidateDevice >= 0 )
              DeviceFromNameAndValidateDevice = CreatePhysicalMonitorWrap_0();
            if ( DeviceFromNameAndValidateDevice < 0 )
              break;
LABEL_15:
            v19 = ++v37;
            v33 = ++v12;
            goto LABEL_16;
          }
          v32 = 0;
          DeviceFromNameAndValidateDevice = OPMCreateProtectedOutput(
                                              v39,
                                              (struct _LUID *)(v21 + 20 * v20 + 8),
                                              *(_DWORD *)(v21 + 20 * v20 + 4),
                                              (void **)v13 + v19,
                                              &v32);
          if ( DeviceFromNameAndValidateDevice < 0 )
            goto LABEL_26;
          if ( !v32 )
            goto LABEL_15;
          v19 = v37;
        }
LABEL_16:
        v20 = (unsigned int)(v20 + 1);
        v16 = v36[0];
      }
    }
LABEL_39:
    if ( v13 )
    {
      if ( v12 )
      {
        v29 = 0LL;
        v30 = v38;
        while ( (unsigned int)v29 < v12 )
        {
          OPMDestroyProtectedOutput(*((void **)v13 + v29));
          if ( v30 )
          {
            if ( v30 == 1 && (int)IsDestroyPhysicalMonitorSupported_0() >= 0 )
              DestroyPhysicalMonitor_0();
          }
          else
          {
            OPMDestroyProtectedOutput(*((void **)v13 + v29));
          }
          v29 = (unsigned int)(v29 + 1);
        }
      }
      Win32FreePool();
    }
    v31 = WdLogNewEntry5_WdTrace(v14);
    *(_QWORD *)(v31 + 24) = DeviceFromNameAndValidateDevice;
    WdLogEvent5_WdTrace(v31);
    return (unsigned int)DeviceFromNameAndValidateDevice;
  }
}
