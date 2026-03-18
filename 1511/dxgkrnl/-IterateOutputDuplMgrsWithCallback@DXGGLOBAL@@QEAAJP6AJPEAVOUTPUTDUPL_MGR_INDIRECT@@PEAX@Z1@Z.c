/*
 * XREFs of ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C0096C10
 * Callers:
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00990F0 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     DxgkCreateAllocation @ 0x1C00B5600 (DxgkCreateAllocation.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        DXGGLOBAL *this,
        int (*a2)(struct OUTPUTDUPL_MGR_INDIRECT *, void *),
        void *a3)
{
  _QWORD **v6; // rsi
  _QWORD *i; // rbx
  int v8; // edi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 1128));
  v6 = (_QWORD **)((char *)this + 1192);
  for ( i = *v6; i != v6 && i; i = (_QWORD *)*i )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD *, void *))a2)(i, a3);
    if ( v8 < 0 )
      goto LABEL_4;
  }
  v8 = 0;
LABEL_4:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return (unsigned int)v8;
}
