/*
 * XREFs of MxComputePfnPagesNeeded @ 0x140748668
 * Callers:
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1407477A8 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxComputePfnPagesNeeded(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = 0LL;
  v3 = (((unsigned __int64)(48 * a1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = (((unsigned __int64)(48 * a2) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = 512LL;
  v6 = 3LL;
  do
  {
    v7 = (__int64)(v4 - v3) >> 3;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = v5 * (v7 + 1);
    v5 = 1LL;
    v2 += v8;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  return v2;
}
