/*
 * XREFs of sub_14051CE10 @ 0x14051CE10
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     bsearch @ 0x14014E010 (bsearch.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall sub_14051CE10(const void *a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  void *v8; // rax
  unsigned __int16 *v9; // rdx

  v8 = bsearch(
         a1,
         qword_1407494C0,
         (unsigned int)NumOfElements,
         0x10uLL,
         (int (__cdecl *)(const void *, const void *))ExpLicensingDescriptorCompare);
  if ( v8 )
  {
    v9 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
    *a5 = v9[3];
    if ( a2 )
      *a2 = v9[2];
    if ( v9[3] > a4 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      if ( a3 )
        memmove(a3, (char *)v9 + v9[1] + 16, v9[3]);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
}
