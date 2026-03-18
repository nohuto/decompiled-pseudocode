/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1403F6880
 * Callers:
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspInitializeThunkContext @ 0x14044603C (PspInitializeThunkContext.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140038604 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x14003876C (ExGetCallBackBlockContext.c)
 */

void __fastcall PspCallThreadNotifyRoutines(__int64 a1, unsigned __int8 a2, char a3)
{
  signed __int64 *v5; // rbx
  __int64 v6; // rsi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdi
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rax
  signed __int64 *v12; // rbx
  __int64 v13; // rsi
  struct _EX_RUNDOWN_REF *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rbp
  __int64 v16; // rdi
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // rax
  signed __int64 *v18; // rbx
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
        v18 = (signed __int64 *)&PspCreateThreadNotifyRoutine;
        v19 = 64LL;
        do
        {
          v20 = ExReferenceCallBackBlock(v18);
          v21 = v20;
          if ( v20 )
          {
            if ( ExGetCallBackBlockContext((__int64)v20) )
            {
              v23 = *(_QWORD *)(a1 + 544);
              v24 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v22);
              v24(*(_QWORD *)(v23 + 744), *(_QWORD *)(a1 + 1584), a2);
            }
            ExDereferenceCallBackBlock(v18, v21);
          }
          ++v18;
          --v19;
        }
        while ( v19 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v5 = (signed __int64 *)&PspCreateThreadNotifyRoutine;
      v6 = 64LL;
      do
      {
        v7 = ExReferenceCallBackBlock(v5);
        v8 = v7;
        if ( v7 )
        {
          if ( !ExGetCallBackBlockContext((__int64)v7) )
          {
            v10 = *(_QWORD *)(a1 + 544);
            v11 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine(v9);
            v11(*(_QWORD *)(v10 + 744), *(_QWORD *)(a1 + 1584), a2);
          }
          ExDereferenceCallBackBlock(v5, v8);
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v12 = (signed __int64 *)&PspCreateThreadNotifyRoutine;
    v13 = 64LL;
    do
    {
      v14 = ExReferenceCallBackBlock(v12);
      v15 = v14;
      if ( v14 )
      {
        v16 = *(_QWORD *)(a1 + 544);
        v17 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))ExGetCallBackBlockRoutine((__int64)v14);
        v17(*(_QWORD *)(v16 + 744), *(_QWORD *)(a1 + 1584), 0LL);
        ExDereferenceCallBackBlock(v12, v15);
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
}
