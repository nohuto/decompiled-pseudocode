/*
 * XREFs of ?FindIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAU_LUID@@0PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C013F70C
 * Callers:
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::FindIndirectOutputDuplMgr(
        DXGGLOBAL *this,
        struct _LUID *a2,
        struct _LUID *a3,
        struct OUTPUTDUPL_MGR **a4)
{
  _QWORD *v8; // rbx
  _QWORD *i; // r10
  unsigned int v10; // ebx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGGLOBAL *)((char *)this + 912));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v8 = (_QWORD *)((char *)this + 952);
  for ( i = (_QWORD *)*v8; i != v8 && i; i = (_QWORD *)*i )
  {
    if ( *a2 == i[12] && (!a3 || *a3 == i[13]) )
    {
      v10 = 0;
      *a4 = (struct OUTPUTDUPL_MGR *)(i + 3);
      goto LABEL_10;
    }
  }
  v10 = -1073741275;
LABEL_10:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v10;
}
