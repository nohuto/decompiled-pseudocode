/*
 * XREFs of MiFindActualFaultingPte @ 0x14007C0E0
 * Callers:
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14007C0E0 (MiFindActualFaultingPte.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14007C0E0 (MiFindActualFaultingPte.c)
 *     MiCheckVirtualAddress @ 0x1400896DC (MiCheckVirtualAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiFindActualFaultingPte(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // cl
  __int64 PteShadow; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PrototypePteDirect; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-38h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v3;
  v14 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v4) = 4;
  do
  {
    v4 = (unsigned int)(v4 - 1);
    v5 = *(_BYTE *)*(&v13 + v4);
    if ( (v5 & 1) == 0 )
      return *(&v13 + v4);
  }
  while ( (_DWORD)v4 != 1 );
  if ( v5 < 0 )
    return 0LL;
  PteShadow = *(_QWORD *)v3;
  if ( v3 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, PteShadow);
  if ( (PteShadow & 1) != 0 )
    return 0LL;
  if ( (PteShadow & 0x400) == 0 )
    return v3;
  if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
  {
    PrototypePteDirect = MiCheckVirtualAddress(v9, v11, v12);
    if ( !PrototypePteDirect )
      return 0LL;
  }
  else
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v7, v7, v8, v9);
  }
  result = MiFindActualFaultingPte(PrototypePteDirect);
  if ( !result )
    return v3;
  return result;
}
