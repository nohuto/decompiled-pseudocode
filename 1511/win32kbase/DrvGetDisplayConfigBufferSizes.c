/*
 * XREFs of DrvGetDisplayConfigBufferSizes @ 0x1C004C2C0
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004BF80 (NtUserGetDisplayConfigBufferSizes.c)
 *     rimGetQDCActivePathsData @ 0x1C00503A8 (rimGetQDCActivePathsData.c)
 *     ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00AA368 (-DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00BD928 (DrvProcessSetDisplayConfigParameters.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C004C9D8 (DrvIsWddmDriverPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizes(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax

  v4 = a1;
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = v4;
  WdLogEvent5_WdEvent(v6);
  if ( (unsigned int)DrvIsWddmDriverPresent() )
    v7 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C0104140)((unsigned int)v4, a2, a3);
  else
    v7 = -1073741637;
  v8 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v8 + 24) = v7;
  WdLogEvent5_WdEvent(v8);
  return (unsigned int)v7;
}
