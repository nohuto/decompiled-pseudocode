/*
 * XREFs of MxReleaseFreeDescriptor @ 0x1407C4A30
 * Callers:
 *     MiCreateFreePfns @ 0x1407C4F18 (MiCreateFreePfns.c)
 * Callees:
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 */

__int64 __fastcall MxReleaseFreeDescriptor(unsigned __int64 *a1, int a2)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = 0;
  v4 = *a1;
  v10 = v4;
  v11 = a1[1];
  v5 = a1[3];
  v9 = a2;
  if ( v5 != -1LL )
  {
    v11 = v5 - v4 + 512;
    MxCreateFreePfns(v8);
    v3 = 1;
  }
  result = a1[2];
  if ( result != -1 )
  {
    v7 = result & 0xFFFFFFFFFFFFFE00uLL;
    if ( (result & 0xFFFFFFFFFFFFFE00uLL) <= *a1 )
    {
      v7 = *a1;
      v3 = 1;
    }
    v10 = v7;
    v11 = result - v7 + 1;
    result = MxCreateFreePfns(v8);
    if ( !v3 )
    {
      result = *a1 & 0x1FF;
      if ( (*a1 & 0x1FF) != 0 )
      {
        v10 = *a1;
        v11 = 512 - result;
        return MxCreateFreePfns(v8);
      }
    }
  }
  return result;
}
