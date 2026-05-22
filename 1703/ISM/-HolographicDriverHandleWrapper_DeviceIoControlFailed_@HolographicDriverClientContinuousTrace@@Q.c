/*
 * XREFs of ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x180093A9C
 * Callers:
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
        HolographicDriverClientContinuousTrace *this,
        int a2,
        int a3,
        const void *a4,
        const struct _GUID *a5)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-41h] BYREF
  const void **v7; // [rsp+58h] [rbp-21h]
  __int64 v8; // [rsp+60h] [rbp-19h]
  int *v9; // [rsp+68h] [rbp-11h]
  __int64 v10; // [rsp+70h] [rbp-9h]
  int *v11; // [rsp+78h] [rbp-1h]
  __int64 v12; // [rsp+80h] [rbp+7h]
  const void **v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  const struct _GUID *v15; // [rsp+98h] [rbp+1Fh]
  __int64 v16; // [rsp+A0h] [rbp+27h]
  int v17; // [rsp+E0h] [rbp+67h] BYREF
  int v18; // [rsp+E8h] [rbp+6Fh] BYREF
  const void *v19; // [rsp+F0h] [rbp+77h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v5 = *((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v8 = 8LL;
    v7 = &v19;
    v9 = &v17;
    v11 = &v18;
    v13 = &v19;
    v15 = a5;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 8LL;
    v16 = 16LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_1800BB572, 0LL, 0LL, 7u, &pData);
  }
}
