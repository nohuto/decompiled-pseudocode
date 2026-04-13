/*
 * XREFs of memcpy @ 0x180026528
 * Callers:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_1800049AC @ 0x1800049AC (sub_1800049AC.c)
 *     sub_180004A0C @ 0x180004A0C (sub_180004A0C.c)
 *     sub_180004B28 @ 0x180004B28 (sub_180004B28.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004CF0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     sub_180004DFC @ 0x180004DFC (sub_180004DFC.c)
 *     sub_180004EB4 @ 0x180004EB4 (sub_180004EB4.c)
 *     sub_180011CC0 @ 0x180011CC0 (sub_180011CC0.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_1800139BC @ 0x1800139BC (sub_1800139BC.c)
 *     sub_180013DF0 @ 0x180013DF0 (sub_180013DF0.c)
 *     sub_1800149BC @ 0x1800149BC (sub_1800149BC.c)
 *     sub_180015D50 @ 0x180015D50 (sub_180015D50.c)
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180017C2C @ 0x180017C2C (sub_180017C2C.c)
 *     unknown_libname_7 @ 0x180017D50 (unknown_libname_7.c)
 *     sub_1800213A0 @ 0x1800213A0 (sub_1800213A0.c)
 *     sub_180023864 @ 0x180023864 (sub_180023864.c)
 *     sub_180023A78 @ 0x180023A78 (sub_180023A78.c)
 *     sub_1800243E0 @ 0x1800243E0 (sub_1800243E0.c)
 *     sub_180024E78 @ 0x180024E78 (sub_180024E78.c)
 *     sub_180025090 @ 0x180025090 (sub_180025090.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
