/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ @ 0x180019870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CGenericApplicationManagerWorkItem<ScreenReaderStateChangedContext>::Invoke(__int64 a1)
{
  int result; // eax
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v4; // rbx
  HANDLE ProcessHeap; // rax

  result = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(
             g_ApplicationManager,
             *(_QWORD *)(a1 + 16));
  v3 = *(volatile signed __int32 ***)(a1 + 16);
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      }
      *v3 = 0LL;
    }
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v3);
  }
  return result;
}
