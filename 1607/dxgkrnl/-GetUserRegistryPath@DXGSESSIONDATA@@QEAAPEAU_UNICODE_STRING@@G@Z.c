/*
 * XREFs of ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0001AFC
 * Callers:
 *     ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00DB9F8 (-SaveHKCUPathInSessionData@@YAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _UNICODE_STRING *__fastcall DXGSESSIONDATA::GetUserRegistryPath(DXGSESSIONDATA *this, unsigned __int16 a2)
{
  unsigned __int64 v5; // rax

  if ( !*((_QWORD *)this + 2326) && a2 )
  {
    *((_WORD *)this + 9300) = 0;
    v5 = 2 * ((unsigned __int64)a2 >> 1);
    if ( !is_mul_ok((unsigned __int64)a2 >> 1, 2uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 2326) = operator new(v5, 0x4B677844u, PagedPool);
    *((_WORD *)this + 9301) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18600);
}
