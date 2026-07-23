/*
 * XREFs of HvpFindNextDirtyRun @ 0x1400827F8
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401B5848 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpFindNextDirtyBlock @ 0x14048031C (HvpFindNextDirtyBlock.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400177F0 (RtlFindNextForwardRunClearCapped.c)
 */

char __fastcall HvpFindNextDirtyRun(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // edx
  int NextForwardRunClearCapped; // eax
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  unsigned int v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a1;
  v7 = *a2;
  if ( v7 >= *a1 )
    return 0;
  NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)a1, v7, 0xFFFFFFFF, &v17);
  v12 = *a2;
  v13 = NextForwardRunClearCapped;
  if ( !NextForwardRunClearCapped )
    goto LABEL_9;
  v14 = v17;
  if ( v17 == v12 )
  {
    v12 += v13;
    if ( v12 < v5 )
    {
      v13 = RtlFindNextForwardRunClearCapped((__int64)a1, v12, 0xFFFFFFFF, &v17);
      if ( v13 )
      {
        v14 = v17;
        goto LABEL_4;
      }
LABEL_9:
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
