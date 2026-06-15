/*
 * XREFs of ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x180021520
 * Callers:
 *     PbmAllowMediaPlaybackForApp @ 0x1800185D0 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z @ 0x1800216B4 (-Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTransportControlRouterWorkItem::CreateInstance(
        int a1,
        const unsigned __int16 *a2,
        struct IPBMWorkItem **a3)
{
  HANDLE ProcessHeap; // rax
  CTransportControlRouterWorkItem *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  CTransportControlRouterWorkItem *v10; // rbx
  __int64 result; // rax
  HANDLE v12; // rax
  UINT32 v13; // [rsp+20h] [rbp-39h]
  unsigned int v14; // [rsp+30h] [rbp-29h] BYREF
  CTransportControlRouterWorkItem *v15; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v17; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  CTransportControlRouterWorkItem **v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  unsigned int *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]

  v14 = 0;
  ProcessHeap = GetProcessHeap();
  v7 = (CTransportControlRouterWorkItem *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v15 = v7;
  v10 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = 0LL;
    *(_QWORD *)v7 = &CTransportControlRouterWorkItem::`vftable';
    *((_DWORD *)v7 + 2) = a1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    result = 2147942414LL;
LABEL_6:
    v14 = result;
    goto LABEL_11;
  }
  if ( !a2 )
  {
    result = 2147500035LL;
    goto LABEL_6;
  }
  result = CTransportControlRouterWorkItem::Initialize(v10, a2);
  v14 = result;
  if ( (int)result >= 0 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  if ( v10 )
  {
    *(_QWORD *)v10 = &WORKER_THREAD_EVENT::`vftable';
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v10);
    result = v14;
  }
  if ( (int)result < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
      result = v14;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v17 = "__FUNC__";
      v20 = &v15;
      v23 = &v14;
      v18 = 9;
      LODWORD(v15) = 810;
      v21 = 4;
      v24 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v8, v9, v13, &pData);
      return v14;
    }
  }
  return result;
}
