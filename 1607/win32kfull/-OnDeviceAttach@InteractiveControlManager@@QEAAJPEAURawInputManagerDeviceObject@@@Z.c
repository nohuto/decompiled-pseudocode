/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ??_GInteractiveControlDevice@@QEAAPEAXI@Z @ 0x1C023A944 (--_GInteractiveControlDevice@@QEAAPEAXI@Z.c)
 *     ?InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C023B418 (-InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C023C840 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023D4F0 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C023E1FC (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E230 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023E5F0 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  InteractiveControlDevice *v6; // rax
  InteractiveControlDevice *v7; // r14
  int v8; // r9d
  InteractiveControlDevice *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int inserted; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *p_inserted; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  __int64 v24; // [rsp+80h] [rbp+17h]
  _DWORD v25[2]; // [rsp+88h] [rbp+1Fh] BYREF

  inserted = 0;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::OnDeviceAttach entry");
    v23 = 0;
    v25[1] = 0;
    p_inserted = v25;
    v24 = *((_QWORD *)a2 + 35);
    v25[0] = *((unsigned __int16 *)a2 + 136);
    v22 = 2;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF6E4, v4, v5, 5u, &pData);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPool(440LL, 1819440195LL);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -1073741670;
    inserted = -1073741670;
    goto LABEL_20;
  }
  v9 = InteractiveControlDevice::InteractiveControlDevice(v6);
  inserted = InteractiveControlDevice::Initialize(v9, a2);
  v8 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)hProvider <= 2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  inserted = InteractiveControlManager::InsertDevice(this, (void **)v9);
  v8 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)hProvider <= 2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  InteractiveControlDevice::SetBackgroundAccessor(v9, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
  InteractiveControlDevice::SetFocus(v9, *(_QWORD *)this, *((unsigned int *)this + 2));
  if ( *((_DWORD *)this + 2) )
  {
LABEL_15:
    v8 = inserted;
    goto LABEL_16;
  }
  inserted = InteractiveControlDevice::SetComponentResolution(v9, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
  v8 = inserted;
  if ( inserted >= 0 )
    goto LABEL_20;
  if ( (unsigned int)hProvider > 2 )
  {
LABEL_14:
    TlgCreateSz(&pDesc, "Function failed.");
    v23 = 0;
    p_inserted = &v18;
    v18 = (int)v12;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7B5, v13, v12, 4u, &pData);
    goto LABEL_15;
  }
LABEL_16:
  if ( v8 < 0 )
  {
    if ( v9 )
      InteractiveControlDevice::`scalar deleting destructor'(v9);
    Win32FreePool(v7, v10, v11);
    v8 = inserted;
  }
LABEL_20:
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::OnDeviceAttach exit");
    v23 = 0;
    p_inserted = &inserted;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v14, v15, 4u, &pData);
    return (unsigned int)inserted;
  }
  return (unsigned int)v8;
}
