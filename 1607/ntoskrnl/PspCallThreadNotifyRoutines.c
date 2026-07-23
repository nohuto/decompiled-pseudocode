/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x140427FE0
 * Callers:
 *     PspInitializeThunkContext @ 0x140458654 (PspInitializeThunkContext.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140013BB4 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x140013D04 (ExGetCallBackBlockContext.c)
 */

void __fastcall PspCallThreadNotifyRoutines(__int64 a1, unsigned __int8 a2, char a3)
{
  _RTL_RUN_ONCE *v5; // rbx
  __int64 v6; // rsi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdi
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rax
  _RTL_RUN_ONCE *v12; // rbx
  __int64 v13; // rsi
  struct _EX_RUNDOWN_REF *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rbp
  __int64 v16; // rdi
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // rax
  _RTL_RUN_ONCE *v18; // rbx
  __int64 v19; // rsi
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rdi
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // rax

  if ( a2 )
  {
    if ( a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v18 = &PspCreateThreadNotifyRoutine;
        v19 = 64LL;
        do
        {
          v20 = ExReferenceCallBackBlock((signed __int64 *)v18);
          v21 = v20;
          if ( v20 )
          {
            if ( ExGetCallBackBlockContext((__int64)v20) )
            {
              v23 = *(_QWORD *)(a1 + 544);
              v24 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v22);
              v24(*(_QWORD *)(v23 + 744), *(_QWORD *)(a1 + 1592), a2);
            }
            ExDereferenceCallBackBlock((signed __int64 *)v18, v21);
          }
          ++v18;
          --v19;
        }
        while ( v19 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v5 = &PspCreateThreadNotifyRoutine;
      v6 = 64LL;
      do
      {
        v7 = ExReferenceCallBackBlock((signed __int64 *)v5);
        v8 = v7;
        if ( v7 )
        {
          if ( !ExGetCallBackBlockContext((__int64)v7) )
          {
            v10 = *(_QWORD *)(a1 + 544);
            v11 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v9);
            v11(*(_QWORD *)(v10 + 744), *(_QWORD *)(a1 + 1592), a2);
          }
          ExDereferenceCallBackBlock((signed __int64 *)v5, v8);
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v12 = &PspCreateThreadNotifyRoutine;
    v13 = 64LL;
    do
    {
      v14 = ExReferenceCallBackBlock((signed __int64 *)v12);
      v15 = v14;
      if ( v14 )
      {
        v16 = *(_QWORD *)(a1 + 544);
        v17 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine((__int64)v14);
        v17(*(_QWORD *)(v16 + 744), *(_QWORD *)(a1 + 1592), 0LL);
        ExDereferenceCallBackBlock((signed __int64 *)v12, v15);
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
}
