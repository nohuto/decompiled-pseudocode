/*
 * XREFs of MiFindActualFaultingPte @ 0x1400259F0
 * Callers:
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1400259F0 (MiFindActualFaultingPte.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14001E978 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x1400259F0 (MiFindActualFaultingPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1)
{
  unsigned __int64 v1; // r11
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  int v4; // r9d
  char v5; // al
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 PrototypePteDirect; // rax
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-38h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0LL;
  v3 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v3;
  v14 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 4;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v5 = MI_READ_PTE_LOCK_FREE(*(&v13 + (unsigned int)(v4 - 1)));
    if ( (v5 & 1) == 0 )
      return v6;
    if ( v4 && v5 < 0 )
      return 0LL;
  }
  while ( v4 != 1 );
  v7 = MI_READ_PTE_LOCK_FREE(v3);
  if ( (v7 & 1) != 0 )
    return 0LL;
  if ( (v7 & 0x400) == 0 )
    return v3;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v7) )
  {
    PrototypePteDirect = MiCheckVirtualAddress(v9, &v11, &v12);
    if ( !PrototypePteDirect )
      return 0LL;
  }
  else
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v8);
  }
  result = MiFindActualFaultingPte(PrototypePteDirect);
  if ( !result )
    return v3;
  return result;
}
