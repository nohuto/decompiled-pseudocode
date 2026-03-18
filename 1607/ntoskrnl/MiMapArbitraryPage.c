/*
 * XREFs of MiMapArbitraryPage @ 0x1401FA03C
 * Callers:
 *     MiCombineWorkingSet @ 0x1401F80D0 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140663718 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14010A608 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiCombineCandidate @ 0x1401F7E78 (MiCombineCandidate.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 *v6; // r14
  unsigned __int8 v10; // si
  int v11; // eax
  unsigned int v12; // ebx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidKernelPte; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = a2[8];
  v6 = (unsigned __int64 *)a2[9];
  v10 = MiLockPageInline(v4);
  v11 = MiCombineCandidate(a1, v4);
  v12 = 0;
  if ( a3 )
  {
    if ( v11 != a3 )
      goto LABEL_3;
  }
  else if ( !v11 )
  {
LABEL_3:
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    return 0LL;
  }
  if ( a4 == 1 && (unsigned __int8)((*(_BYTE *)(v4 + 34) & 7) - 2) > 1u )
    goto LABEL_3;
  if ( (*(_BYTE *)(v4 + 34) & 0xC0) != 0xC0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v4);
    ValidKernelPte = MiMakeValidKernelPte((v4 + 0x58000000000LL) / 48, ProtectionPfnCompatible, (unsigned __int64)v6);
    a2[7] = v6;
    a2[6] = v4;
    *v6 = ValidKernelPte;
    if ( MiPteInShadowRange((unsigned __int64)v6) )
      MiWritePteShadow(v17, v16);
    v12 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  return v12;
}
