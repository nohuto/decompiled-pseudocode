/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x18008DD10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  int v5; // r8d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  struct ATL::CStringData *result; // rax

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v5 = a3 + 1;
  v6 = (v5 + 7) & 0xFFFFFFF8;
  if ( v5 > (int)v6 )
    return 0LL;
  v7 = a4 * (unsigned __int64)v6;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  if ( (unsigned int)v7 > 0xFFFFFFE7 )
    return 0LL;
  result = (struct ATL::CStringData *)(*(__int64 (__fastcall **)(_QWORD, struct ATL::CStringData *, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
                                        *((_QWORD *)this + 1),
                                        a2,
                                        (unsigned int)(v7 + 24));
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v6 - 1;
  return result;
}
