/*
 * XREFs of ?Unlock@CD3DBuffer@@QEAAXXZ @ 0x1800DE8C0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DBuffer::Unlock(CD3DBuffer *this)
{
  if ( *((_DWORD *)this + 13) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 552LL) + 120LL))(
      *(_QWORD *)(*((_QWORD *)this + 3) + 552LL),
      *((_QWORD *)this + 2),
      0LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_BYTE *)this + 56) = 0;
}
