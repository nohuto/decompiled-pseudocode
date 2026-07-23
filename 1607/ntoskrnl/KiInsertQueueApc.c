/*
 * XREFs of KiInsertQueueApc @ 0x1400C8154
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KiSuspendThread @ 0x1400C7874 (KiSuspendThread.c)
 *     KeRequestTerminationThread @ 0x1400C7C80 (KeRequestTerminationThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400C7DD4 (KiInsertDeferredPreemptionApc.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KeTryToInsertQueueApc @ 0x1401D65B8 (KeTryToInsertQueueApc.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiInsertQueueApc(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  char v3; // al
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rcx

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
      v7 = (_QWORD *)(a1 + 16);
      v8 = v2 + 16LL * v3;
      result = *(_QWORD **)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *v7 = result;
      v7[1] = v8;
      result[1] = v7;
      *(_QWORD *)v8 = v7;
    }
    else
    {
      v4 = (_QWORD *)(a1 + 16);
      v5 = v2 + 16LL * v3;
      result = *(_QWORD **)(v5 + 8);
      if ( *result != v5 )
        __fastfail(3u);
      *v4 = v5;
      v4[1] = result;
      *result = v4;
      *(_QWORD *)(v5 + 8) = v4;
    }
  }
  else
  {
    v9 = (_QWORD *)(v2 + 16LL * v3);
    for ( result = (_QWORD *)v9[1]; result != v9 && result[4]; result = (_QWORD *)result[1] )
      ;
    v10 = *result;
    v11 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD **)(*result + 8LL) != result )
      __fastfail(3u);
    *v11 = v10;
    v11[1] = result;
    *(_QWORD *)(v10 + 8) = v11;
    *result = v11;
  }
  return result;
}
