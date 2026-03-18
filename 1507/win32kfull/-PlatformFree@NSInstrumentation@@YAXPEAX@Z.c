/*
 * XREFs of ?PlatformFree@NSInstrumentation@@YAXPEAX@Z @ 0x1C00E7E30
 * Callers:
 *     PlaySoundPostMessage @ 0x1C0363000 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFree(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
