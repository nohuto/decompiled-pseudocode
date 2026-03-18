/*
 * XREFs of ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C01577C4
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C008DE80 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     <none>
 */

struct DXGDEVICE *__fastcall OUTPUTDUPL_CONTEXT::GetProducerDevice(
        OUTPUTDUPL_CONTEXT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = 0LL;
  v5 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)this + v5 + 6);
      v8 = *(_QWORD *)(v7 + 16);
      if ( v4 )
        goto LABEL_5;
      if ( v8 )
        break;
LABEL_8:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)this + 10) )
        return (struct DXGDEVICE *)v4;
    }
    v4 = *(_QWORD *)(v7 + 16);
LABEL_5:
    if ( v8 && v4 != v8 )
    {
      v9 = WdLogNewEntry5_WdAssertion(this, v7, a3, a4);
      *(_QWORD *)(v9 + 24) = 2047LL;
      WdLogEvent5_WdAssertion(v9);
    }
    goto LABEL_8;
  }
  return (struct DXGDEVICE *)v4;
}
