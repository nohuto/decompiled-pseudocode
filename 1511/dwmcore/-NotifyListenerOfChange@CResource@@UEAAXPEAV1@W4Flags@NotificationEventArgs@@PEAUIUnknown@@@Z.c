/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00
 * Callers:
 *     ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004E5D0 (-SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067890 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800924F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800267A0 (-OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CGeometry@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18005D6D0 (-OnChanged@CGeometry@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180067DFC (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CResource::NotifyListenerOfChange(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        CCompositionSurfaceBitmap *a4)
{
  unsigned int v7; // eax
  __int64 (__fastcall *v8)(__int64); // rbx
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  unsigned int Count; // eax
  unsigned __int64 v13; // rdx
  void (__fastcall *v14)(__int64 *, unsigned __int64, _QWORD, CCompositionSurfaceBitmap *); // [rsp+28h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp+10h]

  v7 = *((_DWORD *)a2 + 8) ^ (*((_DWORD *)a2 + 8) ^ ((a2[4] & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)a2 + 8) = v7;
  if ( (v7 & 6) == 2 )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(*a2 + 96);
    if ( (char *)v8 == (char *)CVisual::OnChanged )
    {
      v9 = CVisual::OnChanged((__int64)a2, a3, a4);
    }
    else if ( v8 == CAtlasedRectsGroup::OnChanged )
    {
      v9 = CAtlasedRectsGroup::OnChanged((__int64)a2);
    }
    else
    {
      v9 = v8 == CGeometry::OnChanged
         ? CGeometry::OnChanged((__int64)a2)
         : ((__int64 (__fastcall *)(__int64 *, _QWORD, CCompositionSurfaceBitmap *))v8)(a2, a3, a4);
    }
    v10 = 0LL;
    if ( v9 )
    {
      Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 3));
      if ( Count )
      {
        v15 = Count;
        do
        {
          v13 = CPtrArrayBase::operator[](a2 + 3, v10);
          v14 = *(void (__fastcall **)(__int64 *, unsigned __int64, _QWORD, CCompositionSurfaceBitmap *))(*a2 + 64);
          if ( (char *)v14 == (char *)CResource::NotifyListenerOfChange )
            CResource::NotifyListenerOfChange(a2, v13, a3, a4);
          else
            v14(a2, v13, a3, a4);
          ++v10;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 72))(a2);
  result = (*((_DWORD *)a2 + 8) ^ (2 * (*((_DWORD *)a2 + 8) >> 1) - 2)) & 6;
  *((_DWORD *)a2 + 8) ^= result;
  return result;
}
