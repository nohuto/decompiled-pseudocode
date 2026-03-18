/*
 * XREFs of ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x18007E7A0
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Release@CD3DDeviceLevel1@@WBJI@EAAKXZ @ 0x1800C1350 (-Release@CD3DDeviceLevel1@@WBJI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Release(CD3DDeviceLevel1 *this)
{
  char *v1; // r8
  unsigned __int32 v2; // ebx
  void (__fastcall ***v4)(_QWORD, char *); // rcx

  v1 = (char *)this + 408;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 104);
  if ( !v2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 53);
    if ( v4 )
      (**v4)(v4, v1);
    else
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  }
  return v2;
}
