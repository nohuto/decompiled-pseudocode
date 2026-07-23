/*
 * XREFs of CmpLockTableConvertSharedToExclusive @ 0x1401B5180
 * Callers:
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140401954 (CmpTryConvertKcbLockSharedToExclusive.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall CmpLockTableConvertSharedToExclusive(__int64 a1, int a2)
{
  unsigned __int64 v2; // r10
  __int64 v4; // r11
  struct _KTHREAD *result; // rax
  int v6; // ecx
  __int64 v7; // r8
  unsigned __int64 *i; // rdx

  v2 = a1 | 1;
  v4 = *((int *)&CmpLockTable[1].HeaderX64 + 1);
  result = (struct _KTHREAD *)(2 * (a2 + 2LL));
  if ( (struct _KTHREAD *)CmpLockTable[a2 + 2].Alignment == KeGetCurrentThread() && CmpLockTable[a2 + 2].Region == a1 )
  {
    CmpLockTable[a2 + 2].Region = v2;
  }
  else
  {
    v6 = 0;
    v7 = 0LL;
    if ( v4 >= 0 )
    {
      for ( i = &CmpLockTable[2].Region; ; i += 2 )
      {
        result = KeGetCurrentThread();
        if ( (struct _KTHREAD *)*(i - 1) == result && *i == a1 )
          break;
        ++v6;
        if ( ++v7 > v4 )
          return result;
      }
      result = (struct _KTHREAD *)CmpLockTable;
      CmpLockTable[v6 + 2].Region = v2;
    }
  }
  return result;
}
