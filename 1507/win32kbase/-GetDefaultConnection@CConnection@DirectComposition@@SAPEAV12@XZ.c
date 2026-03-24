/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0014730 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00227B0 (NtDCompositionGetFrameStatistics.c)
 *     ?EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0023A80 (-EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0023C08 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0023EB0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0023F00 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C002464C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0024874 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     NtDCompositionSignalGpuFence @ 0x1C006B170 (NtDCompositionSignalGpuFence.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0082120 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C00D3C30 (DCompositionForceRender.c)
 *     NtDCompositionEnableDDASupport @ 0x1C00D3F30 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00D3F80 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionPendingBatches @ 0x1C00D4038 (NtDCompositionPendingBatches.c)
 *     NtDCompositionSyncWait @ 0x1C00D44F0 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00D4690 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438
 * Reason: Hex-Rays returned no pseudocode for 0x1C0023438
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0023438: mov     [rsp+arg_0], rbx
 * 00000001C002343D: push    rdi
 * 00000001C002343E: sub     rsp, 20h
 * 00000001C0023442: xor     ebx, ebx
 * 00000001C0023444: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C002344A: test    rax, rax
 * 00000001C002344D: jz      short loc_1C002348E
 * 00000001C002344F: mov     rdi, [rax+100h]
 * 00000001C0023456: test    rdi, rdi
 * 00000001C0023459: jz      short loc_1C002348E
 * 00000001C002345B: mov     rbx, [rdi+20h]
 * 00000001C002345F: call    cs:__imp_KeEnterCriticalRegion
 * 00000001C0023465: mov     dl, 1; Wait
 * 00000001C0023467: mov     rcx, rbx; Resource
 * 00000001C002346A: call    cs:__imp_ExAcquireResourceSharedLite
 * 00000001C0023470: mov     rbx, [rdi+18h]
 * 00000001C0023474: test    rbx, rbx
 * 00000001C0023477: jnz     short loc_1C00234DB
 * 00000001C0023479: mov     rcx, [rdi+20h]; Resource
 * 00000001C002347D: call    cs:__imp_ExReleaseResourceLite
 * 00000001C0023483: call    cs:__imp_KeLeaveCriticalRegion
 * 00000001C0023489: test    rbx, rbx
 * 00000001C002348C: jnz     short loc_1C00234CD
 * 00000001C002348E: mov     rdi, cs:?s_pSessionConnectionLock@CConnection@DirectComposition@@0PEAVCCriticalSection@2@EA; DirectComposition::CCriticalSection * DirectComposition::CConnection::s_pSessionConnectionLock
 * 00000001C0023495: test    rdi, rdi
 * 00000001C0023498: jz      short loc_1C00234CD
 * 00000001C002349A: call    cs:__imp_KeEnterCriticalRegion
 * 00000001C00234A0: mov     dl, 1; Wait
 * 00000001C00234A2: mov     rcx, rdi; Resource
 * 00000001C00234A5: call    cs:__imp_ExAcquireResourceExclusiveLite
 * 00000001C00234AB: mov     rbx, cs:?s_pSessionConnection@CConnection@DirectComposition@@0PEAV12@EA; DirectComposition::CConnection * DirectComposition::CConnection::s_pSessionConnection
 * 00000001C00234B2: test    rbx, rbx
 * 00000001C00234B5: jz      short loc_1C00234BA
 * 00000001C00234B7: lock inc dword ptr [rbx]
 * 00000001C00234BA: mov     rcx, cs:?s_pSessionConnectionLock@CConnection@DirectComposition@@0PEAVCCriticalSection@2@EA; Resource
 * 00000001C00234C1: call    cs:__imp_ExReleaseResourceLite
 * 00000001C00234C7: call    cs:__imp_KeLeaveCriticalRegion
 * 00000001C00234CD: mov     rax, rbx
 * 00000001C00234D0: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00234D5: add     rsp, 20h
 * 00000001C00234D9: pop     rdi
 * 00000001C00234DA: retn
 * 00000001C00234DB: lock inc dword ptr [rbx]
 * 00000001C00234DE: jmp     short loc_1C0023479
 */
