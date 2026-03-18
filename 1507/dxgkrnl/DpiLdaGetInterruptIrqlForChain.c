/*
 * XREFs of DpiLdaGetInterruptIrqlForChain @ 0x1C016F5A0
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C00C6F90 (DpiFdoConnectInterrupt.c)
 * Callees:
 *     DpiFdoGetInterruptIrql @ 0x1C00C70D0 (DpiFdoGetInterruptIrql.c)
 */

__int64 __fastcall DpiLdaGetInterruptIrqlForChain(__int64 a1, unsigned __int8 *a2)
{
  int InterruptIrql; // edi
  unsigned __int8 v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+40h] [rbp+8h] BYREF

  InterruptIrql = -1073741823;
  v5 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v9 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v9 + 476) != 1 )
  {
    v10 = *(_QWORD *)(v9 + 1472);
    if ( !v10 )
    {
LABEL_12:
      InterruptIrql = -1071774666;
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v12[5] = DpiLdaGetInterruptIrqlForChain;
      v12[3] = 275LL;
      v12[4] = 21LL;
      v12[6] = 0LL;
      v12[7] = -1071774666LL;
      WdLogEvent5_WdCriticalError(v12);
      goto LABEL_13;
    }
    v9 = *(_QWORD *)(v10 + 64);
  }
  v11 = 0LL;
  if ( *(_DWORD *)(v9 + 1480) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1472) + 8 * v11) + 64LL);
      if ( (unsigned int)(*(_DWORD *)(v7 + 236) - 1) > 1 )
        goto LABEL_12;
      v7 = *(_QWORD *)(v7 + 1064);
      if ( !v7 )
        goto LABEL_12;
      InterruptIrql = DpiFdoGetInterruptIrql(v7, &v14);
      if ( InterruptIrql >= 0 )
      {
        v6 = v5;
        if ( v5 < v14 )
          v6 = v14;
        v11 = (unsigned int)(v11 + 1);
        v5 = v6;
        if ( (unsigned int)v11 < *(_DWORD *)(v9 + 1480) )
          continue;
      }
      break;
    }
  }
LABEL_13:
  result = (unsigned int)InterruptIrql;
  *a2 = v5;
  return result;
}
