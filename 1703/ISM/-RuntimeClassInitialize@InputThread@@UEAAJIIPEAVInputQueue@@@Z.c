/*
 * XREFs of ?RuntimeClassInitialize@InputThread@@UEAAJIIPEAVInputQueue@@@Z @ 0x18006B870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputThread::RuntimeClassInitialize(InputThread *this, int a2, int a3, struct InputQueue *a4)
{
  __int64 v6; // rcx

  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  if ( *((struct InputQueue **)this + 3) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct InputQueue *))(*(_QWORD *)a4 + 8LL))(a4);
    v6 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a4;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
