/*
 * XREFs of Template_qqqqq @ 0x1C001D84C
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@HPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01380EC (-CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlayInternal@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE@@HPEAH@Z @ 0x1C01385B8 (-CheckMultiPlaneOverlayInternal@DXGDEVICE@@QEAAJIIPEAU_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLA.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0157B90 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v10; // [rsp+40h] [rbp-19h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  char *v12; // [rsp+50h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  char *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+B8h] [rbp+5Fh] BYREF

  v18 = a4;
  UserData.Ptr = (ULONGLONG)&v18;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = &a5;
  v11 = 4LL;
  v12 = &a6;
  v14 = &a7;
  v16 = &a8;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 5u, &UserData);
}
