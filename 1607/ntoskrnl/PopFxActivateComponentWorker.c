/*
 * XREFs of PopFxActivateComponentWorker @ 0x1400BF4F0
 * Callers:
 *     PoFxActivateComponent @ 0x1400BEF70 (PoFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1400BF6F0 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponent @ 0x1401426E4 (PopFxActivateComponent.c)
 * Callees:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopFxAddRefDevice @ 0x1400BF584 (PopFxAddRefDevice.c)
 *     PopFxCompleteComponentActivation @ 0x1400BF8F4 (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x1400BFFEC (PopPluginComponentActive.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1401426E4 (PopFxActivateComponent.c)
 */

void __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, int *a4)
{
  __int64 v8; // r8
  bool v9; // bl
  __int64 v10; // r8
  KIRQL v11; // al
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rbx
  KIRQL v17; // [rsp+60h] [rbp+18h]

  PopFxAddRefDevice(a1);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v13 = *(_DWORD *)(a2 + 172);
    v14 = 0LL;
    v17 = v11;
    *(_DWORD *)(a2 + 184) = v13;
    if ( v13 )
    {
      do
      {
        v15 = *(_QWORD *)(a2 + 176);
        LOBYTE(v12) = a3;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * *(unsigned int *)(v15 + 8 * v14));
        *(_BYTE *)(v15 + 8 * v14 + 4) = 1;
        PopFxActivateComponent(a1, v16, 2LL, v12);
        if ( *(int *)(v16 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v14 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < *(_DWORD *)(a2 + 172) );
      v11 = v17;
    }
    v9 = *(_DWORD *)(a2 + 184) == 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 128), v11);
  }
  else
  {
    v9 = 1;
  }
  if ( a3 )
  {
    PopFxCompleteComponentActivation(a1);
  }
  else if ( v9 )
  {
    LOBYTE(v8) = 1;
    if ( (unsigned __int8)PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v8, a4) == 1 )
      PopFxProcessWork(0LL, a4, v10);
  }
}
