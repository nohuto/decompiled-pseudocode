/*
 * XREFs of ControllerReset @ 0x1C0001000
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 *     NVMeHwAdapterControl @ 0x1C0001BB0 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0004F78 (NVMeControllerReset.c)
 * Callees:
 *     <none>
 */

char __fastcall ControllerReset(__int64 a1)
{
  unsigned int v2; // ebp
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  unsigned int i; // r14d
  int v7; // eax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 132) / 0xAu;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 20LL);
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 28LL);
  v5 = 0;
  if ( (v3 & 1) != 0 && (v4 & 1) == 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      if ( (v4 & 1) != 0 )
        break;
      StorPortStallExecution(10000LL);
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 28LL);
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 20LL) = v3 & 0xFFFFFFFE;
  _InterlockedOr(v9, 0);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 28LL);
  if ( v2 )
  {
    while ( (v7 & 1) != 0 )
    {
      StorPortStallExecution(10000LL);
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 28LL);
      if ( ++v5 >= v2 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( (v7 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 24) = 5;
      return 0;
    }
  }
  return 1;
}
