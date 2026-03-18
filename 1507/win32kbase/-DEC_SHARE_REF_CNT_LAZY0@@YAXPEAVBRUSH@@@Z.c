/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     GreDCSelectBrush @ 0x1C005B010 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C005B290 (GreDCSelectPen.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1C00B7858 (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C003C3B8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  int v2; // ebx
  _DWORD *v3; // rax
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)DEC_SHARE_REF_CNT(a1) == 1 )
    {
      v2 = 0;
      v5 = 0;
      v4 = 0LL;
      v6 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v4, v1, 16);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v4) )
      {
        v3 = *(_DWORD **)(*(_QWORD *)v4 + 56LL);
        if ( v3 )
          v2 = *v3 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      }
      if ( v2 )
        bDeleteBrush(v1, 0LL, 0);
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
    }
  }
}
