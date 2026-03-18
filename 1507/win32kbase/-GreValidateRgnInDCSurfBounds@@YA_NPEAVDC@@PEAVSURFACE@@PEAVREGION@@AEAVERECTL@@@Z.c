/*
 * XREFs of ?GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00B3E28
 * Callers:
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C000C19C (-bWrapped@ERECTL@@QEAAHXZ.c)
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C000C1B4 (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C000C1DC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00AF674 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

bool __fastcall GreValidateRgnInDCSurfBounds(struct DC *a1, struct SURFACE *a2, struct REGION *a3, struct ERECTL *a4)
{
  __int64 v4; // rax
  __int64 v8; // r8
  int *v9; // rbx
  BOOL v10; // eax
  __int64 v11; // r11
  char v12; // cl
  int v13; // eax
  int v14; // r9d
  int v15; // edx
  int v16; // r9d
  __int64 v17; // r11
  __int128 v19; // [rsp+50h] [rbp-18h] BYREF

  v4 = *((_QWORD *)a1 + 6);
  if ( v4 && (*(_DWORD *)(v4 + 56) & 0x20000) != 0 && *(int *)(*((_QWORD *)a1 + 64) + 112LL) < 0 )
  {
    LOBYTE(v8) = 1;
  }
  else
  {
    v9 = (int *)((char *)a3 + 88);
    v10 = ERECTL::bEmpty((struct REGION *)((char *)a3 + 88));
    LOBYTE(v8) = 1;
    if ( v10 || ERECTL::bEqual((ERECTL *)&rclEmpty, (struct ERECTL *)v9) )
      v12 = v8;
    else
      v12 = 0;
    v13 = *(_DWORD *)(v11 + 36);
    *(_QWORD *)&v19 = 0LL;
    v14 = *((_DWORD *)a2 + 15);
    DWORD2(v19) = *((_DWORD *)a2 + 14);
    HIDWORD(v19) = v14;
    if ( (v13 & 0x5000) != 0x1000
      && !v12
      && (ERECTL::bWrapped((ERECTL *)v9) || *v9 < 0 || v15 < v9[2] || v9[1] < 0 || v16 < v9[3]) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, v8, v17, a2, a3, 0LL, 0LL, 0);
      ERECTL::vOrder((ERECTL *)v9);
      ERECTL::operator*=(&v19, v9);
      LOBYTE(v8) = 0;
      *(_OWORD *)a4 = v19;
    }
  }
  return v8;
}
