/*
 * XREFs of ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180024B30
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Release@CD3DDeviceLevel1@@WBIA@EAAKXZ @ 0x1800BDB90 (-Release@CD3DDeviceLevel1@@WBIA@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Release(CD3DDeviceLevel1 *this)
{
  unsigned __int32 v1; // esi
  void (__fastcall ***v3)(_QWORD, char *); // r14

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 98);
  if ( !v1 )
  {
    v3 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 50);
    if ( v3 )
      (**v3)(*((_QWORD *)this + 50), (char *)this + 384);
    else
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 48) + 16LL))((char *)this + 384, 1LL);
  }
  return v1;
}
