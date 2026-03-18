/*
 * XREFs of NtGdiPolyPolyDraw @ 0x1C0068CF0
 * Callers:
 *     <none>
 * Callees:
 *     IsNtGdiFastPolyPolylineSupported_0 @ 0x1C0001298 (IsNtGdiFastPolyPolylineSupported_0.c)
 *     NtGdiFastPolyPolyline_0 @ 0x1C00012A0 (NtGdiFastPolyPolyline_0.c)
 *     IsGrePolyPolygonSupported_0 @ 0x1C00012A8 (IsGrePolyPolygonSupported_0.c)
 *     GrePolyPolygon_0 @ 0x1C00012B0 (GrePolyPolygon_0.c)
 *     IsGrePolyPolylineSupported_0 @ 0x1C00012B8 (IsGrePolyPolylineSupported_0.c)
 *     GrePolyPolyline_0 @ 0x1C00012C0 (GrePolyPolyline_0.c)
 *     IsGrePolyBezierSupported_0 @ 0x1C00012C8 (IsGrePolyBezierSupported_0.c)
 *     GrePolyBezier_0 @ 0x1C00012D0 (GrePolyBezier_0.c)
 *     IsGrePolylineToSupported_0 @ 0x1C00012D8 (IsGrePolylineToSupported_0.c)
 *     GrePolylineTo_0 @ 0x1C00012E0 (GrePolylineTo_0.c)
 *     IsGrePolyBezierToSupported_0 @ 0x1C00012E8 (IsGrePolyBezierToSupported_0.c)
 *     GrePolyBezierTo_0 @ 0x1C00012F0 (GrePolyBezierTo_0.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     FreeTmpBuffer @ 0x1C00534E0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C0053560 (AllocFreeTmpBuffer.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0068FF0 (GreCreatePolyPolygonRgnInternal.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, const void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r12
  __int64 PolyPolygonRgnInternal; // rbx
  int *v8; // r14
  struct _POINTL *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 i; // rcx
  size_t v14; // r8
  void *v15; // rcx
  int v16; // eax
  int v17; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-D4h]
  __int64 v19; // [rsp+38h] [rbp-D0h]
  int v20; // [rsp+40h] [rbp-C8h]
  unsigned int v21; // [rsp+48h] [rbp-C0h]
  int *v22; // [rsp+50h] [rbp-B8h]
  struct _POINTL *v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+60h] [rbp-A8h]
  void *Src; // [rsp+68h] [rbp-A0h]
  struct _POINTL v26; // [rsp+70h] [rbp-98h] BYREF

  v5 = a4;
  Src = a2;
  v24 = a1;
  v21 = a4;
  PolyPolygonRgnInternal = 1LL;
  v19 = 1LL;
  if ( a4 )
  {
    if ( a5 == 2 && ((int)IsNtGdiFastPolyPolylineSupported_0() < 0 || (unsigned int)NtGdiFastPolyPolyline_0()) )
      return PolyPolygonRgnInternal;
    if ( (unsigned int)v5 <= 1 )
    {
      v8 = &v17;
    }
    else
    {
      if ( (unsigned int)(a5 - 3) <= 2 )
        return 0LL;
      if ( (unsigned int)v5 > 0x9C4000 )
      {
        EngSetLastError(0x57u);
        v8 = 0LL;
      }
      else
      {
        v8 = (int *)PALLOCMEM2((unsigned int)(4 * v5), 1886221383LL, 0);
      }
    }
    v22 = v8;
    if ( v8 )
    {
      v10 = &v26;
      v23 = &v26;
      v11 = (unsigned __int64)a3 + 4 * v5;
      if ( v11 < (unsigned __int64)a3 || v11 > (unsigned __int64)W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v8, a3, 4 * v5);
      v12 = 0;
      v18 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v20 = i;
        if ( (unsigned int)i >= (unsigned int)v5 )
          break;
        v12 += v8[i];
        v18 = v12;
      }
      if ( v12 > 0x4E2000 )
        goto LABEL_27;
      if ( v12 > 0xA )
      {
        v10 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v12);
        v23 = v10;
      }
      if ( v10 )
      {
        v14 = 8LL * v12;
        v15 = Src;
        if ( (char *)Src + v14 < Src || (char *)Src + v14 > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v10, v15, v14);
      }
      else
      {
LABEL_27:
        PolyPolygonRgnInternal = 0LL;
        v19 = 0LL;
      }
      if ( !PolyPolygonRgnInternal )
        goto LABEL_48;
      switch ( a5 )
      {
        case 1:
          if ( (int)IsGrePolyPolygonSupported_0() >= 0 )
          {
            v16 = GrePolyPolygon_0();
            goto LABEL_46;
          }
          break;
        case 2:
          if ( (int)IsGrePolyPolylineSupported_0() >= 0 )
          {
            v16 = GrePolyPolyline_0();
            goto LABEL_46;
          }
          break;
        case 3:
          if ( (int)IsGrePolyBezierSupported_0() >= 0 )
          {
            v16 = GrePolyBezier_0();
            goto LABEL_46;
          }
          break;
        case 4:
          if ( (int)IsGrePolylineToSupported_0() >= 0 )
          {
            v16 = GrePolylineTo_0();
            goto LABEL_46;
          }
          break;
        case 5:
          if ( (int)IsGrePolyBezierToSupported_0() >= 0 )
          {
            v16 = GrePolyBezierTo_0();
LABEL_46:
            PolyPolygonRgnInternal = v16;
            goto LABEL_48;
          }
          break;
        case 6:
          PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v10, v12);
          goto LABEL_48;
        default:
          break;
      }
      PolyPolygonRgnInternal = 0LL;
LABEL_48:
      if ( v10 && v10 != &v26 )
        FreeTmpBuffer((char *)v10);
      if ( v8 != &v17 )
        Win32FreePool();
      return PolyPolygonRgnInternal;
    }
  }
  return 0LL;
}
