/*
 * XREFs of free @ 0x180026864
 * Callers:
 *     ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x180021550 (--1-$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ @ 0x180023D60 (-Destroy@-$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
