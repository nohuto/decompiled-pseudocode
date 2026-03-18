/*
 * XREFs of DpAcquirePostDisplayOwnership @ 0x1C00E9AE0
 * Callers:
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C016A780 (DpGetPostDisplayInfoPlusEdid.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DpAcquirePostDisplayOwnership(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  void *v12; // rcx

  v4 = a2;
  v6 = 0;
  if ( KeGetCurrentIrql() > 1u )
  {
    v6 = -1073741811;
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a1);
    v9[6] = 0LL;
    v9[5] = &DpAcquirePostDisplayOwnership;
    v9[3] = 275LL;
    v9[4] = 21LL;
    v9[7] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v9);
    return v6;
  }
  if ( !a1 || !a2 )
  {
    v6 = -1073741811;
    v11 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v12 = DpEvalAcpiMethod;
    goto LABEL_22;
  }
  if ( KeGetCurrentThread() != (struct _KTHREAD *)qword_1C0046FB8 || a1 != qword_1C0046FC0 )
  {
    v6 = -1073741811;
    v11 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v12 = &DpAcquirePostDisplayOwnership;
LABEL_22:
    v11[3] = v12;
    v11[4] = 0LL;
    v11[5] = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return v6;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
    {
      a2 = (_DWORD *)*(unsigned int *)(v7 + 236);
      if ( (_DWORD)a2 != 2 && (*(_DWORD *)(v7 + 240) != 2 || (((_DWORD)a2 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)a2 == 4) )
        *(_BYTE *)(v7 + 2552) |= 4u;
    }
  }
  if ( qword_1C0046F00 == a1 )
  {
    memmove(v4, dword_1C0046F10, 0x20uLL);
  }
  else
  {
    v10 = WdLogNewEntry5_WdEvent(v7, a2, a1, a4);
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 24) = &DpAcquirePostDisplayOwnership;
    WdLogEvent5_WdEvent(v10);
    memset(v4, 0, 0x20uLL);
    v4[6] = -1;
  }
  return v6;
}
