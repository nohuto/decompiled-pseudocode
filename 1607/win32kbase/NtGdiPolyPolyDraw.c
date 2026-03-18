/*
 * XREFs of NtGdiPolyPolyDraw @ 0x1C0082E80
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
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     FreeTmpBuffer @ 0x1C006EA70 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C006EAF0 (AllocFreeTmpBuffer.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00830D8 (GreCreatePolyPolygonRgnInternal.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, const void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r12
  __int64 PolyPolygonRgnInternal; // rbx
  int *v8; // r14
  struct _POINTL *v9; // rsi
  ULONGLONG v10; // rax
  unsigned int v11; // r15d
  __int64 i; // rcx
  size_t v13; // r8
  void *v14; // rcx
  int v15; // eax
  int v17; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-D4h]
  int v19; // [rsp+38h] [rbp-D0h]
  unsigned int v20; // [rsp+40h] [rbp-C8h]
  __int64 v21; // [rsp+48h] [rbp-C0h]
  int *v22; // [rsp+50h] [rbp-B8h]
  struct _POINTL *v23; // [rsp+58h] [rbp-B0h]
  void *Src; // [rsp+60h] [rbp-A8h]
  __int64 v25; // [rsp+68h] [rbp-A0h]
  struct _POINTL v26; // [rsp+70h] [rbp-98h] BYREF

  v5 = a4;
  Src = a2;
  v25 = a1;
  v20 = a4;
  PolyPolygonRgnInternal = 1LL;
  v21 = 1LL;
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
      v10 = (ULONGLONG)a3 + 4 * v5;
      if ( v10 < (unsigned __int64)a3 || v10 > W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v8, a3, 4 * v5);
      v11 = 0;
      v18 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v19 = i;
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
        if ( (char *)Src + v13 < Src || (unsigned __int64)Src + v13 > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v9, v14, v13);
      }
      else
      {
LABEL_20:
        PolyPolygonRgnInternal = 0LL;
        v21 = 0LL;
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
        FreeTmpBuffer(v9);
      if ( v8 != &v17 )
        Win32FreePool();
      return PolyPolygonRgnInternal;
    }
    return 0LL;
  }
  return 0LL;
}
