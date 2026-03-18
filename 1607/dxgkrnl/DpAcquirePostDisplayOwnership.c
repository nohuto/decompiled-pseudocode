/*
 * XREFs of DpAcquirePostDisplayOwnership @ 0x1C00FC3E0
 * Callers:
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C0192560 (DpGetPostDisplayInfoPlusEdid.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall DpAcquirePostDisplayOwnership(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // edx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = 0;
  if ( KeGetCurrentIrql() > 1u )
  {
    v4 = -1073741811;
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a1);
    v8[3] = 275LL;
    v8[4] = 21LL;
    v8[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  else if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C0057178 && a1 == qword_1C0057180 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
      {
        v6 = *(_DWORD *)(v5 + 236);
        if ( v6 != 2 && (*(_DWORD *)(v5 + 240) != 2 || ((v6 - 3) & 0xFFFFFFFC) != 0 || v6 == 4) )
          *(_BYTE *)(v5 + 3696) |= 4u;
      }
    }
    if ( qword_1C00570C0 == a1 )
    {
      memmove(a2, dword_1C00570D0, 0x20uLL);
    }
    else
    {
      v9 = WdLogNewEntry5_WdEvent(v5);
      *(_QWORD *)(v9 + 24) = 0LL;
      WdLogEvent5_WdEvent(v9);
      memset(a2, 0, 0x20uLL);
      a2[6] = -1;
    }
  }
  else
  {
    v4 = -1073741811;
    v10 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  return v4;
}
