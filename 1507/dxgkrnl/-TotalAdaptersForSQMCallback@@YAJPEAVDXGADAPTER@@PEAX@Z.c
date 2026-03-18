/*
 * XREFs of ?TotalAdaptersForSQMCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DD5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 */

__int64 __fastcall TotalAdaptersForSQMCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  struct DXGADAPTER *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v5 = a1;
  v6 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v5);
  if ( *((_DWORD *)a1 + 40) == 1 && (*((_DWORD *)a1 + 71) & 2) == 0 )
    ++*a2;
  if ( v6 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v5);
  return 0LL;
}
