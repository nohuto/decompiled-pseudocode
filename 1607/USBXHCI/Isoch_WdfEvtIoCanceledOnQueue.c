/*
 * XREFs of Isoch_WdfEvtIoCanceledOnQueue @ 0x1C002C790
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 __fastcall Isoch_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _DWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD v10[5]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00432F0);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C0043070);
  memset(v10, 0, sizeof(v10));
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v10);
  v5 = (_DWORD *)v10[1];
  v6 = 0LL;
  *(_DWORD *)(v10[1] + 4LL) = -1073676288;
  v5[9] = 0;
  for ( v5[34] = 0; (unsigned int)v6 < v5[33]; v5[v7 + 37] = -1 )
  {
    v7 = 3 * v6;
    v6 = (unsigned int)(v6 + 1);
  }
  memset(v4, 0, 0x200uLL);
  v4[1] = v4;
  *v4 = v4;
  *((_DWORD *)v4 + 12) = 3;
  v4[3] = a2;
  *((_DWORD *)v4 + 13) = -1073741536;
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  v8 = *(_QWORD **)(v3 + 376);
  if ( *v8 != v3 + 368 )
    __fastfail(3u);
  *v4 = v3 + 368;
  v4[1] = v8;
  *v8 = v4;
  *(_QWORD *)(v3 + 376) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(v3 + 80));
}
