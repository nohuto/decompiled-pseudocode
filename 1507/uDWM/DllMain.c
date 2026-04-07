/*
 * XREFs of DllMain @ 0x1800735C4
 * Callers:
 *     __DllMainCRTStartup @ 0x1800492FC (__DllMainCRTStartup.c)
 * Callees:
 *     McGenEventRegister @ 0x180048290 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x1800737BC (McGenEventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x1800735C4
 * Reason: Hex-Rays returned no pseudocode for 0x1800735C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800735C4: sub     rsp, 28h
 * 00000001800735C8: test    edx, edx
 * 00000001800735CA: jz      short loc_1800735E5
 * 00000001800735CC: cmp     edx, 1
 * 00000001800735CF: jnz     short loc_1800735EA
 * 00000001800735D1: mov     cs:?g_hInstance@@3PEAUHINSTANCE__@@EA, rcx; HINSTANCE__ * g_hInstance
 * 00000001800735D8: call    cs:__imp_DisableThreadLibraryCalls
 * 00000001800735DE: call    McGenEventRegister
 * 00000001800735E3: jmp     short loc_1800735EA
 * 00000001800735E5: call    McGenEventUnregister
 * 00000001800735EA: mov     eax, 1
 * 00000001800735EF: add     rsp, 28h
 * 00000001800735F3: retn
 */
