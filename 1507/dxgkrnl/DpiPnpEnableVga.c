/*
 * XREFs of DpiPnpEnableVga @ 0x1C00DEED0
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  _BYTE v26[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v27[4]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v28[16]; // [rsp+60h] [rbp-19h] BYREF

  v4 = a3;
  memset(v27, 0, sizeof(v27));
  v12 = *((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6, v8, v9) + 113);
  if ( *(_BYTE *)v12 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v13, v14) + 24) = 178LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, *(struct DXGFASTMUTEX *const *)(v12 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    v18 = (_BYTE *)(v12 + 16);
    v19 = 10LL;
    do
    {
      *v18 = 0;
      v18 += 48;
      --v19;
    }
    while ( v19 );
    ++*(_DWORD *)(v12 + 496);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v15, v16, v17) + 24) = 200LL;
    if ( v26[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  }
  v27[1] = 0LL;
  v27[2] = a1;
  LODWORD(v27[0]) = 7;
  if ( qword_1C0046E88 )
    v27[1] = *(_QWORD *)(*(_QWORD *)(qword_1C0046E88 + 64) + 152LL);
  memset(v28, 0, sizeof(v28));
  DxgkDiagInitializeCodePointPacket(v28, 48, a1, a2, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28, v20, v21, v22);
  LOBYTE(v23) = a2;
  LOBYTE(v24) = 1;
  return SMgrGdiCallout(
           v27,
           v24,
           v23,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v4 != 0),
           v4);
}
