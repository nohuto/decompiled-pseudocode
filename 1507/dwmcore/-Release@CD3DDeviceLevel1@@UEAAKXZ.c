/*
 * XREFs of ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180019500
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CD3DDeviceLevel1@@WBII@EAAKXZ @ 0x18009AF10 (-Release@CD3DDeviceLevel1@@WBII@EAAKXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Release(CD3DDeviceLevel1 *this)
{
  unsigned __int32 v1; // esi
  void (__fastcall ***v3)(_QWORD, char *); // r14

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 100);
  if ( !v1 )
  {
    v3 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 51);
    if ( v3 )
      (**v3)(*((_QWORD *)this + 51), (char *)this + 392);
    else
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 49) + 16LL))((char *)this + 392, 1LL);
  }
  return v1;
}
