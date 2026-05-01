/*
 * XREFs of dllmain_crt_dispatch @ 0x180025650
 * Callers:
 *     dllmain_dispatch @ 0x180025868 (dllmain_dispatch.c)
 * Callees:
 *     __scrt_dllmain_crt_thread_attach @ 0x18000B4B0 (__scrt_dllmain_crt_thread_attach.c)
 */

__int64 __fastcall dllmain_crt_dispatch(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( (unsigned int)(v3 - 1) < 2 )
        return (unsigned __int8)_scrt_dllmain_crt_thread_attach();
      else
        return 1LL;
    }
    else
    {
      return dllmain_crt_process_attach(a1, a3);
    }
  }
  else
  {
    LOBYTE(a1) = a3 != 0;
    return dllmain_crt_process_detach(a1);
  }
}
