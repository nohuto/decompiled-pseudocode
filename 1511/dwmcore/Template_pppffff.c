/*
 * XREFs of Template_pppffff @ 0x18012627C
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG Template_pppffff(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-51h] BYREF
  va_list v4; // [rsp+30h] [rbp-41h]
  __int64 v5; // [rsp+38h] [rbp-39h]
  va_list v6; // [rsp+40h] [rbp-31h]
  __int64 v7; // [rsp+48h] [rbp-29h]
  va_list v8; // [rsp+50h] [rbp-21h]
  __int64 v9; // [rsp+58h] [rbp-19h]
  va_list v10; // [rsp+60h] [rbp-11h]
  __int64 v11; // [rsp+68h] [rbp-9h]
  va_list v12; // [rsp+70h] [rbp-1h]
  __int64 v13; // [rsp+78h] [rbp+7h]
  va_list v14; // [rsp+80h] [rbp+Fh]
  __int64 v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+C0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+4Fh]
  __int64 v18; // [rsp+C8h] [rbp+57h] BYREF
  va_list va1; // [rsp+C8h] [rbp+57h]
  __int64 v20; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+D0h] [rbp+5Fh]
  __int64 v22; // [rsp+D8h] [rbp+67h] BYREF
  va_list va3; // [rsp+D8h] [rbp+67h]
  __int64 v24; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+E0h] [rbp+6Fh]
  __int64 v26; // [rsp+E8h] [rbp+77h] BYREF
  va_list va5; // [rsp+E8h] [rbp+77h]
  va_list va6; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v22 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v24 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v26 = va_arg(va6, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  v7 = 8LL;
  va_copy(v8, va3);
  va_copy(v10, va4);
  va_copy(v12, va5);
  va_copy(v14, va6);
  v9 = 4LL;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_COMPOSITION_SURFACE_DRAW, 7u, &UserData);
}
