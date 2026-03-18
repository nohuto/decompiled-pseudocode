/*
 * XREFs of ?Release@CD2DSharedBuffer@@UEAAKXZ @ 0x18009E300
 * Callers:
 *     ?Release@CD2DSharedBuffer@@WBA@EAAKXZ @ 0x1800C1560 (-Release@CD2DSharedBuffer@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x18009E2A0 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DSharedBuffer::Release(CD2DSharedBuffer *this)
{
  unsigned __int32 v1; // ebx
  CD2DSharedBuffer *(__fastcall *v2)(CD2DSharedBuffer *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v2 = *(CD2DSharedBuffer *(__fastcall **)(CD2DSharedBuffer *, char))(*(_QWORD *)this + 24LL);
    if ( v2 == CD2DSharedBuffer::`vector deleting destructor' )
      CD2DSharedBuffer::`vector deleting destructor'(this, 1);
    else
      v2(this, 1);
  }
  return v1;
}
