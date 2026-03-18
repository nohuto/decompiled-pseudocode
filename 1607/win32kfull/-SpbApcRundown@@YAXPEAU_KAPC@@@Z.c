/*
 * XREFs of ?SpbApcRundown@@YAXPEAU_KAPC@@@Z @ 0x1C01C7C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SpbApcRundown(struct _KAPC *a1, __int64 a2, __int64 a3)
{
  Win32FreePool(a1, a2, a3);
}
