/*
 * XREFs of xxxSetInformationThread @ 0x1C00DCC90
 * Callers:
 *     NtUserSetInformationThread @ 0x1C00DCB90 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0098C50 (xxxSetCsrssThreadDesktop.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C009D208 (RtlInitLargeUnicodeString.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0130460 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0130610 (-EndShutdown@@YAXJ@Z.c)
 *     QueueShutdownData @ 0x1C015486C (QueueShutdownData.c)
 *     xxxSetAutoRotationDocked @ 0x1C0154F04 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0154F84 (xxxSetAutoRotationConvertible.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetInformationThread(void *a1, int a2, _QWORD *a3, int a4)
{
  __int64 v6; // rdx
  NTSTATUS v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  _QWORD *v16; // r8
  unsigned int v17; // r10d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 i; // rax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID v26; // rdi
  __int64 v27; // rax
  _DWORD *v28; // rcx
  struct _KTHREAD *v29; // rdi
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  BOOL v34; // eax
  struct _KTHREAD *v36; // [rsp+40h] [rbp-69h]
  PVOID v37; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v38[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v39; // [rsp+58h] [rbp-51h]
  __int64 v40; // [rsp+60h] [rbp-49h]
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v42[2]; // [rsp+70h] [rbp-39h] BYREF
  PVOID *v43; // [rsp+78h] [rbp-31h]
  _BYTE v44[80]; // [rsp+90h] [rbp-19h] BYREF

  LODWORD(v37) = a4;
  v7 = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v36 = (struct _KTHREAD *)Object;
  if ( v7 >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v6, v8, v9);
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v31 = ValidateHwnd(*a3);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 16);
            if ( v32 )
            {
              if ( *(_QWORD *)(v32 + 408) )
              {
                ghwndBlocking = *a3;
                PostWinlogonMessage(1031LL, 0LL);
                v33 = *(_QWORD *)(v32 + 408);
                v34 = *(_QWORD *)(*(_QWORD *)(v33 + 8) + 160LL) || *(_QWORD *)(v33 + 280);
                QueueShutdownData(0xFFFFLL, v34);
                v7 = 0;
                goto LABEL_78;
              }
            }
          }
          goto LABEL_77;
        case 13:
          if ( !gspwndBSDR )
          {
            v7 = -1073741790;
            goto LABEL_78;
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
              v7 = 0;
              if ( a2 == 15 )
              {
                if ( *(_DWORD *)a3 )
                  *(_DWORD *)(gpsi + 2220LL) |= 8u;
                else
                  *(_DWORD *)(gpsi + 2220LL) &= ~8u;
                RtlLoadStringOrError(629LL, v44, 40LL);
                xxxSetAutoRotationConvertible(*(_DWORD *)a3 != 0);
                EtwTraceConvertibleState(*(unsigned int *)a3);
              }
              else
              {
                if ( *(_DWORD *)a3 )
                  *(_DWORD *)(gpsi + 2220LL) |= 0x10u;
                else
                  *(_DWORD *)(gpsi + 2220LL) &= ~0x10u;
                RtlLoadStringOrError(630LL, v44, 40LL);
                xxxSetAutoRotationDocked(*(_DWORD *)a3 != 0);
                EtwTraceDockState(*(unsigned int *)a3);
              }
              RtlInitLargeUnicodeString((__int64)v38, (__int64)v44);
              v30 = *(unsigned int *)a3;
              v43 = &v37;
              v42[0] = 0;
              v42[1] = 100;
              xxxBroadcastMessageEx(
                0LL,
                0x1Au,
                v30,
                (struct _LARGE_STRING *)v38,
                6u,
                (union tagBROADCASTMSG *)v42,
                1,
                0);
              goto LABEL_78;
            }
            if ( a2 == 17 )
            {
              *(_QWORD *)v38 = 0LL;
              v39 = 0LL;
              v40 = 0LL;
              v7 = xxxSetInformationThread(-2LL, 7LL, v38, 24LL);
              if ( v7 < 0 )
                goto LABEL_78;
              PostShellHookMessagesEx(0x37u, 0LL, 0LL);
              v21 = xxxSetInformationThread(-2LL, 9LL, v38, 24LL);
              goto LABEL_25;
            }
          }
          goto LABEL_64;
      }
    }
    else
    {
      if ( a2 == 10 )
      {
        v21 = SetCsrApiPortHandle(*a3);
        goto LABEL_25;
      }
      v11 = a2 - 1;
      if ( !v11 )
      {
        if ( ThreadWin32Thread )
        {
          if ( (_DWORD)v37 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v29 = v36;
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20000u;
            else
              *(_DWORD *)(ThreadWin32Thread + 440) &= ~0x20000u;
            goto LABEL_79;
          }
          v7 = -1073741811;
          goto LABEL_78;
        }
        goto LABEL_33;
      }
      v12 = v11 - 4;
      if ( !v12 )
      {
        v29 = v36;
        v7 = InitiateShutdownW(v36, (unsigned int *)a3);
LABEL_79:
        ObfDereferenceObject(v29);
        return (unsigned int)v7;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            v22 = ObReferenceObjectByHandle((HANDLE)*a3, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v37, 0LL);
            v26 = v37;
            v7 = v22;
            if ( v22 >= 0 )
            {
              v27 = W32GetThreadWin32Thread((__int64)v37, v23, v24, v25);
              if ( v27 && (v28 = *(_DWORD **)(v27 + 408)) != 0LL )
                v7 = xxxSetCsrssThreadDesktop(v28, (PVOID *)a3 + 1);
              else
                v7 = -1073741816;
              ObfDereferenceObject(v26);
            }
            goto LABEL_78;
          }
          if ( v15 == 1 )
          {
            v16 = a3 + 1;
            if ( (_DWORD)v37 == 32 )
              v17 = *((_DWORD *)a3 + 6);
            else
              v17 = 0;
            if ( !*v16 )
            {
LABEL_24:
              v21 = xxxRestoreCsrssThreadDesktop(a3 + 1, v17);
LABEL_25:
              v7 = v21;
LABEL_78:
              v29 = v36;
              goto LABEL_79;
            }
            v18 = 0LL;
            v19 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v18 )
              {
                for ( i = *(_QWORD *)(v19 + 16); i; i = *(_QWORD *)(i + 16) )
                {
                  if ( i == *v16 )
                  {
                    v18 = i;
                    break;
                  }
                }
                v19 = *(_QWORD *)(v19 + 8);
                if ( !v19 )
                {
                  if ( !v18 )
                    goto LABEL_77;
                  goto LABEL_24;
                }
              }
              goto LABEL_24;
            }
LABEL_77:
            v7 = -1073741823;
            goto LABEL_78;
          }
LABEL_64:
          v7 = -1073741821;
          goto LABEL_78;
        }
        if ( grpdeskRitInput )
        {
          v21 = xxxSetCsrssThreadDesktop(grpdeskRitInput, (PVOID *)a3 + 1);
          goto LABEL_25;
        }
LABEL_33:
        v7 = -1073741816;
        goto LABEL_78;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v7 = 0;
    goto LABEL_78;
  }
  return (unsigned int)v7;
}
