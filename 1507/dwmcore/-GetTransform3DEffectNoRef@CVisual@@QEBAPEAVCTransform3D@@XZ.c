/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800364E0
 * Callers:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800349B4 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsBackfaced@CVisual@@IEBA_NXZ @ 0x18010432C (-IsBackfaced@CVisual@@IEBA_NXZ.c)
 * Callees:
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003C7E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 (__fastcall *v4)(_QWORD, __int64); // rbp
  char v5; // al
  __int64 (__fastcall *v6)(_QWORD, __int64); // rbp
  char v7; // al

  v1 = *((_QWORD *)this + 51);
  v2 = 0LL;
  if ( v1 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL);
    if ( v4 == CEffectGroup::IsOfType )
      v5 = CEffectGroup::IsOfType(*((_QWORD *)this + 51), 24LL);
    else
      v5 = v4(*((_QWORD *)this + 51), 24LL);
    if ( v5 )
    {
      return (struct CTransform3D *)*((_QWORD *)this + 51);
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 51) + 48LL);
      if ( v6 == CEffectGroup::IsOfType )
        v7 = CEffectGroup::IsOfType(*((_QWORD *)this + 51), 8LL);
      else
        v7 = v6(*((_QWORD *)this + 51), 8LL);
      if ( v7 )
        return *(struct CTransform3D **)(*((_QWORD *)this + 51) + 56LL);
    }
  }
  return (struct CTransform3D *)v2;
}
