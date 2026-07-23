/*
 * XREFs of MiReferenceCfgVad @ 0x1404C1728
 * Callers:
 *     MiCfgInitializeProcess @ 0x14046BDEC (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 */

__int64 __fastcall MiReferenceCfgVad(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = qword_140327FD0;
  v6 = 3LL * a3;
  v7 = MiObtainReferencedVad(a2, &v10);
  v8 = *(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32);
  *(_QWORD *)(v3 + 8 * v6 + 276840664) = a2;
  *(_QWORD *)(v3 + 8 * v6 + 276840680) = v7;
  *(_QWORD *)(v3 + 8 * v6 + 276840672) = ((v8 + 1) << 12) - a2;
  return MiUnlockVad(a1, v7);
}
