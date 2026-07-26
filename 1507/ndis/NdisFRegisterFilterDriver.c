/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1C001CB10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0052280 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     Template_zq @ 0x1C00531AC (Template_zq.c)
 *     WPP_SF__guid_ @ 0x1C0053250 (WPP_SF__guid_.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1C009A818 (--2@YAPEAX_KPEAX@Z.c)
 *     ndisInitializeRef @ 0x1C00A68C4 (ndisInitializeRef.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A738C (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00ADDF4 (--4-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00ADE24 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisQueryDriverImageName @ 0x1C00AE38C (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00AE4F4 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisCreateFilterDriverRegistry @ 0x1C00AE670 (ndisCreateFilterDriverRegistry.c)
 *     ndisFInvokeSetOptions @ 0x1C00AE8E8 (ndisFInvokeSetOptions.c)
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
  int v9; // r8d
  bool v10; // zf
  unsigned __int8 MinorNdisVersion; // dl
  size_t v12; // r13
  bool v13; // cl
  unsigned __int8 v14; // al
  char v15; // al
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  _BOOL8 v17; // rcx
  _UNICODE_STRING *p_ServiceName; // r12
  unsigned int FilterDriverRegistry; // ebx
  __int64 v20; // r8
  int MajorNdisVersion; // eax
  int v22; // ecx
  unsigned int v23; // r14d
  struct _NDIS_FILTER_DRIVER_BLOCK *PoolWithTag; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  USHORT Size; // ax
  unsigned __int8 v29; // al
  unsigned int Flags; // eax
  __int64 v31; // rcx
  wchar_t *v32; // rax
  wchar_t *Buffer; // rcx
  unsigned int v34; // edx
  __int64 v35; // r8
  __int64 FilterDriver; // rax
  _QWORD *v37; // r15
  KIRQL v38; // al
  int v39; // r8d
  enum CallRunMode v40; // r8d
  unsigned int v42; // eax
  NDIS_HANDLE v43; // [rsp+30h] [rbp-68h] BYREF
  PNDIS_HANDLE v44; // [rsp+38h] [rbp-60h]
  GUID Guid; // [rsp+40h] [rbp-58h] BYREF

  v44 = NdisFilterDriverHandle;
  v4 = 0LL;
  v43 = FilterDriverContext;
  v5 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qZ(
      10LL,
      &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids,
      DriverObject,
      &FilterDriverCharacteristics->FriendlyName);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  v10 = FilterDriverCharacteristics->MajorNdisVersion == 6;
  ndisPnPMutexOwner = 2097239;
  if ( !v10 )
    goto LABEL_62;
  MinorNdisVersion = FilterDriverCharacteristics->MinorNdisVersion;
  if ( MinorNdisVersion == 2 )
  {
    FilterDriverRegistry = -1073676284;
    goto LABEL_49;
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
  v8 = v14;
  if ( MinorNdisVersion == 40 )
    v8 = 1;
  v15 = v8;
  if ( MinorNdisVersion == 50 )
    v15 = 1;
  if ( v15 )
  {
    if ( FilterDriverCharacteristics->Header.Type != 0x8B
      || FilterDriverCharacteristics->Header.Revision < 2u
      || FilterDriverCharacteristics->Header.Size < 0xE0u )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_(11LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids);
      FilterDriverRegistry = -1073676283;
      goto LABEL_49;
    }
    goto LABEL_19;
  }
  if ( !v5 )
  {
LABEL_62:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(12LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
    FilterDriverRegistry = -1073676284;
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
      Template_zq(v8, (unsigned int)&FilterRegistrationFailed, v9, FilterDriverCharacteristics->FriendlyName.Buffer, 0);
    goto LABEL_49;
  }
LABEL_19:
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v17 = OidRequestHandler == 0LL;
    if ( v17 != (FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_q(14LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
      FilterDriverRegistry = -1073676283;
      if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
        Template_zq(
          v17,
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
          WPP_SF_q(15LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          Template_zq(
            v17,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)OidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            3);
        goto LABEL_49;
      }
      if ( MinorNdisVersion )
      {
        OidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
        v17 = OidRequestHandler == 0LL;
        if ( v17 != (FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(16LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v17,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)OidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              4);
          goto LABEL_49;
        }
        if ( !OidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(17LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v17,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)OidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              5);
          goto LABEL_49;
        }
      }
      if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
        && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(18LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
          Template_zq(
            v17,
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
          goto LABEL_49;
        MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
        if ( ((unsigned __int8)MajorNdisVersion > 6u
           || (_BYTE)MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion >= 0x32u)
          && (v20 = FilterDriverCharacteristics->Flags, (v20 & 0xFFFFFFF8) != 0) )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_d(19LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v20);
          FilterDriverRegistry = -1073741811;
        }
        else
        {
          v22 = FilterDriverCharacteristics->UniqueName.Length + p_ServiceName->Length;
          v23 = v22 + FilterDriverCharacteristics->FriendlyName.Length + 488;
          if ( v23 <= 0xFFFF )
          {
            PoolWithTag = (struct _NDIS_FILTER_DRIVER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x7666444Eu);
            v4 = PoolWithTag;
            if ( !PoolWithTag )
            {
              FilterDriverRegistry = -1073741670;
              goto LABEL_49;
            }
            memset(PoolWithTag, 0, v23);
            v26 = operator new(v25, v4);
            if ( v26 )
              v26[58] = 0LL;
            v4->FilterDriverContext = v43;
            *(_WORD *)&v4->Header.Type = 260;
            v4->Header.Size = v23;
            v4->DriverObject = DriverObject;
            KeInitializeSpinLock(&v4->Lock);
            LOBYTE(v27) = 5;
            ndisInitializeRef(&v4->Ref, v27);
            v4->DeviceList.Blink = &v4->DeviceList;
            v4->DeviceList.Flink = &v4->DeviceList;
            Size = FilterDriverCharacteristics->Header.Size;
            if ( Size < 0xE0u )
              v12 = Size;
            memmove(&v4->DefaultFilterCharacteristics, FilterDriverCharacteristics, v12);
            v29 = v4->DefaultFilterCharacteristics.MajorNdisVersion;
            if ( v29 <= 6u && (v29 != 6 || v4->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
              v4->DefaultFilterCharacteristics.Flags &= ~1u;
            Flags = v4->DefaultFilterCharacteristics.Flags;
            v4->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v4[1].Header.Type;
            v4->Flags = Flags;
            v31 = (__int64)&v4[1] + FilterDriverCharacteristics->FriendlyName.Length;
            v4->DefaultFilterCharacteristics.UniqueName.Buffer = (wchar_t *)v31;
            v32 = (wchar_t *)(v31 + FilterDriverCharacteristics->UniqueName.Length);
            Buffer = v4->DefaultFilterCharacteristics.FriendlyName.Buffer;
            v4->DefaultFilterCharacteristics.ServiceName.Buffer = v32;
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
                  &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids,
                  &FilterDriverCharacteristics->UniqueName);
            }
            else
            {
              LOBYTE(v35) = 1;
              FilterDriver = ndisBindGetFilterDriver(&v43, &Guid, v35);
              KRef<NDIS_BIND_FILTER_DRIVER>::operator=(&v4->Bind, FilterDriver);
              KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v43);
              if ( v4->Bind._p )
              {
                v37 = v44;
                *v44 = v4;
                if ( !FilterDriverCharacteristics->SetOptionsHandler
                  || (v42 = ndisFInvokeSetOptions(v4), (FilterDriverRegistry = v42) == 0) )
                {
                  v38 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                  v4->NextFilterDriver = ndisFilterDriverList;
                  ndisFilterDriverList = v4;
                  KeReleaseSpinLock(&ndisFilterDriverListLock, v38);
                  ObfReferenceObject(ndisDriverObject);
                  ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v4->ImageName);
                  LOBYTE(v39) = 1;
                  ndisWriteDriverNDISVersionToServiceKey(
                    FilterDriverCharacteristics->MajorNdisVersion,
                    FilterDriverCharacteristics->MinorNdisVersion,
                    v39,
                    FilterDriverCharacteristics->MajorDriverVersion,
                    FilterDriverCharacteristics->MinorDriverVersion,
                    (__int64)&FilterDriverCharacteristics->ServiceName);
                  FilterDriverRegistry = 0;
                  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(&v4->Bind._p->_t, v4, v40);
                  goto LABEL_49;
                }
                if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                  WPP_SF_d(23LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, v42);
                *v37 = 0LL;
LABEL_106:
                if ( !FilterDriverRegistry )
                  goto LABEL_49;
                goto LABEL_107;
              }
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF__guid_(22LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, &Guid);
            }
            FilterDriverRegistry = -1073741823;
LABEL_107:
            if ( v4 )
            {
              _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v4, v34);
              ExFreePoolWithTag(v4, 0);
            }
            goto LABEL_49;
          }
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_q(20LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
          FilterDriverRegistry = -1073741811;
          if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
            Template_zq(
              v22,
              (unsigned int)&FilterRegistrationFailed,
              v20,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              7);
        }
      }
    }
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_q(13LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, DriverObject);
    FilterDriverRegistry = -1073676283;
    if ( (Microsoft_Windows_NDISEnableBits & 0x40000) != 0 )
    {
      Template_zq(v8, (unsigned int)&FilterRegistrationFailed, v9, FilterDriverCharacteristics->FriendlyName.Buffer, 1);
      goto LABEL_106;
    }
  }
LABEL_49:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(24LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, FilterDriverRegistry);
  ndisPnPMutexOwner = 0;
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
