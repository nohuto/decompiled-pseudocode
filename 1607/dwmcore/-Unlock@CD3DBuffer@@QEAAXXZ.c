/*
 * XREFs of ?Unlock@CD3DBuffer@@QEAAXXZ @ 0x1801107A4
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DBuffer::Unlock(CD3DBuffer *this)
{
  if ( *((_DWORD *)this + 13) == 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 576LL) + 120LL))(
      *(_QWORD *)(*((_QWORD *)this + 3) + 576LL),
      *((_QWORD *)this + 2),
      0LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_BYTE *)this + 56) = 0;
}
