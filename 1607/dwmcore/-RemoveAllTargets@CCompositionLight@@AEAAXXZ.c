/*
 * XREFs of ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x1801502A8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18014FFC4 (--1CCompositionLight@@UEAA@XZ.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800A25CC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 */

void __fastcall CCompositionLight::RemoveAllTargets(CCompositionLight *this)
{
  unsigned int v1; // eax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 *v6; // r11
  __int64 v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  int v10; // r10d

  v1 = *((_DWORD *)this + 40);
  if ( v1 )
  {
    v3 = 0LL;
    v4 = v1;
    do
    {
      v5 = *(_QWORD *)(v3 + *((_QWORD *)this + 17));
      v6 = (__int64 *)(v5 + 312);
      v7 = *(_QWORD *)(v5 + 312);
      if ( (v7 & 2) != 0 )
        v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v7) = v7 & 1;
      v8 = 0;
      if ( (_DWORD)v7 )
      {
        while ( (CCompositionLight *)CPtrArrayBase::operator[](v6, v8) != this )
        {
          v8 = v10 + 1;
          if ( v8 >= v9 )
            goto LABEL_11;
        }
        CPtrArrayBase::Remove((CPtrArrayBase *)v6, (__int64)this);
        CPtrArrayBase::Remove((CCompositionLight *)((char *)this + 24), v5);
        CResource::NotifyOnChanged((_DWORD *)v5, 0, 0LL);
      }
LABEL_11:
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  *((_DWORD *)this + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 136, 8u);
}
