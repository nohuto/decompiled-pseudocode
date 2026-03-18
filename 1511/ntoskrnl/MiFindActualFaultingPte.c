/*
 * XREFs of MiFindActualFaultingPte @ 0x14001D360
 * Callers:
 *     MiIsFaultPteIntact @ 0x14001D2B8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14001D360 (MiFindActualFaultingPte.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14001D360 (MiFindActualFaultingPte.c)
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFindActualFaultingPte(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  char v4; // cl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-38h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0LL;
  }
  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = v2;
  v11 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v3) = 4;
  do
  {
    v3 = (unsigned int)(v3 - 1);
    v4 = *(_BYTE *)*(&v10 + v3);
    if ( (v4 & 1) == 0 )
      return *(&v10 + v3);
  }
  while ( (_DWORD)v3 != 1 );
  if ( v4 >= 0 )
  {
    v5 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v5 & 1) == 0 )
    {
      if ( (v5 & 0x400) == 0 )
        return v2;
      if ( HIDWORD(v5) != 0xFFFFFFFF )
      {
        v6 = v5 >> 16;
LABEL_12:
        result = MiFindActualFaultingPte(v6);
        if ( result )
          return result;
        return v2;
      }
      v6 = MiCheckVirtualAddress(a1, v8, v9);
      if ( v6 )
        goto LABEL_12;
    }
  }
  return 0LL;
}
