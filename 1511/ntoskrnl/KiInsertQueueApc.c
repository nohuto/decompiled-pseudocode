/*
 * XREFs of KiInsertQueueApc @ 0x140031620
 * Callers:
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     KiSuspendThread @ 0x140030EF4 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400312FC (KiInsertDeferredPreemptionApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x1401C77E0 (KeTryToInsertQueueApc.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall KiInsertQueueApc(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  char v3; // al
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 *result; // rax
  __int64 *v7; // rcx
  __int64 **v8; // rdx
  __int64 *v9; // rdx
  __int64 v10; // rdx
  __int64 *v11; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 80) && *(_BYTE *)(v1 + 586) )
  {
    v2 = v1 + 600;
  }
  else
  {
    v2 = v1 + 152;
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(v1 + 586);
  }
  v3 = *(_BYTE *)(a1 + 81);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( v3 && *(void (__fastcall __noreturn **)())(a1 + 32) == KiSchedulerApcTerminate )
    {
      *(_BYTE *)(v1 + 194) = 1;
      v7 = (__int64 *)(a1 + 16);
      v8 = (__int64 **)(v2 + 16LL * v3);
      result = *v8;
      *v7 = (__int64)*v8;
      v7[1] = (__int64)v8;
      if ( (__int64 **)result[1] != v8 )
        __fastfail(3u);
      result[1] = (__int64)v7;
      *v8 = v7;
    }
    else
    {
      v4 = (_QWORD *)(a1 + 16);
      v5 = v2 + 16LL * v3;
      result = *(__int64 **)(v5 + 8);
      *v4 = v5;
      v4[1] = result;
      if ( *result != v5 )
        __fastfail(3u);
      *result = (__int64)v4;
      *(_QWORD *)(v5 + 8) = v4;
    }
  }
  else
  {
    v9 = (__int64 *)(v2 + 16LL * v3);
    for ( result = (__int64 *)v9[1]; result != v9; result = (__int64 *)result[1] )
    {
      if ( !result[4] )
        break;
    }
    v10 = *result;
    v11 = (__int64 *)(a1 + 16);
    *v11 = *result;
    v11[1] = (__int64)result;
    if ( *(__int64 **)(v10 + 8) != result )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = v11;
    *result = (__int64)v11;
  }
  return result;
}
