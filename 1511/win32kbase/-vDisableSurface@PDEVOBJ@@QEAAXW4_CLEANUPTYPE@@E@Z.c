/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00380F0
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00B4580 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     vDisableSynchronize_0 @ 0x1C00011D8 (vDisableSynchronize_0.c)
 *     IsvSpDisableSpritesSupported_0 @ 0x1C00011E0 (IsvSpDisableSpritesSupported_0.c)
 *     vSpDisableSpritesWrap_0 @ 0x1C00011E8 (vSpDisableSpritesWrap_0.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0046200 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::vDisableSurface(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  _DWORD *v8; // rcx
  bool v9; // zf
  _DWORD *v10; // rbx
  _DWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x80000) == 0 )
    vDisableSynchronize_0();
  if ( (int)IsvSpDisableSpritesSupported_0() >= 0 )
    vSpDisableSpritesWrap_0();
  result = *a1;
  v8 = *(_DWORD **)(*a1 + 2576);
  if ( !v8 || !a3 )
  {
    *(_QWORD *)(result + 2576) = 0LL;
    return result;
  }
  *(_QWORD *)(result + 2576) = 0LL;
  v9 = (*(_DWORD *)(v3 + 56) & 0x8000) == 0;
  v11 = v8;
  if ( v9 || !a2 )
  {
    HmgDecrementShareReferenceCount(v8);
    result = *(_QWORD *)(v3 + 2752);
    v10 = 0LL;
    if ( !result )
      return result;
    result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(*a1 + 1824));
  }
  else
  {
    result = SURFREF::bDeleteSurface(&v11, a2);
    v10 = v11;
  }
  if ( v10 )
    return HmgDecrementShareReferenceCount(v10);
  return result;
}
