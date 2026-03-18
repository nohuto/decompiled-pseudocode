/*
 * XREFs of ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0
 * Callers:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     NtGdiSetPixel @ 0x1C002C0B0 (NtGdiSetPixel.c)
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiGetDCObject @ 0x1C0040C40 (NtGdiGetDCObject.c)
 *     GreGetDIBitsInternal @ 0x1C0042840 (GreGetDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     NtGdiGetRandomRgn @ 0x1C007A720 (NtGdiGetRandomRgn.c)
 *     GreSaveDC @ 0x1C00CC540 (GreSaveDC.c)
 *     NtGdiGetDCDword @ 0x1C00DA760 (NtGdiGetDCDword.c)
 *     GreRectVisible @ 0x1C00DAA88 (GreRectVisible.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00DB300 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreTransformPoints @ 0x1C00DC714 (GreTransformPoints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSaveAttributes(XDCOBJ *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rax
  _OWORD *v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_OWORD **)(v2 + 80);
  if ( v3 != (_OWORD *)(v2 + 536) )
  {
    v4 = (_OWORD *)(v2 + 960);
    if ( v3 != (_OWORD *)(v2 + 960) )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v5 = 3LL;
        do
        {
          *v4 = *v3;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          v4[5] = v3[5];
          v4[6] = v3[6];
          v4 += 8;
          *(v4 - 1) = v3[7];
          v3 += 8;
          --v5;
        }
        while ( v5 );
        *v4 = *v3;
        v4[1] = v3[1];
      }
      *(_QWORD *)(*(_QWORD *)this + 952LL) = *(_QWORD *)(*(_QWORD *)this + 80LL);
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 960LL;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return 1LL;
}
