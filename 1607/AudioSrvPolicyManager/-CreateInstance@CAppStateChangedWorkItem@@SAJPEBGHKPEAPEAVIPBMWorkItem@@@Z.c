/*
 * XREFs of ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x1800208E0
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180016020 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Initialize@CAppStateChangedWorkItem@@QEAAJPEBG@Z @ 0x180020A90 (-Initialize@CAppStateChangedWorkItem@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CAppStateChangedWorkItem::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        int a3,
        struct IPBMWorkItem **a4)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  _QWORD *v12; // rbx
  __int64 result; // rax
  void *v14; // rcx
  HANDLE v15; // rax
  UINT32 v16; // [rsp+20h] [rbp-49h]
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v20; // [rsp+60h] [rbp-9h]
  int v21; // [rsp+68h] [rbp-1h]
  int v22; // [rsp+6Ch] [rbp+3h]
  _QWORD *v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+7Ch] [rbp+13h]
  unsigned int *v26; // [rsp+80h] [rbp+17h]
  int v27; // [rsp+88h] [rbp+1Fh]
  int v28; // [rsp+8Ch] [rbp+23h]

  v17 = 0;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v18 = v9;
  v12 = v9;
  if ( v9 )
  {
    v9[1] = 0LL;
    *v9 = &CAppStateChangedWorkItem::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    *((_DWORD *)v12 + 4) = a2;
    *((_DWORD *)v12 + 5) = a3;
    result = CAppStateChangedWorkItem::Initialize((CAppStateChangedWorkItem *)v12, a1);
    v17 = result;
    if ( (int)result >= 0 )
    {
      *a4 = (struct IPBMWorkItem *)v12;
      v12 = 0LL;
    }
  }
  else
  {
    result = 2147942414LL;
    v17 = -2147024882;
  }
  if ( v12 )
  {
    v14 = (void *)v12[1];
    *v12 = &CAppStateChangedWorkItem::`vftable';
    if ( v14 )
    {
      CoTaskMemFree(v14);
      v12[1] = 0LL;
    }
    *v12 = &WORKER_THREAD_EVENT::`vftable';
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v12);
    result = v17;
  }
  if ( (int)result < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
      result = v17;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v20 = "__FUNC__";
      v23 = &v18;
      v26 = &v17;
      v21 = 9;
      LODWORD(v18) = 547;
      v24 = 4;
      v27 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v10, v11, v16, &pData);
      return v17;
    }
  }
  return result;
}
