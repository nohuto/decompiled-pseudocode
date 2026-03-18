/*
 * XREFs of MiInitializeProtoPfn @ 0x1401E3058
 * Callers:
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 * Callees:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rbx
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v5 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v9 = MiLockProtoPoolPage((unsigned __int64)a2, (unsigned __int8 *)&v13);
    if ( v9 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  MiLockPageAtDpcInline(v5, v8, v10);
  MiInitializePfn(v5, (unsigned __int64)a2, a3, 23);
  v11 = 32 * (a3 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40);
  *a2 = v11;
  if ( MiPteInShadowRange((__int64)a2) )
    MiWritePteShadow((__int64)a2, v11);
  ++*(_WORD *)(v5 + 32);
  MiDecrementShareCount(v5);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v9, v13);
}
