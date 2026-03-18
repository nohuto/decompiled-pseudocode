/*
 * XREFs of DpiFdoStopAdapter @ 0x1C016CD64
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C0174748 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DpiPnpNotifyGdi @ 0x1C00CE644 (DpiPnpNotifyGdi.c)
 *     DxgkFinishPnPTransition @ 0x1C00CE73C (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00CE904 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0145C98 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C016BA24 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C016BABC (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C016C990 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C016D220 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0171368 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C017510C (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  __int64 v3; // r15
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  int started; // esi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE *v21; // rax
  __int64 v22; // rcx
  char v23; // al
  unsigned int v24; // edx
  __int64 *i; // rcx
  __int128 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  DXGADAPTER *v29; // rcx
  DXGGLOBAL *v30; // rax
  int IsDevicePresent; // eax
  char v32; // di
  int v33; // esi
  __int64 v34; // rcx
  char v36[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v37[24]; // [rsp+38h] [rbp-90h] BYREF
  _DWORD v38[16]; // [rsp+50h] [rbp-78h] BYREF

  memset(v38, 0, sizeof(v38));
  DxgkDiagInitializeCodePointPacket(v38, 36, (unsigned int)a1 & 0xFFFF00, 0, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38);
  DeviceExtension = (char *)a1->DeviceExtension;
  v3 = *((_QWORD *)DeviceExtension + 5);
  ExIsResourceAcquiredSharedLite(*((PERESOURCE *)DeviceExtension + 21));
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v4 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v5 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v4;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v5 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    KeWaitForSingleObject(DeviceExtension + 2752, Executive, 0, 0, 0LL);
    Global = DXGGLOBAL::GetGlobal(v6);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 88));
    if ( (struct _DEVICE_OBJECT *)qword_1C0046CE8 == a1 )
    {
      byte_1C0046CDC = 0;
      qword_1C0046CE8 = 0LL;
    }
    if ( (struct _DEVICE_OBJECT *)qword_1C0046CE0 == a1 )
    {
      qword_1C0046CE0 = 0LL;
      byte_1C0046CDC = 0;
    }
    if ( *((_DWORD *)DeviceExtension + 656) != 3 )
    {
      v9 = *((_QWORD *)DeviceExtension + 318);
      if ( v9 )
      {
        DxgkAcquireAdapterCoreSync(v9, 2);
        v10 = *((_QWORD *)DeviceExtension + 318);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v10) )
        {
          v12 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v12 + 24) = 1029LL;
          WdLogEvent5_WdAssertion(v12);
        }
        *(_BYTE *)(v10 + 1917) = 1;
        v15 = *((_QWORD *)DXGGLOBAL::GetGlobal(v11) + 134);
        if ( *(_BYTE *)v15 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v16, v17) + 24) = 193LL;
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, *(struct DXGFASTMUTEX *const *)(v15 + 8));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
          v21 = (_BYTE *)(v15 + 16);
          v22 = 18LL;
          do
          {
            *v21 = 0;
            v21 += 48;
            --v22;
          }
          while ( v22 );
          ++*(_DWORD *)(v15 + 880);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v18, v19, v20) + 24) = 215LL;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
        }
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 318), 2);
      }
    }
    v23 = DeviceExtension[2552];
    if ( (v23 & 1) != 0 || byte_1C0046CDC && (v23 & 0x40) != 0 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      DpiPnpNotifyGdi((__int64)a1, 0, started);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFFLL);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 1528), 0);
    if ( DeviceExtension[1088] && dword_1C0046FB4 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)DeviceExtension + 19, 1u);
      v24 = 0;
      for ( i = (__int64 *)*((_QWORD *)DeviceExtension + 287); v24 < *((_DWORD *)DeviceExtension + 578); ++v24 )
      {
        if ( *i == *((_QWORD *)DeviceExtension + 287) )
          break;
        if ( *((_DWORD *)i + 126) == dword_1C0046FB4 )
        {
          v26 = (__int128 *)i[116];
          if ( v26 )
          {
            xmmword_1C0046F30 = *v26;
            xmmword_1C0046F40 = v26[1];
            xmmword_1C0046F50 = v26[2];
            xmmword_1C0046F60 = v26[3];
            xmmword_1C0046F70 = v26[4];
            xmmword_1C0046F80 = v26[5];
            xmmword_1C0046F90 = v26[6];
            xmmword_1C0046FA0 = v26[7];
          }
        }
        i = (__int64 *)*i;
      }
      ExReleaseResourceLite((PERESOURCE)DeviceExtension + 19);
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1);
    DpiBrightnessStopDevice(a1);
    if ( *((_DWORD *)DeviceExtension + 656) != 3 )
    {
      v29 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 318);
      if ( v29 )
        DXGADAPTER::Stop(v29, 0LL, v27, v28);
      v30 = DXGGLOBAL::GetGlobal((__int64)v29);
      DXGGLOBAL::NotifyAdapterRemoval(v30);
    }
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v36);
  v32 = v36[0];
  v33 = -1073741637;
  if ( IsDevicePresent < 0 )
    v32 = 1;
  if ( DeviceExtension[1088] )
  {
    if ( v32 )
    {
      v33 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      if ( v33 < 0 || dword_1C0046F28 != dword_1C0046FB4 )
        memset(&xmmword_1C0046F30, 0, 0x80uLL);
    }
    else
    {
      dword_1C0046FB0 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[2552] &= ~4u;
  if ( v32 && v33 < 0 )
    DpiDxgkDdiStopDevice(v3, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 148) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v34 = *((_QWORD *)DeviceExtension + 61);
  if ( v34 )
  {
    PoFxUnregisterDevice(v34);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 318) + 2032LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v38, 0, sizeof(v38));
  DxgkDiagInitializeCodePointPacket(v38, 36, (unsigned int)a1 & 0xFFFF00, 1, 0);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38);
}
