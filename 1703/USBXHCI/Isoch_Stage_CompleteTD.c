/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C000CF90
 * Callers:
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0002884 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C090 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00286C0 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00016C4 (TR_ReleaseSegments.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0002B40 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0003048 (Isoch_Stage_FreeScatterGatherList.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C000350C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     StageQueue_Release @ 0x1C000354C (StageQueue_Release.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C000D218 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000DCB0 (WPP_RECORDER_SF_DDqq.c)
 */

void __fastcall Isoch_Stage_CompleteTD(PMDL *a1, unsigned int a2, int a3, char a4, _BYTE *a5, _DWORD *a6)
{
  PMDL v6; // rbp
  char v7; // r10
  _BYTE *v10; // r12
  int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rdi
  unsigned int v15; // ebx
  _DWORD *v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int UsbdStatusFromTrbCompletionCode; // eax
  __int64 v21; // r9
  KIRQL v22; // dl
  int v23; // edx
  PMDL v24; // rdi
  _DWORD *v25; // [rsp+90h] [rbp+8h]
  unsigned int v26; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+B8h] [rbp+30h]

  v26 = a2;
  v6 = *a1;
  v7 = a4;
  v10 = a5;
  v12 = *((_DWORD *)a1 + 12);
  v13 = *(_QWORD *)&(*a1)->ByteCount;
  v14 = (__int64)(*a1)->StartVa + 140;
  *a6 = 0;
  *a5 = 0;
  v15 = v12 - 1;
  if ( v15 )
  {
    if ( *(_DWORD *)(v14 + 12LL * (v15 - 1) + 8) == -1 )
    {
      v28 = (int)(v15 - 1);
      if ( (int)(v15 - 1) >= 0 )
      {
        v16 = (_DWORD *)(v14 + 4 * ((int)(v15 - 1) + 2 * ((int)(v15 - 1) + 1LL)));
        v25 = v16;
        do
        {
          if ( *v16 != -1 )
            break;
          v17 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
            v17,
            a3,
            24,
            (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
            (char)v6->MappedSystemVa,
            (char)a1);
          --v28;
          *v25 = -1073545216;
          v16 = v25 - 3;
          v25 -= 3;
        }
        while ( v28 >= 0 );
        v10 = a5;
        a2 = v26;
        v7 = a4;
      }
    }
  }
  if ( *(_DWORD *)(v14 + 12LL * v15 + 8) == -1 && (a2 - 26 > 2 || a3) )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(v13, a2, 0xFFFFFFFF);
    *(_DWORD *)(v21 + 8) = UsbdStatusFromTrbCompletionCode;
    HIDWORD(v6[1].Process) += a3;
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 56) + 120LL) == 5 )
      *(_DWORD *)(v21 + 4) = a3;
  }
  v18 = *((_DWORD *)a1 + 11);
  if ( v15 == v18 )
  {
    if ( v7 )
    {
      v23 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL), v23, v18 - *((_DWORD *)a1 + 10) + 1, 25);
      Isoch_Stage_FreeScatterGatherList(v13, a1);
      *(_BYTE *)(v13 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 88));
      v24 = *a1;
      if ( *((_BYTE *)a1 + 56) )
      {
        IoFreeMdl(a1[8]);
        a1[8] = 0LL;
        *((_BYTE *)a1 + 56) = 0;
      }
      TR_ReleaseSegments(v13, (unsigned __int64 *)a1 + 1, 1);
      TR_ReleaseSegments(v13, (unsigned __int64 *)a1 + 3, 0);
      StageQueue_Release((unsigned __int8 *)&v24[2].Process, (unsigned __int8 *)a1);
      ++LODWORD(v6[2].Next);
      if ( HIDWORD(v6[1].StartVa) == LODWORD(v6[1].StartVa) )
        Isoch_Transfer_CompleteCancelable(v13, (__int64 *)v6, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0);
      --*(_DWORD *)(v13 + 328);
      v22 = *(_BYTE *)(v13 + 96);
      *a6 = *(_DWORD *)(v13 + 328);
      KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 88), v22);
      *v10 = 1;
    }
    else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
      LOBYTE(v19) = 5;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL), v19, v18 - *((_DWORD *)a1 + 10) + 1, 26);
    }
  }
}
