/*
 * XREFs of DpiFdoHandleQueryIndirectDispInterface @ 0x1C01998F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiQueryMiniportInterface @ 0x1C00EBA80 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryIndirectDispInterface(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v4; // rbx
  __int16 v6; // si
  __int64 v8; // rax
  __int64 v10; // rax
  int MiniportInterface; // esi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // [rsp+20h] [rbp-78h]
  _OWORD v18[6]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v6 = a2;
  if ( (_WORD)a3 == 1 )
  {
    if ( (unsigned __int16)a2 >= 0x60u )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                            v6,
                            1,
                            v17,
                            (__int64)v18);
      if ( MiniportInterface >= 0 )
      {
        v12 = v18[1];
        *a4 = v18[0];
        v13 = v18[2];
        a4[1] = v12;
        v14 = v18[3];
        a4[2] = v13;
        v15 = v18[4];
        a4[3] = v14;
        v16 = v18[5];
        a4[4] = v15;
        a4[5] = v16;
      }
      if ( *(_BYTE *)(v4 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
      return (unsigned int)MiniportInterface;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v10 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v10);
      return 3221225507LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdWarning(v8);
    return 3221225659LL;
  }
}
