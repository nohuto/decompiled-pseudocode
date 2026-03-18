/*
 * XREFs of KiDisconnectInterruptInternal @ 0x14014B4FC
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14014B3DC (KiDisconnectInterruptCommon.c)
 *     KiProcessPendingDisconnect @ 0x140207E90 (KiProcessPendingDisconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDisconnectInterruptInternal(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned int v5; // r8d
  __int64 v6; // rdi
  _BYTE *v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rcx

  v4 = 0;
  v5 = -1073741585;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(unsigned int *)(a1 + 88);
    v7 = KeGetCurrentPrcb()->InterruptObject[v6];
    if ( !v7[93] && (!*((_QWORD *)v7 + 1) || *((_BYTE **)v7 + 1) == v7 + 8) )
      v4 = 1;
    if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v7
         + 10) != KiChainedDispatch
      || v4 )
    {
      HalDisableInterrupt(a2);
      KeGetCurrentPrcb()->InterruptObject[v6] = 0LL;
      v5 = 0;
    }
    else
    {
      if ( (_BYTE *)a1 == v7 )
      {
        v7 = (_BYTE *)(*((_QWORD *)v7 + 1) - 8LL);
        *((_QWORD *)v7 + 10) = KiChainedDispatch;
        KeGetCurrentPrcb()->InterruptObject[v6] = v7;
      }
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v8 + 8) != a1 + 8 || *v9 != a1 + 8 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = *((_QWORD *)v7 + 1) - 8LL;
      if ( v7 == (_BYTE *)v10 && *(_BYTE *)(v10 + 93) )
      {
        *(_QWORD *)(v10 + 80) = KiInterruptDispatch;
        KeGetCurrentPrcb()->InterruptObject[v6] = (void *)v10;
      }
      v5 = 296;
    }
    *(_BYTE *)(a1 + 95) = 0;
  }
  return v5;
}
