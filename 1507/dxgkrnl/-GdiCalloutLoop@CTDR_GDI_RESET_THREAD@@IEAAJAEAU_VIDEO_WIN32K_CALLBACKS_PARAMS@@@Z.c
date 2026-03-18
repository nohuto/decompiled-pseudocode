/*
 * XREFs of ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C013CA04
 * Callers:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C013CC54 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD v9[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = 0;
  DxgkDiagInitializeCodePointPacket(v9, 49, a2->Param != 0, 0, 0);
  do
  {
    LOBYTE(v6) = 1;
    LOBYTE(v5) = 1;
    SMgrGdiCallout(a2, v5, v6, &CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback, *((_QWORD *)this + 3));
    if ( a2->Status != -1073741816 )
      break;
    ZwYieldExecution();
  }
  while ( a2->Status == -1073741816 );
  v9[14] = a2->Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9, v5, v6, v7);
  if ( MEMORY[0xFFFFF78000000264] != 3 )
    return (unsigned int)a2->Status;
  return v4;
}
