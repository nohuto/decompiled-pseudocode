/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C00DF200
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C0168634 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // rcx
  _QWORD v13[4]; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v14[16]; // [rsp+50h] [rbp-68h] BYREF

  v4 = a3;
  memset(v13, 0, sizeof(v13));
  if ( a1 )
  {
    if ( !a2 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      v13[1] = *(_QWORD *)(v12 + 152);
      if ( *(_DWORD *)(v12 + 16) == 1953656900 && *(_DWORD *)(v12 + 20) == 2 )
        BYTE4(v13[3]) = *(_BYTE *)(v12 + 2512) >> 7;
    }
  }
  v13[2] = a2;
  LODWORD(v13[0]) = 7;
  if ( !a1 || (BYTE5(v13[3]) = 1, qword_1C0046E80 != a1) )
    BYTE5(v13[3]) = 0;
  memset(v14, 0, sizeof(v14));
  DxgkDiagInitializeCodePointPacket(v14, 47, a2, 0, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, v6, v7, v8);
  LOBYTE(v9) = 1;
  LOBYTE(v10) = 1;
  return SMgrGdiCallout(
           v13,
           v10,
           v9,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v4 != 0),
           v4);
}
