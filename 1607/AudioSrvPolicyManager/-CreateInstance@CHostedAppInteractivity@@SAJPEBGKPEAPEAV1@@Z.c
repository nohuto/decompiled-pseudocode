/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x180017140
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180016E30 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001753C (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(const unsigned __int16 *a1, int a2, unsigned __int16 ***a3)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned __int16 **v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // r9
  HANDLE v15; // rax
  const struct _TlgProvider_t *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-49h]
  unsigned int v18; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v21; // [rsp+60h] [rbp-9h]
  __int64 v22; // [rsp+68h] [rbp-1h]
  _QWORD *v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+Fh]
  unsigned int *v25; // [rsp+80h] [rbp+17h]
  __int64 v26; // [rsp+88h] [rbp+1Fh]

  v18 = 0;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v19 = v7;
  v12 = (unsigned __int16 **)v7;
  if ( v7 )
  {
    v7[2] = -1;
    *(_QWORD *)v7 = 0LL;
    v7[3] = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    *((_DWORD *)v12 + 2) = a2;
    v14 = -1LL;
    do
      ++v14;
    while ( a1[v14] );
    result = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a1, v14, v17, v12);
    v18 = result;
    if ( (int)result >= 0 )
    {
      *a3 = v12;
      v12 = 0LL;
    }
  }
  else
  {
    result = 2147942414LL;
    v18 = -2147024882;
  }
  if ( v12 )
  {
    if ( *v12 )
    {
      CoTaskMemFree(*v12);
      *v12 = 0LL;
    }
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v12);
    result = v18;
  }
  if ( (int)result < 0 )
  {
    v16 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, result);
      result = v18;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v22 = 9LL;
      v21 = "__FUNC__";
      v23 = &v19;
      v25 = &v18;
      LODWORD(v19) = 316;
      v24 = 4LL;
      v26 = 4LL;
      TlgWrite(v16, &unk_18002D869, v10, v11, v17, &pData);
      return v18;
    }
  }
  return result;
}
