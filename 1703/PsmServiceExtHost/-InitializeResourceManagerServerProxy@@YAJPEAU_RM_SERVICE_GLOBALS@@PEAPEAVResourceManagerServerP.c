/*
 * XREFs of ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x18001D0D8
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001CB20 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall InitializeResourceManagerServerProxy(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ResourceManagerServerProxy **a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  _QWORD *v4; // rax
  unsigned int v5; // ecx

  v2 = RmSvcGlobals;
  v4 = operator new(0x18uLL);
  v5 = 0;
  if ( v4 )
  {
    v4[2] = 0LL;
    *v4 = &ResourceManagerServerProxy::`vftable';
    *((_DWORD *)v4 + 2) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v4[2] = v2;
    *a2 = (struct ResourceManagerServerProxy *)v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
