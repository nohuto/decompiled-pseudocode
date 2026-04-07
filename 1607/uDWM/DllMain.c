/*
 * XREFs of DllMain @ 0x18007C578
 * Callers:
 *     __DllMainCRTStartup @ 0x18004FF80 (__DllMainCRTStartup.c)
 * Callees:
 *     McGenEventRegister @ 0x18004CD58 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x18007C6CC (McGenEventUnregister.c)
 */

/*
 * Hex-Rays decompilation failed for DllMain @ 0x18007C578
 * Reason: Hex-Rays returned no pseudocode for 0x18007C578
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007C578: sub     rsp, 28h
 * 000000018007C57C: test    edx, edx
 * 000000018007C57E: jz      short loc_18007C599
 * 000000018007C580: cmp     edx, 1
 * 000000018007C583: jnz     short loc_18007C59E
 * 000000018007C585: mov     cs:?g_hInstance@@3PEAUHINSTANCE__@@EA, rcx; HINSTANCE__ * g_hInstance
 * 000000018007C58C: call    cs:__imp_DisableThreadLibraryCalls
 * 000000018007C592: call    McGenEventRegister
 * 000000018007C597: jmp     short loc_18007C59E
 * 000000018007C599: call    McGenEventUnregister
 * 000000018007C59E: mov     eax, 1
 * 000000018007C5A3: add     rsp, 28h
 * 000000018007C5A7: retn
 */
