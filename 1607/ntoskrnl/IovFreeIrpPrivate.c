/*
 * XREFs of IovFreeIrpPrivate @ 0x140700FA8
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrp @ 0x140055960 (IopFreeIrp.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     VfIoFreeIrp @ 0x14070BC98 (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      KeBugCheckEx(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      KeBugCheckEx(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter1) )
    IopFreeIrp(BugCheckParameter1, v2, v3, v4);
}
