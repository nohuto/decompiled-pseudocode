/*
 * XREFs of DpiGdiHandleAsyncDisplaySwitchCallout @ 0x1C016B370
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

void __fastcall DpiGdiHandleAsyncDisplaySwitchCallout(PVOID IoObject, PVOID *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  PVOID v13; // rcx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v14, 0, 0x20uLL);
  LODWORD(v14[0]) = 8;
  LOBYTE(v5) = 1;
  v14[2] = Context;
  v6 = SMgrGdiCallout(v14, 0LL, v5, 0LL, 0LL);
  v11 = v6;
  if ( v6 < 0 || SLODWORD(v14[3]) < 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = DpiGdiHandleAsyncDisplaySwitchCallout;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdWarning(v12);
  }
  if ( Context )
  {
    v13 = Context[1];
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      Context[1] = 0LL;
    }
    if ( *Context )
    {
      ExFreePoolWithTag(*Context, 0);
      *Context = 0LL;
    }
    ExFreePoolWithTag(Context, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}
