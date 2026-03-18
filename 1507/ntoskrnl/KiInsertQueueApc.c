/*
 * XREFs of KiInsertQueueApc @ 0x14000D1B4
 * Callers:
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x14000C7EC (KiInsertDeferredPreemptionApc.c)
 *     KiSuspendThread @ 0x14000CA68 (KiSuspendThread.c)
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KeTryToInsertQueueApc @ 0x140204508 (KeTryToInsertQueueApc.c)
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
  __int64 *v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  __int64 **v11; // rdx

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
      v10 = (__int64 *)(a1 + 16);
      v11 = (__int64 **)(v2 + 16LL * v3);
      result = *v11;
      *v10 = (__int64)*v11;
      v10[1] = (__int64)v11;
      if ( (__int64 **)result[1] != v11 )
        __fastfail(3u);
      result[1] = (__int64)v10;
      *v11 = v10;
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
    v7 = (__int64 *)(v2 + 16LL * v3);
    for ( result = (__int64 *)v7[1]; result != v7 && result[4]; result = (__int64 *)result[1] )
      ;
    v8 = *result;
    v9 = (__int64 *)(a1 + 16);
    *v9 = *result;
    v9[1] = (__int64)result;
    if ( *(__int64 **)(v8 + 8) != result )
      __fastfail(3u);
    *(_QWORD *)(v8 + 8) = v9;
    *result = (__int64)v9;
  }
  return result;
}
