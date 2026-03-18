/*
 * XREFs of PopFxActivateComponentWorker @ 0x1400DAF10
 * Callers:
 *     PopFxActivateComponent @ 0x1400DAE60 (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1400DB11C (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1400DAE60 (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400DAFA4 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x1400DB738 (PopPluginComponentActive.c)
 *     PopFxCompleteComponentActivation @ 0x1400DC434 (PopFxCompleteComponentActivation.c)
 */

void __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // r8
  bool v9; // bl
  KIRQL v10; // al
  int v11; // edx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rbx
  KIRQL v15; // [rsp+60h] [rbp+18h]

  PopFxAddRefDevice(a1);
  if ( *(_DWORD *)(a2 + 172) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v11 = *(_DWORD *)(a2 + 172);
    v12 = 0LL;
    v15 = v10;
    *(_DWORD *)(a2 + 184) = v11;
    if ( v11 )
    {
      do
      {
        v13 = *(_QWORD *)(a2 + 176);
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * *(unsigned int *)(v13 + 8 * v12));
        *(_BYTE *)(v13 + 8 * v12 + 4) = 1;
        PopFxActivateComponent(a1, v14, 2LL, a3);
        if ( *(int *)(v14 + 88) < 0 )
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v12 + 4) = 0;
          --*(_DWORD *)(a2 + 184);
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *(_DWORD *)(a2 + 172) );
      v10 = v15;
    }
    v9 = *(_DWORD *)(a2 + 184) == 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 128), v10);
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
      PopFxProcessWork(0LL);
  }
}
