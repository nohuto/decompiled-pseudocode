/*
 * XREFs of PipProcessDevNodeTree @ 0x1404583C8
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1401BFE4C (PnpProcessRebalance.c)
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140495ADC (PiProcessReenumeration.c)
 *     PiProcessStartSystemDevices @ 0x14054AFC8 (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x140614E5C (PiProcessResourceRequirementsChanged.c)
 *     PiRestartDevice @ 0x1406150F0 (PiRestartDevice.c)
 * Callees:
 *     PoFxActivateDevice @ 0x14001AA10 (PoFxActivateDevice.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PoFxIdleDevice @ 0x1400DC378 (PoFxIdleDevice.c)
 *     PoFxPrepareDevice @ 0x14010786C (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x140125B34 (PiCollapseEnumRequests.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401A8930 (__report_rangecheckfailure.c)
 *     Template_z @ 0x1401BFA48 (Template_z.c)
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x140457A40 (PipEnumerateCompleted.c)
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1404589E4 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x140458A70 (PnpCheckForActiveDependencies.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PnpProcessAssignResources @ 0x1404B1780 (PnpProcessAssignResources.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1404C67B4 (PnpSynchronizeDeviceEventQueue.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x1404F1A4C (PipProcessStartPhase2.c)
 *     PipProcessStartPhase1 @ 0x1404F29BC (PipProcessStartPhase1.c)
 *     PiDevCfgLogDeviceStarted @ 0x1405130C4 (PiDevCfgLogDeviceStarted.c)
 *     PipProcessRestartPhase1 @ 0x140618D28 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x140618DE8 (PipProcessRestartPhase2.c)
 */

__int64 __fastcall PipProcessDevNodeTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  int v7; // esi
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int v15; // esi
  __int64 v16; // rdx
  int v17; // edi
  int v18; // ecx
  int v19; // esi
  __int64 v20; // rax
  int restarted; // eax
  int started; // eax
  int v24; // eax
  unsigned __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh]
  unsigned int v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  unsigned int v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[208]; // [rsp+A0h] [rbp-60h] BYREF

  v40 = a3;
  v7 = a4;
  v41 = a2;
  v8 = a2;
  v39 = a1;
  v9 = a1;
  v37 = a1;
  if ( a2 && a4 != 1 && !*(_BYTE *)(a2 + 28) && !a7 )
  {
    if ( PiCollapseEnumRequests((PVOID *)a2) )
      v9 = IopRootDeviceNode;
    v39 = v9;
  }
  v10 = 0;
  v38 = 0;
  v32 = 0;
  v30 = 0;
  v36 = 0;
  while ( 2 )
  {
    if ( !a7 )
    {
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x19u) )
        Template_z(a1, &KMPnPEvt_AssignResources_Start, 0LL, *(const wchar_t **)(v9 + 48));
      v33 = 0;
      v36 = PnpProcessAssignResources(v9, a5, &v33);
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x19u) )
        Template_z(v11, &KMPnPEvt_AssignResources_Stop, v12, *(const wchar_t **)(v9 + 48));
      if ( v33 )
      {
        v28 = PipProcessDevNodeTree(IopRootDeviceNode, v8, v40, v7, 0, 0, 1);
        v10 = v32;
        v13 = 1LL;
        if ( v28 == -1073741106 )
          v10 = 1;
        v32 = v10;
        goto LABEL_12;
      }
      v10 = v32;
    }
    v13 = 1LL;
LABEL_12:
    v35 = 0;
    v14 = v9;
    v33 = 1;
    while ( 1 )
    {
      v15 = 1;
      if ( v10 )
        goto LABEL_106;
      if ( *(_DWORD *)(v14 + 300) != 769 && (*(_DWORD *)(v14 + 396) & 0x6000) == 0 )
      {
        if ( (unsigned __int8)PnpCheckForActiveDependencies(v14, 2LL, 0LL, 1LL) )
          PipSetDevNodeProblem(v14, 51LL, 0LL);
        v13 = 1LL;
      }
      v16 = *(unsigned int *)(v14 + 396);
      if ( (v16 & 0x6000) != 0 )
        goto LABEL_41;
      switch ( *(_DWORD *)(v14 + 300) )
      {
        case 0x301:
          if ( a4 == 3 && (v16 & 0x2000000) != 0 || a7 )
            goto LABEL_37;
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v14, 1LL, 0LL, 1LL) )
          {
            PipSetDevNodeProblem(v14, 51LL, 0LL);
            goto LABEL_37;
          }
          v17 = PiProcessNewDeviceNode(v14);
          if ( v17 >= 0 )
            v15 = 0;
          goto LABEL_36;
        case 0x302:
          if ( a7 )
            goto LABEL_37;
          v17 = PipCallDriverAddDevice(v14, v40, 0LL, 1LL);
          if ( v17 >= 0 )
          {
            PoFxPrepareDevice(v14, 0);
            v15 = 0;
            v36 = 1;
          }
          goto LABEL_36;
        case 0x304:
          if ( a7 )
            goto LABEL_37;
          PoFxActivateDevice(*(_QWORD *)(v14 + 32));
          *(_DWORD *)(v14 + 704) |= 0x200u;
          started = PipProcessStartPhase1(v14, a6, v30);
          goto LABEL_87;
        case 0x306:
          restarted = PipProcessStartPhase2(v14, v16, 0LL, 1LL);
          break;
        case 0x307:
          if ( (int)v16 < 0 )
          {
            v15 = 1;
            goto LABEL_37;
          }
          restarted = PipProcessStartPhase3(v14, a4 != 1);
          break;
        case 0x308:
          if ( a4 == 1 && v14 != v9 )
            goto LABEL_37;
          v15 = 2;
          if ( a7 || (v16 & 8) == 0 )
            goto LABEL_37;
          v17 = PipEnumerateDevice(v14, a6, v30);
          if ( v17 == 259 )
          {
            v30 = 1;
            v15 = 1;
            goto LABEL_37;
          }
          if ( v17 >= 0 )
          {
LABEL_78:
            v15 = 0;
            goto LABEL_36;
          }
          goto LABEL_36;
        case 0x30A:
          started = PipProcessRestartPhase1(v14, a6, v30, 1LL);
LABEL_87:
          v17 = started;
          if ( started == 259 )
          {
            v30 = 1;
LABEL_37:
            v34 = 0;
            v17 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v34, v13);
            if ( v17 != -1073741106 )
            {
              if ( v35 && !v34 )
              {
                v35 = 0;
                v17 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v34, v13);
                v30 &= -(v34 != 0);
              }
              if ( v17 != -1073741106 )
                goto LABEL_40;
            }
            goto LABEL_104;
          }
          v15 = 0;
          goto LABEL_36;
        case 0x30B:
          restarted = PipProcessRestartPhase2(v14, v16, 0LL, 1LL);
          break;
        case 0x30D:
          if ( (*(_DWORD *)(v14 + 704) & 0x200) != 0 )
          {
            PoFxIdleDevice(*(_QWORD *)(v14 + 32));
            *(_DWORD *)(v14 + 704) &= ~0x200u;
          }
          v17 = PipEnumerateCompleted(v14);
          v15 = 2;
          goto LABEL_36;
        default:
          goto LABEL_37;
      }
      v17 = restarted;
      if ( restarted >= 0 )
        goto LABEL_78;
      v17 = -1073741106;
LABEL_36:
      if ( v17 != -1073741106 )
        goto LABEL_37;
LABEL_104:
      if ( a7 )
      {
        v38 = v17;
LABEL_40:
        v9 = v39;
LABEL_41:
        if ( !a7 )
        {
          v18 = *(_DWORD *)(v14 + 704);
          if ( (v18 & 1) != 0 )
          {
            v24 = *(_DWORD *)(v14 + 300);
            if ( v24 > 775 || v24 < 770 || (*(_DWORD *)(v14 + 396) & 0x6000) != 0 )
            {
              *(_DWORD *)(v14 + 704) = v18 & 0xFFFFFFFE;
              PiDevCfgLogDeviceStarted(v14, 1LL, 0LL, v13);
            }
          }
        }
        if ( v30 && v15 && PnpAsyncOptions >= 0 )
          v15 = 1;
        v19 = v15 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
          {
            if ( !*(_QWORD *)(v14 + 8) )
              goto LABEL_45;
            v14 = *(_QWORD *)(v14 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
LABEL_45:
            if ( v14 == v9 )
            {
              v33 = v30 != 0 ? v33 : 0;
              goto LABEL_74;
            }
            if ( *(_QWORD *)v14 )
            {
              v14 = *(_QWORD *)v14;
              goto LABEL_48;
            }
            if ( v30 && PnpAsyncOptions > 0 )
              break;
            if ( *(_QWORD *)(v14 + 16) )
              v14 = *(_QWORD *)(v14 + 16);
          }
          v29 = *(_QWORD *)(v14 + 16);
          if ( v29 )
            v14 = *(_QWORD *)(v29 + 8);
LABEL_74:
          v35 = 1;
        }
LABEL_48:
        v7 = a4;
        v20 = v37;
        goto LABEL_49;
      }
      v9 = v39;
LABEL_106:
      v32 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v34, 1LL);
      v7 = a4;
      v30 = 0;
      PipProcessDevNodeTree(IopRootDeviceNode, v41, v40, a4, a5, a6, 1);
      v25 = *(unsigned __int16 *)(v9 + 40) >> 1;
      memmove(SourceString, *(const void **)(v9 + 48), v25 * 2);
      if ( v25 >= 201 )
        _report_rangecheckfailure();
      v26 = v37;
      SourceString[v25] = 0;
      ObfDereferenceObject(*(PVOID *)(v26 + 32));
      PpDevNodeUnlockTree(1LL);
      PnpSynchronizeDeviceEventQueue();
      PpDevNodeLockTree(1LL);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v27 = PnpDeviceObjectFromDeviceInstance(&DestinationString);
      if ( !v27 )
        return 3221225473LL;
      v9 = *(_QWORD *)(*(_QWORD *)(v27 + 312) + 40LL);
      v20 = v9;
      v39 = v9;
      v37 = v9;
      v14 = v9;
LABEL_49:
      v10 = v32;
      if ( !v33 )
        break;
      v13 = 1LL;
    }
    a1 = v36;
    v8 = v41;
    if ( v36 )
      continue;
    break;
  }
  if ( !a7 )
    ObfDereferenceObject(*(PVOID *)(v20 + 32));
  return v38;
}
