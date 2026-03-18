/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C000C760
 * Callers:
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C00014F4 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002B838 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00017DC (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0001BA0 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C000CAB8 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000D300 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_Release @ 0x1C002BE8C (Isoch_Stage_Release.c)
 */

void __fastcall Isoch_Stage_CompleteTD(_DWORD *a1, int a2, int a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 v6; // rbp
  int v7; // ebx
  _DWORD *v8; // rsi
  char v9; // r10
  _BYTE *v10; // r14
  int v11; // r9d
  int v12; // r13d
  int v13; // r8d
  __int64 v15; // rdi
  __int64 v16; // r12
  unsigned int v17; // r13d
  __int64 v18; // r14
  _DWORD *v19; // rsi
  int v20; // edx
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // edx
  KIRQL v24; // dl
  int v25; // edx

  v6 = *(_QWORD *)a1;
  v7 = 0;
  v8 = a6;
  v9 = a4;
  v10 = a5;
  v11 = a3;
  v12 = a1[12];
  v13 = a2;
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 32LL) + 140LL;
  *a6 = 0;
  *a5 = 0;
  v17 = v12 - 1;
  if ( v17 && *(_DWORD *)(v16 + 12LL * (v17 - 1) + 8) == -1 )
  {
    v18 = (int)(v17 - 1);
    if ( (int)(v17 - 1) >= 0 )
    {
      v19 = (_DWORD *)(v16 + 4 * ((int)(v17 - 1) + 2 * ((int)(v17 - 1) + 1LL)));
      do
      {
        if ( *v19 != -1 )
          break;
        v20 = *(unsigned __int8 *)(*(_QWORD *)(v15 + 48) + 135LL);
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(v15 + 56) + 80LL),
          v20,
          v13,
          24,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v15 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v15 + 56) + 144LL),
          *(_QWORD *)(v6 + 24),
          (char)a1);
        *v19 = -1073545216;
        v19 -= 3;
        --v18;
      }
      while ( v18 >= 0 );
      v13 = a2;
      v7 = 0;
      v11 = a3;
      v8 = a6;
      v9 = a4;
    }
    v10 = a5;
  }
  v21 = v16 + 12LL * v17;
  if ( *(_DWORD *)(v21 + 8) == -1 && ((unsigned int)(v13 - 26) > 2 || v11) )
  {
    switch ( v13 )
    {
      case 0:
        v7 = -1;
        break;
      case 1:
      case 13:
      case 26:
      case 28:
        break;
      case 2:
        v7 = -1073741805;
        break;
      case 3:
      case 31:
        v7 = -1073741806;
        break;
      case 6:
        v7 = -1073741820;
        break;
      case 10:
        v7 = -1073741803;
        break;
      case 20:
        v7 = -1073741804;
        break;
      case 23:
        v7 = -1073545216;
        break;
      case 27:
        v7 = -1073610752;
        break;
      case 34:
        v7 = -1073741802;
        break;
      default:
        v7 = -1073741807;
        break;
    }
    *(_DWORD *)(v21 + 8) = v7;
    *(_DWORD *)(v6 + 68) += v11;
    if ( *(_DWORD *)(*(_QWORD *)(v15 + 56) + 120LL) == 5 )
      *(_DWORD *)(v21 + 4) = v11;
  }
  v22 = a1[11];
  if ( v17 == v22 )
  {
    if ( v9 )
    {
      v23 = *(unsigned __int8 *)(*(_QWORD *)(v15 + 48) + 135LL);
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v15 + 56) + 80LL), v23, v22 - a1[10] + 1, 25);
      Isoch_Stage_FreeScatterGatherList(v15, a1);
      *(_BYTE *)(v15 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 88));
      Isoch_Stage_Release(v15, a1);
      ++*(_DWORD *)(v6 + 96);
      if ( *(_DWORD *)(v6 + 84) == *(_DWORD *)(v6 + 80) )
        Isoch_Transfer_CompleteCancelable(v15, (__int64 *)v6, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0);
      --*(_DWORD *)(v15 + 328);
      v24 = *(_BYTE *)(v15 + 96);
      *v8 = *(_DWORD *)(v15 + 328);
      KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 88), v24);
      *v10 = 1;
    }
    else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v25 = *(unsigned __int8 *)(*(_QWORD *)(v15 + 48) + 135LL);
      LOBYTE(v25) = 5;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v15 + 56) + 80LL), v25, v22 - a1[10] + 1, 26);
    }
  }
}
