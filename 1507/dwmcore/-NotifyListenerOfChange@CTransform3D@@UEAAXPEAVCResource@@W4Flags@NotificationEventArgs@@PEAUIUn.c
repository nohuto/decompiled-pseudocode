/*
 * XREFs of ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001AD10
 * Callers:
 *     ?SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001A6E0 (-SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001AD10 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001ACF0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001AD10 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x18001B1C4 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800484B0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CTransform3D::NotifyListenerOfChange(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // eax
  __int64 (__fastcall *v5)(__int64); // rbx
  int v6; // eax
  __int64 result; // rax
  CPtrArrayBase *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 Count; // rax
  unsigned __int64 v12; // rbx
  void (__fastcall *v13)(_DWORD *, unsigned __int64, __int64, __int64); // rbp
  bool v14; // zf
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]
  unsigned __int64 v17; // [rsp+48h] [rbp+10h]

  v4 = a2[8] ^ (a2[8] ^ ((a2[8] & 0xFFFFFFFE) + 2)) & 6;
  a2[8] = v4;
  if ( (v4 & 6) == 2 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL);
    if ( (char *)v5 == (char *)CVisual::OnChanged )
      v6 = CVisual::OnChanged(a2, 2LL, a1);
    else
      v6 = v5 == CTransform3D::OnChanged
         ? CTransform3D::OnChanged((__int64)a2)
         : ((__int64 (__fastcall *)(_DWORD *, __int64, __int64))v5)(a2, 2LL, a1);
    if ( v6 )
    {
      v8 = (CPtrArrayBase *)(a2 + 6);
      v9 = *((_QWORD *)a2 + 3);
      if ( (v9 & 2) != 0 )
        v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v9) = v9 & 1;
      if ( (_DWORD)v9 )
      {
        v17 = 0LL;
        v10 = 16LL;
        v15 = 16LL;
        v16 = (unsigned int)v9;
        do
        {
          Count = CPtrArrayBase::GetCount(v8);
          if ( v17 >= Count )
          {
            v12 = 0LL;
          }
          else if ( Count == 1 )
          {
            v12 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            v12 = *(_QWORD *)((*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL) + v10);
          }
          v13 = *(void (__fastcall **)(_DWORD *, unsigned __int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
          if ( (char *)v13 == (char *)CTransform3D::NotifyListenerOfChange )
          {
            CTransform3D::NotifyListenerOfChange(a2, v12, 2LL, a1);
          }
          else if ( (char *)v13 == (char *)CResource::NotifyListenerOfChange )
          {
            CResource::NotifyListenerOfChange(a2, v12, 2LL, a1);
          }
          else
          {
            v13(a2, v12, 2LL, a1);
          }
          v8 = (CPtrArrayBase *)(a2 + 6);
          ++v17;
          v10 = v15 + 8;
          v14 = v16-- == 1;
          v15 += 8LL;
        }
        while ( !v14 );
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2);
  result = (a2[8] ^ (2 * (a2[8] >> 1) - 2)) & 6;
  a2[8] ^= result;
  return result;
}
