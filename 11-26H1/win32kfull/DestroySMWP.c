/*
 * XREFs of DestroySMWP @ 0x1401B8480
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1401B8450 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall DestroySMWP(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  BOOL v12; // esi
  __int64 v13; // r14
  int v14; // ebp
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rsi

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    v4 = _HMPheFromObjectWorker(a1);
    if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 19792) && (unsigned int)GET_USERCRIT_DISPOSITION(a1) == 2 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19800) )
      {
        if ( v4 != *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19800) )
        {
          UserSessionState = W32GetUserSessionState(a1, a2);
          ++*(_DWORD *)(UserSessionState + 19808);
        }
      }
      else
      {
        v2 = 1;
        *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19800) = v4;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    if ( !(unsigned int)HMMarkObjectDestroy(a1) )
      goto LABEL_22;
    v12 = 1;
  }
  else
  {
    v12 = a1 != W32GetUserSessionState(a1, a2) + 63240;
  }
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a1 + 28) - 1;
    if ( v14 >= 0 )
    {
      v15 = (__int64 *)(v13 + 120);
      do
      {
        v11 = *v15;
        if ( *v15 )
          GreDeleteObject(v11);
        v15 += 21;
        --v14;
      }
      while ( v14 >= 0 );
    }
    if ( v12 )
      Win32FreePool(*(void **)(a1 + 40));
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    HMFreeObject(a1);
  }
  else if ( v12 )
  {
    Win32FreePool((void *)a1);
  }
  else
  {
    v16 = W32GetUserSessionState(v11, v10);
    *(_DWORD *)(v16 + 66792) &= ~0x20000000u;
    if ( *(int *)(a1 + 32) > 8 )
    {
      v17 = Win32AllocPoolZInit(672LL, 2004054869LL);
      if ( v17 )
      {
        Win32FreePool(*(void **)(a1 + 40));
        *(_QWORD *)(a1 + 40) = v17;
        *(_DWORD *)(a1 + 32) = 4;
      }
    }
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
LABEL_22:
  if ( v2 )
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19800) = 0LL;
}
