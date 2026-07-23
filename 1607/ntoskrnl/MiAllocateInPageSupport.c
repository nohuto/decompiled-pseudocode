/*
 * XREFs of MiAllocateInPageSupport @ 0x1400E4E34
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 */

__int64 __fastcall MiAllocateInPageSupport(unsigned __int64 a1, unsigned int a2, _DWORD *a3, __int64 *a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 result; // rax
  char *v11; // rsi
  __int64 v12; // rax

  v6 = a2;
  if ( a4 )
    v8 = *a4;
  else
    v8 = 0LL;
  if ( *a3 > 0x100u )
    *a3 = 256;
  if ( *a3 > 0x10u )
    v6 = a2 | 1;
  v9 = v6;
  if ( a4 )
    v9 = v6 | 4;
  result = MiGetInPageSupportBlock(v9);
  if ( !result )
  {
    if ( a4 )
    {
      MiUnlockProtoPoolPage(v8, 0x11u);
    }
    else
    {
      if ( (v6 & 1) == 0 )
        return 0LL;
      v6 &= ~1u;
      *a3 = 16;
    }
    v11 = (char *)MiGetInPageSupportBlock(v6);
    if ( v11 )
      goto LABEL_15;
    if ( (v6 & 1) == 0 )
      return (__int64)v11;
    *a3 = 16;
    v11 = (char *)MiGetInPageSupportBlock(v6 & 0xFFFFFFFE);
    if ( v11 )
    {
LABEL_15:
      if ( !a4 )
        return (__int64)v11;
      v12 = MiLockProtoPoolPage(a1, 0LL);
      if ( v12 )
      {
        *a4 = v12;
        return (__int64)v11;
      }
      MiFreeInPageSupportBlock(v11);
    }
    return 0LL;
  }
  return result;
}
