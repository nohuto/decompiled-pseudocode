/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C011BF90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C011C16C (--1UMPDREF@@QEAA@XZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C011C8F4 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C011C934 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027DCF0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C02A2588 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  int *v8; // rax
  __int64 ThreadWin32Thread; // r14
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  struct UMPDOBJ *v13; // rbx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v18; // edi
  struct _KPROCESS *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-30h]
  PEPROCESS Process[5]; // [rsp+30h] [rbp-28h] BYREF
  struct UMPDOBJ *v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+10h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v8 = (int *)HmgShareLock(a1, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v23 = (struct UMPDOBJ *)v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_31;
  }
  else if ( !a3 )
  {
    goto LABEL_31;
  }
  if ( gUMPDSecurityLevel != 1
    || !v8
    || (PsLookupProcessByProcessId((HANDLE)v8[102], Process), !(unsigned int)bIsProcessLocalSystem(Process[0]))
    || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v16, v15),
        (unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      if ( v6 )
      {
        v13 = v23;
        v14 = *((_DWORD *)v23 + 109);
        v24 = v14;
        if ( a4 )
        {
          if ( (unsigned __int64)(a4 + 1) > W32UserProbeAddress || a4 + 1 <= a4 )
            *W32UserProbeAddress = 0;
          *a4 = v14;
        }
        if ( v14 )
        {
          if ( !(unsigned int)bSandboxedCurrentProcess() )
          {
            v18 = *((_DWORD *)v13 + 102);
            if ( v18 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
              && *(_QWORD *)(ThreadWin32Thread + 40) == ThreadWin32Thread + 40 )
            {
              v19 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
              Process[1] = v19;
              if ( v19 )
              {
                if ( (unsigned __int64)(a3 + 1) > W32UserProbeAddress || a3 + 1 <= a3 )
                  *W32UserProbeAddress = 0;
                *a3 = 0LL;
                if ( UMPDOBJ::bTryAcquireExclussiveAccess(v13) )
                {
                  *(_QWORD *)v19 = *((_QWORD *)v13 + 50);
                  *((_DWORD *)v19 + 2) = *((_DWORD *)v13 + 102);
                  *(_QWORD *)(ThreadWin32Thread + 72) = v19;
                  UMPDOBJ::vPushToCurrentThread(v13);
                  v23 = 0LL;
                  goto LABEL_15;
                }
                Win32FreePool(v19);
              }
            }
          }
        }
        else if ( v13 == UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)ThreadWin32Thread) )
        {
          if ( (unsigned __int64)(a3 + 1) > W32UserProbeAddress || a3 + 1 <= a3 )
            *W32UserProbeAddress = 0;
          *a3 = 0LL;
          goto LABEL_15;
        }
      }
      else
      {
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        v21 = *a3;
        ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)ThreadWin32Thread);
        v11 = ThreadCurrentObj;
        if ( ThreadCurrentObj && v21 == *(_QWORD *)ThreadCurrentObj )
        {
          if ( !*((_DWORD *)ThreadCurrentObj + 109) )
          {
LABEL_15:
            UMPDREF::~UMPDREF((UMPDREF *)&v23);
            return 1LL;
          }
          if ( *((_QWORD *)ThreadCurrentObj + 3) == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            *((_BYTE *)v11 + 32) |= 2u;
            UMPDOBJ::vRelease(v11, 1);
            v20 = *(_QWORD *)(ThreadWin32Thread + 72);
            if ( v20 )
            {
              Win32FreePool(v20);
              *(_QWORD *)(ThreadWin32Thread + 72) = 0LL;
            }
            goto LABEL_15;
          }
        }
      }
    }
  }
LABEL_31:
  UMPDREF::~UMPDREF((UMPDREF *)&v23);
  return 0LL;
}
