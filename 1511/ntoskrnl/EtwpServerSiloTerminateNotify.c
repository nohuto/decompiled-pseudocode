/*
 * XREFs of EtwpServerSiloTerminateNotify @ 0x140663CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x1400D0F1C (ExFreeCacheAwareRundownProtection.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 */

void __fastcall EtwpServerSiloTerminateNotify(void *a1, __int64 a2)
{
  __int64 v3; // rsi
  PEX_RUNDOWN_REF_CACHE_AWARE *v4; // rbx
  __int64 v5; // rdi

  if ( a2 )
  {
    v3 = PsAttachSiloToCurrentThread(a1);
    EtwShutdown(0);
    v4 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 400);
    v5 = 64LL;
    do
    {
      if ( *v4 )
        ExFreeCacheAwareRundownProtection(*v4);
      ++v4;
      --v5;
    }
    while ( v5 );
    PsDetachSiloFromCurrentThread(v3);
  }
}
