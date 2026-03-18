/*
 * XREFs of HUBHTX_ClearTTBuffer @ 0x1C0005DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C0005B70 (HUBHTX_GetClearTtBufferInfoForEndpoint.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBHTX_ClearTTBuffer(__int64 a1, __int64 a2, __int64 a3, char a4, __int16 a5)
{
  _QWORD *v5; // rdi
  int v6; // r14d
  int v11; // r14d
  __int64 v12; // rax
  int ClearTtBufferInfoForEndpoint; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ebx
  unsigned __int16 v18; // r9
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD v21[14]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v22; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v23; // [rsp+D8h] [rbp+67h] BYREF

  v23 = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 40);
  if ( (v6 & 1) != 0 && a2 && (v6 & 0x1000) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 40) & 0x800;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v12,
      "ClearTTBuffer Tag",
      5342LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    ClearTtBufferInfoForEndpoint = HUBHTX_GetClearTtBufferInfoForEndpoint(a2, a3, a4, &v22);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v14,
      "ClearTTBuffer Tag",
      5350LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    if ( ClearTtBufferInfoForEndpoint < 0 )
    {
LABEL_18:
      if ( v23 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x68334855u);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 520))(*(_QWORD *)(a1 + 368), a3);
    }
    memset(v21, 0, 0x38uLL);
    v15 = *(_QWORD *)(a1 + 16);
    LODWORD(v21[0]) = 56;
    v21[3] = 0x100000001LL;
    v21[4] = v15;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            v21,
            v16,
            &v23);
    if ( v17 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xB8uLL, 0x68334855u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xB8uLL);
        v5[22] = a3;
        v5[21] = a1;
        *v5 = v23;
        *((_BYTE *)v5 + 152) = v5[19] & 0x1C | 0x23;
        if ( v11 )
        {
          *((_BYTE *)v5 + 153) = 9;
          *((_WORD *)v5 + 77) = 0;
        }
        else
        {
          *((_WORD *)v5 + 77) = v22;
          *((_BYTE *)v5 + 153) = 8;
        }
        if ( (*(_DWORD *)(a1 + 40) & 2) != 0 )
          *((_WORD *)v5 + 78) = a5;
        else
          *((_WORD *)v5 + 78) = 1;
        *((_WORD *)v5 + 79) = 0;
        result = HUBMISC_ControlTransfer(
                   a1,
                   *(_QWORD *)(a1 + 240),
                   (_DWORD)v5,
                   (_DWORD)v5,
                   (__int64)HUBHTX_ClearTtBufferControlTransferComplete,
                   0LL,
                   0,
                   0,
                   *(_BYTE *)(a1 + 2240));
        v17 = result;
LABEL_17:
        if ( v17 >= 0 )
          return result;
        goto LABEL_18;
      }
      v18 = 118;
    }
    else
    {
      v18 = 117;
    }
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2488),
               2u,
               3u,
               v18,
               (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
               v17);
    goto LABEL_17;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 520))(*(_QWORD *)(a1 + 368), a3);
}
