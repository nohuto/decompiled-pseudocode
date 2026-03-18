/*
 * XREFs of MiFillPteWithProto @ 0x1400A0F24
 * Callers:
 *     MiResolveSharedZeroFault @ 0x140042000 (MiResolveSharedZeroFault.c)
 * Callees:
 *     MiUpdatePageTableUseCount @ 0x140037450 (MiUpdatePageTableUseCount.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x1401F2758 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2768 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiFillPteWithProto(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 PrototypePteDirect; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  MiUpdatePageTableUseCount((__int64)((_QWORD)a1 << 25) >> 16);
  if ( a3 == 256 )
    PrototypePteDirect = MiMakePrototypePteDirect(a2);
  else
    PrototypePteDirect = MiMakePrototypePteVadLookup(a3);
  *a1 = PrototypePteDirect;
  result = MiPteInShadowRange(a1, PrototypePteDirect);
  if ( (_DWORD)result )
    return MiWritePteShadow(v9, v8);
  return result;
}
