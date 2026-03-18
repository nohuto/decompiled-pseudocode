/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0011E54
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0011940 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     RtlStringCbPrintfW @ 0x1C000EFEC (RtlStringCbPrintfW.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 v6; // r14
  unsigned int Length; // eax
  wchar_t *PoolWithTag; // rbx
  unsigned __int16 v9; // r9
  NTSTATUS v10; // eax
  __int16 Size; // r15
  _BYTE *v12; // rax
  _WORD *v13; // rcx
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  void *v16; // rcx
  unsigned __int8 *v17; // rax
  unsigned __int16 v18; // bx
  _WORD *v19; // rax
  _WORD *v20; // rdi

  v3 = -1073741637;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00570C0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v4 + 24);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x64334855u);
    if ( !PoolWithTag )
    {
      v9 = 47;
LABEL_4:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        v9,
        (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids);
      v3 = -1073741670;
      goto LABEL_30;
    }
    v10 = RtlStringCbPrintfW(
            PoolWithTag,
            0x2AuLL,
            L"Port_#%04d.Hub_#%04d",
            *(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 200LL),
            *(_DWORD *)(*(_QWORD *)v6 + 88LL));
    v3 = v10;
    if ( v10 < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        0x30u,
        (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
        v10);
      ExFreePoolWithTag(PoolWithTag, 0x64334855u);
      goto LABEL_30;
    }
    a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
    goto LABEL_29;
  }
  if ( !Length && *(_BYTE *)(v6 + 1987) && (*(_DWORD *)(v6 + 1628) & 1) == 0 )
  {
    a2->IoStatus.Information = 0LL;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    if ( Size )
    {
      v12 = *(_BYTE **)(v6 + 2008);
      if ( v12 )
      {
        if ( *v12 > 2u )
        {
          v13 = v12 + 2;
          v14 = 0;
          v15 = ((unsigned __int64)(unsigned __int8)*v12 - 2) >> 1;
          if ( (_DWORD)v15 )
          {
            do
            {
              if ( !*v13 )
                break;
              if ( *v13 == Size )
                goto LABEL_19;
              ++v14;
              ++v13;
            }
            while ( v14 < (unsigned int)v15 );
          }
        }
      }
    }
    Size = 1033;
LABEL_19:
    if ( Size != *(_WORD *)(v6 + 2024) )
    {
      v16 = *(void **)(v6 + 2016);
      *(_WORD *)(v6 + 2024) = Size;
      if ( v16 )
        ExFreePoolWithTag(v16, 0x64334855u);
      *(_QWORD *)(v6 + 2016) = 0LL;
      KeClearEvent((PRKEVENT)(v6 + 456));
      HUBSM_AddEvent(v6 + 488, 0xFF7u);
      HUBMISC_WaitForSignal((PVOID)(v6 + 456));
    }
    v17 = *(unsigned __int8 **)(v6 + 2016);
    if ( v17
      || Size != 1033
      && (*(_WORD *)(v6 + 2024) = 1033,
          KeClearEvent((PRKEVENT)(v6 + 456)),
          HUBSM_AddEvent(v6 + 488, 0xFF7u),
          HUBMISC_WaitForSignal((PVOID)(v6 + 456)),
          (v17 = *(unsigned __int8 **)(v6 + 2016)) != 0LL) )
    {
      v18 = (((unsigned __int64)*v17 - 2) >> 1) + 1;
      v19 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * v18, 0x64334855u);
      v20 = v19;
      if ( !v19 )
      {
        v9 = 49;
        goto LABEL_4;
      }
      memmove(v19, (const void *)(*(_QWORD *)(v6 + 2016) + 2LL), 2LL * (v18 - 1));
      v20[v18 - 1] = 0;
      a2->IoStatus.Information = (unsigned __int64)v20;
LABEL_29:
      v3 = 0;
    }
  }
LABEL_30:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
