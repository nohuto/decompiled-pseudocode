/*
 * XREFs of MiIsFaultPteIntact @ 0x14007BFC0
 * Callers:
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14007C0E0 (MiFindActualFaultingPte.c)
 *     MiCheckVirtualAddress @ 0x1400896DC (MiCheckVirtualAddress.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 *v12; // r8
  __int64 v13; // rax
  __int64 PteShadow; // r9
  __int64 v15; // rax
  char v16[24]; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+58h] [rbp+20h] BYREF

  result = MiFindActualFaultingPte();
  if ( result )
  {
    if ( (__int64 *)result == a2 )
    {
      PteShadow = *(_QWORD *)result;
      if ( (unsigned __int64)(result + 0x90482413000LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(result, PteShadow);
      v15 = *a3;
      if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
        v15 = MiReadPteShadow(a3, *a3);
      if ( PteShadow == v15 )
        return 1LL;
    }
    else
    {
      v7 = *(_QWORD *)result;
      if ( (unsigned __int64)(result + 0x90482413000LL) <= 0x7F8 )
        v7 = MiReadPteShadow(result, v7);
      if ( (v7 & 0x400) != 0 )
      {
        v11 = (__int64 *)((unsigned int)MiIsPrototypePteVadLookup(v7)
                        ? MiCheckVirtualAddress(a1, &v17, v16)
                        : MiGetPrototypePteDirect(v8, v8, v9, v10));
        v12 = v11;
        if ( v11 == a2 )
        {
          v13 = *v11;
          if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8 )
            v13 = MiReadPteShadow(v12, v13);
          return v13 == *a3;
        }
      }
    }
    return 0LL;
  }
  return result;
}
