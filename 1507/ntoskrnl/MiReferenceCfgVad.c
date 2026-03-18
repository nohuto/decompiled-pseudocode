/*
 * XREFs of MiReferenceCfgVad @ 0x1404637C0
 * Callers:
 *     MiCfgInitializeProcess @ 0x14046549C (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 */

__int64 __fastcall MiReferenceCfgVad(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v5 = 3LL * a3;
  v6 = MiObtainReferencedVad(a2, &v9);
  v7 = *(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32);
  *(_QWORD *)(8 * v5 - 0xA7FEF7FBD98LL) = a2;
  *(_QWORD *)(8 * v5 - 0xA7FEF7FBD98LL + 16) = v6;
  *(_QWORD *)(8 * v5 - 0xA7FEF7FBD98LL + 8) = ((v7 + 1) << 12) - a2;
  return MiUnlockVad(a1, v6);
}
