/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C02B1410
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027B480 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C028505C (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C02854A8 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C02A2D70 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02AB0F4 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  int *v8; // rax
  __int64 v10; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned __int64 v12; // rdx
  __int64 ThreadWin32Thread; // r14
  struct UMPDOBJ *v14; // rbx
  __int64 v15; // rcx
  int v16; // edi
  struct _KPROCESS *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct UMPDOBJ *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+28h] [rbp-30h]
  PEPROCESS Process[5]; // [rsp+30h] [rbp-28h] BYREF
  struct UMPDOBJ *v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+10h]

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
  v32 = (struct UMPDOBJ *)v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_9;
  }
  else if ( !a3 )
  {
LABEL_9:
    UMPDREF::~UMPDREF(&v32);
    return 0LL;
  }
  if ( gUMPDSecurityLevel == 1 )
  {
    if ( v8 )
    {
      PsLookupProcessByProcessId((HANDLE)v8[102], Process);
      if ( (unsigned int)bIsProcessLocalSystem(Process[0]) )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10);
        if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
          goto LABEL_9;
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, (__int64)a4);
  if ( !ThreadWin32Thread )
    goto LABEL_9;
  if ( v6 )
  {
    v14 = v32;
    v15 = *((unsigned int *)v32 + 109);
    v33 = *((_DWORD *)v32 + 109);
    if ( a4 )
    {
      v12 = (unsigned __int64)(a4 + 1);
      if ( (unsigned __int64)(a4 + 1) > W32UserProbeAddress || v12 <= (unsigned __int64)a4 )
        *W32UserProbeAddress = 0;
      *a4 = v15;
    }
    if ( (_DWORD)v15 )
    {
      if ( (unsigned int)bSandboxedCurrentProcess(v15, v12) )
        goto LABEL_9;
      v16 = *((_DWORD *)v14 + 102);
      if ( v16 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_9;
      if ( *(_QWORD *)(ThreadWin32Thread + 40) != ThreadWin32Thread + 40 )
        goto LABEL_9;
      v17 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
      Process[1] = v17;
      if ( !v17 )
        goto LABEL_9;
      if ( (unsigned __int64)(a3 + 1) > W32UserProbeAddress || a3 + 1 <= a3 )
        *W32UserProbeAddress = 0;
      *a3 = 0LL;
      if ( !UMPDOBJ::bTryAcquireExclussiveAccess(v14, W32UserProbeAddress, v18, v19) )
      {
        Win32FreePool(v17, v20);
        goto LABEL_9;
      }
      *(_QWORD *)v17 = *((_QWORD *)v14 + 50);
      *((_DWORD *)v17 + 2) = *((_DWORD *)v14 + 102);
      *(_QWORD *)(ThreadWin32Thread + 72) = v17;
      UMPDOBJ::vPushToCurrentThread(v14, v20, v21, v22);
      v32 = 0LL;
    }
    else
    {
      if ( v14 != UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)ThreadWin32Thread) )
        goto LABEL_9;
      if ( (unsigned __int64)(a3 + 1) > W32UserProbeAddress || a3 + 1 <= a3 )
        *W32UserProbeAddress = 0;
      *a3 = 0LL;
    }
  }
  else
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    v30 = *a3;
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)ThreadWin32Thread);
    v27 = ThreadCurrentObj;
    if ( !ThreadCurrentObj || v30 != *(_QWORD *)ThreadCurrentObj )
      goto LABEL_9;
    if ( *((_DWORD *)ThreadCurrentObj + 109) )
    {
      if ( *((_QWORD *)ThreadCurrentObj + 3) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) )
        goto LABEL_9;
      *((_BYTE *)v27 + 32) |= 2u;
      UMPDOBJ::vRelease(v27, 1);
      v29 = *(_QWORD *)(ThreadWin32Thread + 72);
      if ( v29 )
      {
        Win32FreePool(v29, v28);
        *(_QWORD *)(ThreadWin32Thread + 72) = 0LL;
      }
    }
  }
  UMPDREF::~UMPDREF(&v32);
  return 1LL;
}
