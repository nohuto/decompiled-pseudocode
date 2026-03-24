/*
 * XREFs of GetMonitorFlags @ 0x1C00560B0
 * Callers:
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C001116C (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0055AC0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0055EDC (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0055FB0 (TransformPointBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00560F0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0056280 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0056470 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00566E0 (LogicalToPhysicalDPIPoint.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for GetMonitorFlags @ 0x1C00560B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00560B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00560B0: sub     rsp, 28h
 * 00000001C00560B4: mov     rax, rcx
 * 00000001C00560B7: test    rcx, rcx
 * 00000001C00560BA: jz      short loc_1C00560E4
 * 00000001C00560BC: mov     eax, [rax+308h]
 * 00000001C00560C2: test    eax, 6000h
 * 00000001C00560C7: jz      short loc_1C00560DD
 * 00000001C00560C9: and     eax, 2000h
 * 00000001C00560CE: neg     eax
 * 00000001C00560D0: sbb     eax, eax
 * 00000001C00560D2: and     eax, 60h
 * 00000001C00560D5: add     eax, 20h ; ' '
 * 00000001C00560D8: add     rsp, 28h
 * 00000001C00560DC: retn
 * 00000001C00560DD: mov     eax, 40h ; '@'
 * 00000001C00560E2: jmp     short loc_1C00560D8
 * 00000001C00560E4: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00560EA: jmp     short loc_1C00560BC
 */
