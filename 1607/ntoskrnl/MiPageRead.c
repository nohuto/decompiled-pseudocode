/*
 * XREFs of MiPageRead @ 0x14002348C
 * Callers:
 *     MiPfExecuteReadList @ 0x14042B724 (MiPfExecuteReadList.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiPageRead(int a1, int a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  return IoPageReadEx(a1, a2, a3, a4, a5, a6, a7);
}
