/*
 * XREFs of PopGetRangeCount @ 0x14014EC20
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 */

__int64 __fastcall PopGetRangeCount(_DWORD *a1)
{
  unsigned int v1; // ebx
  unsigned int *v2; // rbp
  int v4; // esi
  unsigned int v5; // edx
  int NextForwardRunClearCapped; // eax
  int v7; // eax
  unsigned int i; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1 + 8;
  v4 = 0;
  v5 = 0;
  for ( i = 0; v5 < *v2; i = v5 )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)v2, v5, 0xFFFFFFFF, &i);
    ++v4;
    v5 = NextForwardRunClearCapped + i;
  }
  i = 0;
  if ( a1[12] )
  {
    do
    {
      v7 = RtlFindNextForwardRunClearCapped((__int64)(a1 + 12), v1, 0xFFFFFFFF, &i);
      ++v4;
      v1 = v7 + i;
      i = v1;
    }
    while ( v1 < a1[12] );
  }
  return (unsigned int)(v4 + a1[20]);
}
