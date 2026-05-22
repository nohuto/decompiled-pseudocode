/*
 * XREFs of ?TraceGestureUsage_@MPCTracing@@QEAAXIII@Z @ 0x1800470E0
 * Callers:
 *     ?Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z @ 0x180047198 (-Process@MPCTracer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@MPCTracing@@KAPEAV1@XZ @ 0x180046FC4 (-Instance@MPCTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall MPCTracing::TraceGestureUsage_(MPCTracing *this, int a2, int a3, int a4)
{
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  int *v6; // [rsp+58h] [rbp+7h]
  __int64 v7; // [rsp+60h] [rbp+Fh]
  int *v8; // [rsp+68h] [rbp+17h]
  __int64 v9; // [rsp+70h] [rbp+1Fh]
  int *v10; // [rsp+78h] [rbp+27h]
  __int64 v11; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+C0h] [rbp+6Fh] BYREF
  int v13; // [rsp+C8h] [rbp+77h] BYREF
  int v14; // [rsp+D0h] [rbp+7Fh] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)MPCTracing::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v7 = 4LL;
    v6 = &v12;
    v8 = &v13;
    v10 = &v14;
    v9 = 4LL;
    v11 = 4LL;
    TlgWrite(v4, &unk_1800B9730, 0LL, 0LL, 5u, &pData);
  }
}
