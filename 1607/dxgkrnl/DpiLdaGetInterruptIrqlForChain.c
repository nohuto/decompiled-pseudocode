/*
 * XREFs of DpiLdaGetInterruptIrqlForChain @ 0x1C019D844
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C00EC25C (DpiFdoConnectInterrupt.c)
 * Callees:
 *     DpiFdoGetInterruptIrql @ 0x1C00EC384 (DpiFdoGetInterruptIrql.c)
 */

__int64 __fastcall DpiLdaGetInterruptIrqlForChain(__int64 a1, unsigned __int8 *a2)
{
  int InterruptIrql; // edi
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 result; // rax
  unsigned __int8 v16; // [rsp+40h] [rbp+8h] BYREF

  InterruptIrql = -1073741823;
  v5 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v9 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v9 + 508) != 1 )
  {
    v10 = *(_QWORD *)(v9 + 2592);
    if ( !v10 )
    {
LABEL_13:
      InterruptIrql = -1071774666;
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v14[3] = 275LL;
      v14[4] = 21LL;
      v14[5] = -1071774666LL;
      WdLogEvent5_WdCriticalError(v14);
      goto LABEL_14;
    }
    v9 = *(_QWORD *)(v10 + 64);
  }
  v11 = *(_DWORD *)(v9 + 2600);
  v12 = 0LL;
  if ( v11 )
  {
    v13 = *(_QWORD *)(v9 + 2592);
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v13 + 8 * v12) + 64LL);
      if ( (unsigned int)(*(_DWORD *)(v7 + 236) - 1) > 1 )
        goto LABEL_13;
      v7 = *(_QWORD *)(v7 + 1152);
      if ( !v7 )
        goto LABEL_13;
      InterruptIrql = DpiFdoGetInterruptIrql(v7, &v16);
      if ( InterruptIrql >= 0 )
      {
        v6 = v5;
        if ( v5 < v16 )
          v6 = v16;
        v12 = (unsigned int)(v12 + 1);
        v5 = v6;
        if ( (unsigned int)v12 < v11 )
          continue;
      }
      break;
    }
  }
LABEL_14:
  result = (unsigned int)InterruptIrql;
  *a2 = v5;
  return result;
}
