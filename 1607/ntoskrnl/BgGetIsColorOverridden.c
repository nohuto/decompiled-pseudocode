/*
 * XREFs of BgGetIsColorOverridden @ 0x14072A2AC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14014BFA4 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !unk_1402FA0EC )
    return 0;
  *a1 = qword_1402FA0F0;
  return 1;
}
