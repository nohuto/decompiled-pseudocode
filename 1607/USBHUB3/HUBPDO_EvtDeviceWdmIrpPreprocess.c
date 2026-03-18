/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012AB0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     Template_pqq @ 0x1C000A36C (Template_pqq.c)
 *     Template_pjq @ 0x1C000FB6C (Template_pjq.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FDA4 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C0010BA8 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0010CE0 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0010E50 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C0011C0C (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C00158D8 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C001EDF8 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C001EF2C (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C00274A8 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 *     HUBIDLE_AddEvent @ 0x1C0030148 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  void *v5; // r8
  unsigned int Status; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v10; // dl
  __int64 v11; // rsi
  unsigned __int16 v12; // r9
  unsigned int LowPart; // r12d
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  _IO_STACK_LOCATION *v19; // rax
  __int64 v20; // rdx
  PWDF_DRIVER_GLOBALS v21; // rcx
  __int64 v22; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  unsigned __int16 v25; // cx
  __int64 v26; // rcx
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v30; // r9
  __int64 v31; // rax
  unsigned int AccessState_high; // ebx
  unsigned __int16 *v33; // rdx
  PVOID v34; // rcx
  int v35; // eax
  _SECURITY_QUALITY_OF_SERVICE *v36; // rcx
  unsigned int DeviceBusInfo; // eax
  unsigned __int16 v38; // r9
  unsigned __int8 v39; // dl
  __int64 v40; // rdx
  _IO_SECURITY_CONTEXT *v41; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v43; // rax
  _IO_SECURITY_CONTEXT *v44; // rdx
  __int64 v45; // rax
  unsigned __int8 v46; // cl
  _IO_SECURITY_CONTEXT *v47; // rax
  int v48; // eax
  int v49; // ecx
  _IO_SECURITY_CONTEXT *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rcx
  _IO_STACK_LOCATION *v55; // rax
  _IO_STACK_LOCATION *v56; // rax
  __int64 v57; // rdx
  PWDF_DRIVER_GLOBALS v58; // rcx
  int v59; // eax
  unsigned __int16 v60; // r9
  unsigned __int8 v61; // dl
  _IO_STACK_LOCATION *v62; // rax
  _IO_STACK_LOCATION *v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rdx
  PWDF_DRIVER_GLOBALS v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int16 Blink; // ax
  _IO_SECURITY_CONTEXT *v71; // rdi
  __int64 v73; // [rsp+20h] [rbp-50h]
  __int64 v74; // [rsp+20h] [rbp-50h]
  ULONG Priority[2]; // [rsp+28h] [rbp-48h]
  __int64 v76; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = WdfFunctions_01015;
  v5 = off_1C0058070;
  *(_QWORD *)((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) = a1;
  Status = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v3 + 1616))(WdfDriverGlobals, a1, v5);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v10 = 0;
  v11 = v7;
  v12 = 53;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220003u:
      v8 = *(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
      LOWORD(v8) = v8 - 53;
      if ( (unsigned __int16)v8 <= 1u )
LABEL_3:
        v10 = 1;
      break;
    case 0x490007u:
    case 0x49104Bu:
      v10 = 1;
      break;
    case 0x220FB3u:
      if ( (*(_DWORD *)(v7 + 32) & 0x20) == 0 )
        break;
      goto LABEL_3;
    case 0x220463u:
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
        4u,
        5u,
        0x33u,
        (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
        a2);
      *(_DWORD *)(*(_QWORD *)(v11 + 24) + 1616LL) |= 0x80000u;
LABEL_22:
      v14 = 2;
      goto LABEL_8;
  }
  if ( *(_BYTE *)v7 && !v10 )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x34u,
      (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
      a2);
    Status = -1073741810;
    v14 = 2;
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    goto LABEL_8;
  }
  if ( LowPart == 2228227 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v25 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v25 - 9) <= 1u )
      goto LABEL_86;
    if ( v25 <= 0x1Eu )
    {
      if ( v25 != 30 && v25 > 1u )
      {
        if ( v25 != 11 )
        {
          if ( v25 == 19 )
          {
            v26 = *(_QWORD *)(v7 + 24);
            if ( (*(_DWORD *)(v26 + 1616) & 0x80000) != 0 )
            {
              v12 = 54;
              v27 = 4;
LABEL_32:
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v26 + 8) + 1432LL),
                v27,
                5u,
                v12,
                (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids);
LABEL_33:
              Status = -1073741637;
              goto LABEL_22;
            }
          }
          goto LABEL_86;
        }
        v28 = *(_QWORD *)(v7 + 24);
        if ( *(_WORD *)(v28 + 1974) <= 0x200u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v28 + 24);
          goto LABEL_36;
        }
        Status = HUBPDO_ValidateURB(
                   v11,
                   (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext,
                   5LL);
        if ( (Status & 0x80000000) != 0 )
          goto LABEL_22;
        SecurityQos = SecurityContext[2].SecurityQos;
        if ( SecurityQos )
        {
          if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
            v30 = *(PVOID *)&SecurityQos[2].Length;
          else
            v30 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v30 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v30 )
        {
          Status = -1073741811;
          HIDWORD(SecurityContext->SecurityQos) = -2147482880;
          goto LABEL_22;
        }
        if ( BYTE3(SecurityContext[5].AccessState) == 1 )
        {
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v33 = (unsigned __int16 *)(*(_QWORD *)(v11 + 24) + 1972LL);
          if ( AccessState_high > 0x12 )
            AccessState_high = 18;
        }
        else
        {
          v31 = *(_QWORD *)(v11 + 24);
          if ( BYTE3(SecurityContext[5].AccessState) != 2 || BYTE2(SecurityContext[5].AccessState) )
          {
            Status = 0;
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v31 + 24);
            v14 = 1;
            goto LABEL_8;
          }
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v33 = *(unsigned __int16 **)(v31 + 2000);
          if ( v33[1] < AccessState_high )
            AccessState_high = v33[1];
        }
        LODWORD(SecurityContext[1].AccessState) |= 1u;
        if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
          WORD1(SecurityContext->SecurityQos) = 8;
        v34 = v30;
        goto LABEL_57;
      }
LABEL_65:
      v35 = HUBPDO_ValidateURB(v7, (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext, 5LL);
      Status = v35;
      if ( v35 < 0 )
        goto LABEL_22;
      if ( v35 != 128 )
      {
        v14 = (*(_BYTE *)(*(_QWORD *)(v11 + 24) + 1616LL) & 2) != 0 ? 5 : 3;
        goto LABEL_8;
      }
      goto LABEL_58;
    }
    if ( v25 != 42 )
    {
      if ( v25 > 0x2Fu )
      {
        if ( v25 <= 0x31u )
          goto LABEL_65;
        if ( (unsigned int)v25 - 53 <= 1 )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
LABEL_64:
          v14 = 3;
          goto LABEL_8;
        }
      }
LABEL_86:
      SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
      goto LABEL_36;
    }
    if ( WORD2(SecurityContext[5].AccessState) != 7 )
    {
      v26 = *(_QWORD *)(v7 + 24);
      if ( ((unsigned __int16)(*(_WORD *)(v26 + 1974) - 256) <= 0xFFu || (*(_DWORD *)(v26 + 1616) & 0x80u) != 0)
        && (*(_DWORD *)(v26 + 1628) & 2) == 0 )
      {
        v27 = 3;
        goto LABEL_32;
      }
      BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v26 + 2036);
      goto LABEL_86;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 2448LL) & 2) != 0 )
    {
      v36 = SecurityContext[2].SecurityQos;
      if ( v36 )
      {
        if ( (*(&v36->EffectiveOnly + 1) & 5) != 0 )
          v34 = *(PVOID *)&v36[2].Length;
        else
          v34 = MmMapLockedPagesSpecifyCache((PMDL)v36, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
      }
      else
      {
        v34 = *(PVOID *)&SecurityContext[1].DesiredAccess;
      }
      if ( !v34 )
        goto LABEL_33;
      AccessState_high = HIDWORD(SecurityContext[1].AccessState);
      v33 = *(unsigned __int16 **)(*(_QWORD *)(v11 + 24) + 2472LL);
      if ( v33[4] < AccessState_high )
        AccessState_high = v33[4];
LABEL_57:
      memmove(v34, v33, AccessState_high);
      HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
LABEL_58:
      Status = 0;
      goto LABEL_22;
    }
    goto LABEL_70;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart <= 0x49000B )
    {
      if ( LowPart != 4784139 )
      {
        switch ( LowPart )
        {
          case 0x22043Fu:
            v44 = CurrentStackLocation->Parameters.Create.SecurityContext;
            if ( v44 )
            {
              v45 = *(_QWORD *)(v7 + 16);
              *(_OWORD *)&v44->SecurityQos = *(_OWORD *)(v45 + 280);
              *(_OWORD *)&v44->DesiredAccess = *(_OWORD *)(v45 + 296);
              v46 = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 216LL);
              if ( v46 )
                *((_WORD *)&v44->DesiredAccess + v46) = *(_WORD *)(v11 + 48);
              else
                LOWORD(v44->DesiredAccess) = *(_WORD *)(v11 + 48);
            }
            else
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
                3u,
                5u,
                0xBu,
                (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids);
              Status = -1073741811;
            }
            goto LABEL_22;
          case 0x220443u:
            goto LABEL_70;
          case 0x22044Fu:
            DeviceBusInfo = HUBPDO_ReturnDeviceConfigInfo(v7, (__int64)a2);
            goto LABEL_99;
          case 0x220FB3u:
            if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
            {
              if ( KeGetCurrentIrql() <= 2u )
              {
                v14 = 5;
                goto LABEL_8;
              }
              Status = -1073741811;
              v14 = 2;
              v38 = 60;
            }
            else
            {
              Status = -1073741101;
              v14 = 2;
              v38 = 59;
            }
            goto LABEL_102;
          case 0x490003u:
            v43 = CurrentStackLocation->Parameters.Create.SecurityContext;
            CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v11 + 24) + 24LL);
            if ( (v43->DesiredAccess & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x10u);
            goto LABEL_36;
        }
        if ( LowPart != 4784135 )
          goto LABEL_166;
      }
LABEL_146:
      CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
      goto LABEL_36;
    }
    if ( LowPart == 4788291 )
    {
      v50 = CurrentStackLocation->Parameters.Create.SecurityContext;
      v50->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v7 + 16) + 2392LL);
      v51 = *(_QWORD *)(v7 + 24);
      *(_OWORD *)&v50->AccessState = *(_OWORD *)(v51 + 1972);
      LOWORD(v50[1].SecurityQos) = *(_WORD *)(v51 + 1988);
      WORD1(v50[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v11 + 24) + 2176LL);
      WORD2(v50[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v11 + 24) + 2178LL);
      v50[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v11 + 24) + 2544LL);
      v50[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 2552LL);
      BYTE2(v50[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL) + 202LL);
      HIWORD(v50[1].AccessState) = *(_WORD *)(*(_QWORD *)(v11 + 24) + 2186LL);
      LOWORD(v50[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v11 + 24) + 2188LL);
      v52 = *(_QWORD *)(v11 + 16);
      LOWORD(v50[1].FullCreateOptions) = *(_WORD *)(v52 + 2436)
                                       + *(_WORD *)(*(_QWORD *)(v11 + 24) + 2558LL)
                                       + *(_WORD *)(v52 + 1132);
      v53 = *(_QWORD *)(v11 + 24);
      if ( (*(_DWORD *)(v53 + 2200) & 1) != 0 )
      {
        HIWORD(v50[1].SecurityQos) = *(unsigned __int8 *)(v53 + 2181);
        LOBYTE(v50[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 216LL);
      }
      else
      {
        HIWORD(v50[1].SecurityQos) = *(_WORD *)(v52 + 2422);
        LOBYTE(v50[1].AccessState) = *(_BYTE *)(v52 + 2424);
      }
      v54 = *(_QWORD *)(v11 + 24);
      if ( (*(_DWORD *)(v54 + 2200) & 2) != 0 )
      {
        WORD1(v50[1].AccessState) = *(_WORD *)(v54 + 2184);
        BYTE4(v50[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 216LL);
      }
      else
      {
        WORD1(v50[1].AccessState) = *(_WORD *)(v52 + 2426);
        BYTE4(v50[1].AccessState) = *(_BYTE *)(v52 + 2428);
      }
      if ( (*(_DWORD *)(v52 + 2440) & 1) != 0 )
        LODWORD(v50[2].SecurityQos) |= 1u;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 1616LL) & 0x2000) != 0 )
        LODWORD(v50[2].SecurityQos) |= 2u;
      goto LABEL_71;
    }
    if ( LowPart != 4788299 )
    {
      if ( LowPart != 4788303 )
      {
        switch ( LowPart )
        {
          case 0x491404u:
            a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v7 + 24) + 24LL);
            goto LABEL_36;
          case 0x491408u:
LABEL_36:
            v14 = 1;
            goto LABEL_8;
          case 0x49140Fu:
            *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL);
            goto LABEL_36;
        }
        goto LABEL_166;
      }
      goto LABEL_146;
    }
    v47 = CurrentStackLocation->Parameters.Create.SecurityContext;
    v14 = 1;
    *(_OWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)&v47->DesiredAccess;
    HIDWORD(v47[1].AccessState) = 0;
    if ( RtlCompareMemory((const void *)(v2 + 32), &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
    {
      v48 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x10000) != 0 )
        v48 = -1073741637;
      Status = v48;
      goto LABEL_173;
    }
    if ( RtlCompareMemory((const void *)(v2 + 32), &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x10000) == 0 )
        goto LABEL_8;
      Status = -1073741637;
      goto LABEL_185;
    }
    if ( RtlCompareMemory(
           (const void *)(v2 + 32),
           &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE,
           0x10uLL) == 16 )
    {
      v49 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x800;
    }
    else if ( RtlCompareMemory(
                (const void *)(v2 + 32),
                &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE,
                0x10uLL) == 16 )
    {
      v49 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x900;
    }
    else
    {
      if ( RtlCompareMemory(
             (const void *)(v2 + 32),
             &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE,
             0x10uLL) != 16 )
      {
        if ( RtlCompareMemory(
               (const void *)(v2 + 32),
               &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE,
               0x10uLL) != 16 )
          goto LABEL_8;
LABEL_185:
        v14 = 2;
        goto LABEL_8;
      }
      v49 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0xB00;
    }
    Status = v49 == 0 ? 0xC00000BB : 0;
LABEL_173:
    v14 = 2;
    goto LABEL_8;
  }
  if ( LowPart == 2229307 )
    goto LABEL_70;
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        DeviceBusInfo = HUBPDO_RecordFailure(v7, (__int64)a2);
        goto LABEL_99;
      case 0x220420u:
        DeviceBusInfo = HUBUCX_GetDeviceBusInfo(
                          *(_QWORD *)(v7 + 16),
                          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
                          CurrentStackLocation->Parameters.WMI.ProviderId);
        goto LABEL_99;
      case 0x220424u:
        DeviceBusInfo = HUBUCX_GetControllerName(
                          *(_QWORD *)(v7 + 16),
                          CurrentStackLocation->Parameters.WMI.ProviderId,
                          CurrentStackLocation->Parameters.Create.Options);
        goto LABEL_99;
    }
    if ( LowPart != 2229292 )
    {
      if ( LowPart == 2229299 )
      {
        Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
        goto LABEL_71;
      }
      if ( LowPart != 2229303 )
      {
LABEL_166:
        Status = a2->IoStatus.Status;
        goto LABEL_71;
      }
    }
    goto LABEL_70;
  }
  switch ( LowPart )
  {
    case 0x220027u:
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( !Parameters || !*(_QWORD *)&Parameters->NamedPipeType )
      {
        Status = -1073741224;
        v14 = 2;
        v38 = 63;
        goto LABEL_102;
      }
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, unsigned __int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
          a2,
          v2 + 64,
          5LL);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
        Template_p(
          v8,
          &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
          (const GUID *)(v2 + 64),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL));
      Status = HUBIDLE_AddEvent(v11 + 72, 6003LL, a2);
      v14 = 6;
      goto LABEL_8;
    case 0x220007u:
      if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
      {
        if ( !KeGetCurrentIrql() )
          goto LABEL_64;
        Status = -1073741811;
        v14 = 2;
        v38 = 58;
      }
      else
      {
        Status = -1073741101;
        v14 = 2;
        v38 = 57;
      }
      goto LABEL_102;
    case 0x22000Fu:
LABEL_70:
      Status = -1073741637;
LABEL_71:
      v14 = 2;
      goto LABEL_8;
  }
  v14 = 4;
  if ( LowPart == 2228243 )
  {
    if ( KeGetCurrentIrql() )
    {
      Status = -1073741811;
      v14 = 2;
      v38 = 55;
    }
    else
    {
      v41 = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v41 )
      {
        LODWORD(v41->SecurityQos) = 0;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v11;
        goto LABEL_8;
      }
      Status = -1073741811;
      v14 = 2;
      v38 = 56;
    }
    v39 = 2;
LABEL_103:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL) + 1432LL),
      v39,
      5u,
      v38,
      (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids);
    goto LABEL_8;
  }
  if ( LowPart == 2228247 || LowPart == 2228251 )
    goto LABEL_71;
  if ( LowPart != 2228255 )
  {
    if ( LowPart == 2228256 )
    {
      DeviceBusInfo = HUBPDO_GetHubName(v7, a2);
LABEL_99:
      Status = DeviceBusInfo;
      goto LABEL_22;
    }
    goto LABEL_166;
  }
  v14 = 2;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741811;
    v38 = 61;
LABEL_102:
    v39 = 3;
    goto LABEL_103;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 4), 1, 0) )
  {
    v38 = 62;
    goto LABEL_102;
  }
  v40 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)(v40 + 2420) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v40 + 488);
  EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(*(_QWORD *)(v11 + 24), 2228255LL, 0LL);
  HUBSM_AddEvent(*(_QWORD *)(v11 + 24) + 488LL, 0xFABu);
LABEL_8:
  v15 = v14 - 1;
  if ( !v15 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v11 + 8), a2);
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C00580E8)
                    + 4) & 0x1000) != 0 )
    {
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, unsigned __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, v2 + 48);
      Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      {
        LODWORD(v73) = LowPart;
        Template_pq(
          v69,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          (const GUID *)(v2 + 48),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v73);
        Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
      }
      if ( LowPart == 2228227 )
      {
        v71 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (Blink & 0x100) == 0 )
          goto LABEL_217;
        LODWORD(v73) = WORD1(v71->SecurityQos);
        Template_pq(
          v69,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          (const GUID *)(v2 + 48),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v73);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) == 0 )
          goto LABEL_217;
        Priority[0] = HIDWORD(v71->SecurityQos);
        LODWORD(v74) = WORD1(v71->SecurityQos);
        Template_pqq(
          WORD1(v71->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          (const GUID *)(v2 + 48),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v74,
          *(_QWORD *)Priority);
        Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
      }
      if ( LowPart != 4788299 )
        goto LABEL_215;
      if ( (Blink & 0x100) != 0 )
      {
        Priority[0] = Status;
        Template_pjq(
          v69,
          v68,
          (const GUID *)(v2 + 48),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v2 + 32,
          *(_QWORD *)Priority);
        Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
LABEL_215:
        if ( (Blink & 0x100) != 0 )
        {
          Priority[0] = Status;
          LODWORD(v73) = LowPart;
          Template_pqq(
            v69,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            (const GUID *)(v2 + 48),
            *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
            v73,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_217:
    a2->IoStatus.Status = Status;
    goto LABEL_218;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v62 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v62[-1].MajorFunction = *(_OWORD *)&v62->MajorFunction;
    *(_OWORD *)&v62[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v62->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v62[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v62->Parameters.QueryDeviceRelations + 6);
    v62[-1].FileObject = v62->FileObject;
    v62[-1].Control = 0;
    KeInitializeEvent((PRKEVENT)(v2 + 8), NotificationEvent, 0);
    v63 = a2->Tail.Overlay.CurrentStackLocation;
    v64 = *(_QWORD *)v2;
    v65 = *(_QWORD *)v2;
    v63[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v63[-1].Context = (void *)(v2 + 8);
    v66 = WdfDriverGlobals;
    v63[-1].Control = -32;
    v67 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(v66, v65);
    v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            v64,
            a2,
            v67,
            2);
    if ( v59 >= 0 )
      goto LABEL_200;
    v60 = 65;
    v61 = 3;
    goto LABEL_199;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v55 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v55[-1].MajorFunction = *(_OWORD *)&v55->MajorFunction;
    *(_OWORD *)&v55[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v55->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v55[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v55->Parameters.QueryDeviceRelations + 6);
    v55[-1].FileObject = v55->FileObject;
    v55[-1].Control = 0;
    KeInitializeEvent((PRKEVENT)(v2 + 8), NotificationEvent, 0);
    v56 = a2->Tail.Overlay.CurrentStackLocation;
    v57 = *(_QWORD *)v2;
    v56[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v56[-1].Context = (void *)(v2 + 8);
    v58 = WdfDriverGlobals;
    v56[-1].Control = -32;
    v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            v58,
            v57,
            a2,
            *(_QWORD *)(*(_QWORD *)(v11 + 16) + 2344LL),
            2);
    if ( v59 >= 0 )
    {
LABEL_200:
      HUBMISC_WaitForSignal((PVOID)(v2 + 8));
      Status = a2->IoStatus.Status;
LABEL_218:
      IofCompleteRequest(a2, 0);
      return Status;
    }
    v60 = 64;
    v61 = 2;
LABEL_199:
    Priority[0] = v59;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL) + 1432LL),
      v61,
      5u,
      v60,
      (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
      *(_QWORD *)Priority);
    goto LABEL_200;
  }
  if ( v18 == 1 )
  {
    v19 = a2->Tail.Overlay.CurrentStackLocation;
    v20 = *(_QWORD *)v2;
    v21 = WdfDriverGlobals;
    *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)&v19->MajorFunction;
    *(_OWORD *)&v19[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v19->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v19[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v19->Parameters.QueryDeviceRelations + 6);
    v19[-1].FileObject = v19->FileObject;
    v19[-1].Control = 0;
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(v21, v20);
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                           WdfDriverGlobals,
                           *(_QWORD *)v2,
                           a2,
                           v22,
                           2);
  }
  return Status;
}
