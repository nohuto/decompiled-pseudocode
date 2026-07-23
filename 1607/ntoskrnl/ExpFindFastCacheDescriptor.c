/*
 * XREFs of ExpFindFastCacheDescriptor @ 0x1406AF108
 * Callers:
 *     sub_1406AE02C @ 0x1406AE02C (sub_1406AE02C.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 * Callees:
 *     bsearch @ 0x14014E010 (bsearch.c)
 */

__int64 __fastcall ExpFindFastCacheDescriptor(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  size_t v4; // r8
  const void *v5; // rdx
  _QWORD *v6; // rax
  char Key[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v2 = 0LL;
  v3 = *((_QWORD *)&unk_1407474A0 + 9 * a1 + 1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 8) )
    {
      v9 = a2;
      v4 = *((unsigned int *)&unk_1407474A0 + 18 * a1 + 6);
      v5 = (const void *)*((_QWORD *)&unk_1407474A0 + 9 * a1 + 2);
      Key[0] = 1;
      v6 = bsearch(Key, v5, v4, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
      if ( v6 )
        return v6[1];
    }
  }
  return v2;
}
