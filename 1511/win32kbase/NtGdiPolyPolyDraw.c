/*
 * XREFs of NtGdiPolyPolyDraw @ 0x1C0080C70
 * Callers:
 *     <none>
 * Callees:
 *     IsGrePolylineToSupported_0 @ 0x1C00017B0 (IsGrePolylineToSupported_0.c)
 *     GrePolyPolygon_0 @ 0x1C00017B8 (GrePolyPolygon_0.c)
 *     NtGdiFastPolyPolyline_0 @ 0x1C00017C0 (NtGdiFastPolyPolyline_0.c)
 *     GrePolyBezier_0 @ 0x1C00017C8 (GrePolyBezier_0.c)
 *     GrePolyPolyline_0 @ 0x1C00017D0 (GrePolyPolyline_0.c)
 *     IsGrePolyBezierToSupported_0 @ 0x1C00017E0 (IsGrePolyBezierToSupported_0.c)
 *     IsGrePolyBezierSupported_0 @ 0x1C00017E8 (IsGrePolyBezierSupported_0.c)
 *     IsGrePolyPolygonSupported_0 @ 0x1C00017F0 (IsGrePolyPolygonSupported_0.c)
 *     IsNtGdiFastPolyPolylineSupported_0 @ 0x1C00017F8 (IsNtGdiFastPolyPolylineSupported_0.c)
 *     GrePolyBezierTo_0 @ 0x1C0001800 (GrePolyBezierTo_0.c)
 *     GrePolylineTo_0 @ 0x1C0001808 (GrePolylineTo_0.c)
 *     IsGrePolyPolylineSupported_0 @ 0x1C0001810 (IsGrePolyPolylineSupported_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     FreeTmpBuffer @ 0x1C0042690 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C0042C00 (AllocFreeTmpBuffer.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0080EC8 (GreCreatePolyPolygonRgnInternal.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, const void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r12
  __int64 PolyPolygonRgnInternal; // rbx
  int *v8; // r14
  struct _POINTL *v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 i; // rcx
  size_t v13; // r8
  void *v14; // rcx
  int v15; // eax
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
  if ( !a4 )
    return 0LL;
  if ( a5 == 2 && ((int)IsNtGdiFastPolyPolylineSupported_0() < 0 || (unsigned int)NtGdiFastPolyPolyline_0()) )
    return PolyPolygonRgnInternal;
  if ( (unsigned int)v5 <= 1 )
  {
    v8 = &v17;
    goto LABEL_5;
  }
  if ( (unsigned int)(a5 - 3) > 2 )
  {
    if ( (unsigned int)v5 > 0x9C4000 )
    {
      EngSetLastError(0x57u);
      v8 = 0LL;
    }
    else
    {
      v8 = (int *)PALLOCMEM2((unsigned int)(4 * v5), 1886221383LL, 0);
    }
LABEL_5:
    v22 = v8;
    if ( v8 )
    {
      v9 = &v26;
      v23 = &v26;
      v10 = (unsigned __int64)a3 + 4 * v5;
      if ( v10 < (unsigned __int64)a3 || v10 > (unsigned __int64)W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v8, a3, 4 * v5);
      v11 = 0;
      v18 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v20 = i;
        if ( (unsigned int)i >= (unsigned int)v5 )
          break;
        v11 += v8[i];
        v18 = v11;
      }
      if ( v11 > 0x4E2000 )
        goto LABEL_20;
      if ( v11 > 0xA )
      {
        v9 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v11);
        v23 = v9;
      }
      if ( v9 )
      {
        v13 = 8LL * v11;
        v14 = Src;
        if ( (char *)Src + v13 < Src || (char *)Src + v13 > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v9, v14, v13);
      }
      else
      {
LABEL_20:
        PolyPolygonRgnInternal = 0LL;
        v19 = 0LL;
      }
      if ( !PolyPolygonRgnInternal )
        goto LABEL_26;
      switch ( a5 )
      {
        case 1:
          if ( (int)IsGrePolyPolygonSupported_0() >= 0 )
          {
            v15 = GrePolyPolygon_0();
LABEL_25:
            PolyPolygonRgnInternal = v15;
            goto LABEL_26;
          }
          break;
        case 2:
          if ( (int)IsGrePolyPolylineSupported_0() >= 0 )
          {
            v15 = GrePolyPolyline_0();
            goto LABEL_25;
          }
          break;
        case 3:
          if ( (int)IsGrePolyBezierSupported_0() >= 0 )
          {
            v15 = GrePolyBezier_0();
            goto LABEL_25;
          }
          break;
        case 4:
          if ( (int)IsGrePolylineToSupported_0() >= 0 )
          {
            v15 = GrePolylineTo_0();
            goto LABEL_25;
          }
          break;
        case 5:
          if ( (int)IsGrePolyBezierToSupported_0() >= 0 )
          {
            v15 = GrePolyBezierTo_0();
            goto LABEL_25;
          }
          break;
        case 6:
          PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v9, v11);
          goto LABEL_26;
      }
      PolyPolygonRgnInternal = 0LL;
LABEL_26:
      if ( v9 && v9 != &v26 )
        FreeTmpBuffer((char *)v9);
      if ( v8 != &v17 )
        Win32FreePool();
      return PolyPolygonRgnInternal;
    }
    return 0LL;
  }
  return 0LL;
}
