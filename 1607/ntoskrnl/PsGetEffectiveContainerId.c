/*
 * XREFs of PsGetEffectiveContainerId @ 0x1400A5C30
 * Callers:
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14005E3F4 (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PsGetEffectiveContainerId(int a1, struct _KTHREAD *a2, __int64 a3)
{
  PVOID WorkOnBehalfThread; // rax
  void *v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int128 v13; // xmm0
  int v14; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 >= 5 )
    return 3221225711LL;
  if ( a2 )
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 && a2 == KeGetCurrentThread() )
      return 0LL;
    WorkOnBehalfThread = PsGetWorkOnBehalfThread(a2, &v14);
    v8 = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      v9 = *(_QWORD *)(*((_QWORD *)WorkOnBehalfThread + 68) + 944LL);
      *(_DWORD *)(a3 + 16) |= 1u;
    }
    else
    {
      v9 = a2->Process[1].Affinity.Bitmap[16];
    }
    if ( !v9 )
    {
LABEL_9:
      if ( v14 )
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      return 0LL;
    }
    if ( a1 )
    {
      v10 = a1 - 2;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(v9 + 832);
LABEL_14:
        if ( !v11 )
          goto LABEL_9;
        v13 = *(_OWORD *)(v11 + 1240);
        goto LABEL_22;
      }
      v12 = v10 - 1;
      if ( !v12 )
      {
        v11 = *(_QWORD *)(v9 + 840);
        goto LABEL_14;
      }
      if ( v12 != 1 )
        goto LABEL_9;
    }
    v13 = *(_OWORD *)(v9 + 1240);
LABEL_22:
    *(_OWORD *)a3 = v13;
    goto LABEL_9;
  }
  return 3221225712LL;
}
