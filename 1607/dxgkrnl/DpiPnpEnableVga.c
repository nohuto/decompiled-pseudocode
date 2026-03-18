/*
 * XREFs of DpiPnpEnableVga @ 0x1C00FC574
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  _BYTE v22[16]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v24[8]; // [rsp+60h] [rbp-29h] BYREF

  v5 = a3;
  memset(v23, 0, sizeof(v23));
  v11 = *((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 111);
  if ( *(_BYTE *)v11 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v12, v13) + 24) = 200LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *(struct DXGFASTMUTEX *const *)(v11 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    v17 = (_BYTE *)(v11 + 16);
    v18 = 18LL;
    do
    {
      *v17 = 0;
      v17 += 48;
      --v18;
    }
    while ( v18 );
    ++*(_DWORD *)(v11 + 880);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v14, v15, v16) + 24) = 222LL;
    if ( v22[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  }
  v23[1] = 0LL;
  v23[2] = a1;
  LODWORD(v23[0]) = 7;
  if ( qword_1C00570C8 )
    v23[1] = *(_QWORD *)(*(_QWORD *)(qword_1C00570C8 + 64) + 152LL);
  memset(v24, 0, sizeof(v24));
  memset(&v24[1], 0, 36);
  HIDWORD(v24[6]) = a1;
  v24[7] = a2;
  v24[0] = 0x4000000006LL;
  LODWORD(v24[6]) = 48;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
  LOBYTE(v19) = a2;
  LOBYTE(v20) = 1;
  return SMgrGdiCallout(
           v23,
           v20,
           v19,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)((_DWORD)v5 != 0),
           v5,
           a4);
}
