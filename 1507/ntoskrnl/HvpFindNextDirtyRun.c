/*
 * XREFs of HvpFindNextDirtyRun @ 0x140062ABC
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E04C0 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 */

char __fastcall HvpFindNextDirtyRun(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int NextForwardRunClearCapped; // eax
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  unsigned int v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a1;
  v7 = *a2;
  if ( (unsigned int)v7 >= *a1 )
    return 0;
  NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(a1, v7, 0xFFFFFFFFLL, &v17);
  v12 = *a2;
  v13 = NextForwardRunClearCapped;
  if ( !NextForwardRunClearCapped )
    goto LABEL_8;
  v14 = v17;
  if ( v17 == v12 )
  {
    v12 += v13;
    if ( v12 < v5 )
    {
      v13 = RtlFindNextForwardRunClearCapped(a1, v12, 0xFFFFFFFFLL, &v17);
      if ( v13 )
      {
        v14 = v17;
        goto LABEL_4;
      }
LABEL_8:
      v14 = v5;
      goto LABEL_5;
    }
    return 0;
  }
LABEL_4:
  v5 = v14 + v13;
LABEL_5:
  v15 = a5;
  *a2 = v5;
  *a3 = v12;
  *a4 = v14;
  if ( v15 )
    *v15 = v14 - v12;
  return 1;
}
