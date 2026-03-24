/*
 * XREFs of UserIsCurrentProcessImmersive @ 0x1C00AE280
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0049BDC (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for UserIsCurrentProcessImmersive @ 0x1C00AE280
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AE280
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AE280: sub     rsp, 28h
 * 00000001C00AE284: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00AE28A: mov     cl, [rax+308h]
 * 00000001C00AE290: xor     eax, eax
 * 00000001C00AE292: and     cl, 30h
 * 00000001C00AE295: cmp     cl, 10h
 * 00000001C00AE298: setz    al
 * 00000001C00AE29B: add     rsp, 28h
 * 00000001C00AE29F: retn
 */
