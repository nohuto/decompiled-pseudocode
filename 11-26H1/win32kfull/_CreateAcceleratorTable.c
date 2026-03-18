/*
 * XREFs of _CreateAcceleratorTable @ 0x14021ABA8
 * Callers:
 *     NtUserCreateAcceleratorTable @ 0x14021AAE0 (NtUserCreateAcceleratorTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall CreateAcceleratorTable(const void *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // ebx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = a2;
  v3 = a2 + 34;
  if ( a2 + 34 < a2 )
    return 0LL;
  v4 = PtiCurrent((__int64)a1);
  LOBYTE(v5) = 8;
  v6 = HMAllocObject(v4, 0LL, v5, v3);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  memmove((void *)(v6 + 28), a1, (unsigned int)v2);
  *(_DWORD *)(v7 + 24) = v2 / 6;
  v8 = 3LL * ((unsigned int)(v2 / 6) - 1);
  *(_BYTE *)(v7 + 2 * v8 + 28) |= 0x80u;
  return v7;
}
