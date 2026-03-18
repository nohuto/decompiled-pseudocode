/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C000C230
 * Callers:
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0002760 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000B270 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002BE48 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00029B4 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0002EB0 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C000C4F8 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000CF64 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_Release @ 0x1C002C4A8 (Isoch_Stage_Release.c)
 */

void __fastcall Isoch_Stage_CompleteTD(_DWORD *a1, int a2, int a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 v6; // rbp
  int v7; // r15d
  char v9; // r10
  _BYTE *v10; // r13
  int v11; // r9d
  int v12; // ebx
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned int v16; // ebx
  _DWORD *v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  KIRQL v23; // dl
  _DWORD *v24; // [rsp+A0h] [rbp+8h]
  int v26; // [rsp+B0h] [rbp+18h]
  __int64 v28; // [rsp+C8h] [rbp+30h]

  v26 = a3;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  v9 = a4;
  v10 = a5;
  v11 = a2;
  v12 = a1[12];
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 32LL) + 140LL;
  *a6 = 0;
  *a5 = 0;
  v16 = v12 - 1;
  if ( v16 )
  {
    if ( *(_DWORD *)(v15 + 12LL * (v16 - 1) + 8) == -1 )
    {
      v28 = (int)(v16 - 1);
      if ( (int)(v16 - 1) >= 0 )
      {
        v17 = (_DWORD *)(v15 + 4 * ((int)(v16 - 1) + 2 * ((int)(v16 - 1) + 1LL)));
        v24 = v17;
        do
        {
          if ( *v17 != -1 )
            break;
          v18 = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL),
            v18,
            a3,
            24,
            (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v14 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v14 + 56) + 144LL),
            *(_QWORD *)(v6 + 24),
            (char)a1);
          --v28;
          *v24 = -1073545216;
          v17 = v24 - 3;
          v24 -= 3;
        }
        while ( v28 >= 0 );
        v10 = a5;
        a3 = v26;
        v11 = a2;
        v9 = a4;
      }
    }
  }
  v19 = v15 + 12LL * v16;
  if ( *(_DWORD *)(v19 + 8) == -1 && ((unsigned int)(v11 - 26) > 2 || a3) )
  {
    switch ( v11 )
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
    *(_DWORD *)(v19 + 8) = v7;
    *(_DWORD *)(v6 + 68) += a3;
    if ( *(_DWORD *)(*(_QWORD *)(v14 + 56) + 120LL) == 5 )
      *(_DWORD *)(v19 + 4) = a3;
  }
  v20 = a1[11];
  if ( v16 == v20 )
  {
    if ( v9 )
    {
      v22 = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL), v22, v20 - a1[10] + 1, 25);
      Isoch_Stage_FreeScatterGatherList(v14, a1);
      *(_BYTE *)(v14 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 88));
      Isoch_Stage_Release(v14, a1);
      ++*(_DWORD *)(v6 + 96);
      if ( *(_DWORD *)(v6 + 84) == *(_DWORD *)(v6 + 80) )
        Isoch_Transfer_CompleteCancelable(v14, (__int64 *)v6, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0);
      --*(_DWORD *)(v14 + 328);
      v23 = *(_BYTE *)(v14 + 96);
      *a6 = *(_DWORD *)(v14 + 328);
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 88), v23);
      *v10 = 1;
    }
    else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v21 = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
      LOBYTE(v21) = 5;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL), v21, v20 - a1[10] + 1, 26);
    }
  }
}
