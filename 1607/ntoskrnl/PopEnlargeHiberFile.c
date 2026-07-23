/*
 * XREFs of PopEnlargeHiberFile @ 0x14052F674
 * Callers:
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x14052F3EC (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  signed __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6288LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5);
  if ( v3 >= 0 && a1 )
    *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  return (unsigned int)v3;
}
