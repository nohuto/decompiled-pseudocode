/*
 * XREFs of PsGetEffectiveContainerId @ 0x1400E2614
 * Callers:
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetEffectiveContainerId(int a1, struct _KTHREAD *a2, __int64 a3)
{
  unsigned __int64 Object; // rdx
  unsigned __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  int v10; // ecx
  __int128 v11; // xmm0

  if ( a1 >= 5 )
    return 3221225711LL;
  if ( a2 )
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 && a2 == KeGetCurrentThread() )
      return 0LL;
    Object = (unsigned __int64)a2[1].WaitBlock[1].Object;
    if ( Object )
    {
      v5 = (Object & 1) != 0
         ? *(_QWORD *)(*(_QWORD *)((Object & 0xFFFFFFFFFFFFFFFEuLL) + 544) + 944LL)
         : *(_QWORD *)(Object + 944);
      *(_DWORD *)(a3 + 16) |= 1u;
    }
    else
    {
      v5 = a2->Process[1].Affinity.Bitmap[16];
    }
    if ( !v5 )
      return 0LL;
    if ( a1 )
    {
      v6 = a1 - 1;
      if ( !v6 )
      {
        v8 = *(_QWORD *)(v5 + 832);
        goto LABEL_11;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
        v8 = *(_QWORD *)(v5 + 840);
LABEL_11:
        if ( !v8 )
          return 0LL;
        v11 = *(_OWORD *)(v8 + 1232);
LABEL_25:
        *(_OWORD *)a3 = v11;
        return 0LL;
      }
      v10 = v7 - 1;
      if ( !v10 )
      {
        v8 = *(_QWORD *)(v5 + 848);
        goto LABEL_11;
      }
      if ( v10 != 1 )
        return 0LL;
    }
    v11 = *(_OWORD *)(v5 + 1232);
    goto LABEL_25;
  }
  return 3221225712LL;
}
