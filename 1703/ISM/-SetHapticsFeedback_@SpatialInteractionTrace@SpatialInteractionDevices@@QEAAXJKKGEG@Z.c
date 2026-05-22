/*
 * XREFs of ?SetHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x180099128
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___ @ 0x18009B164 (wil--details--ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___--_ScopeExitFn__lambda_b557.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SetHapticsFeedback_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  int *v9; // [rsp+58h] [rbp-41h]
  __int64 v10; // [rsp+60h] [rbp-39h]
  int *v11; // [rsp+68h] [rbp-31h]
  __int64 v12; // [rsp+70h] [rbp-29h]
  int *v13; // [rsp+78h] [rbp-21h]
  __int64 v14; // [rsp+80h] [rbp-19h]
  char *v15; // [rsp+88h] [rbp-11h]
  __int64 v16; // [rsp+90h] [rbp-9h]
  char *v17; // [rsp+98h] [rbp-1h]
  __int64 v18; // [rsp+A0h] [rbp+7h]
  char *v19; // [rsp+A8h] [rbp+Fh]
  __int64 v20; // [rsp+B0h] [rbp+17h]
  int v21; // [rsp+F0h] [rbp+57h] BYREF
  int v22; // [rsp+F8h] [rbp+5Fh] BYREF
  int v23; // [rsp+100h] [rbp+67h] BYREF

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v7 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 2) != 0 && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
  {
    v10 = 4LL;
    v9 = &v21;
    v11 = &v22;
    v13 = &v23;
    v15 = &a5;
    v17 = &a6;
    v19 = &a7;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 2LL;
    v18 = 1LL;
    v20 = 2LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_1800BB7B2, 0LL, 0LL, 8u, &pData);
  }
}
