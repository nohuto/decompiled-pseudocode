/*
 * XREFs of ?IsUsingResource@CAudioStream@@UEAAH_K@Z @ 0x180064C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::IsUsingResource(CAudioStream *this)
{
  __int64 v1; // rcx
  unsigned __int8 v2; // bl

  v1 = *((_QWORD *)this + 7);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 184LL))(v1) != 0;
  return v2;
}
