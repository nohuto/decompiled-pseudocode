/*
 * XREFs of DpiFdoHandleQueryIndirectDispInterface @ 0x1C016AD10
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     DpiQueryMiniportInterface @ 0x1C00C6840 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryIndirectDispInterface(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v4; // rbx
  __int16 v6; // si
  __int64 v8; // rax
  _QWORD *v10; // rax
  int MiniportInterface; // esi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v6 = a2;
  if ( (_WORD)a3 == 1 )
  {
    if ( (unsigned __int16)a2 >= 0x30u )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 451) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                            v6,
                            1,
                            -1,
                            (__int64)v14);
      if ( MiniportInterface >= 0 )
      {
        v12 = v14[1];
        *a4 = v14[0];
        v13 = v14[2];
        a4[1] = v12;
        a4[2] = v13;
      }
      if ( *(_BYTE *)(v4 + 451) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
      return (unsigned int)MiniportInterface;
    }
    else
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v10[4] = 0LL;
      v10[3] = DpiFdoHandleQueryIndirectDispInterface;
      v10[5] = -1073741789LL;
      WdLogEvent5_WdError(v10);
      return 3221225507LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 24) = DpiFdoHandleQueryIndirectDispInterface;
    WdLogEvent5_WdWarning(v8);
    return 3221225659LL;
  }
}
