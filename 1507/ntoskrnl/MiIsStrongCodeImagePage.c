/*
 * XREFs of MiIsStrongCodeImagePage @ 0x1402311FC
 * Callers:
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 * Callees:
 *     MI_IS_PFN_FILE_ONLY @ 0x14005AC60 (MI_IS_PFN_FILE_ONLY.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiIsStrongCodeImagePage(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 PrototypePteDirect; // rax
  __int64 *v9; // r9

  if ( a2 )
    *a2 = 0LL;
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 || (unsigned int)MI_IS_PFN_FILE_ONLY(a1) == 1 )
    return 0LL;
  if ( (v7 & 0x200000000000000LL) == 0 )
  {
    LOBYTE(v4) = (MiFlags & 0x30000) != 0;
    return (unsigned int)v4;
  }
  if ( (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v6 + 16), v3, v4, v5);
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 92LL) & 0xC000000) != 0 )
    {
      if ( v9 )
        *v9 = PrototypePteDirect;
      return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
