/*
 * XREFs of CmpKeySecurityDecrementReferenceCount @ 0x1401B647C
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1401B63F8 (CmpDereferenceSecurityNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

bool __fastcall CmpKeySecurityDecrementReferenceCount(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx

  v4 = *(_DWORD *)(a1 + 12);
  if ( !v4 )
    KeBugCheckEx(0x51u, 4uLL, 7uLL, a2, a3);
  v5 = v4 - 1;
  *(_DWORD *)(a1 + 12) = v5;
  return v5 == 0;
}
