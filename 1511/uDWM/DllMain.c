/*
 * XREFs of DllMain @ 0x18007B794
 * Callers:
 *     sub_18004F99C @ 0x18004F99C (sub_18004F99C.c)
 * Callees:
 *     McGenEventRegister @ 0x18004BAF4 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x18007B98C (McGenEventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x18007B794
 * Reason: Hex-Rays returned no pseudocode for 0x18007B794
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007B794: sub     rsp, 28h
 * 000000018007B798: test    edx, edx
 * 000000018007B79A: jz      short loc_18007B7B5
 * 000000018007B79C: cmp     edx, 1
 * 000000018007B79F: jnz     short loc_18007B7BA
 * 000000018007B7A1: mov     cs:?g_hInstance@@3PEAUHINSTANCE__@@EA, rcx; HINSTANCE__ * g_hInstance
 * 000000018007B7A8: call    cs:__imp_DisableThreadLibraryCalls
 * 000000018007B7AE: call    McGenEventRegister
 * 000000018007B7B3: jmp     short loc_18007B7BA
 * 000000018007B7B5: call    McGenEventUnregister
 * 000000018007B7BA: mov     eax, 1
 * 000000018007B7BF: add     rsp, 28h
 * 000000018007B7C3: retn
 */
