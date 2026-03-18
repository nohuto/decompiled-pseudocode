/*
 * XREFs of ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024040
 * Callers:
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180023584 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024040 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024020 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024040 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E180 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800A2570 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransform3D::NotifyListenerOfChange(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // eax
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int Count; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  void (__fastcall *v12)(_DWORD *, __int64, __int64, __int64); // rax

  v4 = a2[8] ^ (a2[8] ^ ((a2[8] & 0xFFFFFFFE) + 2)) & 6;
  a2[8] = v4;
  if ( (v4 & 6) == 2 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL);
    if ( (char *)v5 == (char *)CVisual::OnChanged )
      v6 = CVisual::OnChanged(a2, 2LL, a1);
    else
      v6 = v5 == CTransform3D::OnChanged
         ? CTransform3D::OnChanged((__int64)a2)
         : ((__int64 (__fastcall *)(_DWORD *, __int64, __int64))v5)(a2, 2LL, a1);
    v7 = 0LL;
    if ( v6 )
    {
      Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 6));
      if ( Count )
      {
        v10 = Count;
        do
        {
          v11 = CPtrArrayBase::operator[](a2 + 6, v7);
          v12 = *(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
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
          ++v7;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2);
  result = (a2[8] ^ (2 * (a2[8] >> 1) - 2)) & 6;
  a2[8] ^= result;
  return result;
}
