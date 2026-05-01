/*
 * XREFs of ??$make_unique@U_MemoryPolicyManifest@@$$$V$0A@@utl@@YA?AV?$unique_ptr@U_MemoryPolicyManifest@@U?$default_delete@U_MemoryPolicyManifest@@@utl@@@0@XZ @ 0x18004E3DC
 * Callers:
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

_QWORD *__fastcall utl::make_unique<_MemoryPolicyManifest,,0>(_QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
    memset_0(v2, 0, 0x20uLL);
  else
    v3 = 0LL;
  *a1 = v3;
  return a1;
}
