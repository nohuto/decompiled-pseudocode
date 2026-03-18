/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x1C00087B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Template_pjqq @ 0x1C0020204 (Template_pjqq.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  int v10; // r12d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v15; // [rsp+80h] [rbp+8h]

  v15 = a1;
  v8 = 0;
  v9 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C0043340);
  LOBYTE(v10) = 0;
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    if ( (v9[29] & 0x80u) == 0LL )
    {
      WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xB7u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xB6u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
      v8 = -1073741637;
    }
  }
  else if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xB8u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    *a5 = 2;
    if ( a3 < 2 )
    {
      WPP_RECORDER_SF_d(v9[8], 4u, 3u, 0xB9u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, a3);
      v8 = -1073741789;
    }
    else if ( a4 )
    {
      v10 = *(_DWORD *)(v9[10] + 112);
      *a4 = v10;
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xBAu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
  }
  else if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xBBu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
  }
  else if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    if ( (v9[29] & 0x100000000LL) != 0 )
    {
      WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xBCu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xBDu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
      v8 = -1073741637;
    }
  }
  else if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    v10 = 4;
    *a5 = 4;
    if ( a3 < 4 )
    {
      WPP_RECORDER_SF_d(v9[8], 2u, 3u, 0xC1u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, a3);
      LOBYTE(v10) = 0;
      v8 = -1073741789;
    }
    else if ( a4 )
    {
      if ( (*(_DWORD *)(v9[10] + 108) & 0x10) != 0 )
      {
        WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xBEu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
        if ( (*(_BYTE *)(v9[10] + 108) & 0x40) != 0 )
          v10 = 32;
        *(_DWORD *)a4 = v10;
        LOBYTE(v10) = 0;
      }
      else
      {
        WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xBFu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
        LOBYTE(v10) = 0;
        v8 = -1073741637;
      }
    }
    else
    {
      WPP_RECORDER_SF_(v9[8], 2u, 3u, 0xC0u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
      LOBYTE(v10) = 0;
      v8 = -1073741811;
    }
  }
  else
  {
    WPP_RECORDER_SF_(v9[8], 4u, 3u, 0xC2u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
    v8 = -1073741822;
  }
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
    Template_pjqq(v12, v11, v13, v15, (__int64)a2, v8, v10);
  return v8;
}
