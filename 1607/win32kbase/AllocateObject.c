/*
 * XREFs of AllocateObject @ 0x1C0031800
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C00309C4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00310F0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C00315D0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0031640 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0031740 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0047AC0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005B87C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005CFA8 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v5; // r14d
  int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rbx
  int v10; // ebp

  v5 = Size;
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && a2 == LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    v6 = 1;
    v5 = Size + 160;
  }
  else
  {
    v6 = 0;
  }
  if ( *((_DWORD *)&laSize + a2) >= v5 && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0 )
  {
    v7 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl_0();
    v8 = (__int64)v7;
    if ( v7 )
    {
      if ( a3 )
      {
        memset(v7, 0, v5);
      }
      else
      {
        *v7 = 0LL;
        v7[1] = 0LL;
        v7[2] = 0LL;
      }
      if ( v6 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + v8 - 160), 0LL);
      *(_WORD *)(v8 + 14) = 0x8000;
      return v8;
    }
  }
  v10 = a2 << 24;
  if ( a3 )
  {
    v8 = PALLOCMEM2(v5);
  }
  else
  {
    v8 = 0LL;
    if ( v5 )
      v8 = Win32AllocPool(v5, (unsigned int)(v10 + 808478791));
    if ( !v8 )
      goto LABEL_24;
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  if ( v8 )
  {
    if ( v6 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v5 - 160LL), 0LL);
    return v8;
  }
LABEL_24:
  EngSetLastError(8u);
  return 0LL;
}
