/*
 * XREFs of Template_xqqdddd @ 0x18012A6EC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xqqdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  int v10; // [rsp+20h] [rbp-61h] BYREF
  int v11; // [rsp+28h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  int *v13; // [rsp+40h] [rbp-41h]
  __int64 v14; // [rsp+48h] [rbp-39h]
  int *v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  char *v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  char *v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  char *v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  char *v23; // [rsp+90h] [rbp+Fh]
  __int64 v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+4Fh] BYREF

  v25 = a3;
  UserData.Ptr = (ULONGLONG)&v25;
  *(_QWORD *)&UserData.Size = 8LL;
  v11 = 0;
  v13 = &v10;
  v15 = &v11;
  v17 = &a6;
  v10 = 0;
  v19 = &a7;
  v14 = 4LL;
  v21 = &a8;
  v23 = &a9;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATEOVERWRITEVENT, 7u, &UserData);
}
