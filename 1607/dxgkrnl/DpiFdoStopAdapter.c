/*
 * XREFs of DpiFdoStopAdapter @ 0x1C0195AFC
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C019E14C (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkFinishPnPTransition @ 0x1C00FA90C (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00FAC28 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpNotifyGdi @ 0x1C00FC830 (DpiPnpNotifyGdi.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0169704 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     LPMDisplayUnregisterInternalDisplay @ 0x1C016B5C4 (LPMDisplayUnregisterInternalDisplay.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0193AB4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C0193B5C (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C01956B8 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C0196084 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01996E8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C019EABC (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rbx
  __int64 v5; // r13
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  int started; // esi
  struct _ERESOURCE *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  _BYTE *v24; // rax
  __int64 *v25; // rcx
  unsigned int i; // r8d
  __int128 *v27; // rax
  DXGADAPTER *v28; // rcx
  DXGGLOBAL *v29; // rax
  int IsDevicePresent; // eax
  char v31; // di
  int v32; // esi
  __int64 v33; // rcx
  char v35[8]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v36[24]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v37[8]; // [rsp+50h] [rbp-29h] BYREF

  memset(v37, 0, sizeof(v37));
  v37[0] = 0x4000000006LL;
  HIDWORD(v37[6]) = (unsigned int)a1 & 0xFFFF00;
  memset(&v37[1], 0, 36);
  LODWORD(v37[6]) = 36;
  v37[7] = 0LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  ExIsResourceAcquiredSharedLite(*((PERESOURCE *)DeviceExtension + 21));
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    KeWaitForSingleObject(DeviceExtension + 3904, Executive, 0, 0, 0LL);
    Global = DXGGLOBAL::GetGlobal(v8);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 69));
    if ( !DeviceExtension[480] )
    {
      v11 = (struct _ERESOURCE *)*((unsigned int *)DeviceExtension + 828);
      if ( (_DWORD)v11 != -1 )
        LPMDisplayUnregisterInternalDisplay(*((struct _FILE_OBJECT **)DeviceExtension + 461), v11);
    }
    if ( *((_DWORD *)DeviceExtension + 942) != 3 )
    {
      v12 = *((_QWORD *)DeviceExtension + 461);
      if ( v12 )
      {
        DxgkAcquireAdapterCoreSync(v12, 2);
        v13 = *((_QWORD *)DeviceExtension + 461);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v13) )
        {
          v15 = WdLogNewEntry5_WdAssertion(v14);
          *(_QWORD *)(v15 + 24) = 1092LL;
          WdLogEvent5_WdAssertion(v15);
        }
        *(_BYTE *)(v13 + 2053) = 1;
        v18 = *((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 111);
        if ( *(_BYTE *)v18 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v19, v20) + 24) = 200LL;
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, *(struct DXGFASTMUTEX *const *)(v18 + 8));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
          v23 = 18LL;
          v24 = (_BYTE *)(v18 + 16);
          do
          {
            *v24 = 0;
            v24 += 48;
            --v23;
          }
          while ( v23 );
          ++*(_DWORD *)(v18 + 880);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL, v21, v22) + 24) = 222LL;
          if ( v36[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36);
        }
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 461), 2);
      }
    }
    if ( (DeviceExtension[3696] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C0056EA0 == a1 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C0056EA8 == a1 )
      {
        LOBYTE(word_1C0056E9D) = 0;
        qword_1C0056EA8 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C0056EA0 == a1 )
      {
        word_1C0056E9D = 0;
        qword_1C0056EA0 = 0LL;
      }
      _InterlockedExchange64(&qword_1C0056EC8, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3696] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, started, a2);
      else
        DxgkFinishPnPTransition(0xFFFFFFFFLL);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFFLL);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 163, 0);
    if ( DeviceExtension[4648] )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 164, 0);
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 165, 0);
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 167, 0);
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 166, 0);
    }
    if ( DeviceExtension[1136] && dword_1C0057174 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)DeviceExtension + 30, 1u);
      v25 = (__int64 *)*((_QWORD *)DeviceExtension + 430);
      for ( i = 0; i < *((_DWORD *)DeviceExtension + 864); ++i )
      {
        if ( *v25 == *((_QWORD *)DeviceExtension + 430) )
          break;
        if ( *((_DWORD *)v25 + 126) == dword_1C0057174 )
        {
          v27 = (__int128 *)v25[116];
          if ( v27 )
          {
            xmmword_1C00570F0 = *v27;
            xmmword_1C0057100 = v27[1];
            xmmword_1C0057110 = v27[2];
            xmmword_1C0057120 = v27[3];
            xmmword_1C0057130 = v27[4];
            xmmword_1C0057140 = v27[5];
            xmmword_1C0057150 = v27[6];
            xmmword_1C0057160 = v27[7];
          }
        }
        v25 = (__int64 *)*v25;
      }
      ExReleaseResourceLite((PERESOURCE)DeviceExtension + 30);
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    if ( *((_DWORD *)DeviceExtension + 942) != 3 )
    {
      v28 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 461);
      if ( v28 )
        DXGADAPTER::Stop(v28, 0, 0);
      v29 = DXGGLOBAL::GetGlobal((__int64)v28);
      DXGGLOBAL::NotifyAdapterRemoval(v29);
    }
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v35);
  v31 = v35[0];
  if ( IsDevicePresent < 0 )
    v31 = 1;
  v32 = -1073741637;
  if ( DeviceExtension[1136] )
  {
    if ( v31 )
    {
      v32 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      if ( v32 < 0 || dword_1C00570E8 != dword_1C0057174 )
        memset(&xmmword_1C00570F0, 0, 0x80uLL);
    }
    else
    {
      dword_1C0057170 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3696] &= ~4u;
  if ( v31 && v32 < 0 )
    DpiDxgkDdiStopDevice(v5, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 154) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v33 = *((_QWORD *)DeviceExtension + 61);
  if ( v33 )
  {
    PoFxUnregisterDevice(v33);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 461) + 2176LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v37, 0, sizeof(v37));
  v37[0] = 0x4000000006LL;
  memset(&v37[1], 0, 36);
  LODWORD(v37[6]) = 36;
  HIDWORD(v37[6]) = (unsigned int)a1 & 0xFFFF00;
  v37[7] = 1LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37);
}
