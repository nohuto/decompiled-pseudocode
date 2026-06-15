/*
 * XREFs of PbmAllowMediaPlaybackForApp @ 0x180016760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800190D8 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x18001E32C (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmAllowMediaPlaybackForApp(void *a1, const unsigned __int16 *a2)
{
  int v3; // eax
  signed int v4; // ebx
  int v5; // eax
  struct IPBMWorkItem *v6; // rdi
  struct IPBMWorkItem *v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = RpcClientProcessSessionId(a1, &v10, &v9);
  if ( v3 )
  {
    v4 = (unsigned __int16)v3 | 0x80070000;
    if ( v3 <= 0 )
      v4 = v3;
  }
  else
  {
    v5 = CTransportControlRouterWorkItem::CreateInstance(v9, a2, &v8);
    v6 = v8;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v4 >= 0 )
        v6 = 0LL;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
  }
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_b2b9e70fdf4835d1bdf2ce05ed3afacd_Traceguids, v4);
    }
    AudPolicyLogError("PbmAllowMediaPlaybackForApp", 173, v4);
  }
  return (unsigned int)v4;
}
