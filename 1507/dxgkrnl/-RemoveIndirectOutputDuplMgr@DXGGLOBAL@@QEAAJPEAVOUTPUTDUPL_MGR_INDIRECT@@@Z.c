/*
 * XREFs of ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01401D8
 * Callers:
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C011F138 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::RemoveIndirectOutputDuplMgr(DXGGLOBAL *this, struct OUTPUTDUPL_MGR_INDIRECT *a2)
{
  __int64 v3; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT **v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGGLOBAL *)((char *)this + 912));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = *(_QWORD *)a2;
  v4 = (struct OUTPUTDUPL_MGR_INDIRECT **)*((_QWORD *)a2 + 1);
  if ( *(struct OUTPUTDUPL_MGR_INDIRECT **)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = (struct OUTPUTDUPL_MGR_INDIRECT *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return 0LL;
}
