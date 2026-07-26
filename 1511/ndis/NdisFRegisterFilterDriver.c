/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1C001EE40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0052650 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     Template_zq @ 0x1C005359C (Template_zq.c)
 *     WPP_SF__guid_ @ 0x1C0053640 (WPP_SF__guid_.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1C0097990 (--2@YAPEAX_KPEAX@Z.c)
 *     ndisInitializeRef @ 0x1C00A01A0 (ndisInitializeRef.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A6664 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A6B74 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A6B90 (--4-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisQueryDriverImageName @ 0x1C00A6F5C (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00A74FC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A7730 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisCreateFilterDriverRegistry @ 0x1C00A7EE4 (ndisCreateFilterDriverRegistry.c)
 *     ndisFInvokeSetOptions @ 0x1C00ACE80 (ndisFInvokeSetOptions.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  struct _NDIS_FILTER_DRIVER_BLOCK *v4; // rsi
  __int16 v5; // bx
  int v8; // ecx
  __int64 v9; // r8
  bool v10; // zf
  unsigned __int8 MinorNdisVersion; // dl
  size_t v12; // r13
  bool v13; // cl
  char v14; // al
  char v15; // cl
  unsigned __int8 v16; // al
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  _BOOL8 v18; // rcx
  _UNICODE_STRING *p_ServiceName; // r15
  unsigned int FilterDriverRegistry; // ebx
  __int64 v21; // r8
  int MajorNdisVersion; // eax
  int v23; // ecx
  unsigned int v24; // r14d
  struct _NDIS_FILTER_DRIVER_BLOCK *PoolWithTag; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  USHORT Size; // ax
  unsigned __int8 v30; // al
  unsigned int Flags; // eax
  __int64 v32; // rcx
  wchar_t *v33; // rax
  wchar_t *Buffer; // rcx
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 FilterDriver; // rax
  _QWORD *v38; // rbp
  KIRQL v39; // al
  int v40; // r8d
  enum CallRunMode v41; // r8d
  unsigned int v43; // eax
  NDIS_HANDLE v44; // [rsp+30h] [rbp-68h] BYREF
  PNDIS_HANDLE v45; // [rsp+38h] [rbp-60h]
  GUID Guid; // [rsp+40h] [rbp-58h] BYREF

  v45 = NdisFilterDriverHandle;
  v4 = 0LL;
  v44 = FilterDriverContext;
  v5 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(
      10LL,
      &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids,
      DriverObject,
      &FilterDriverCharacteristics->FriendlyName);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v10 = FilterDriverCharacteristics->MajorNdisVersion == 6;
  ndisPnPMutexOwner = 2097239;
  if ( !v10 )
    goto LABEL_66;
  MinorNdisVersion = FilterDriverCharacteristics->MinorNdisVersion;
  if ( MinorNdisVersion == 2 )
  {
    FilterDriverRegistry = -1073676284;
    goto LABEL_53;
  }
  if ( !MinorNdisVersion )
    v5 = 200;
  v12 = 224LL;
  v13 = MinorNdisVersion == 1;
  if ( MinorNdisVersion == 20 )
    v13 = 1;
  v14 = v13;
  if ( MinorNdisVersion == 30 )
    v14 = 1;
  v15 = v14;
  if ( MinorNdisVersion == 40 )
    v15 = 1;
  v16 = v15;
  if ( MinorNdisVersion == 50 )
    v16 = 1;
  if ( MinorNdisVersion == 51 )
    v16 = 1;
  v8 = v16;
  if ( MinorNdisVersion == 60 )
    v8 = 1;
  if ( (_BYTE)v8 )
  {
    if ( FilterDriverCharacteristics->Header.Type != 0x8B
      || FilterDriverCharacteristics->Header.Revision < 2u
      || FilterDriverCharacteristics->Header.Size < 0xE0u )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_(11LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v9);
      FilterDriverRegistry = -1073676283;
      goto LABEL_53;
    }
    goto LABEL_23;
  }
  if ( !v5 )
  {
LABEL_66:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(12LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
    FilterDriverRegistry = -1073676284;
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
      Template_zq(v8, (unsigned int)&FilterRegistrationFailed, v9, FilterDriverCharacteristics->FriendlyName.Buffer, 0);
    goto LABEL_53;
  }
LABEL_23:
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v18 = OidRequestHandler == 0LL;
    if ( v18 != (FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_q(14LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
      FilterDriverRegistry = -1073676283;
      if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
        Template_zq(
          v18,
          (unsigned int)&FilterRegistrationFailed,
          (_DWORD)OidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
    }
    else
    {
      if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(15LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          Template_zq(
            v18,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)OidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            3);
        goto LABEL_53;
      }
      if ( MinorNdisVersion )
      {
        OidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
        v18 = OidRequestHandler == 0LL;
        if ( v18 != (FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(16LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v18,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)OidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              4);
          goto LABEL_53;
        }
        if ( !OidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(17LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v18,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)OidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              5);
          goto LABEL_53;
        }
      }
      if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
        && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(18LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          Template_zq(
            v18,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)OidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            6);
      }
      else
      {
        p_ServiceName = &FilterDriverCharacteristics->ServiceName;
        FilterDriverRegistry = ndisCreateFilterDriverRegistry(&FilterDriverCharacteristics->ServiceName);
        if ( FilterDriverRegistry )
          goto LABEL_53;
        MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
        if ( ((unsigned __int8)MajorNdisVersion > 6u
           || (_BYTE)MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion >= 0x32u)
          && (v21 = FilterDriverCharacteristics->Flags, (v21 & 0xFFFFFFF8) != 0) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_d(19LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v21);
          FilterDriverRegistry = -1073741811;
        }
        else
        {
          v23 = FilterDriverCharacteristics->FriendlyName.Length + FilterDriverCharacteristics->UniqueName.Length;
          v24 = v23 + p_ServiceName->Length + 488;
          if ( v24 <= 0xFFFF )
          {
            PoolWithTag = (struct _NDIS_FILTER_DRIVER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x7666444Eu);
            v4 = PoolWithTag;
            if ( !PoolWithTag )
            {
              FilterDriverRegistry = -1073741670;
              goto LABEL_53;
            }
            memset(PoolWithTag, 0, v24);
            v27 = operator new(v26, v4);
            if ( v27 )
              v27[58] = 0LL;
            v4->FilterDriverContext = v44;
            *(_WORD *)&v4->Header.Type = 260;
            v4->Header.Size = v24;
            v4->DriverObject = DriverObject;
            KeInitializeSpinLock(&v4->Lock);
            LOBYTE(v28) = 5;
            ndisInitializeRef(&v4->Ref, v28);
            v4->DeviceList.Blink = &v4->DeviceList;
            v4->DeviceList.Flink = &v4->DeviceList;
            Size = FilterDriverCharacteristics->Header.Size;
            if ( Size < 0xE0u )
              v12 = Size;
            memmove(&v4->DefaultFilterCharacteristics, FilterDriverCharacteristics, v12);
            v30 = v4->DefaultFilterCharacteristics.MajorNdisVersion;
            if ( v30 <= 6u && (v30 != 6 || v4->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
              v4->DefaultFilterCharacteristics.Flags &= ~1u;
            Flags = v4->DefaultFilterCharacteristics.Flags;
            v4->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v4[1].Header.Type;
            v4->Flags = Flags;
            v32 = (__int64)&v4[1] + FilterDriverCharacteristics->FriendlyName.Length;
            v4->DefaultFilterCharacteristics.UniqueName.Buffer = (wchar_t *)v32;
            v33 = (wchar_t *)(v32 + FilterDriverCharacteristics->UniqueName.Length);
            Buffer = v4->DefaultFilterCharacteristics.FriendlyName.Buffer;
            v4->DefaultFilterCharacteristics.ServiceName.Buffer = v33;
            memmove(
              Buffer,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              FilterDriverCharacteristics->FriendlyName.Length);
            RtlUpcaseUnicodeString(
              &v4->DefaultFilterCharacteristics.UniqueName,
              &FilterDriverCharacteristics->UniqueName,
              0);
            memmove(
              v4->DefaultFilterCharacteristics.ServiceName.Buffer,
              FilterDriverCharacteristics->ServiceName.Buffer,
              p_ServiceName->Length);
            if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) < 0 )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_Z(
                  21LL,
                  &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids,
                  &FilterDriverCharacteristics->UniqueName);
            }
            else
            {
              LOBYTE(v36) = 1;
              FilterDriver = ndisBindGetFilterDriver(&v44, &Guid, v36);
              KRef<NDIS_BIND_FILTER_DRIVER>::operator=(&v4->Bind, FilterDriver);
              KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v44);
              if ( v4->Bind._p )
              {
                v38 = v45;
                *v45 = v4;
                if ( !FilterDriverCharacteristics->SetOptionsHandler
                  || (v43 = ndisFInvokeSetOptions(v4), (FilterDriverRegistry = v43) == 0) )
                {
                  v39 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                  v4->NextFilterDriver = ndisFilterDriverList;
                  ndisFilterDriverList = v4;
                  KeReleaseSpinLock(&ndisFilterDriverListLock, v39);
                  ObfReferenceObject(ndisDriverObject);
                  ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v4->ImageName);
                  LOBYTE(v40) = 1;
                  ndisWriteDriverNDISVersionToServiceKey(
                    FilterDriverCharacteristics->MajorNdisVersion,
                    FilterDriverCharacteristics->MinorNdisVersion,
                    v40,
                    FilterDriverCharacteristics->MajorDriverVersion,
                    FilterDriverCharacteristics->MinorDriverVersion,
                    (__int64)&FilterDriverCharacteristics->ServiceName);
                  FilterDriverRegistry = 0;
                  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(&v4->Bind._p->_t, v4, v41);
                  goto LABEL_53;
                }
                if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                  WPP_SF_d(23LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, v43);
                *v38 = 0LL;
LABEL_110:
                if ( !FilterDriverRegistry )
                  goto LABEL_53;
                goto LABEL_111;
              }
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF__guid_(22LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, &Guid);
            }
            FilterDriverRegistry = -1073741823;
LABEL_111:
            if ( v4 )
            {
              _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v4, v35);
              ExFreePoolWithTag(v4, 0);
            }
            goto LABEL_53;
          }
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(20LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
          FilterDriverRegistry = -1073741811;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v23,
              (unsigned int)&FilterRegistrationFailed,
              v21,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              7);
        }
      }
    }
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(13LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, DriverObject);
    FilterDriverRegistry = -1073676283;
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
    {
      Template_zq(v8, (unsigned int)&FilterRegistrationFailed, v9, FilterDriverCharacteristics->FriendlyName.Buffer, 1);
      goto LABEL_110;
    }
  }
LABEL_53:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(24LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, FilterDriverRegistry);
  ndisPnPMutexOwner = 0;
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
