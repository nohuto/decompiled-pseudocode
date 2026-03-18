/*
 * XREFs of GrepUnsecureVirtualMemory @ 0x1C00CB060
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GdiProcessCallout @ 0x1C0059660 (GdiProcessCallout.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005BF2C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C00857B0 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00C039C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall GrepUnsecureVirtualMemory(HANDLE SecureHandle)
{
  MmUnsecureVirtualMemory(SecureHandle);
}
