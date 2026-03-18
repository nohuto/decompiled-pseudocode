/*
 * XREFs of ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C01069B0
 * Callers:
 *     ?Create@CWorkItemQueue@@SAPEAV1@XZ @ 0x1C010694C (-Create@CWorkItemQueue@@SAPEAV1@XZ.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C02D91DC (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0110630 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

struct CManualResetEvent *CManualResetEvent::Create(void)
{
  struct CManualResetEvent *result; // rax
  struct CManualResetEvent *v1; // rdi
  struct CManualResetEvent *v2; // rbx
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // rsi

  result = (struct CManualResetEvent *)EngAllocMem(0, 8u, 0x676D6466u);
  v1 = result;
  if ( result )
  {
    v2 = result;
    v3 = (struct _KEVENT *)EngAllocMem(2u, 0x18u, 0x676D6466u);
    v4 = v3;
    if ( v3 )
      KeInitializeEvent(v3, NotificationEvent, 0);
    else
      v4 = 0LL;
    *(_QWORD *)v1 = v4;
    if ( v4 )
      v2 = 0LL;
    else
      v1 = 0LL;
    if ( v2 )
      CManualResetEvent::Destroy(v2);
    return v1;
  }
  return result;
}
