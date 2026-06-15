/*
 * XREFs of PbmAllowMediaPlaybackForApp @ 0x1800185D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B1C4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x180021520 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

signed int __fastcall PbmAllowMediaPlaybackForApp(void *a1, const unsigned __int16 *a2)
{
  int v3; // eax
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // ecx
  signed int result; // eax
  struct IPBMWorkItem *v8; // rbx
  const struct _TlgProvider_t *v9; // rcx
  UINT32 v10; // [rsp+20h] [rbp-39h]
  int v11; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-25h] BYREF
  struct IPBMWorkItem *v13; // [rsp+38h] [rbp-21h] BYREF
  unsigned int v14[4]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  const char *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  unsigned int *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]
  int *v20; // [rsp+90h] [rbp+37h]
  __int64 v21; // [rsp+98h] [rbp+3Fh]

  v11 = -2147418113;
  v13 = 0LL;
  v3 = RpcClientProcessSessionId(a1, v14, &v12);
  v6 = v3;
  if ( v3 )
  {
    result = (unsigned __int16)v3 | 0x80070000;
    if ( v6 <= 0 )
      result = v6;
    v11 = result;
  }
  else
  {
    result = CTransportControlRouterWorkItem::CreateInstance(v12, a2, &v13);
    v8 = v13;
    v11 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v13 + 16LL))(v13);
      v11 = result;
      if ( result >= 0 )
        v8 = 0LL;
    }
    if ( v8 )
    {
      (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
      result = v11;
    }
  }
  if ( result < 0 )
  {
    v9 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_b2b9e70fdf4835d1bdf2ce05ed3afacd_Traceguids, result);
      result = v11;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v17 = 9LL;
      v16 = "__FUNC__";
      v18 = &v12;
      v20 = &v11;
      v12 = 173;
      v19 = 4LL;
      v21 = 4LL;
      TlgWrite(v9, &unk_18002D869, v4, v5, v10, &pData);
      return v11;
    }
  }
  return result;
}
