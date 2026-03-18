/*
 * XREFs of MiReferenceCfgVad @ 0x140462520
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046372C (MiCfgInitializeProcess.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 */

__int64 __fastcall MiReferenceCfgVad(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  unsigned int *v6; // rax
  unsigned __int64 v7; // r8
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v5 = 3 * (a3 - 0x6FFF4FFD38LL);
  v6 = MiObtainReferencedVad(a2, &v9);
  v7 = v6[7] | ((unsigned __int64)*((unsigned __int8 *)v6 + 33) << 32);
  *(_QWORD *)(8 * v5) = a2;
  *(_QWORD *)(8 * v5 + 0x10) = v6;
  *(_QWORD *)(8 * v5 + 8) = ((v7 + 1) << 12) - a2;
  return MiUnlockVad(a1, (__int64)v6);
}
