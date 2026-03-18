/*
 * XREFs of ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C0142E34
 * Callers:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0143084 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD v8[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0;
  DxgkDiagInitializeCodePointPacket(v8, 49, a2->Param != 0, 0, 0);
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
  v8[14] = a2->Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
  if ( MEMORY[0xFFFFF78000000264] != 3 )
    return (unsigned int)a2->Status;
  return v4;
}
