/*
 * XREFs of HUBHTX_ClearTTBuffer @ 0x1C0005AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1C00058D4 (HUBHTX_GetClearTtBufferInfoForEndpoint.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026FD8 (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBHTX_ClearTTBuffer(__int64 a1, __int64 a2, __int64 a3, char a4, __int16 a5)
{
  _QWORD *v9; // rdi
  int v10; // eax
  bool v11; // r12
  __int64 v12; // rax
  int ClearTtBufferInfoForEndpoint; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  unsigned __int16 v19; // r9
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  int v22; // [rsp+28h] [rbp-49h]
  _QWORD v23[14]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v24; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+D8h] [rbp+67h] BYREF

  v25 = 0LL;
  v9 = 0LL;
  v10 = *(_DWORD *)(a1 + 40);
  if ( (v10 & 1) != 0 && a2 && (v10 & 0x1000) == 0 )
  {
    v11 = (*(_DWORD *)(a1 + 40) & 0x800) != 0;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v12,
      "ClearTTBuffer Tag",
      5292LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    ClearTtBufferInfoForEndpoint = HUBHTX_GetClearTtBufferInfoForEndpoint(a2, a3, a4, &v24);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v14,
      "ClearTTBuffer Tag",
      5300LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    if ( ClearTtBufferInfoForEndpoint < 0 )
    {
LABEL_18:
      if ( v25 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v9 )
        ExFreePoolWithTag(v9, 0x68334855u);
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 504))(*(_QWORD *)(a1 + 352), a3);
    }
    memset(v23, 0, 0x38uLL);
    v15 = *(_QWORD *)(a1 + 16);
    LODWORD(v23[0]) = 56;
    v23[3] = 0x100000001LL;
    v23[4] = v15;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            v23,
            v16,
            &v25);
    v18 = v17;
    if ( v17 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xB8uLL, 0x68334855u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xB8uLL);
        v9[22] = a3;
        v9[21] = a1;
        *v9 = v25;
        *((_BYTE *)v9 + 152) = v9[19] & 0x1C | 0x23;
        if ( v11 )
        {
          *((_BYTE *)v9 + 153) = 9;
          *((_WORD *)v9 + 77) = 0;
        }
        else
        {
          *((_WORD *)v9 + 77) = v24;
          *((_BYTE *)v9 + 153) = 8;
        }
        if ( (*(_DWORD *)(a1 + 40) & 2) != 0 )
          *((_WORD *)v9 + 78) = a5;
        else
          *((_WORD *)v9 + 78) = 1;
        *((_WORD *)v9 + 79) = 0;
        result = HUBMISC_ControlTransfer(
                   a1,
                   *(_QWORD *)(a1 + 224),
                   (_DWORD)v9,
                   (_DWORD)v9,
                   (__int64)HUBHTX_ClearTtBufferControlTransferComplete,
                   0LL,
                   0,
                   0,
                   *(_BYTE *)(a1 + 2216));
        v18 = result;
LABEL_17:
        if ( v18 >= 0 )
          return result;
        goto LABEL_18;
      }
      v19 = 118;
      v22 = v18;
    }
    else
    {
      v19 = 117;
      v22 = v17;
    }
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2464),
               2u,
               3u,
               v19,
               (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
               v22);
    goto LABEL_17;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 504))(*(_QWORD *)(a1 + 352), a3);
}
