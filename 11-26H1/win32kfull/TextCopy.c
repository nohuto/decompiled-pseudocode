/*
 * XREFs of TextCopy @ 0x1401C77D0
 * Callers:
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall TextCopy(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rbx

  v3 = a3;
  if ( a3 )
  {
    v5 = a3 - 1;
    v6 = *(_DWORD *)a1 >> 1;
    if ( (unsigned int)v6 >= v5 )
      v6 = v5;
    v3 = v6;
    v7 = 2 * v6;
    memmove(a2, *(const void **)(a1 + 8), 2 * v6);
    *(_WORD *)&a2[v7] = 0;
  }
  return v3;
}
