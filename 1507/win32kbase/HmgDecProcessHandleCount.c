/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C00386E0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0038660 (-vFree@ENTRYOBJ@@QEAAXI@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C0067040 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B2E40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 */

/*
 * Hex-Rays decompilation failed for HmgDecProcessHandleCount @ 0x1C00386E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00386E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00386E0: test    ecx, ecx
 * 00000001C00386E2: jz      short locret_1C0038750
 * 00000001C00386E4: push    rbx
 * 00000001C00386E5: sub     rsp, 20h
 * 00000001C00386E9: movsxd  rbx, ecx
 * 00000001C00386EC: cmp     ebx, 80000012h
 * 00000001C00386F2: jz      short loc_1C003874B
 * 00000001C00386F4: call    GreAcquireHmgrSemaphore
 * 00000001C00386F9: call    cs:__imp_PsGetCurrentProcessId
 * 00000001C00386FF: and     eax, 0FFFFFFFCh
 * 00000001C0038702: cmp     ebx, eax
 * 00000001C0038704: jnz     short loc_1C0038716
 * 00000001C0038706: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C003870C: test    rax, rax
 * 00000001C003870F: jz      short loc_1C0038746
 * 00000001C0038711: dec     dword ptr [rax+3Ch]
 * 00000001C0038714: jmp     short loc_1C0038746
 * 00000001C0038716: mov     rcx, rbx; ProcessId
 * 00000001C0038719: lea     rdx, [rsp+28h+Process]; Process
 * 00000001C003871E: call    cs:__imp_PsLookupProcessByProcessId
 * 00000001C0038724: test    eax, eax
 * 00000001C0038726: js      short loc_1C0038746
 * 00000001C0038728: mov     rcx, [rsp+28h+Process]
 * 00000001C003872D: call    cs:__imp_PsGetProcessWin32Process
 * 00000001C0038733: test    rax, rax
 * 00000001C0038736: jz      short loc_1C003873B
 * 00000001C0038738: dec     dword ptr [rax+3Ch]
 * 00000001C003873B: mov     rcx, [rsp+28h+Process]; Object
 * 00000001C0038740: call    cs:__imp_ObfDereferenceObject
 * 00000001C0038746: call    GreReleaseHmgrSemaphore
 * 00000001C003874B: add     rsp, 20h
 * 00000001C003874F: pop     rbx
 * 00000001C0038750: retn
 */
