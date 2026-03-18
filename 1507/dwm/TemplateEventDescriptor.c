/*
 * XREFs of TemplateEventDescriptor @ 0x140004930
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F30 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002000 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TemplateEventDescriptor(__int64 a1, __int64 a2)
{
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 0LL, 0LL);
}
