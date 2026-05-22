/*
 * XREFs of ?OnDisconnected@ViewHeirarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18006D610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHeirarchy::OnDisconnected(ViewHeirarchy *this, struct IMessageProxy *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((struct IMessageProxy **)this + 7) == a2 )
  {
    v3 = *((_QWORD *)this + 9);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 72LL))(v3, (char *)this + 8);
      v4 = *((_QWORD *)this + 9);
      if ( v4 )
      {
        *((_QWORD *)this + 9) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
  }
  return 0LL;
}
