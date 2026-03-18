/*
 * XREFs of ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0039AC8
 * Callers:
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 *     ESM_RunStateMachine @ 0x1C003A2B8 (ESM_RunStateMachine.c)
 *     ESM_SmWorker @ 0x1C003A540 (ESM_SmWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C003A59C (WPP_RECORDER_SF_qLLL.c)
 */

__int64 __fastcall ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(unsigned int *Context)
{
  unsigned int v1; // r15d
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  int v6; // eax
  int v7; // r9d
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r8d
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // r8d
  KIRQL v14; // r13
  __int64 v15; // r12
  int *v16; // rcx
  char v17; // r10
  int v18; // eax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // ebx
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // ebx
  char i; // cl
  __int64 v26; // rax
  unsigned int v27; // edi
  int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+90h] [rbp+8h]

  v1 = Context[244];
  v3 = *((_QWORD *)Context + 121);
  v4 = Context[220];
  v5 = *(_QWORD *)(v3 + 8LL * (Context[v4 + 213] - v1));
  v6 = (*(__int64 (**)(void))(v5 + 8))();
  v8 = *(_DWORD **)(v5 + 24);
  v30 = v6;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      if ( v8[1] == 1002 )
        goto LABEL_6;
      v10 = Context[238];
      v11 = v8;
      while ( (v10 & *v11) != v10 )
      {
        v9 = (unsigned int)(v9 + 1);
        v11 = &v8[2 * v9];
        if ( v11[1] == 1002 )
          goto LABEL_6;
      }
      v21 = v8[2 * v9 + 1];
      if ( v21 == 1002 )
      {
LABEL_6:
        v30 = 1001;
        goto LABEL_7;
      }
      v4 = (unsigned int)(v4 + 1);
      Context[v4 + 213] = v21;
      v22 = Context[244] == 2000;
      Context[220] = v4;
      if ( v22 )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          v7,
          v29,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          v21);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v21;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v4;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v3 + 8LL * (v21 - v1));
      if ( (*(_DWORD *)(v5 + 16) & 0x10) != 0 )
      {
        if ( KeGetCurrentIrql() )
          break;
      }
      v23 = (*(__int64 (__fastcall **)(unsigned int *))(v5 + 8))(Context);
      v8 = *(_DWORD **)(v5 + 24);
      v30 = v23;
      if ( !v8 )
        goto LABEL_7;
    }
    IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
    return 1003;
  }
  else
  {
LABEL_7:
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
    while ( 1 )
    {
      LODWORD(v15) = 0;
      if ( *(_DWORD *)(v5 + 32) != 1000 )
      {
        v16 = (int *)(v5 + 32);
        do
        {
          if ( v16[1] != 1000 )
            break;
          LOBYTE(v13) = *((_BYTE *)Context + 948);
          v17 = 0;
          LOBYTE(v12) = v13;
          v18 = *v16;
          if ( (_BYTE)v13 != *((_BYTE *)Context + 949) )
          {
            do
            {
              v19 = Context[(unsigned __int8)v12 + 221];
              if ( v19 == v18 )
              {
                v17 = 1;
              }
              else
              {
                v20 = (unsigned __int8)v13;
                LOBYTE(v13) = (v13 + 1) & 0xF;
                Context[v20 + 221] = v19;
              }
              LOBYTE(v12) = (v12 + 1) & 0xF;
            }
            while ( (_BYTE)v12 != *((_BYTE *)Context + 949) );
          }
          for ( i = v13; i != *((_BYTE *)Context + 949); Context[v26 + 221] = 1000 )
          {
            v26 = i & 0xF;
            i = (i + 1) & 0xF;
          }
          *((_BYTE *)Context + 949) = v13;
          if ( v17 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v14);
            v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
          }
          v15 = (unsigned int)(v15 + 1);
          v16 = (int *)(v5 + 32 + 8 * v15);
        }
        while ( *v16 != 1000 );
      }
      if ( (*(_DWORD *)(v5 + 16) & 8) == 0 )
        break;
      v4 = (unsigned int)(v4 - 1);
      v27 = Context[v4 + 213];
      if ( Context[244] == 2000 )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          v13,
          1000,
          v29,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          Context[v4 + 213]);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v27;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v4;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v3 + 8LL * (Context[v4 + 213] - v1));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v14);
    v24 = v30;
    Context[220] = v4;
  }
  return v24;
}
