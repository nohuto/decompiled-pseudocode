/*
 * XREFs of ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x180027EF0
 * Callers:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180025EEC (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x180027B70 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x180027DBC (-EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z.c)
 *     ?SetValue@StringBuffer@Common@@QEAAJPEBGK@Z @ 0x180027FDC (-SetValue@StringBuffer@Common@@QEAAJPEBGK@Z.c)
 *     ?SetLength@StringBuffer@Common@@QEAAJK@Z @ 0x18002809C (-SetLength@StringBuffer@Common@@QEAAJK@Z.c)
 *     ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180049150 (-GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     ?AlternateHeapReAlloc@@YAJPEAX_K1PEAPEAX@Z @ 0x1800280F0 (-AlternateHeapReAlloc@@YAJPEAX_K1PEAPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

int __fastcall Common::StringBuffer::SetCapacity(void **this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  int result; // eax
  _WORD *v6; // rcx
  void *v7; // rcx
  _WORD *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 > 0x3FFFFFFF )
    return -2147023613;
  if ( a2 )
  {
    v4 = a2 + 1;
    if ( a2 + 1 != *((_DWORD *)this + 4) )
    {
      result = AlternateHeapReAlloc(this[1], 2LL * *((unsigned int *)this + 4), 2LL * v4, (void **)&v8);
      if ( result < 0 )
        return result;
      v6 = v8;
      this[1] = v8;
      *((_DWORD *)this + 4) = v4;
      if ( *(_DWORD *)this > (unsigned int)v2 )
      {
        *(_DWORD *)this = v2;
        v6[v2] = 0;
      }
      else if ( *(_DWORD *)this < (unsigned int)v2 && !*(_DWORD *)this )
      {
        *v6 = 0;
      }
    }
  }
  else
  {
    v7 = this[1];
    if ( v7 )
    {
      operator delete(v7);
      this[1] = 0LL;
      *(_DWORD *)this = 0;
    }
    *((_DWORD *)this + 4) = 0;
  }
  return 0;
}
