/*
 * XREFs of ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1801336E4
 * Callers:
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180133444 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A1868 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180182370 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 */

__int64 __fastcall HrCreateDestBitmapCopy(struct IBitmapSource *a1, struct WICRect *a2, struct IBitmapDest **a3)
{
  CSystemMemoryBitmap *v5; // rax
  CSystemMemoryBitmap *v6; // rbx
  unsigned int v7; // edi
  struct WICRect *v8; // r8
  bool v9; // r9
  int v10; // eax
  int v11; // eax

  *a3 = 0LL;
  v5 = (CSystemMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                280LL);
  if ( v5 )
    v6 = CSystemMemoryBitmap::CSystemMemoryBitmap(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
    v10 = CSystemMemoryBitmap::HrInit(v6, a1, v8, v9);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x5Eu);
    }
    else
    {
      v11 = (**(__int64 (__fastcall ***)(CSystemMemoryBitmap *, GUID *, struct IBitmapDest **))v6)(
              v6,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              a3);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x61u);
    }
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x59u);
  }
  return v7;
}
