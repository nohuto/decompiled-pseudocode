/*
 * XREFs of DbgkpLkmdFireCallbacks @ 0x1405F1050
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140038604 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x14003876C (ExGetCallBackBlockContext.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 */

void __fastcall DbgkpLkmdFireCallbacks(__int64 a1, int a2, struct _KPROCESS *a3)
{
  char v3; // si
  int SessionId; // ebx
  _RTL_RUN_ONCE *v8; // rdi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rbp
  int Ptr; // eax
  int (__fastcall *v12)(__int64 (__fastcall *)(__int64, __int64, __int64), __int64 (__fastcall *)(), __int64, __int64, struct _KPROCESS *); // rbx
  __int64 v13; // rax

  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    if ( SessionId != (unsigned int)MmGetSessionIdEx(a3) || SessionId == -1 )
      v3 = 0;
  }
  v8 = &RunOnce;
  v9 = 8LL;
  do
  {
    v10 = ExReferenceCallBackBlock((signed __int64 *)v8);
    if ( v10 )
    {
      Ptr = (int)v8[1].Ptr;
      if ( (Ptr & a2) != 0 && ((Ptr & 4) == 0 || v3) )
      {
        v12 = (int (__fastcall *)(__int64 (__fastcall *)(__int64, __int64, __int64), __int64 (__fastcall *)(), __int64, __int64, struct _KPROCESS *))ExGetCallBackBlockRoutine((__int64)v10);
        (*(void (__fastcall **)(__int64))(a1 + 5192))(a1 + 5120);
        v13 = ExGetCallBackBlockContext((__int64)v10);
        if ( v12(DbgkpLkmdSnapData, DbgkpLkmdIsMemoryBlockPresentFromCallback, a1, v13, a3) < 0 )
          (*(void (__fastcall **)(__int64))(a1 + 5200))(a1 + 5120);
      }
      ExDereferenceCallBackBlock((signed __int64 *)v8, v10);
    }
    v8 += 2;
    --v9;
  }
  while ( v9 );
}
