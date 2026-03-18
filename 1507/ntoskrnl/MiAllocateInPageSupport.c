/*
 * XREFs of MiAllocateInPageSupport @ 0x14005E9AC
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiAllocateInPageSupport(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rax

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
  result = MiGetInPageSupportBlock(v9, a2);
  if ( !result )
  {
    if ( a4 )
    {
      LOBYTE(v11) = 17;
      MiUnlockProtoPoolPage(v8, v11);
    }
    else
    {
      if ( (v6 & 1) == 0 )
        return 0LL;
      v6 &= ~1u;
      *a3 = 16;
    }
    v13 = (char *)MiGetInPageSupportBlock(v6, v11);
    if ( v13 )
      goto LABEL_13;
    if ( (v6 & 1) == 0 )
      return (__int64)v13;
    *a3 = 16;
    v13 = (char *)MiGetInPageSupportBlock(v6 & 0xFFFFFFFE, v12);
    if ( v13 )
    {
LABEL_13:
      if ( !a4 )
        return (__int64)v13;
      v14 = MiLockProtoPoolPage(a1, 0LL);
      if ( v14 )
      {
        *a4 = v14;
        return (__int64)v13;
      }
      MiFreeInPageSupportBlock(v13);
    }
    return 0LL;
  }
  return result;
}
