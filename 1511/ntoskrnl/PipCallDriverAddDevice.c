/*
 * XREFs of PipCallDriverAddDevice @ 0x1404E68A0
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140540368 (PiProcessAddBootDevices.c)
 * Callees:
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x1401053C4 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     PnpUnloadAttachedDriver @ 0x140493B70 (PnpUnloadAttachedDriver.c)
 *     PnpRequestDeviceRemoval @ 0x14049EA8C (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DE0A0 (_CmOpenInstallerClassRegKey.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E70C0 (PnpCallDriverQueryServiceHelper.c)
 *     IopQueryLegacyBusInformation @ 0x1404E720C (IopQueryLegacyBusInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E72C0 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PnpCallAddDevice @ 0x14050A224 (PnpCallAddDevice.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14054214C (IopInsertLegacyBusDeviceNode.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 a1, __int64 a2)
{
  char v4; // r15
  PDEVICE_OBJECT v5; // r13
  PDEVICE_OBJECT v6; // r12
  __int64 v7; // r14
  int v8; // ebx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r13
  int v16; // eax
  int v17; // eax
  PVOID *v18; // r14
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 AttachedDevice; // r14
  unsigned __int8 v24; // bl
  _QWORD *i; // rsi
  unsigned __int8 v26; // al
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *v29; // rbx
  _DWORD *v30; // rsi
  __int64 v31; // rcx
  int v32; // r15d
  PDEVICE_OBJECT v33; // rax
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  int v36; // [rsp+28h] [rbp-D8h]
  char v37; // [rsp+60h] [rbp-A0h]
  unsigned int NumberOfBytes; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int NumberOfBytes_4; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT AttachedDeviceReference; // [rsp+80h] [rbp-80h]
  unsigned __int16 v43; // [rsp+88h] [rbp-78h] BYREF
  PDEVICE_OBJECT v44; // [rsp+90h] [rbp-70h]
  HANDLE v45; // [rsp+98h] [rbp-68h] BYREF
  int v46; // [rsp+A0h] [rbp-60h] BYREF
  int v47; // [rsp+A4h] [rbp-5Ch] BYREF
  int v48; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v51[7]; // [rsp+C8h] [rbp-38h] BYREF
  WCHAR SourceString[40]; // [rsp+100h] [rbp+0h] BYREF

  v45 = 0LL;
  v37 = 0;
  NumberOfBytes_4 = 0;
  Handle = 0LL;
  v4 = 0;
  memset(v51, 0, sizeof(v51));
  v5 = 0LL;
  SourceString[0] = 0;
  v6 = 0LL;
  P = 0LL;
  v44 = 0LL;
  v7 = 5LL;
  v49 = 5LL;
  if ( *(_BYTE *)(a1 + 688) && !*(_BYTE *)(a2 + 4) )
  {
LABEL_3:
    v8 = -1073741823;
    goto LABEL_4;
  }
  *(_BYTE *)(a1 + 688) = 0;
  v8 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 0x10u, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( v8 < 0 )
    goto LABEL_4;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(a1 + 48),
               1u,
               (__int64)Handle,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               (__int64)&v46,
               (__int64)&NumberOfBytes_4,
               4,
               (__int64)&v47,
               0) < 0
     || v46 != 7
     || v47 != 4
     || !NumberOfBytes_4) )
  {
    PnpRequestDeviceRemoval(a1, 0, 53, 0);
    v8 = -1073741106;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                1u,
                (__int64)Handle,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                (__int64)&v46,
                (__int64)&NumberOfBytes_4,
                4,
                (__int64)&v47,
                0) >= 0
      && NumberOfBytes_4 <= 0xFF
      && (int)PnpQueryProximityNode(NumberOfBytes_4, &v43) >= 0 )
    {
      *(_DWORD *)(a1 + 660) = v43;
    }
    if ( *(_DWORD *)(a1 + 660) == -1 )
    {
      v19 = *(_QWORD *)(a1 + 16);
      if ( v19 )
        *(_DWORD *)(a1 + 660) = *(_DWORD *)(v19 + 660);
      else
        *(_DWORD *)(a1 + 660) = -2;
    }
    if ( *(_DWORD *)(a1 + 660) != -2 )
    {
      NumberOfBytes_4 = *(_DWORD *)(a1 + 660);
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&NumberOfBytes_4,
        4u,
        0);
    }
  }
  v12 = *(_QWORD *)(a1 + 48);
  NumberOfBytes = 78;
  v8 = 0;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v12,
              (__int64)Handle,
              9,
              (__int64)&v48,
              (__int64)SourceString,
              (__int64)&NumberOfBytes) >= 0
    && v48 == 1
    && NumberOfBytes )
  {
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( InitSafeBootMode && !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
    {
      NumberOfBytes = 256;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E657050u);
      if ( PoolWithTag )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(a1 + 48),
                          (__int64)Handle,
                          1,
                          (__int64)&v48,
                          (__int64)PoolWithTag,
                          (__int64)&NumberOfBytes);
        if ( DeviceRegProp == -1073741789 )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E657050u);
        }
        else if ( DeviceRegProp >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
        }
      }
      IopBootLog(&DestinationString, 0);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_3;
    }
    CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)SourceString, v13, v14, 131097, 0, (__int64)&v45, 0LL);
  }
  v51[0] = a1;
  NumberOfBytes = 512;
  v51[1] = a2;
  P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
  if ( P )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x4000000) != 0 )
      goto LABEL_42;
    LOBYTE(v36) = 0;
    v20 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&NumberOfBytes,
            19,
            *(_QWORD *)(a1 + 48),
            (__int64)Handle,
            v36,
            0,
            (__int64)v51);
    v8 = v20;
    if ( v20 == -1073741275 || v20 == -1073741772 )
    {
      PipSetDevNodeFlags(a1, 0x4000000);
      v8 = 0;
    }
    if ( v8 >= 0 )
    {
LABEL_42:
      if ( v45 )
      {
        if ( (*(_DWORD *)(a1 + 396) & 0x8000000) == 0 )
        {
          LOBYTE(v36) = 1;
          v17 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  19,
                  (unsigned int)SourceString,
                  (__int64)v45,
                  v36,
                  1,
                  (__int64)v51);
          v8 = v17;
          if ( v17 == -1073741275 || v17 == -1073741772 )
          {
            PipSetDevNodeFlags(a1, 0x8000000);
            v8 = 0;
          }
        }
      }
      if ( v8 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 396) & 0x10000000) != 0 )
        {
          v8 = -1073741772;
        }
        else
        {
          LOBYTE(v36) = 0;
          v16 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  5,
                  *(_QWORD *)(a1 + 48),
                  (__int64)Handle,
                  v36,
                  2,
                  (__int64)v51);
          v8 = v16;
          if ( v16 == -1073741275 || v16 == -1073741772 )
          {
            v8 = -1073741772;
            PipSetDevNodeFlags(a1, 0x10000000);
          }
        }
      }
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x1000) != 0 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(v51[4] + 8LL) )
    {
      PipSetDevNodeProblem(a1, 19, -1073741438);
      v8 = -1073741823;
      goto LABEL_4;
    }
    v15 = 0;
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_4;
    if ( (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
      goto LABEL_3;
    PipClearDevNodeProblem(a1);
    v15 = 1;
    v8 = 0;
    v37 = 1;
    v4 = 1;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x20000000) == 0 )
  {
    LOBYTE(v36) = 0;
    v21 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&NumberOfBytes,
            18,
            *(_QWORD *)(a1 + 48),
            (__int64)Handle,
            v36,
            3,
            (__int64)v51);
    v8 = v21;
    if ( v21 == -1073741275 || v21 == -1073741772 )
    {
      PipSetDevNodeFlags(a1, 0x20000000);
      v8 = 0;
    }
  }
  if ( v8 < 0 )
    goto LABEL_125;
  if ( v45 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x40000000) == 0 )
    {
      LOBYTE(v36) = 1;
      v22 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              (unsigned int)SourceString,
              (__int64)v45,
              v36,
              4,
              (__int64)v51);
      v8 = v22;
      if ( v22 == -1073741275 || v22 == -1073741772 )
      {
        PipSetDevNodeFlags(a1, 0x40000000);
        v8 = 0;
      }
    }
  }
  if ( v8 < 0 )
  {
LABEL_125:
    v5 = 0LL;
  }
  else
  {
    AttachedDevice = 0LL;
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(a1 + 32));
    v24 = 0;
    while ( 1 )
    {
      if ( v24 == 2 )
      {
        v44 = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(a1 + 32));
        if ( v4 )
        {
          if ( !v51[4] )
            PipSetDevNodeState(a1, 771);
        }
      }
      for ( i = (_QWORD *)v51[v24 + 2]; i; i = (_QWORD *)i[1] )
      {
        v32 = PnpCallAddDevice(a1, *i, *(_QWORD *)(*(_QWORD *)(*i + 48LL) + 8LL), v24);
        *(_DWORD *)(*i + 16LL) |= 0x400u;
        if ( v32 < 0 )
        {
          if ( v24 == 2 )
          {
            v5 = AttachedDeviceReference;
            IovUtilMarkStack(*(_QWORD *)(a1 + 32), (__int64)AttachedDeviceReference->AttachedDevice, AttachedDevice, 0);
            *(_DWORD *)(a1 + 392) = v32;
            PnpRequestDeviceRemoval(a1, 0, 31, v32);
            goto LABEL_124;
          }
        }
        else
        {
          if ( v24 == 2 )
            AttachedDevice = (__int64)v44->AttachedDevice;
          PipSetDevNodeState(a1, 771);
        }
        v33 = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(a1 + 32));
        ObfDereferenceObject(v33);
      }
      if ( ++v24 >= 5u )
        break;
      v4 = v37;
    }
    if ( !AttachedDevice || (v26 = 0, v37) )
      v26 = 1;
    IovUtilMarkStack(*(_QWORD *)(a1 + 32), (__int64)AttachedDeviceReference->AttachedDevice, AttachedDevice, v26);
    v27 = PipChangeDeviceObjectFromRegistryProperties(
            *(_QWORD *)(a1 + 32),
            (_DWORD)Handle,
            (unsigned int)SourceString,
            (_DWORD)v45,
            v15);
    if ( v27 < 0 )
    {
      PnpRequestDeviceRemoval(a1, 0, 50, v27);
      v5 = AttachedDeviceReference;
LABEL_124:
      v8 = -1073741106;
    }
    else
    {
      v29 = (_DWORD *)(a1 + 452);
      v30 = (_DWORD *)(a1 + 448);
      if ( (int)IopQueryLegacyBusInformation(*(_QWORD *)(a1 + 32), v28, a1 + 448, a1 + 452) >= 0 )
      {
        IopInsertLegacyBusDeviceNode(a1, (unsigned int)*v30, (unsigned int)*v29);
      }
      else
      {
        *v30 = -1;
        *v29 = -16;
      }
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v31, *(_QWORD *)(a1 + 48), 23);
      v5 = AttachedDeviceReference;
      v8 = 0;
    }
    v6 = v44;
    v7 = 5LL;
  }
LABEL_4:
  v9 = &v51[2];
  do
  {
    v10 = *v9;
    if ( *v9 )
    {
      do
      {
        v18 = (PVOID *)v10;
        v10 = *(_QWORD *)(v10 + 8);
        if ( PnPBootDriversInitialized )
          PnpUnloadAttachedDriver(*v18);
        ObfDereferenceObject(*v18);
        ExFreePoolWithTag(v18, 0);
      }
      while ( v10 );
      v7 = v49;
    }
    ++v9;
    v49 = --v7;
  }
  while ( v7 );
  if ( Handle )
    ZwClose(Handle);
  if ( v45 )
    ZwClose(v45);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
