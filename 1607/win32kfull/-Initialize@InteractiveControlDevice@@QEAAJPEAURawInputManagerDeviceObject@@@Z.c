/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023D4F0
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023CB30 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023CD74 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C023D848 (-OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FED4 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 */

__int64 __fastcall InteractiveControlDevice::Initialize(
        PHIDP_PREPARSED_DATA *this,
        struct _HIDP_PREPARSED_DATA *Object)
{
  NTSTATUS v4; // ebx
  int v5; // ecx
  struct _HIDP_PREPARSED_DATA *v6; // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  int v18; // [rsp+40h] [rbp-19h] BYREF
  _DWORD Size[3]; // [rsp+44h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  int *v22; // [rsp+80h] [rbp+27h]
  int v23; // [rsp+88h] [rbp+2Fh]
  int v24; // [rsp+8Ch] [rbp+33h]

  memset(Size, 0, sizeof(Size));
  if ( !Object )
  {
    v4 = -1073741811;
LABEL_31:
    InteractiveControlDevice::Deinitialize((InteractiveControlDevice *)this);
    return (unsigned int)v4;
  }
  v4 = RawInputManagerDeviceObjectReference(Object);
  if ( v4 >= 0 )
  {
    v5 = dword_1C03256C0;
    *this = Object;
    *((_DWORD *)this + 2) = v5;
    dword_1C03256C0 = v5 + 1;
    v4 = ObOpenObjectByPointer(Object, 0, 0LL, 3u, ExRawInputManagerObjectType, 1, (PHANDLE)&Size[1]);
    if ( v4 >= 0 )
    {
      v4 = RIMGetDevicePreparsedDataLockfree(*(_QWORD *)&Size[1], 0LL, Size, 0LL);
      if ( v4 >= 0 )
      {
        v6 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPool(Size[0], 1819440195LL);
        this[36] = v6;
        if ( !v6 )
        {
LABEL_7:
          v4 = -1073741670;
          goto LABEL_28;
        }
        memset(v6, 0, Size[0]);
        v4 = RIMGetDevicePreparsedDataLockfree(*(_QWORD *)&Size[1], this[36], Size, 0LL);
        if ( v4 >= 0 )
        {
          v4 = InteractiveControlDevice::OpenHapticsWriteDevice((InteractiveControlDevice *)this);
          if ( v4 >= 0 )
          {
            v4 = InteractiveControlParser::BuildDeviceCapabilities(this[36], (struct InteractiveControlDevice *)this);
            if ( v4 >= 0 )
            {
              if ( *((_DWORD *)this + 28) == 1 )
              {
                if ( this[35] )
                  InteractiveControlDevice::CreateDeadzone((InteractiveControlDevice *)this);
                if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
                {
                  v18 = 235930369;
                  LeaveDeviceInfoListCrit_(v10, v9);
                  if ( gdwInAtomicOperation )
                  {
                    v11 = gdwExtraInstrumentations;
                    if ( (gdwExtraInstrumentations & 1) != 0 )
                      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  }
                  UserSessionSwitchLeaveCrit(v11, gdwInAtomicOperation);
                  InteractiveControlDevice::SendDeviceIOControl(
                    (InteractiveControlDevice *)this,
                    0xB0191u,
                    &v18,
                    4u,
                    0LL,
                    0,
                    0LL);
                  EnterCrit(0LL, 1LL);
                  EnterDeviceInfoListCrit_(v12);
                }
                v13 = *((unsigned __int16 *)this + 61);
                *((_WORD *)this + 152) = v13;
                v14 = Win32AllocPoolZInit(v13, 1819440195LL);
                this[37] = (PHIDP_PREPARSED_DATA)v14;
                if ( !v14 )
                  goto LABEL_7;
                if ( *((_DWORD *)this + 28) == 1 )
                {
                  if ( IoSetDevicePropertyData(
                         *((PDEVICE_OBJECT *)this[11] + 1),
                         &DEVPKEY_InteractiveControl_DeviceType,
                         0,
                         0,
                         7u,
                         4u,
                         this + 14) < 0
                    && (unsigned int)hProvider > 2 )
                  {
                    TlgCreateSz(&pDesc, "Function failed.");
                    v24 = 0;
                    v22 = &v18;
                    v18 = (int)v15;
                    v23 = 4;
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v16, v15, 4u, &pData);
                  }
                  v4 = 0;
                }
              }
              else
              {
                v4 = -1073741637;
              }
            }
          }
          else if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateSz(&pDesc, "Function failed.");
            v24 = 0;
            v22 = &v18;
            v18 = v4;
            v23 = 4;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v7, v8, 4u, &pData);
          }
        }
      }
    }
  }
LABEL_28:
  if ( *(_QWORD *)&Size[1] )
    ObCloseHandle(*(HANDLE *)&Size[1], 1);
  if ( v4 < 0 )
    goto LABEL_31;
  return (unsigned int)v4;
}
