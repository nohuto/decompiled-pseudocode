/*
 * XREFs of DpiFdoStopAdapter @ 0x1C0168634
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C016FF18 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkFinishPnPTransition @ 0x1C00D808C (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00D83B4 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpNotifyGdi @ 0x1C00DF200 (DpiPnpNotifyGdi.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C013F7C0 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0167428 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C01674C0 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C0168260 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C0168AB0 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016CB58 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C017088C (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char *DeviceExtension; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  int started; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  _BYTE *v32; // rax
  char v33; // al
  unsigned int v34; // edx
  __int64 *i; // rcx
  __int128 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  DXGADAPTER *v40; // rcx
  DXGGLOBAL *v41; // rax
  int IsDevicePresent; // eax
  char v43; // di
  int v44; // esi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  char v49[8]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v50[24]; // [rsp+40h] [rbp-31h] BYREF
  _DWORD v51[16]; // [rsp+58h] [rbp-19h] BYREF

  memset(v51, 0, sizeof(v51));
  DxgkDiagInitializeCodePointPacket(v51, 36, (unsigned int)a1 & 0xFFFF00, 0, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v51, v2, v3, v4);
  DeviceExtension = (char *)a1->DeviceExtension;
  v6 = *((_QWORD *)DeviceExtension + 5);
  ExIsResourceAcquiredSharedLite(*((PERESOURCE *)DeviceExtension + 21));
  v11 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = *((_DWORD *)DeviceExtension + 59);
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v11 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7, v9, v10);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 70));
    if ( (struct _DEVICE_OBJECT *)qword_1C0046C68 == a1 )
    {
      byte_1C0046C5C = 0;
      qword_1C0046C68 = 0LL;
    }
    if ( (struct _DEVICE_OBJECT *)qword_1C0046C60 == a1 )
    {
      qword_1C0046C60 = 0LL;
      byte_1C0046C5C = 0;
    }
    if ( *((_DWORD *)DeviceExtension + 646) != 3 )
    {
      v17 = *((_QWORD *)DeviceExtension + 313);
      if ( v17 )
      {
        DxgkAcquireAdapterCoreSync(v17, 2);
        v18 = *((_QWORD *)DeviceExtension + 313);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v18) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
          *(_QWORD *)(v23 + 24) = 960LL;
          WdLogEvent5_WdAssertion(v23);
        }
        *(_BYTE *)(v18 + 1909) = 1;
        v26 = *((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19, v21, v22) + 113);
        if ( *(_BYTE *)v26 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v25, v24, v27, v28) + 24) = 178LL;
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v50, *(struct DXGFASTMUTEX *const *)(v26 + 8));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
          v31 = 10LL;
          v32 = (_BYTE *)(v26 + 16);
          do
          {
            *v32 = 0;
            v32 += 48;
            --v31;
          }
          while ( v31 );
          ++*(_DWORD *)(v26 + 496);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL, v29, v30) + 24) = 200LL;
          if ( v50[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v50);
        }
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 313));
      }
    }
    v33 = DeviceExtension[2512];
    if ( (v33 & 1) != 0 || byte_1C0046C5C && (v33 & 0x40) != 0 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      DpiPnpNotifyGdi((__int64)a1, 0, started);
      ExAcquireResourceSharedLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFFLL, v13, v15, v16);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 93, 0);
    if ( DeviceExtension[1056] && dword_1C0046F34 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 1936), 1u);
      v34 = 0;
      for ( i = (__int64 *)*((_QWORD *)DeviceExtension + 282); v34 < *((_DWORD *)DeviceExtension + 568); ++v34 )
      {
        if ( *i == *((_QWORD *)DeviceExtension + 282) )
          break;
        if ( *((_DWORD *)i + 118) == dword_1C0046F34 )
        {
          v36 = (__int128 *)i[112];
          if ( v36 )
          {
            xmmword_1C0046EB0 = *v36;
            xmmword_1C0046EC0 = v36[1];
            xmmword_1C0046ED0 = v36[2];
            xmmword_1C0046EE0 = v36[3];
            xmmword_1C0046EF0 = v36[4];
            xmmword_1C0046F00 = v36[5];
            xmmword_1C0046F10 = v36[6];
            xmmword_1C0046F20 = v36[7];
          }
        }
        i = (__int64 *)*i;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 1936));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1);
    DpiBrightnessStopDevice(a1);
    if ( *((_DWORD *)DeviceExtension + 646) != 3 )
    {
      v40 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 313);
      if ( v40 )
        DXGADAPTER::Stop(v40, 0LL, v38, v39);
      v41 = DXGGLOBAL::GetGlobal((__int64)v40, v37, v38, v39);
      DXGGLOBAL::NotifyAdapterRemoval(v41);
    }
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v49);
  v43 = v49[0];
  v44 = -1073741637;
  if ( IsDevicePresent < 0 )
    v43 = 1;
  if ( DeviceExtension[1056] )
  {
    if ( v43 )
    {
      v44 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      if ( v44 < 0 || dword_1C0046EA8 != dword_1C0046F34 )
        memset(&xmmword_1C0046EB0, 0, 0x80uLL);
    }
    else
    {
      dword_1C0046F30 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[2512] &= ~4u;
  if ( v43 && v44 < 0 )
    DpiDxgkDdiStopDevice(v6, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 143) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  if ( *((_QWORD *)DeviceExtension + 57) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)DeviceExtension + 57) = 0LL;
  }
  memset(v51, 0, sizeof(v51));
  DxgkDiagInitializeCodePointPacket(v51, 36, (unsigned int)a1 & 0xFFFF00, 1, 0);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v51, v45, v46, v47);
}
