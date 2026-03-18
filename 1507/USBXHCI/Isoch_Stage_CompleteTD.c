/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C0026914
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00258F8 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0028104 (Isoch_Transfer_CompleteStaleStages.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002071C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0023F38 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0027064 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Stage_Release @ 0x1C00279C8 (Isoch_Stage_Release.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0027EEC (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C0029304 (WPP_RECORDER_SF_DDqqD.c)
 */

void __fastcall Isoch_Stage_CompleteTD(_DWORD *a1, unsigned int a2, __int64 a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 v6; // rdi
  char v7; // r11
  _DWORD *v8; // r15
  unsigned int v9; // r9d
  _BYTE *v10; // r12
  int v11; // edx
  int v12; // ebp
  int v13; // r13d
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned int v17; // ebp
  __int64 v18; // r15
  _DWORD *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  int UsbdStatusFromTrbCompletionCode; // eax
  int v23; // edx
  KIRQL v24; // dl
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]

  v6 = *(_QWORD *)a1;
  v7 = a4;
  v8 = a6;
  v9 = a2;
  v10 = a5;
  v11 = 0;
  v12 = a1[12];
  v13 = a3;
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 32LL) + 140LL;
  *a6 = 0;
  *a5 = 0;
  v17 = v12 - 1;
  if ( v17 && *(_DWORD *)(v15 + 12LL * (v17 - 1) + 8) == -1 )
  {
    v18 = (int)(v17 - 1);
    if ( (int)(v17 - 1) >= 0 )
    {
      v19 = (_DWORD *)(v15 + 4 * ((int)(v17 - 1) + 2 * ((int)(v17 - 1) + 1LL)));
      do
      {
        if ( *v19 != -1 )
          break;
        v20 = *(_QWORD *)(v14 + 56);
        LODWORD(v26) = *(_DWORD *)(v20 + 144);
        LODWORD(v25) = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(v20 + 80),
          2u,
          a3,
          0x18u,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v25,
          v26,
          *(_QWORD *)(v6 + 24),
          a1);
        *v19 = -1073545216;
        v19 -= 3;
        --v18;
      }
      while ( v18 >= 0 );
      v9 = a2;
      v10 = a5;
      v7 = a4;
    }
    v8 = a6;
  }
  LODWORD(v21) = 3 * v17;
  if ( *(_DWORD *)(v15 + 12LL * v17 + 8) == -1 && (v9 - 26 > 2 || v13) )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(v9, 0xFFFFFFFF);
    *(_DWORD *)(v15 + 4 * v21 + 8) = UsbdStatusFromTrbCompletionCode;
    *(_DWORD *)(v6 + 68) += v13;
    if ( *(_DWORD *)(*(_QWORD *)(v14 + 56) + 120LL) == 5 )
      *(_DWORD *)(v15 + 4 * v21 + 4) = v13;
  }
  if ( v17 == a1[11] )
  {
    if ( v7 )
    {
      v23 = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL), v23, v21, 25);
      Isoch_Stage_FreeScatterGatherList(v14, a1);
      *(_BYTE *)(v14 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 88));
      Isoch_Stage_Release(v14, a1);
      ++*(_DWORD *)(v6 + 96);
      if ( *(_DWORD *)(v6 + 84) == *(_DWORD *)(v6 + 80) )
        Isoch_Transfer_CompleteCancelable(v14, v6, -1, -1, 0, 0);
      --*(_DWORD *)(v14 + 328);
      v24 = *(_BYTE *)(v14 + 96);
      *v8 = *(_DWORD *)(v14 + 328);
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 88), v24);
      *v10 = 1;
    }
    else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL),
        v11,
        *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL),
        26);
    }
  }
}
