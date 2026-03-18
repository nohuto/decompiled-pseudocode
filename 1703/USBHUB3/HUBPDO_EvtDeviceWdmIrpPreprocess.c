/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0013BC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C00012BC (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     Template_pqq @ 0x1C000A798 (Template_pqq.c)
 *     Template_pjq @ 0x1C0010904 (Template_pjq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010DF0 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C0011C44 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C0011D80 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0011EF8 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C0012CD4 (HUBPDO_ValidateURB.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0016BDC (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_GetControllerName @ 0x1C0020EF4 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C002102C (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C0029A0C (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002AD04 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBIDLE_AddEvent @ 0x1C0032E64 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v7; // rsi
  char v8; // dl
  unsigned int LowPart; // r12d
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  _IO_STACK_LOCATION *v15; // rax
  PWDF_DRIVER_GLOBALS v16; // rcx
  __int64 v17; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  unsigned __int16 v20; // cx
  __int64 v21; // rcx
  unsigned __int16 v22; // r9
  unsigned __int8 v23; // dl
  __int64 v24; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v26; // r9
  __int64 v27; // rax
  unsigned int AccessState_high; // ebx
  unsigned __int16 *v29; // rdx
  PVOID v30; // rcx
  int v31; // eax
  _SECURITY_QUALITY_OF_SERVICE *v32; // rcx
  unsigned int ControllerSuffix; // eax
  unsigned __int16 v34; // r9
  __int64 v35; // rdx
  unsigned __int16 v36; // r9
  _IO_SECURITY_CONTEXT *v37; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v39; // rax
  __int64 v40; // rcx
  _IO_SECURITY_CONTEXT *v41; // rdx
  __int64 v42; // rax
  unsigned __int8 v43; // cl
  _IO_SECURITY_CONTEXT *v44; // rax
  int v45; // eax
  int v46; // ecx
  _IO_SECURITY_CONTEXT *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rcx
  _IO_STACK_LOCATION *v52; // rax
  _IO_STACK_LOCATION *v53; // rax
  PWDF_DRIVER_GLOBALS v54; // rcx
  int v55; // eax
  unsigned __int16 v56; // r9
  unsigned __int8 v57; // dl
  _IO_STACK_LOCATION *v58; // rax
  _IO_STACK_LOCATION *v59; // rax
  PWDF_DRIVER_GLOBALS v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int16 Blink; // ax
  _IO_SECURITY_CONTEXT *v65; // rdi
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-98h]
  ULONG BugCheckOnFailurea[2]; // [rsp+20h] [rbp-98h]
  ULONG Priority[2]; // [rsp+28h] [rbp-90h]
  struct _KEVENT Event; // [rsp+38h] [rbp-80h] BYREF
  __int128 Source1; // [rsp+50h] [rbp-68h] BYREF
  GUID v73; // [rsp+60h] [rbp-58h] BYREF
  GUID v74; // [rsp+70h] [rbp-48h] BYREF

  Status = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = v4;
  v8 = 0;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220003u:
      v5 = *(unsigned __int16 *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2);
      LOWORD(v5) = v5 - 53;
      if ( (unsigned __int16)v5 <= 1u )
LABEL_3:
        v8 = 1;
      break;
    case 0x490007u:
    case 0x49104Bu:
      v8 = 1;
      break;
    case 0x220FB3u:
      if ( (*(_DWORD *)(v4 + 32) & 0x20) == 0 )
        break;
      goto LABEL_3;
    case 0x220463u:
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        4u,
        5u,
        0x33u,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        a2);
      *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1616LL) |= 0x80000u;
LABEL_22:
      v10 = 2;
      goto LABEL_8;
  }
  if ( *(_BYTE *)v4 && !v8 )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x34u,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      a2);
    Status = -1073741810;
    v10 = 2;
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    goto LABEL_8;
  }
  if ( LowPart == 2228227 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v20 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v20 - 9) <= 1u )
      goto LABEL_86;
    if ( v20 <= 0x1Eu )
    {
      if ( v20 != 30 && v20 > 1u )
      {
        if ( v20 != 11 )
        {
          if ( v20 == 19 )
          {
            v21 = *(_QWORD *)(v4 + 24);
            if ( (*(_DWORD *)(v21 + 1616) & 0x80000) != 0 )
            {
              v22 = 54;
              v23 = 4;
LABEL_32:
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v21 + 8) + 1432LL),
                v23,
                5u,
                v22,
                (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
LABEL_33:
              Status = -1073741637;
              goto LABEL_22;
            }
          }
          goto LABEL_86;
        }
        v24 = *(_QWORD *)(v4 + 24);
        if ( *(_WORD *)(v24 + 1974) <= 0x200u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v24 + 24);
          goto LABEL_36;
        }
        Status = HUBPDO_ValidateURB(
                   v7,
                   (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext,
                   5LL);
        if ( (Status & 0x80000000) != 0 )
          goto LABEL_22;
        SecurityQos = SecurityContext[2].SecurityQos;
        if ( SecurityQos )
        {
          if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
            v26 = *(PVOID *)&SecurityQos[2].Length;
          else
            v26 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v26 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v26 )
        {
          Status = -1073741811;
          HIDWORD(SecurityContext->SecurityQos) = -2147482880;
          goto LABEL_22;
        }
        if ( BYTE3(SecurityContext[5].AccessState) == 1 )
        {
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v29 = (unsigned __int16 *)(*(_QWORD *)(v7 + 24) + 1972LL);
          if ( AccessState_high > 0x12 )
            AccessState_high = 18;
        }
        else
        {
          v27 = *(_QWORD *)(v7 + 24);
          if ( BYTE3(SecurityContext[5].AccessState) != 2 || BYTE2(SecurityContext[5].AccessState) )
          {
            Status = 0;
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v27 + 24);
            v10 = 1;
            goto LABEL_8;
          }
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v29 = *(unsigned __int16 **)(v27 + 2000);
          if ( v29[1] < AccessState_high )
            AccessState_high = v29[1];
        }
        LODWORD(SecurityContext[1].AccessState) |= 1u;
        if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
          WORD1(SecurityContext->SecurityQos) = 8;
        v30 = v26;
        goto LABEL_57;
      }
LABEL_65:
      v31 = HUBPDO_ValidateURB(v4, (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext, 5LL);
      Status = v31;
      if ( v31 < 0 )
        goto LABEL_22;
      if ( v31 != 128 )
      {
        v10 = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1616LL) & 2) != 0 ? 5 : 3;
        goto LABEL_8;
      }
      goto LABEL_58;
    }
    if ( v20 != 42 )
    {
      if ( v20 > 0x2Fu )
      {
        if ( v20 <= 0x31u )
          goto LABEL_65;
        if ( (unsigned int)v20 - 53 <= 1 )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
LABEL_64:
          v10 = 3;
          goto LABEL_8;
        }
      }
LABEL_86:
      SecurityContext->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v4 + 24) + 24LL);
      goto LABEL_36;
    }
    if ( WORD2(SecurityContext[5].AccessState) != 7 )
    {
      v21 = *(_QWORD *)(v4 + 24);
      if ( ((unsigned __int16)(*(_WORD *)(v21 + 1974) - 256) <= 0xFFu || (*(_DWORD *)(v21 + 1616) & 0x80u) != 0)
        && (*(_DWORD *)(v21 + 1628) & 2) == 0 )
      {
        v22 = 53;
        v23 = 3;
        goto LABEL_32;
      }
      BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v21 + 2036);
      goto LABEL_86;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 2448LL) & 2) != 0 )
    {
      v32 = SecurityContext[2].SecurityQos;
      if ( v32 )
      {
        if ( (*(&v32->EffectiveOnly + 1) & 5) != 0 )
          v30 = *(PVOID *)&v32[2].Length;
        else
          v30 = MmMapLockedPagesSpecifyCache((PMDL)v32, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
      }
      else
      {
        v30 = *(PVOID *)&SecurityContext[1].DesiredAccess;
      }
      if ( !v30 )
        goto LABEL_33;
      AccessState_high = HIDWORD(SecurityContext[1].AccessState);
      v29 = *(unsigned __int16 **)(*(_QWORD *)(v7 + 24) + 2472LL);
      if ( v29[4] < AccessState_high )
        AccessState_high = v29[4];
LABEL_57:
      memmove(v30, v29, AccessState_high);
      HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
LABEL_58:
      Status = 0;
      goto LABEL_22;
    }
    goto LABEL_70;
  }
  if ( LowPart > 0x22043B )
  {
    if ( LowPart > 0x49000B )
    {
      if ( LowPart == 4788291 )
      {
        v47 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v47->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v4 + 16) + 2416LL);
        v48 = *(_QWORD *)(v4 + 24);
        *(_OWORD *)&v47->AccessState = *(_OWORD *)(v48 + 1972);
        LOWORD(v47[1].SecurityQos) = *(_WORD *)(v48 + 1988);
        WORD1(v47[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2176LL);
        WORD2(v47[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2178LL);
        v47[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 2544LL);
        v47[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 2552LL);
        BYTE2(v47[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 202LL);
        HIWORD(v47[1].AccessState) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2186LL);
        LOWORD(v47[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2188LL);
        v49 = *(_QWORD *)(v7 + 16);
        LOWORD(v47[1].FullCreateOptions) = *(_WORD *)(v49 + 2460)
                                         + *(_WORD *)(*(_QWORD *)(v7 + 24) + 2558LL)
                                         + *(_WORD *)(v49 + 1156);
        v50 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v50 + 2200) & 1) != 0 )
        {
          HIWORD(v47[1].SecurityQos) = *(unsigned __int8 *)(v50 + 2181);
          LOBYTE(v47[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 232LL);
        }
        else
        {
          HIWORD(v47[1].SecurityQos) = *(_WORD *)(v49 + 2446);
          LOBYTE(v47[1].AccessState) = *(_BYTE *)(v49 + 2448);
        }
        v51 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v51 + 2200) & 2) != 0 )
        {
          WORD1(v47[1].AccessState) = *(_WORD *)(v51 + 2184);
          BYTE4(v47[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 232LL);
        }
        else
        {
          WORD1(v47[1].AccessState) = *(_WORD *)(v49 + 2450);
          BYTE4(v47[1].AccessState) = *(_BYTE *)(v49 + 2452);
        }
        if ( (*(_DWORD *)(v49 + 2464) & 1) != 0 )
          LODWORD(v47[2].SecurityQos) |= 1u;
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1616LL) & 0x2000) != 0 )
          LODWORD(v47[2].SecurityQos) |= 2u;
        goto LABEL_71;
      }
      if ( LowPart == 4788299 )
      {
        v44 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v10 = 1;
        Source1 = *(_OWORD *)&v44->DesiredAccess;
        HIDWORD(v44[1].AccessState) = 0;
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
        {
          v45 = -((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1440LL) & 0x10000) != 0);
        }
        else
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
          {
            Status = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1440LL) & 0x10000) != 0 ? 0xC00000BB : 0;
            v10 = ((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1440LL) & 0x10000) != 0) + 1;
            goto LABEL_8;
          }
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v46 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1440LL) & 0x800;
          }
          else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
          {
            v46 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1440LL) & 0x900;
          }
          else
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
            {
              if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) == 16 )
                v10 = 2;
              goto LABEL_8;
            }
            v46 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1440LL) & 0xB00;
          }
          v45 = -(v46 == 0);
        }
        v10 = 2;
        Status = v45 & 0xC00000BB;
        goto LABEL_8;
      }
      if ( LowPart != 4788303 )
      {
        switch ( LowPart )
        {
          case 0x491404u:
            a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_36;
          case 0x491408u:
LABEL_36:
            v10 = 1;
            goto LABEL_8;
          case 0x49140Fu:
            *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
            goto LABEL_36;
        }
        goto LABEL_169;
      }
    }
    else if ( LowPart != 4784139 )
    {
      switch ( LowPart )
      {
        case 0x22043Fu:
          v41 = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( v41 )
          {
            v42 = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v41->SecurityQos = *(_OWORD *)(v42 + 296);
            *(_OWORD *)&v41->DesiredAccess = *(_OWORD *)(v42 + 312);
            v43 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 232LL);
            if ( v43 )
              *((_WORD *)&v41->DesiredAccess + v43) = *(_WORD *)(v7 + 48);
            else
              LOWORD(v41->DesiredAccess) = *(_WORD *)(v7 + 48);
          }
          else
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
              3u,
              5u,
              0xBu,
              (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
            Status = -1073741811;
          }
          goto LABEL_22;
        case 0x220443u:
          goto LABEL_70;
        case 0x22044Fu:
          ControllerSuffix = HUBPDO_ReturnDeviceConfigInfo(v4, (__int64)a2);
          goto LABEL_99;
        case 0x220FB3u:
          if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
          {
            if ( KeGetCurrentIrql() <= 2u )
            {
              v10 = 5;
              goto LABEL_8;
            }
            Status = -1073741811;
            v10 = 2;
            v34 = 60;
          }
          else
          {
            Status = -1073741101;
            v10 = 2;
            v34 = 59;
          }
          goto LABEL_115;
        case 0x220FBBu:
          v40 = *(_QWORD *)(v4 + 24);
          if ( (*(_DWORD *)(v40 + 1628) & 0x1000000) == 0 )
          {
            Status = -1073741275;
            goto LABEL_22;
          }
          ControllerSuffix = HUBMISC_GenerateControllerSuffix(v40, CurrentStackLocation->Parameters.WMI.ProviderId, 5LL);
          goto LABEL_99;
        case 0x490003u:
          v39 = CurrentStackLocation->Parameters.Create.SecurityContext;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
          if ( (v39->DesiredAccess & 1) != 0 )
            _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x10u);
          goto LABEL_36;
      }
      if ( LowPart != 4784135 )
        goto LABEL_169;
    }
    CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v4 + 24) + 24LL);
    goto LABEL_36;
  }
  if ( LowPart == 2229307 )
  {
LABEL_70:
    Status = -1073741637;
    goto LABEL_71;
  }
  if ( LowPart > 0x220027 )
  {
    switch ( LowPart )
    {
      case 0x22002Bu:
        ControllerSuffix = HUBPDO_RecordFailure(v4, (__int64)a2);
        goto LABEL_99;
      case 0x220420u:
        ControllerSuffix = HUBUCX_GetDeviceBusInfo(
                             *(_QWORD *)(v4 + 16),
                             *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL),
                             CurrentStackLocation->Parameters.WMI.ProviderId);
        goto LABEL_99;
      case 0x220424u:
        ControllerSuffix = HUBUCX_GetControllerName(
                             *(_QWORD *)(v4 + 16),
                             CurrentStackLocation->Parameters.WMI.ProviderId,
                             CurrentStackLocation->Parameters.Create.Options);
        goto LABEL_99;
    }
    if ( LowPart != 2229292 )
    {
      if ( LowPart == 2229299 )
      {
        v10 = 2;
        Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
        goto LABEL_8;
      }
      if ( LowPart != 2229303 )
      {
LABEL_169:
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
        v10 = 2;
        v34 = 63;
        goto LABEL_115;
      }
      *(_QWORD *)&v74.Data1 = 0LL;
      *(_QWORD *)v74.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v74, 5LL);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
        Template_p(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
          &v74,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL));
      Status = HUBIDLE_AddEvent(v7 + 72, 6003LL, a2);
      v10 = 6;
      goto LABEL_8;
    case 0x220007u:
      if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
      {
        if ( !KeGetCurrentIrql() )
          goto LABEL_64;
        Status = -1073741811;
        v10 = 2;
        v34 = 58;
      }
      else
      {
        Status = -1073741101;
        v10 = 2;
        v34 = 57;
      }
LABEL_115:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        v34,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
      goto LABEL_8;
    case 0x22000Fu:
      goto LABEL_70;
  }
  v10 = 4;
  if ( LowPart == 2228243 )
  {
    if ( KeGetCurrentIrql() )
    {
      Status = -1073741811;
      v10 = 2;
      v36 = 55;
    }
    else
    {
      v37 = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v37 )
      {
        LODWORD(v37->SecurityQos) = 0;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v7;
        goto LABEL_8;
      }
      Status = -1073741811;
      v10 = 2;
      v36 = 56;
    }
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
      2u,
      5u,
      v36,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
    goto LABEL_8;
  }
  if ( LowPart == 2228247 || LowPart == 2228251 )
  {
LABEL_71:
    v10 = 2;
    goto LABEL_8;
  }
  if ( LowPart != 2228255 )
  {
    if ( LowPart == 2228256 )
    {
      ControllerSuffix = HUBPDO_GetHubName(v4, a2);
LABEL_99:
      Status = ControllerSuffix;
      goto LABEL_22;
    }
    goto LABEL_169;
  }
  v10 = 2;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741811;
    v34 = 61;
    goto LABEL_115;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4), 1, 0) )
  {
    v34 = 62;
    goto LABEL_115;
  }
  v35 = *(_QWORD *)(v4 + 24);
  if ( (*(_DWORD *)(v35 + 2420) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v35 + 488);
  EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(*(_QWORD *)(v7 + 24), 2228255LL, 0LL);
  HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 488LL, 4011);
LABEL_8:
  v11 = v10 - 1;
  if ( !v11 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 8), a2);
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C005B110)
                    + 4) & 0x1000) != 0 )
    {
      *(_QWORD *)&v73.Data1 = 0LL;
      *(_QWORD *)v73.Data4 = 0LL;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v73);
      Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      {
        BugCheckOnFailure[0] = LowPart;
        Template_pq(
          v63,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          &v73,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
        Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
      }
      if ( LowPart == 2228227 )
      {
        v65 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (Blink & 0x400) == 0 )
          goto LABEL_217;
        BugCheckOnFailure[0] = WORD1(v65->SecurityQos);
        Template_pq(
          v63,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          &v73,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailure);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) == 0 )
          goto LABEL_217;
        Priority[0] = HIDWORD(v65->SecurityQos);
        BugCheckOnFailurea[0] = WORD1(v65->SecurityQos);
        Template_pqq(
          WORD1(v65->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          &v73,
          *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
          *(_QWORD *)BugCheckOnFailurea,
          *(_QWORD *)Priority);
        Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
      }
      if ( LowPart != 4788299 )
        goto LABEL_215;
      if ( (Blink & 0x400) != 0 )
      {
        Priority[0] = Status;
        Template_pjq(v63, v62, &v73, *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL), &Source1, *(_QWORD *)Priority);
        Blink = (__int16)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
LABEL_215:
        if ( (Blink & 0x400) != 0 )
        {
          Priority[0] = Status;
          BugCheckOnFailure[0] = LowPart;
          Template_pqq(
            v63,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            &v73,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            *(_QWORD *)BugCheckOnFailure,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_217:
    a2->IoStatus.Status = Status;
    goto LABEL_218;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v58 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v58[-1].MajorFunction = *(_OWORD *)&v58->MajorFunction;
    *(_OWORD *)&v58[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v58->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v58[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v58->Parameters.QueryDeviceRelations + 6);
    v58[-1].FileObject = v58->FileObject;
    v58[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v59 = a2->Tail.Overlay.CurrentStackLocation;
    v59[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v59[-1].Context = &Event;
    v60 = WdfDriverGlobals;
    v59[-1].Control = -32;
    v61 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(v60, a1);
    v55 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            a1,
            a2,
            v61,
            2);
    if ( v55 >= 0 )
      goto LABEL_200;
    v56 = 65;
    v57 = 3;
    goto LABEL_199;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v52 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v52[-1].MajorFunction = *(_OWORD *)&v52->MajorFunction;
    *(_OWORD *)&v52[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v52->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v52[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v52->Parameters.QueryDeviceRelations + 6);
    v52[-1].FileObject = v52->FileObject;
    v52[-1].Control = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v53 = a2->Tail.Overlay.CurrentStackLocation;
    v53[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v53[-1].Context = &Event;
    v54 = WdfDriverGlobals;
    v53[-1].Control = -32;
    v55 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            v54,
            a1,
            a2,
            *(_QWORD *)(*(_QWORD *)(v7 + 16) + 2368LL),
            2);
    if ( v55 >= 0 )
    {
LABEL_200:
      HUBMISC_WaitForSignal(&Event);
      Status = a2->IoStatus.Status;
LABEL_218:
      IofCompleteRequest(a2, 0);
      return Status;
    }
    v56 = 64;
    v57 = 2;
LABEL_199:
    Priority[0] = v55;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
      v57,
      5u,
      v56,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      *(_QWORD *)Priority);
    goto LABEL_200;
  }
  if ( v14 == 1 )
  {
    v15 = a2->Tail.Overlay.CurrentStackLocation;
    v16 = WdfDriverGlobals;
    *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
    *(_OWORD *)&v15[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v15->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v15[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v15->Parameters.QueryDeviceRelations + 6);
    v15[-1].FileObject = v15->FileObject;
    v15[-1].Control = 0;
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(v16, a1);
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                           WdfDriverGlobals,
                           a1,
                           a2,
                           v17,
                           2);
  }
  return Status;
}
