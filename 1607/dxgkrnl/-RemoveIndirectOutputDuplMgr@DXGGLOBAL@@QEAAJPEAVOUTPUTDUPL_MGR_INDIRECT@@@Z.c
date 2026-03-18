/*
 * XREFs of ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C016A0D0
 * Callers:
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C0146C18 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::RemoveIndirectOutputDuplMgr(DXGGLOBAL *this, struct OUTPUTDUPL_MGR_INDIRECT *a2)
{
  struct OUTPUTDUPL_MGR_INDIRECT *v3; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT **v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGGLOBAL *)((char *)this + 944));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = *(struct OUTPUTDUPL_MGR_INDIRECT **)a2;
  v4 = (struct OUTPUTDUPL_MGR_INDIRECT **)*((_QWORD *)a2 + 1);
  if ( *(struct OUTPUTDUPL_MGR_INDIRECT **)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return 0LL;
}
