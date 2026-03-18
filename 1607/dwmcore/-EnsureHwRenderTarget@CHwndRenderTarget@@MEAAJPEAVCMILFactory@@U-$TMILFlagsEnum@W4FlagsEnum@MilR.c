/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180074300
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180034700 (-EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@Mi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureHwRenderTarget(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = CDisplay::EnsureHwRenderTarget(*(CDisplay **)(a1 + 152), a2, *(_QWORD *)(a1 + 16) + 252LL, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x94Fu);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 160) )
      *(_BYTE *)(a1 + 747) = 1;
    v6 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(v6 + 56);
    v7 = *(_QWORD *)(v6 + 56);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return v5;
}
