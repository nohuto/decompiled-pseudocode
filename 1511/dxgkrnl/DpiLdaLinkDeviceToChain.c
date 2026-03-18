/*
 * XREFs of DpiLdaLinkDeviceToChain @ 0x1C01740A0
 * Callers:
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiLdaLinkDeviceToChain(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 56);
  if ( *(_QWORD *)v4 != v4 )
  {
    do
    {
      if ( *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 4
        || *(_DWORD *)(v4 + 500) != *(_DWORD *)(v1 + 500) )
      {
        goto LABEL_20;
      }
      if ( !*(_QWORD *)(v1 + 168) )
      {
        v5 = *(_QWORD *)(v4 + 168);
        *(_QWORD *)(v1 + 168) = v5;
        ++*(_DWORD *)(v5 + 104);
        v6 = *(_QWORD *)(v4 + 1272);
        *(_QWORD *)(v1 + 1272) = v6;
        ++*(_DWORD *)(v6 + 8);
        v7 = *(_QWORD *)(v4 + 1280);
        *(_QWORD *)(v1 + 1280) = v7;
        ++*(_DWORD *)(v7 + 8);
      }
      if ( *(_BYTE *)(v1 + 508) == 1 )
      {
        v8 = v1;
        v9 = v4;
      }
      else
      {
        if ( *(_BYTE *)(v4 + 508) != 1 )
          goto LABEL_20;
        v8 = v4;
        v9 = v1;
      }
      if ( *(_BYTE *)(v9 + 508) == 1 || *(_DWORD *)(v8 + 1520) >= *(_DWORD *)(v8 + 504) )
      {
        v2 = -1071774666;
        v10 = (_QWORD *)WdLogNewEntry5_WdError(a1);
        v10[4] = 0LL;
        v10[3] = DpiLdaLinkDeviceToChain;
        v10[5] = -1071774666LL;
        WdLogEvent5_WdError(v10);
        return v2;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      *(_QWORD *)(v9 + 1512) = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v9 + 1520) = *(_DWORD *)(v8 + 1520);
      *(_QWORD *)(*(_QWORD *)(v8 + 1512) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 1520))++) = *(_QWORD *)(v9 + 24);
      if ( *(_BYTE *)(v9 + 1088) )
        *(_BYTE *)(v8 + 1090) = 1;
      if ( *(_BYTE *)(v4 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
LABEL_20:
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != *(_QWORD *)(v3 + 56) );
  }
  return v2;
}
