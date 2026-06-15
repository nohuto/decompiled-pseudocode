/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180016E30
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180016CB4 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18001070C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x180017140 (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct CHostedAppInteractivity **a4)
{
  struct CHostedAppInteractivity **v4; // r14
  _QWORD *v8; // rsi
  struct CHostedAppInteractivity *v9; // rdi
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 result; // rax
  struct CHostedAppInteractivity *v13; // rdi
  HANDLE ProcessHeap; // rax
  const struct _TlgProvider_t *v15; // rcx
  ATL::CAtlException *v16; // rbx
  UINT32 v17; // [rsp+20h] [rbp-D8h]
  unsigned int v18; // [rsp+30h] [rbp-C8h] BYREF
  struct CHostedAppInteractivity *v19; // [rsp+38h] [rbp-C0h] BYREF
  struct CHostedAppInteractivity **v20; // [rsp+40h] [rbp-B8h]
  __int64 v21; // [rsp+48h] [rbp-B0h]
  ATL::CAtlException *v22; // [rsp+50h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-98h] BYREF
  const char *v24; // [rsp+80h] [rbp-78h]
  __int64 v25; // [rsp+88h] [rbp-70h]
  struct CHostedAppInteractivity **v26; // [rsp+90h] [rbp-68h]
  __int64 v27; // [rsp+98h] [rbp-60h]
  unsigned int *v28; // [rsp+A0h] [rbp-58h]
  __int64 v29; // [rsp+A8h] [rbp-50h]

  v21 = -2LL;
  v4 = a4;
  v20 = a4;
  v18 = 0;
  v19 = 0LL;
  v8 = *(_QWORD **)this;
  while ( v8 )
  {
    v9 = (struct CHostedAppInteractivity *)v8[2];
    v8 = (_QWORD *)*v8;
    v19 = v9;
    if ( *((_DWORD *)v9 + 2) == a3 && !_wcsicmp(*(const wchar_t **)v9, a2) )
    {
      result = v18;
LABEL_10:
      *v4 = v9;
      v13 = 0LL;
      goto LABEL_12;
    }
  }
  result = CHostedAppInteractivity::CreateInstance(a2, a3, &v19);
  v18 = result;
  if ( (int)result >= 0 )
  {
    v18 = 0;
    try
    {
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
        (__int64 *)this,
        &v19);
    }
    catch ( ATL::CAtlException *v22 )
    {
      v16 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _resetstkoflw();
      v18 = *(_DWORD *)v16;
      v4 = v20;
    }
    result = v18;
    if ( (v18 & 0x80000000) == 0 )
    {
      v9 = v19;
      goto LABEL_10;
    }
  }
  v13 = v19;
LABEL_12:
  if ( v13 )
  {
    if ( *(_QWORD *)v13 )
    {
      CoTaskMemFree(*(LPVOID *)v13);
      *(_QWORD *)v13 = 0LL;
    }
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v13);
    result = v18;
  }
  if ( (int)result < 0 )
  {
    v15 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, result);
      result = v18;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v24 = "__FUNC__";
      v25 = 9LL;
      LODWORD(v19) = 250;
      v26 = &v19;
      v27 = 4LL;
      v28 = &v18;
      v29 = 4LL;
      TlgWrite(v15, &unk_18002D869, v10, v11, v17, &pData);
      return v18;
    }
  }
  return result;
}
