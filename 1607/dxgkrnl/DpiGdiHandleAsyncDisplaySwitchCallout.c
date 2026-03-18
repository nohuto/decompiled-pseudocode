/*
 * XREFs of DpiGdiHandleAsyncDisplaySwitchCallout @ 0x1C0193090
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

void __fastcall DpiGdiHandleAsyncDisplaySwitchCallout(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v15, 0, 0x20uLL);
  v5 = *(_QWORD *)Context;
  LOBYTE(v6) = 1;
  LODWORD(v15[0]) = 8;
  v15[2] = v5;
  v7 = SMgrGdiCallout(v15, 0LL, v6, 0LL, 0LL, Context + 8);
  v12 = v7;
  if ( v7 < 0 || SLODWORD(v15[3]) < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdWarning(v13);
  }
  if ( v5 )
  {
    v14 = *(void **)(v5 + 8);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v5 + 8) = 0LL;
    }
    if ( *(_QWORD *)v5 )
    {
      ExFreePoolWithTag(*(PVOID *)v5, 0);
      *(_QWORD *)v5 = 0LL;
    }
  }
  ExFreePoolWithTag(Context, 0);
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, 0);
  IoFreeWorkItem(IoWorkItem);
}
