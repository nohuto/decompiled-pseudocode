/*
 * XREFs of DpiPnpNotifyGdi @ 0x1C00FC830
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v13[8]; // [rsp+50h] [rbp-19h] BYREF

  v5 = a3;
  memset(v12, 0, sizeof(v12));
  if ( a1 )
  {
    if ( !a2 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      v12[1] = *(_QWORD *)(v11 + 152);
      if ( *(_DWORD *)(v11 + 16) == 1953656900 && *(_DWORD *)(v11 + 20) == 2 )
      {
        BYTE4(v12[3]) = *(_BYTE *)(v11 + 3696) >> 7;
        BYTE6(v12[3]) = *(_DWORD *)(v11 + 3768) == 3;
      }
    }
  }
  v12[2] = a2;
  LODWORD(v12[0]) = 7;
  if ( !a1 || (BYTE5(v12[3]) = 1, qword_1C00570C0 != a1) )
    BYTE5(v12[3]) = 0;
  memset(v13, 0, sizeof(v13));
  HIDWORD(v13[7]) = 0;
  memset(&v13[1], 0, 36);
  *(_QWORD *)((char *)&v13[6] + 4) = a2;
  v13[0] = 0x4000000006LL;
  LODWORD(v13[6]) = 47;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v13);
  LOBYTE(v8) = 1;
  LOBYTE(v9) = 1;
  return SMgrGdiCallout(
           v12,
           v9,
           v8,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4);
}
