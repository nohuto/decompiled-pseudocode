/*
 * XREFs of CmpKeySecurityIncrementReferenceCount @ 0x1401B64B8
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpKeySecurityIncrementReferenceCount(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // eax

  v4 = 0;
  if ( !a4 && !*(_DWORD *)(a1 + 12) )
    KeBugCheckEx(0x51u, 4uLL, 6uLL, a2, a3);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 + 1 < v5 )
    return (unsigned int)-1073741675;
  else
    *(_DWORD *)(a1 + 12) = v5 + 1;
  return v4;
}
