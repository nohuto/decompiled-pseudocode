/*
 * XREFs of MiAllocateInPageSupport @ 0x1400AAD60
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x140070DF4 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 */

void *__fastcall MiAllocateInPageSupport(unsigned __int64 a1, char a2, _DWORD *a3, __int64 *a4)
{
  char v6; // bl
  __int64 v8; // rsi
  char v9; // cl
  void *result; // rax
  void *v11; // rsi
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
    v11 = MiGetInPageSupportBlock(v6);
    if ( v11 )
      goto LABEL_15;
    if ( (v6 & 1) == 0 )
      return v11;
    *a3 = 16;
    v11 = MiGetInPageSupportBlock(v6 & 0xFE);
    if ( v11 )
    {
LABEL_15:
      if ( !a4 )
        return v11;
      v12 = MiLockProtoPoolPage(a1, 0LL);
      if ( v12 )
      {
        *a4 = v12;
        return v11;
      }
      MiFreeInPageSupportBlock(v11);
    }
    return 0LL;
  }
  return result;
}
