/*
 * XREFs of ??$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z @ 0x18002432C
 * Callers:
 *     ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180021958 (-CommitTDLItemWithRetry@@YAJV-$function@$$A6AJXZ@wistd@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     ?Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180020324 (-Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

int __fastcall TileDataLayerItemWrappersTelemetry::DelayedRetry<long &,int &,int &>(__int64 a1, __int64 a2, __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v6 = TileDataLayerItemWrappersTelemetry::Provider();
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v9 = a1;
    v10 = 4LL;
    v11 = a2;
    v12 = 4LL;
    v13 = a3;
    v14 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_18003097D, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
