/*
 * XREFs of Template_ppffffcb @ 0x1801252D8
 * Callers:
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x180005608 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG Template_ppffffcb(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-69h] BYREF
  va_list v4; // [rsp+30h] [rbp-59h]
  __int64 v5; // [rsp+38h] [rbp-51h]
  va_list v6; // [rsp+40h] [rbp-49h]
  __int64 v7; // [rsp+48h] [rbp-41h]
  va_list v8; // [rsp+50h] [rbp-39h]
  __int64 v9; // [rsp+58h] [rbp-31h]
  va_list v10; // [rsp+60h] [rbp-29h]
  __int64 v11; // [rsp+68h] [rbp-21h]
  va_list v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  va_list v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  __int64 v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  __int64 v19; // [rsp+D0h] [rbp+47h] BYREF
  va_list va; // [rsp+D0h] [rbp+47h]
  __int64 v21; // [rsp+D8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+4Fh]
  __int64 v23; // [rsp+E0h] [rbp+57h] BYREF
  va_list va2; // [rsp+E0h] [rbp+57h]
  __int64 v25; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+E8h] [rbp+5Fh]
  __int64 v27; // [rsp+F0h] [rbp+67h] BYREF
  va_list va4; // [rsp+F0h] [rbp+67h]
  __int64 v29; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+F8h] [rbp+6Fh]
  __int64 v31; // [rsp+100h] [rbp+77h] BYREF
  va_list va6; // [rsp+100h] [rbp+77h]
  __int64 v33; // [rsp+108h] [rbp+7Fh]
  va_list va7; // [rsp+110h] [rbp+87h] BYREF

  va_start(va7, a2);
  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v27 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v29 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v31 = va_arg(va7, _QWORD);
  v33 = va_arg(va7, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v18 = 0;
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  va_copy(v8, va3);
  va_copy(v10, va4);
  va_copy(v12, va5);
  va_copy(v14, va6);
  v16 = v33;
  v17 = (unsigned __int8)v31;
  v7 = 4LL;
  v9 = 4LL;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 1LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 8u, &UserData);
}
