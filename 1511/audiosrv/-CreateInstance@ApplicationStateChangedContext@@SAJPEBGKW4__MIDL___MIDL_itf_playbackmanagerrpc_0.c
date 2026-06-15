/*
 * XREFs of ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x18000523C
 * Callers:
 *     PbmReportApplicationState @ 0x1800051A4 (PbmReportApplicationState.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall ApplicationStateChangedContext::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        int a3,
        CHostedAppInteractivity **a4)
{
  HANDLE ProcessHeap; // rax
  unsigned __int128 v9; // rax
  CHostedAppInteractivity *v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  int v13; // ebx
  unsigned __int16 **v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v16; // [rsp+28h] [rbp-40h]
  unsigned int v17; // [rsp+30h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  *(_QWORD *)&v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v10 = (CHostedAppInteractivity *)v9;
  if ( (_QWORD)v9 )
    *(_QWORD *)v9 = 0LL;
  else
    v10 = 0LL;
  if ( !v10 )
    goto LABEL_16;
  *((_DWORD *)v10 + 2) = a2;
  v11 = -1LL;
  *((_DWORD *)v10 + 3) = a3;
  do
    ++v11;
  while ( a1[v11] );
  v12 = v11 + 1;
  *(_QWORD *)v10 = 0LL;
  if ( v11 + 1 < v11 )
  {
    v13 = -2147024362;
    goto LABEL_12;
  }
  *(_QWORD *)v10 = 0LL;
  v9 = v12 * (unsigned __int128)2uLL;
  if ( is_mul_ok(v12, 2uLL) )
  {
    *(_QWORD *)&v9 = CoTaskMemAlloc(2 * v12);
    *(_QWORD *)v10 = v9;
    if ( (_QWORD)v9 )
    {
      v13 = 0;
      StringCchCopyNExW((unsigned __int16 *)v9, v11 + 1, a1, v11, v15, v16, v17);
      goto LABEL_10;
    }
LABEL_16:
    v13 = -2147024882;
    goto LABEL_12;
  }
  v13 = -2147024362;
LABEL_10:
  if ( v13 >= 0 )
  {
    *a4 = v10;
    v10 = 0LL;
  }
LABEL_12:
  if ( v10 )
    CHostedAppInteractivity::`scalar deleting destructor'(v10, DWORD2(v9));
  if ( v13 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      36LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v13);
  }
  return (unsigned int)v13;
}
