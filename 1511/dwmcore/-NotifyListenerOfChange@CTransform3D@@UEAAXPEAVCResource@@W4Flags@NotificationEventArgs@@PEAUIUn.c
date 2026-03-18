/*
 * XREFs of ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067890
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067890 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800860B0 (-SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067870 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067890 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180067DFC (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CTransform3D::NotifyListenerOfChange(CCompositionSurfaceBitmap *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  __int64 (__fastcall *v5)(__int64); // rbx
  int v6; // eax
  CPtrArrayBase *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int64 Count; // rax
  unsigned __int64 v11; // rbx
  void (__fastcall *v12)(_DWORD *, unsigned __int64, __int64, CCompositionSurfaceBitmap *); // rbp
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]
  unsigned __int64 v17; // [rsp+48h] [rbp+10h]

  v4 = a2[8] ^ (a2[8] ^ ((a2[8] & 0xFFFFFFFE) + 2)) & 6;
  a2[8] = v4;
  if ( (v4 & 6) == 2 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL);
    if ( (char *)v5 == (char *)CVisual::OnChanged )
      v6 = CVisual::OnChanged((__int64)a2, 2, a1);
    else
      v6 = v5 == CTransform3D::OnChanged
         ? CTransform3D::OnChanged((__int64)a2)
         : ((__int64 (__fastcall *)(_DWORD *, __int64, CCompositionSurfaceBitmap *))v5)(a2, 2LL, a1);
    if ( v6 )
    {
      v7 = (CPtrArrayBase *)(a2 + 6);
      v8 = *((_QWORD *)a2 + 3);
      if ( (v8 & 2) != 0 )
        v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v8) = v8 & 1;
      if ( (_DWORD)v8 )
      {
        v17 = 0LL;
        v9 = 16LL;
        v15 = 16LL;
        v16 = (unsigned int)v8;
        do
        {
          Count = CPtrArrayBase::GetCount(v7);
          if ( v17 >= Count )
          {
            v11 = 0LL;
          }
          else if ( Count == 1 )
          {
            v11 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            v11 = *(_QWORD *)((*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCuLL) + v9);
          }
          v12 = *(void (__fastcall **)(_DWORD *, unsigned __int64, __int64, CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 64LL);
          if ( (char *)v12 == (char *)CTransform3D::NotifyListenerOfChange )
          {
            CTransform3D::NotifyListenerOfChange(a2, v11, 2LL, a1);
          }
          else if ( (char *)v12 == (char *)CResource::NotifyListenerOfChange )
          {
            CResource::NotifyListenerOfChange(a2, v11, 2LL, a1);
          }
          else
          {
            v12(a2, v11, 2LL, a1);
          }
          v7 = (CPtrArrayBase *)(a2 + 6);
          ++v17;
          v9 = v15 + 8;
          v13 = v16-- == 1;
          v15 += 8LL;
        }
        while ( !v13 );
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2);
  result = (a2[8] ^ (2 * (a2[8] >> 1) - 2)) & 6;
  a2[8] ^= result;
  return result;
}
