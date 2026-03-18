/*
 * XREFs of ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C002B770
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C002DC30 (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C002DC58 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

void __fastcall GreValidateRgnInDCSurfBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  struct ERECTL *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  LONG v14; // eax
  struct _RECTL v15; // [rsp+50h] [rbp-18h] BYREF
  _DWORD *v16; // [rsp+70h] [rbp+8h] BYREF

  v5 = ERECTL::bEmpty((ERECTL *)(a3 + 22));
  v8 = 1LL;
  if ( v5 || (unsigned int)ERECTL::bEqual((ERECTL *)&rclEmpty, v6) )
    v9 = v8;
  else
    v9 = 0;
  if ( (*(_DWORD *)(v7 + 36) & 0x5000) != 0x1000 && !v9 )
  {
    v10 = *(_DWORD *)v6;
    if ( *(int *)v6 < 0
      || (v11 = a3[23], v11 < 0)
      || (v12 = a3[24], v12 < 0)
      || (v13 = a3[25], v13 < 0)
      || *(_DWORD *)(a2 + 56) < v12 - v10
      || *(_DWORD *)(a2 + 60) < v13 - v11 )
    {
      DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, v8);
      v14 = *(_DWORD *)(a2 + 56);
      v15.left = 0;
      v15.top = 0;
      v15.right = v14;
      v15.bottom = *(_DWORD *)(a2 + 60);
      v16 = a3;
      RGNOBJ::vSet((RGNOBJ *)&v16, &v15);
    }
  }
}
