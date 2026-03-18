/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012300
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     Template_pjq @ 0x1C000F434 (Template_pjq.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F66C (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetHubName @ 0x1C0010488 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x1C00105C0 (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0010730 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x1C001152C (HUBPDO_ValidateURB.c)
 *     HUBUCX_GetControllerName @ 0x1C001E208 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1C001E33C (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     HUBIDLE_AddEvent @ 0x1C002F1B8 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
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
  __int64 v21; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  unsigned __int16 v24; // cx
  __int64 v25; // rcx
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v29; // r9
  __int64 v30; // rax
  unsigned int AccessState_high; // ebx
  unsigned __int16 *v32; // rdx
  PVOID v33; // rcx
  int v34; // eax
  _SECURITY_QUALITY_OF_SERVICE *v35; // rcx
  unsigned int DeviceBusInfo; // eax
  unsigned __int16 v37; // r9
  unsigned __int8 v38; // dl
  __int64 v39; // rdx
  _IO_SECURITY_CONTEXT *v40; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _IO_SECURITY_CONTEXT *v42; // rax
  _IO_SECURITY_CONTEXT *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 v45; // cl
  __int16 v46; // ax
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
  int v58; // eax
  unsigned __int16 v59; // r9
  unsigned __int8 v60; // dl
  _IO_STACK_LOCATION *v61; // rax
  _IO_STACK_LOCATION *v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int16 CurrentIrp; // ax
  _IO_SECURITY_CONTEXT *v69; // rdi
  __int64 v71; // [rsp+20h] [rbp-50h]
  __int64 v72; // [rsp+20h] [rbp-50h]
  ULONG Priority[2]; // [rsp+28h] [rbp-48h]
  __int64 v74; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = WdfFunctions_01015;
  v5 = off_1C00570C0;
  *(_QWORD *)((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) = a1;
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
        5LL,
        0x33u,
        (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
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
      5LL,
      0x34u,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
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
    v24 = WORD1(SecurityContext->SecurityQos);
    if ( (unsigned __int16)(v24 - 9) <= 1u )
      goto LABEL_86;
    if ( v24 <= 0x1Eu )
    {
      if ( v24 != 30 && v24 > 1u )
      {
        if ( v24 != 11 )
        {
          if ( v24 == 19 )
          {
            v25 = *(_QWORD *)(v7 + 24);
            if ( (*(_DWORD *)(v25 + 1616) & 0x80000) != 0 )
            {
              v12 = 54;
              v26 = 4;
LABEL_32:
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(v25 + 8) + 1432LL),
                v26,
                5u,
                v12,
                (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids);
LABEL_33:
              Status = -1073741637;
              goto LABEL_22;
            }
          }
          goto LABEL_86;
        }
        v27 = *(_QWORD *)(v7 + 24);
        if ( *(_WORD *)(v27 + 1974) <= 0x200u )
        {
          SecurityContext->AccessState = *(_ACCESS_STATE **)(v27 + 24);
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
            v29 = *(PVOID *)&SecurityQos[2].Length;
          else
            v29 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
        }
        else
        {
          v29 = *(PVOID *)&SecurityContext[1].DesiredAccess;
        }
        if ( !v29 )
        {
          Status = -1073741811;
          HIDWORD(SecurityContext->SecurityQos) = -2147482880;
          goto LABEL_22;
        }
        if ( BYTE3(SecurityContext[5].AccessState) == 1 )
        {
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v32 = (unsigned __int16 *)(*(_QWORD *)(v11 + 24) + 1972LL);
          if ( AccessState_high > 0x12 )
            AccessState_high = 18;
        }
        else
        {
          v30 = *(_QWORD *)(v11 + 24);
          if ( BYTE3(SecurityContext[5].AccessState) != 2 || BYTE2(SecurityContext[5].AccessState) )
          {
            Status = 0;
            SecurityContext->AccessState = *(_ACCESS_STATE **)(v30 + 24);
            v14 = 1;
            goto LABEL_8;
          }
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
          v32 = *(unsigned __int16 **)(v30 + 2000);
          if ( v32[1] < AccessState_high )
            AccessState_high = v32[1];
        }
        LODWORD(SecurityContext[1].AccessState) |= 1u;
        if ( ((__int64)SecurityContext[1].AccessState & 8) != 0 )
          WORD1(SecurityContext->SecurityQos) = 8;
        v33 = v29;
        goto LABEL_57;
      }
LABEL_65:
      v34 = HUBPDO_ValidateURB(v7, (unsigned __int16 *)CurrentStackLocation->Parameters.Create.SecurityContext, 5LL);
      Status = v34;
      if ( v34 < 0 )
        goto LABEL_22;
      if ( v34 != 128 )
      {
        v14 = (*(_BYTE *)(*(_QWORD *)(v11 + 24) + 1616LL) & 2) != 0 ? 5 : 3;
        goto LABEL_8;
      }
      goto LABEL_58;
    }
    if ( v24 != 42 )
    {
      if ( v24 > 0x2Fu )
      {
        if ( v24 <= 0x31u )
          goto LABEL_65;
        if ( (unsigned int)v24 - 53 <= 1 )
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
      v25 = *(_QWORD *)(v7 + 24);
      if ( ((unsigned __int16)(*(_WORD *)(v25 + 1974) - 256) <= 0xFFu || (*(_DWORD *)(v25 + 1616) & 0x80u) != 0)
        && (*(_DWORD *)(v25 + 1628) & 2) == 0 )
      {
        v26 = 3;
        goto LABEL_32;
      }
      BYTE1(SecurityContext[5].AccessState) = *(_BYTE *)(v25 + 2036);
      goto LABEL_86;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 24) + 2448LL) & 2) != 0 )
    {
      v35 = SecurityContext[2].SecurityQos;
      if ( v35 )
      {
        if ( (*(&v35->EffectiveOnly + 1) & 5) != 0 )
          v33 = *(PVOID *)&v35[2].Length;
        else
          v33 = MmMapLockedPagesSpecifyCache((PMDL)v35, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
      }
      else
      {
        v33 = *(PVOID *)&SecurityContext[1].DesiredAccess;
      }
      if ( !v33 )
        goto LABEL_33;
      AccessState_high = HIDWORD(SecurityContext[1].AccessState);
      v32 = *(unsigned __int16 **)(*(_QWORD *)(v11 + 24) + 2472LL);
      if ( v32[4] < AccessState_high )
        AccessState_high = v32[4];
LABEL_57:
      memmove(v33, v32, AccessState_high);
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
            v43 = CurrentStackLocation->Parameters.Create.SecurityContext;
            if ( v43 )
            {
              v44 = *(_QWORD *)(v7 + 16);
              *(_OWORD *)&v43->SecurityQos = *(_OWORD *)(v44 + 264);
              *(_OWORD *)&v43->DesiredAccess = *(_OWORD *)(v44 + 280);
              v45 = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 200LL);
              v46 = *(_WORD *)(v11 + 48);
              if ( v45 )
                *((_WORD *)&v43->DesiredAccess + v45) = v46;
              else
                LOWORD(v43->DesiredAccess) = v46;
            }
            else
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
                3u,
                5u,
                0xBu,
                (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids);
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
              v37 = 60;
            }
            else
            {
              Status = -1073741101;
              v14 = 2;
              v37 = 59;
            }
            goto LABEL_102;
          case 0x490003u:
            v42 = CurrentStackLocation->Parameters.Create.SecurityContext;
            CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v11 + 24) + 24LL);
            if ( (v42->DesiredAccess & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x10u);
            goto LABEL_36;
        }
        if ( LowPart != 4784135 )
          goto LABEL_168;
      }
LABEL_148:
      CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
      goto LABEL_36;
    }
    if ( LowPart == 4788291 )
    {
      v50 = CurrentStackLocation->Parameters.Create.SecurityContext;
      v50->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v7 + 16) + 2368LL);
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
      LOWORD(v50[1].FullCreateOptions) = *(_WORD *)(v52 + 2412)
                                       + *(_WORD *)(*(_QWORD *)(v11 + 24) + 2558LL)
                                       + *(_WORD *)(v52 + 1108);
      v53 = *(_QWORD *)(v11 + 24);
      if ( (*(_DWORD *)(v53 + 2200) & 1) != 0 )
      {
        HIWORD(v50[1].SecurityQos) = *(unsigned __int8 *)(v53 + 2181);
        LOBYTE(v50[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 200LL);
      }
      else
      {
        HIWORD(v50[1].SecurityQos) = *(_WORD *)(v52 + 2398);
        LOBYTE(v50[1].AccessState) = *(_BYTE *)(v52 + 2400);
      }
      v54 = *(_QWORD *)(v11 + 24);
      if ( (*(_DWORD *)(v54 + 2200) & 2) != 0 )
      {
        WORD1(v50[1].AccessState) = *(_WORD *)(v54 + 2184);
        BYTE4(v50[1].AccessState) = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 200LL);
      }
      else
      {
        WORD1(v50[1].AccessState) = *(_WORD *)(v52 + 2402);
        BYTE4(v50[1].AccessState) = *(_BYTE *)(v52 + 2404);
      }
      if ( (*(_DWORD *)(v52 + 2416) & 1) != 0 )
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
        goto LABEL_168;
      }
      goto LABEL_148;
    }
    v47 = CurrentStackLocation->Parameters.Create.SecurityContext;
    v14 = 1;
    *(_OWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)&v47->DesiredAccess;
    HIDWORD(v47[1].AccessState) = 0;
    if ( RtlCompareMemory((const void *)(v2 + 48), &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
    {
      v48 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x10000) != 0 )
        v48 = -1073741637;
      Status = v48;
      goto LABEL_175;
    }
    if ( RtlCompareMemory((const void *)(v2 + 48), &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x10000) == 0 )
        goto LABEL_8;
      Status = -1073741637;
      goto LABEL_187;
    }
    if ( RtlCompareMemory(
           (const void *)(v2 + 48),
           &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE,
           0x10uLL) == 16 )
    {
      v49 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x800;
    }
    else if ( RtlCompareMemory(
                (const void *)(v2 + 48),
                &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE,
                0x10uLL) == 16 )
    {
      v49 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0x900;
    }
    else
    {
      if ( RtlCompareMemory(
             (const void *)(v2 + 48),
             &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE,
             0x10uLL) != 16 )
      {
        if ( RtlCompareMemory(
               (const void *)(v2 + 48),
               &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE,
               0x10uLL) != 16 )
          goto LABEL_8;
LABEL_187:
        v14 = 2;
        goto LABEL_8;
      }
      v49 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 1440LL) & 0xB00;
    }
    Status = v49 == 0 ? 0xC00000BB : 0;
LABEL_175:
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
LABEL_168:
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
        v37 = 63;
        goto LABEL_102;
      }
      *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
        ((void (__fastcall *)(IRP *, unsigned __int64, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(a2, v2 + 64, 5LL);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
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
        v37 = 58;
      }
      else
      {
        Status = -1073741101;
        v14 = 2;
        v37 = 57;
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
      v37 = 55;
    }
    else
    {
      v40 = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v40 )
      {
        LODWORD(v40->SecurityQos) = 0;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v11;
        goto LABEL_8;
      }
      Status = -1073741811;
      v14 = 2;
      v37 = 56;
    }
    v38 = 2;
LABEL_103:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL) + 1432LL),
      v38,
      5u,
      v37,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids);
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
    goto LABEL_168;
  }
  v14 = 2;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741811;
    v37 = 61;
LABEL_102:
    v38 = 3;
    goto LABEL_103;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 4), 1, 0) )
  {
    v37 = 62;
    goto LABEL_102;
  }
  v39 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)(v39 + 2420) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v39 + 488);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x20000) != 0 )
    Template_pqq(
      v8,
      &USBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION,
      (const GUID *)(*(_QWORD *)(v11 + 24) + 1500LL),
      *(_QWORD *)(**(_QWORD **)(v11 + 24) + 208LL),
      2228255,
      0);
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
                        off_1C0057090)
                    + 4) & 0x1000) != 0 )
    {
      *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v74 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
        ((void (__fastcall *)(IRP *, unsigned __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(a2, v2 + 32);
      CurrentIrp = (__int16)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
      {
        LODWORD(v71) = LowPart;
        Template_pq(
          v67,
          &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
          (const GUID *)(v2 + 32),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v71);
        CurrentIrp = (__int16)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
      }
      if ( LowPart == 2228227 )
      {
        v69 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (CurrentIrp & 0x100) == 0 )
          goto LABEL_219;
        LODWORD(v71) = WORD1(v69->SecurityQos);
        Template_pq(
          v67,
          &USBHUB3_ETW_EVENT_DEVICE_URB_START,
          (const GUID *)(v2 + 32),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v71);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) == 0 )
          goto LABEL_219;
        Priority[0] = HIDWORD(v69->SecurityQos);
        LODWORD(v72) = WORD1(v69->SecurityQos);
        Template_pqq(
          WORD1(v69->SecurityQos),
          &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
          (const GUID *)(v2 + 32),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v72,
          *(_QWORD *)Priority);
        CurrentIrp = (__int16)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
      }
      if ( LowPart != 4788299 )
        goto LABEL_217;
      if ( (CurrentIrp & 0x100) != 0 )
      {
        Priority[0] = Status;
        Template_pjq(
          v67,
          v66,
          (const GUID *)(v2 + 32),
          *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
          v2 + 48,
          *(_QWORD *)Priority);
        CurrentIrp = (__int16)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
LABEL_217:
        if ( (CurrentIrp & 0x100) != 0 )
        {
          Priority[0] = Status;
          LODWORD(v71) = LowPart;
          Template_pqq(
            v67,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
            (const GUID *)(v2 + 32),
            *(_QWORD *)(*(_QWORD *)(v11 + 24) + 24LL),
            v71,
            *(_QWORD *)Priority);
        }
      }
    }
LABEL_219:
    a2->IoStatus.Status = Status;
    goto LABEL_220;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v61 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v61[-1].MajorFunction = *(_OWORD *)&v61->MajorFunction;
    *(_OWORD *)&v61[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v61->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v61[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v61->Parameters.QueryDeviceRelations + 6);
    v61[-1].FileObject = v61->FileObject;
    v61[-1].Control = 0;
    KeInitializeEvent((PRKEVENT)(v2 + 8), NotificationEvent, 0);
    v62 = a2->Tail.Overlay.CurrentStackLocation;
    v63 = *(_QWORD *)v2;
    v64 = *(_QWORD *)v2;
    v62[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_SyncCompletionRoutine;
    v62[-1].Context = (void *)(v2 + 8);
    v62[-1].Control = -32;
    v65 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(WdfDriverGlobals, v64);
    v58 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            v63,
            a2,
            v65,
            2);
    if ( v58 >= 0 )
      goto LABEL_202;
    v59 = 65;
    v60 = 3;
    goto LABEL_201;
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
    v56[-1].Control = -32;
    v58 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015 + 3216))(
            WdfDriverGlobals,
            v57,
            a2,
            *(_QWORD *)(*(_QWORD *)(v11 + 16) + 2320LL),
            2);
    if ( v58 >= 0 )
    {
LABEL_202:
      HUBMISC_WaitForSignal((PVOID)(v2 + 8));
      Status = a2->IoStatus.Status;
LABEL_220:
      IofCompleteRequest(a2, 0);
      return Status;
    }
    v59 = 64;
    v60 = 2;
LABEL_201:
    Priority[0] = v58;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL) + 1432LL),
      v60,
      5u,
      v59,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      *(_QWORD *)Priority);
    goto LABEL_202;
  }
  if ( v18 == 1 )
  {
    v19 = a2->Tail.Overlay.CurrentStackLocation;
    v20 = *(_QWORD *)v2;
    *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)&v19->MajorFunction;
    *(_OWORD *)&v19[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v19->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&v19[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v19->Parameters.QueryDeviceRelations + 6);
    v19[-1].FileObject = v19->FileObject;
    v19[-1].Control = 0;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(WdfDriverGlobals, v20);
    return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                           WdfDriverGlobals,
                           *(_QWORD *)v2,
                           a2,
                           v21,
                           2);
  }
  return Status;
}
