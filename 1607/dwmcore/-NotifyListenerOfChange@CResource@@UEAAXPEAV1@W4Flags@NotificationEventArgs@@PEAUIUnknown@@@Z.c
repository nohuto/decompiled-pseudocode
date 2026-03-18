/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E180
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180024040 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E180 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnChanged@CGeometry@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002C9B0 (-OnChanged@CGeometry@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E180 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009D5C0 (-OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800A2570 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::NotifyListenerOfChange(__int64 a1, _DWORD *a2, unsigned int a3, CPrimitiveGroup *a4)
{
  unsigned int v7; // eax
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax
  __int64 v10; // rdi
  __int64 result; // rax
  unsigned int Count; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+48h] [rbp+10h]

  v7 = a2[8] ^ (a2[8] ^ ((a2[8] & 0xFFFFFFFE) + 2)) & 6;
  a2[8] = v7;
  if ( (v7 & 6) == 2 )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL);
    if ( (char *)v8 == (char *)CVisual::OnChanged )
    {
      v9 = CVisual::OnChanged((__int64)a2, a3, a4);
    }
    else if ( (char *)v8 == (char *)CAtlasedRectsGroup::OnChanged )
    {
      v9 = CAtlasedRectsGroup::OnChanged(a2, a3, a4);
    }
    else
    {
      v9 = v8 == CGeometry::OnChanged
         ? CGeometry::OnChanged((__int64)a2)
         : ((__int64 (__fastcall *)(_DWORD *, _QWORD, CPrimitiveGroup *))v8)(a2, a3, a4);
    }
    v10 = 0LL;
    if ( v9 )
    {
      Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 6));
      if ( Count )
      {
        v14 = Count;
        do
        {
          v13 = CPtrArrayBase::operator[](a2 + 6, v10);
          if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 64LL) == CResource::NotifyListenerOfChange )
            CResource::NotifyListenerOfChange(a2, v13, a3, a4);
          else
            (*(void (__fastcall **)(_DWORD *, __int64, _QWORD, CPrimitiveGroup *))(*(_QWORD *)a2 + 64LL))(
              a2,
              v13,
              a3,
              a4);
          ++v10;
          --v14;
        }
        while ( v14 );
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2);
  result = (a2[8] ^ (2 * (a2[8] >> 1) - 2)) & 6;
  a2[8] ^= result;
  return result;
}
