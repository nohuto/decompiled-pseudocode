/*
 * XREFs of DpiPnpEnableVga @ 0x1C00CE504
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  _BYTE v20[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v22[16]; // [rsp+60h] [rbp-19h] BYREF

  v4 = a3;
  memset(v21, 0, sizeof(v21));
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 134);
  if ( *(_BYTE *)v9 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = 193LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, *(struct DXGFASTMUTEX *const *)(v9 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v15 = (_BYTE *)(v9 + 16);
    v16 = 18LL;
    do
    {
      *v15 = 0;
      v15 += 48;
      --v16;
    }
    while ( v16 );
    ++*(_DWORD *)(v9 + 880);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v12, v13, v14) + 24) = 215LL;
    if ( v20[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  }
  v21[1] = 0LL;
  v21[2] = a1;
  LODWORD(v21[0]) = 7;
  if ( qword_1C0046F08 )
    v21[1] = *(_QWORD *)(*(_QWORD *)(qword_1C0046F08 + 64) + 152LL);
  memset(v22, 0, sizeof(v22));
  DxgkDiagInitializeCodePointPacket(v22, 48, a1, a2, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v22);
  LOBYTE(v17) = a2;
  LOBYTE(v18) = 1;
  return SMgrGdiCallout(
           v21,
           v18,
           v17,
           (unsigned __int64)&DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v4 != 0),
           v4);
}
