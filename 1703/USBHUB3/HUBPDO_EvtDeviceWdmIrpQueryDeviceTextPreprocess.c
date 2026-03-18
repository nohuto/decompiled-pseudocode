/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C001374C
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013100 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     RtlStringCbPrintfW @ 0x1C00103D4 (RtlStringCbPrintfW.c)
 *     HUBPDO_IsLanguageSupported @ 0x1C00136F4 (HUBPDO_IsLanguageSupported.c)
 *     HUBMISC_WaitForSignal @ 0x1C0029A0C (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
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
  void *v12; // rcx
  unsigned __int8 *v13; // rax
  unsigned __int16 v14; // bx
  char *v15; // rax
  char *v16; // rdi
  size_t v17; // rbx

  v3 = -1073741637;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
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
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
      v3 = -1073741670;
      goto LABEL_25;
    }
    v10 = RtlStringCbPrintfW(
            PoolWithTag,
            0x2AuLL,
            L"Port_#%04d.Hub_#%04d",
            *(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 200LL),
            *(_DWORD *)(*(_QWORD *)v6 + 96LL));
    v3 = v10;
    if ( v10 < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        0x30u,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        v10);
      ExFreePoolWithTag(PoolWithTag, 0x64334855u);
      goto LABEL_25;
    }
    a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
    goto LABEL_24;
  }
  if ( !Length && *(_BYTE *)(v6 + 1987) && (*(_DWORD *)(v6 + 1628) & 1) == 0 )
  {
    a2->IoStatus.Information = 0LL;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    if ( !Size || !HUBPDO_IsLanguageSupported(v6, Size) )
      Size = 1033;
    if ( Size != *(_WORD *)(v6 + 2024) )
    {
      v12 = *(void **)(v6 + 2016);
      *(_WORD *)(v6 + 2024) = Size;
      if ( v12 )
        ExFreePoolWithTag(v12, 0x64334855u);
      *(_QWORD *)(v6 + 2016) = 0LL;
      KeClearEvent((PRKEVENT)(v6 + 456));
      HUBSM_AddEvent(v6 + 488, 4087);
      HUBMISC_WaitForSignal((PVOID)(v6 + 456));
    }
    v13 = *(unsigned __int8 **)(v6 + 2016);
    if ( v13
      || Size != 1033
      && (*(_WORD *)(v6 + 2024) = 1033,
          KeClearEvent((PRKEVENT)(v6 + 456)),
          HUBSM_AddEvent(v6 + 488, 4087),
          HUBMISC_WaitForSignal((PVOID)(v6 + 456)),
          (v13 = *(unsigned __int8 **)(v6 + 2016)) != 0LL) )
    {
      v14 = (((unsigned __int64)*v13 - 2) >> 1) + 1;
      v15 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * v14, 0x64334855u);
      v16 = v15;
      if ( !v15 )
      {
        v9 = 49;
        goto LABEL_4;
      }
      v17 = 2LL * (v14 - 1);
      memmove(v15, (const void *)(*(_QWORD *)(v6 + 2016) + 2LL), v17);
      *(_WORD *)&v16[v17] = 0;
      a2->IoStatus.Information = (unsigned __int64)v16;
LABEL_24:
      v3 = 0;
    }
  }
LABEL_25:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
