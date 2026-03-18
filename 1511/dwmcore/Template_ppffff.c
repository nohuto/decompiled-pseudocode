/*
 * XREFs of Template_ppffff @ 0x1801278AC
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091920 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG Template_ppffff(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-39h] BYREF
  va_list v4; // [rsp+30h] [rbp-29h]
  __int64 v5; // [rsp+38h] [rbp-21h]
  va_list v6; // [rsp+40h] [rbp-19h]
  __int64 v7; // [rsp+48h] [rbp-11h]
  va_list v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+58h] [rbp-1h]
  va_list v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  va_list v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+B0h] [rbp+57h] BYREF
  va_list va; // [rsp+B0h] [rbp+57h]
  __int64 v16; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+B8h] [rbp+5Fh]
  __int64 v18; // [rsp+C0h] [rbp+67h] BYREF
  va_list va2; // [rsp+C0h] [rbp+67h]
  __int64 v20; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+C8h] [rbp+6Fh]
  __int64 v22; // [rsp+D0h] [rbp+77h] BYREF
  va_list va4; // [rsp+D0h] [rbp+77h]
  va_list va5; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v22 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  v7 = 4LL;
  va_copy(v8, va3);
  va_copy(v10, va4);
  va_copy(v12, va5);
  v9 = 4LL;
  v11 = 4LL;
  v13 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_PRIMITIVE_GROUP_DRAW, 6u, &UserData);
}
