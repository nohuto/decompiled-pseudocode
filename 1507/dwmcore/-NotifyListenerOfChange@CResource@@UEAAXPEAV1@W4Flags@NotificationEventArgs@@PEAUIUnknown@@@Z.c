/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001AD10 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18006E6A8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180087540 (-NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180017280 (-OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x18001B1C4 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CResource::NotifyListenerOfChange(__int64 a1, _DWORD *a2, unsigned int a3, CPrimitiveGroup *a4)
{
  unsigned int v7; // eax
  __int64 (__fastcall *v8)(CAtlasedRects *); // rbx
  int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  unsigned int Count; // eax
  unsigned __int64 v13; // rdx
  void (__fastcall *v14)(_DWORD *, unsigned __int64, _QWORD, CPrimitiveGroup *); // [rsp+28h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp+10h]

  v7 = a2[8] ^ (a2[8] ^ ((a2[8] & 0xFFFFFFFE) + 2)) & 6;
  a2[8] = v7;
  if ( (v7 & 6) == 2 )
  {
    v8 = *(__int64 (__fastcall **)(CAtlasedRects *))(*(_QWORD *)a2 + 88LL);
    if ( (char *)v8 == (char *)CVisual::OnChanged )
      v9 = CVisual::OnChanged((__int64)a2, a3, a4);
    else
      v9 = v8 == CAtlasedRectsGroup::OnChanged
         ? CAtlasedRectsGroup::OnChanged((CAtlasedRects *)a2)
         : ((__int64 (__fastcall *)(_DWORD *, _QWORD, CPrimitiveGroup *))v8)(a2, a3, a4);
    v10 = 0LL;
    if ( v9 )
    {
      Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 6));
      if ( Count )
      {
        v15 = Count;
        do
        {
          v13 = CPtrArrayBase::operator[]((__int64 *)a2 + 3, v10);
          v14 = *(void (__fastcall **)(_DWORD *, unsigned __int64, _QWORD, CPrimitiveGroup *))(*(_QWORD *)a2 + 64LL);
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
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2);
  result = (a2[8] ^ (2 * (a2[8] >> 1) - 2)) & 6;
  a2[8] ^= result;
  return result;
}
