/*
 * XREFs of DpiValidateSpbResource @ 0x1C016F48C
 * Callers:
 *     DpCloseSpbResource @ 0x1C016EA10 (DpCloseSpbResource.c)
 *     DpReadSpbResource @ 0x1C016EDF0 (DpReadSpbResource.c)
 *     DpSpbResourceIoControl @ 0x1C016EF90 (DpSpbResourceIoControl.c)
 *     DpWriteSpbResource @ 0x1C016F160 (DpWriteSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiValidateSpbResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  struct _EX_RUNDOWN_REF *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = a2;
  v7 = a1;
  if ( KeGetCurrentIrql() )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v8[6] = 0LL;
    v8[3] = 275LL;
    v8[4] = 21LL;
    v8[5] = a3;
    v8[7] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v8);
    return 3221225485LL;
  }
  if ( a1
    && (a1 = *(_QWORD *)(a1 + 64)) != 0
    && (a2 = 1953656900LL, *(_DWORD *)(a1 + 16) == 1953656900)
    && (unsigned int)(*(_DWORD *)(a1 + 20) - 2) <= 1 )
  {
    if ( v6
      && *(_DWORD *)(v6 + 16) == 1953656900
      && *(_DWORD *)(v6 + 20) == 12
      && *(_QWORD *)(v6 + 32) == a1
      && *(_DWORD *)(v6 + 48) )
    {
      v10 = (struct _EX_RUNDOWN_REF *)(v6 + 24);
      if ( (_BYTE)a4 )
      {
        ExWaitForRundownProtectionRelease(v10);
LABEL_15:
        *a5 = v6;
        return 0LL;
      }
      if ( ExAcquireRundownProtection(v10) )
        goto LABEL_15;
    }
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = a3;
    *(_QWORD *)(v11 + 32) = v6;
    WdLogEvent5_WdWarning(v11);
    return 3221225712LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = a3;
    *(_QWORD *)(v12 + 32) = v7;
    WdLogEvent5_WdWarning(v12);
    return 3221225711LL;
  }
}
