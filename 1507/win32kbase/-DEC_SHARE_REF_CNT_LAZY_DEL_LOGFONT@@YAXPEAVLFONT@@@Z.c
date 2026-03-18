/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B2D50
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C003C3B8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  BOOL v2; // ebx
  _DWORD **v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+34h] [rbp-14h]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)DEC_SHARE_REF_CNT(a1) == 1 )
    {
      v4 = 0;
      v3 = 0LL;
      v5 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v3, v1, 10);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v3) )
      {
        v2 = (*(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)**v3 + 15) & 2) != 0;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
        if ( v2 )
          bDeleteFont_0();
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v3);
    }
  }
}
