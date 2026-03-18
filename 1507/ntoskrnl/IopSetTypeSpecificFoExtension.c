/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x1400718D8
 * Callers:
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x140073CAC (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x14015AC04 (IoSetOplockKeyContext.c)
 *     IopSymlinkSetFoExtension @ 0x140559B88 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetTypeSpecificFoExtension(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 6 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
