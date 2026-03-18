/*
 * XREFs of xxxSetInformationThread @ 0x1C00CE900
 * Callers:
 *     NtUserSetInformationThread @ 0x1C00CE800 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C00900B8 (RtlInitLargeUnicodeString.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00CE740 (xxxSetCsrssThreadDesktop.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C010F804 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C010F9B0 (-EndShutdown@@YAXJ@Z.c)
 *     xxxSetAutoRotationDocked @ 0x1C014F5A0 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C014F5D4 (xxxSetAutoRotationConvertible.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     QueueShutdownData @ 0x1C01D32C0 (QueueShutdownData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetInformationThread(void *a1, int a2, _QWORD *a3, int a4)
{
  NTSTATUS v6; // ebx
  __int64 ThreadWin32Thread; // rax
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  _QWORD *v13; // r8
  unsigned int v14; // r10d
  NTSTATUS v15; // eax
  struct _KTHREAD *v16; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 i; // rax
  NTSTATUS v21; // eax
  PVOID v22; // rdi
  __int64 v23; // rax
  _DWORD *v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  BOOL v29; // eax
  struct _KTHREAD *v30; // [rsp+40h] [rbp-69h]
  PVOID v31; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v32[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v33; // [rsp+58h] [rbp-51h]
  __int64 v34; // [rsp+60h] [rbp-49h]
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v36[2]; // [rsp+70h] [rbp-39h] BYREF
  PVOID *v37; // [rsp+78h] [rbp-31h]
  _BYTE v38[80]; // [rsp+90h] [rbp-19h] BYREF

  LODWORD(v31) = a4;
  v6 = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v30 = (struct _KTHREAD *)Object;
  if ( v6 >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
    if ( a2 == 10 )
    {
      v15 = SetCsrApiPortHandle(*a3);
      goto LABEL_14;
    }
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v26 = ValidateHwnd(*a3);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 16);
            if ( v27 )
            {
              if ( *(_QWORD *)(v27 + 408) )
              {
                ghwndBlocking = *a3;
                PostWinlogonMessage(1031LL, 0LL);
                v28 = *(_QWORD *)(v27 + 408);
                v29 = *(_QWORD *)(*(_QWORD *)(v28 + 8) + 160LL) || *(_QWORD *)(v28 + 280);
                QueueShutdownData(0xFFFFLL, v29);
                v6 = 0;
                goto LABEL_15;
              }
            }
          }
          goto LABEL_36;
        case 13:
          if ( !gspwndBSDR )
          {
            v6 = -1073741790;
            goto LABEL_15;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1LL);
          break;
        case 14:
          QueueShutdownData(*a3, 0LL);
          gptiShutdownWaiter = 0LL;
          ghwndBlocking = 0LL;
          break;
        default:
          if ( a2 > 14 )
          {
            if ( a2 <= 16 )
            {
              v6 = 0;
              if ( a2 == 15 )
              {
                if ( *(_DWORD *)a3 )
                  *(_DWORD *)(gpsi + 2220LL) |= 8u;
                else
                  *(_DWORD *)(gpsi + 2220LL) &= ~8u;
                RtlLoadStringOrError(629LL, v38, 40LL);
                xxxSetAutoRotationConvertible(*(_DWORD *)a3 != 0);
                EtwTraceConvertibleState(*(unsigned int *)a3);
              }
              else
              {
                if ( *(_DWORD *)a3 )
                  *(_DWORD *)(gpsi + 2220LL) |= 0x10u;
                else
                  *(_DWORD *)(gpsi + 2220LL) &= ~0x10u;
                RtlLoadStringOrError(630LL, v38, 40LL);
                xxxSetAutoRotationDocked(*(_DWORD *)a3 != 0);
                EtwTraceDockState(*(unsigned int *)a3);
              }
              RtlInitLargeUnicodeString((__int64)v32, (__int64)v38);
              v25 = *(unsigned int *)a3;
              v37 = &v31;
              v36[0] = 0;
              v36[1] = 100;
              xxxBroadcastMessageEx(
                0LL,
                0x1Au,
                v25,
                (struct _LARGE_STRING *)v32,
                6u,
                (union tagBROADCASTMSG *)v36,
                1,
                0);
              goto LABEL_15;
            }
            if ( a2 == 17 )
            {
              *(_QWORD *)v32 = 0LL;
              v33 = 0LL;
              v34 = 0LL;
              v6 = xxxSetInformationThread(-2LL, 7LL, v32, 24LL);
              if ( v6 < 0 )
                goto LABEL_15;
              PostShellHookMessagesEx(0x37u, 0LL, 0LL);
              v15 = xxxSetInformationThread(-2LL, 9LL, v32, 24LL);
              goto LABEL_14;
            }
          }
          goto LABEL_68;
      }
    }
    else
    {
      v8 = a2 - 1;
      if ( !v8 )
      {
        if ( ThreadWin32Thread )
        {
          if ( (_DWORD)v31 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v16 = v30;
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20000u;
            else
              *(_DWORD *)(ThreadWin32Thread + 440) &= ~0x20000u;
            goto LABEL_16;
          }
          v6 = -1073741811;
          goto LABEL_15;
        }
        goto LABEL_22;
      }
      v9 = v8 - 4;
      if ( !v9 )
      {
        v16 = v30;
        v6 = InitiateShutdownW(v30, (unsigned int *)a3);
        goto LABEL_16;
      }
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            v21 = ObReferenceObjectByHandle((HANDLE)*a3, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v31, 0LL);
            v22 = v31;
            v6 = v21;
            if ( v21 >= 0 )
            {
              v23 = W32GetThreadWin32Thread((__int64)v31);
              if ( v23 && (v24 = *(_DWORD **)(v23 + 408)) != 0LL )
                v6 = xxxSetCsrssThreadDesktop(v24, (PVOID *)a3 + 1);
              else
                v6 = -1073741816;
              ObfDereferenceObject(v22);
            }
            goto LABEL_15;
          }
          if ( v12 == 1 )
          {
            v13 = a3 + 1;
            if ( (_DWORD)v31 == 32 )
              v14 = *((_DWORD *)a3 + 6);
            else
              v14 = 0;
            if ( !*v13 )
            {
LABEL_13:
              v15 = xxxRestoreCsrssThreadDesktop(a3 + 1, v14);
LABEL_14:
              v6 = v15;
LABEL_15:
              v16 = v30;
LABEL_16:
              ObfDereferenceObject(v16);
              return (unsigned int)v6;
            }
            v18 = 0LL;
            v19 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v18 )
              {
                for ( i = *(_QWORD *)(v19 + 16); i; i = *(_QWORD *)(i + 16) )
                {
                  if ( i == *v13 )
                  {
                    v18 = i;
                    break;
                  }
                }
                v19 = *(_QWORD *)(v19 + 8);
                if ( !v19 )
                {
                  if ( v18 )
                    goto LABEL_13;
                  goto LABEL_36;
                }
              }
              goto LABEL_13;
            }
LABEL_36:
            v6 = -1073741823;
            goto LABEL_15;
          }
LABEL_68:
          v6 = -1073741821;
          goto LABEL_15;
        }
        if ( grpdeskRitInput )
        {
          v15 = xxxSetCsrssThreadDesktop(grpdeskRitInput, (PVOID *)a3 + 1);
          goto LABEL_14;
        }
LABEL_22:
        v6 = -1073741816;
        goto LABEL_15;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v6 = 0;
    goto LABEL_15;
  }
  return (unsigned int)v6;
}
