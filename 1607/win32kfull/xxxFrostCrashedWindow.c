/*
 * XREFs of xxxFrostCrashedWindow @ 0x1C01EE634
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1C0212570 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE34C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01EE55C (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 */

unsigned __int64 __fastcall xxxFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _KTHREAD **v5; // rcx
  unsigned __int64 v6; // rax
  struct _KTHREAD *v7; // rcx
  unsigned int ThreadProcessId; // eax
  PETHREAD *v9; // rcx
  unsigned int ThreadId; // eax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r9
  int v29; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+24h] [rbp-34h]
  unsigned int v31; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v32; // [rsp+30h] [rbp-28h]
  __int64 v33; // [rsp+34h] [rbp-24h]
  unsigned __int64 v34; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0LL;
  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    v5 = *(struct _KTHREAD ***)(a1 + 16);
    v6 = *(_QWORD *)a1;
    v34 = 0LL;
    v29 = 2;
    v7 = *v5;
    v30 = v6;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v7);
    v9 = *(PETHREAD **)(a1 + 16);
    v31 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(*v9);
    v11 = *(_QWORD *)a1;
    v32 = ThreadId;
    v33 = a2;
    v15 = xxxSendSyncGHOSTINFO((struct _GHOSTINFO *)&v29, v12, v13, v14);
    LOBYTE(v16) = 1;
    v17 = v15;
    v20 = HMValidateHandleNoSecure(v11, v16, v18, v19);
    if ( v17 )
    {
      if ( v20 )
      {
        if ( !(unsigned int)IsWindowBeingDestroyed(v20) )
        {
          if ( GetProp(v21, *(unsigned __int16 *)(gpsi + 1362LL), 1LL) )
          {
            v25 = v34;
            if ( v34 )
            {
              LOBYTE(v22) = v23;
              v26 = HMValidateHandleNoSecure(v34, v22, v23, v24);
              if ( v26 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v26)
                  && GetProp(v27, *(unsigned __int16 *)(gpsi + 1362LL), 1LL) )
                {
                  return v25;
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
