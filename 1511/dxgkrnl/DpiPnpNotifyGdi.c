/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C00CE644
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v11[16]; // [rsp+50h] [rbp-68h] BYREF

  v4 = a3;
  memset(v10, 0, sizeof(v10));
  if ( a1 )
  {
    if ( !a2 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      v10[1] = *(_QWORD *)(v9 + 152);
      if ( *(_DWORD *)(v9 + 16) == 1953656900 && *(_DWORD *)(v9 + 20) == 2 )
        BYTE4(v10[3]) = *(_BYTE *)(v9 + 2552) >> 7;
    }
  }
  v10[2] = a2;
  LODWORD(v10[0]) = 7;
  if ( !a1 || (BYTE5(v10[3]) = 1, qword_1C0046F00 != a1) )
    BYTE5(v10[3]) = 0;
  memset(v11, 0, sizeof(v11));
  DxgkDiagInitializeCodePointPacket(v11, 47, a2, 0, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11);
  LOBYTE(v6) = 1;
  LOBYTE(v7) = 1;
  return SMgrGdiCallout(
           v10,
           v7,
           v6,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v4 != 0),
           v4);
}
