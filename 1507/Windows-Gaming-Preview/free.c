/*
 * XREFs of free @ 0x180026994
 * Callers:
 *     ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x18002193C (--1-$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ @ 0x180023E60 (-Destroy@-$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
