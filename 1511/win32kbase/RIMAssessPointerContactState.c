/*
 * XREFs of RIMAssessPointerContactState @ 0x1C00CAF80
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00C3300 (RIMOnTimerNotification.c)
 *     RIMDeliverEndStatesForAllActiveContacts @ 0x1C00C4BC8 (RIMDeliverEndStatesForAllActiveContacts.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CD3D0 (RIMValidatePointerDeviceCurrentState.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D4550 (RIMABSeekAndAbortLowerRankedActivity.c)
 * Callees:
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C000A808 (RIMResetPointerDeviceFrameContactIdMgr.c)
 *     EtwTracePointerDeviceContactTimerStart @ 0x1C00ABF20 (EtwTracePointerDeviceContactTimerStart.c)
 *     EtwTracePointerDeviceContactTimerStop @ 0x1C00ABF50 (EtwTracePointerDeviceContactTimerStop.c)
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90 (RIMMarkEndPointerMessageDelivery.c)
 *     RIMFindAndAbandonHoldingFrame @ 0x1C00C946C (RIMFindAndAbandonHoldingFrame.c)
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 */

LARGE_INTEGER __fastcall RIMAssessPointerContactState(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // r13
  unsigned __int64 v4; // rbp
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rcx
  __int64 QuadPart; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // r15d
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // r15
  BOOL v16; // edx
  int v17; // ebp
  _DWORD *v18; // rax
  int v19; // ebp
  __int64 v20; // rcx
  unsigned int v21; // r14d
  __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // [rsp+30h] [rbp-48h]
  unsigned int v25; // [rsp+80h] [rbp+8h]
  unsigned int v26; // [rsp+88h] [rbp+10h]

  v1 = (_QWORD *)(a1 + 568);
  v3 = *(_QWORD **)(a1 + 568);
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v26 = v4;
  result = KeQueryPerformanceCounter(0LL);
  QuadPart = result.QuadPart;
  if ( !*(_BYTE *)(a1 + 680) )
  {
    *(_BYTE *)(a1 + 680) = 1;
    EtwTracePointerDeviceContactTimerStart(v6.QuadPart);
    *(_BYTE *)(a1 + 681) = 0;
    if ( v3 != v1 )
    {
      while ( 1 )
      {
        v9 = *(v3 - 1);
        v10 = 0;
        v3 = (_QWORD *)*v3;
        v11 = 0;
        v25 = 0;
        v12 = *(_QWORD *)(v9 + 712);
        if ( v12 && (*(_DWORD *)(v12 + 4) & 2) != 0 )
        {
          RIMFindAndAbandonHoldingFrame(a1, *(_QWORD *)(v9 + 16));
          **(_DWORD **)(v9 + 712) = 0;
          *(_DWORD *)(*(_QWORD *)(v9 + 712) + 4LL) &= ~2u;
          RIMResetPointerDeviceFrameContactIdMgr(v13, v9);
          v11 = 1;
        }
        v14 = 0;
        if ( *(_DWORD *)(v9 + 720) )
          break;
LABEL_25:
        if ( v11 )
        {
          v21 = 0;
          if ( v10 )
          {
            v22 = 0LL;
            do
            {
              v23 = *(_QWORD *)(v9 + 696);
              if ( *(_DWORD *)(v23 + v22 + 2336) )
              {
                if ( (*(_DWORD *)(v23 + v22 + 2392) & 0x400) != 0 )
                  RIMRemoveContactFromActiveList(a1, v9, v21, 0LL);
              }
              ++v21;
              v22 += 2400LL;
            }
            while ( v21 < v10 );
          }
        }
        LODWORD(v4) = v26;
        if ( v3 == (_QWORD *)(a1 + 568) )
          goto LABEL_33;
      }
      while ( 1 )
      {
        v8 = *(_QWORD *)(v9 + 696);
        v15 = 2400LL * v14;
        if ( !*(_DWORD *)(v15 + v8 + 2336) )
          goto LABEL_23;
        v16 = (unsigned int)(v4 - *(_DWORD *)(v15 + v8 + 2248)) > *(_DWORD *)(v9 + 880);
        if ( *(_DWORD *)(v15 + v8 + 2340) )
        {
          if ( (unsigned int)(v4 - *(_DWORD *)(v15 + v8 + 2248)) > *(_DWORD *)(v9 + 880)
            && (v17 = *(_DWORD *)(v15 + v8 + 2392), (v17 & 0x20) == 0)
            || (v17 = *(_DWORD *)(v15 + v8 + 2392), (v17 & 0x40) != 0) )
          {
            v18 = *(_DWORD **)(v9 + 712);
            v19 = -__CFSHR__(v17, 7);
            if ( v18 && *v18 )
            {
              RIMFindAndAbandonHoldingFrame(a1, *(_QWORD *)(v9 + 16));
              **(_DWORD **)(v9 + 712) = 0;
              RIMResetPointerDeviceFrameContactIdMgr(v20, v9);
              v11 = 1;
            }
            v24 = v19;
            LODWORD(v4) = v26;
            RIMMarkEndPointerMessageDelivery(
              a1,
              v9,
              v14,
              v26,
              QuadPart,
              *(_DWORD *)(v15 + *(_QWORD *)(v9 + 696) + 2332),
              v24);
            goto LABEL_23;
          }
          LODWORD(v4) = v26;
        }
        if ( v16 )
          goto LABEL_22;
        if ( !__CFSHR__(*(_DWORD *)(v15 + v8 + 2392), 11) )
          goto LABEL_23;
        if ( v11 )
        {
LABEL_22:
          RIMRemoveContactFromActiveList(a1, v9, v14, 0LL);
LABEL_23:
          v10 = v25;
          goto LABEL_24;
        }
        if ( !__CFSHR__(*(_DWORD *)(v15 + v8 + 2392), 11) )
          goto LABEL_23;
        v10 = v14 + 1;
        v25 = v14 + 1;
LABEL_24:
        if ( ++v14 >= *(_DWORD *)(v9 + 720) )
          goto LABEL_25;
      }
    }
LABEL_33:
    *(_BYTE *)(a1 + 680) = 0;
    return (LARGE_INTEGER)EtwTracePointerDeviceContactTimerStop(v8);
  }
  return result;
}
