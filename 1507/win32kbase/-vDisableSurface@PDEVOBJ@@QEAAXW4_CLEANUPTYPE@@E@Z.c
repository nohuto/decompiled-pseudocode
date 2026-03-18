/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00346E0
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B0BA0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     vDisableSynchronize_0 @ 0x1C00011D8 (vDisableSynchronize_0.c)
 *     IsvSpDisableSpritesSupported_0 @ 0x1C00011E0 (IsvSpDisableSpritesSupported_0.c)
 *     vSpDisableSpritesWrap_0 @ 0x1C00011E8 (vSpDisableSpritesWrap_0.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00B0AD0 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall PDEVOBJ::vDisableSurface(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  struct SURFACE *v7; // rdx
  void (__fastcall *v8)(_QWORD); // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x80000) == 0 )
    vDisableSynchronize_0();
  if ( (int)IsvSpDisableSpritesSupported_0() >= 0 )
    vSpDisableSpritesWrap_0();
  v7 = *(struct SURFACE **)(*a1 + 2576);
  if ( v7 && a3 )
  {
    SURFREF::SURFREF((SURFREF *)v9, v7);
    *(_QWORD *)(*a1 + 2576) = 0LL;
    if ( (*(_DWORD *)(v3 + 56) & 0x8000) != 0 && a2 )
    {
      SURFREF::bDeleteSurface(v9, a2);
    }
    else
    {
      HmgDecrementShareReferenceCount(v10);
      v8 = *(void (__fastcall **)(_QWORD))(v3 + 2752);
      v10 = 0LL;
      if ( v8 )
        v8(*(_QWORD *)(*a1 + 1824));
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
  else
  {
    *(_QWORD *)(*a1 + 2576) = 0LL;
  }
}
