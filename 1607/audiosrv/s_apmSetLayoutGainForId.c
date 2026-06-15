/*
 * XREFs of s_apmSetLayoutGainForId @ 0x18007A370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetLayoutGainForId(__int64 a1, unsigned int a2)
{
  if ( (unsigned int)IsApmLayoutGainForIdSupported() )
    return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 224LL))(
             g_PolicyManager,
             a2);
  else
    return 2147500033LL;
}
