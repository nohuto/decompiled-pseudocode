/*
 * XREFs of Template_qdffff @ 0x1800EABC0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qdffff(__int64 a1, __int64 a2, int a3, __int64 a4, char a5, char a6, char a7, char a8)
{
  int v9; // [rsp+20h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  int *v11; // [rsp+40h] [rbp-29h]
  __int64 v12; // [rsp+48h] [rbp-21h]
  char *v13; // [rsp+50h] [rbp-19h]
  __int64 v14; // [rsp+58h] [rbp-11h]
  char *v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  char *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  char *v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+C0h] [rbp+57h] BYREF

  v21 = a3;
  UserData.Ptr = (ULONGLONG)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = 0;
  v11 = &v9;
  v13 = &a5;
  v15 = &a6;
  v12 = 4LL;
  v17 = &a7;
  v14 = 4LL;
  v19 = &a8;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DIRTYREGIONEVENT, 6u, &UserData);
}
