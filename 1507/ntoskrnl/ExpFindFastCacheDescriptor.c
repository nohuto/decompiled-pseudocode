/*
 * XREFs of ExpFindFastCacheDescriptor @ 0x140587608
 * Callers:
 *     sub_1405874F8 @ 0x1405874F8 (sub_1405874F8.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 * Callees:
 *     bsearch @ 0x140172700 (bsearch.c)
 */

__int64 __fastcall ExpFindFastCacheDescriptor(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  size_t v5; // r8
  const void *v6; // rdx
  _QWORD *v7; // rax
  char Key[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v2 = 0LL;
  v3 = *((_QWORD *)&unk_14077E460 + 9 * a1 + 1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 8) )
    {
      v9 = a2;
      v5 = *((unsigned int *)&unk_14077E460 + 18 * a1 + 6);
      v6 = (const void *)*((_QWORD *)&unk_14077E460 + 9 * a1 + 2);
      Key[0] = 1;
      v7 = bsearch(Key, v6, v5, 0x10uLL, ExpFastCacheDescriptorCompare);
      if ( v7 )
        return v7[1];
    }
  }
  return v2;
}
