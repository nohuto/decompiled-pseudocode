/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00BBCE4
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C00BBBD0 (OutputDuplProcessTerminate.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z @ 0x1C01596C4 (-Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(struct DXGFASTMUTEX **this, struct _EPROCESS *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( a2 == this[6] )
    this[6] = 0LL;
  v4 = 0LL;
  v5 = *((unsigned int *)this + 1);
  v6 = *(_QWORD *)this[2];
  if ( (_DWORD)v5 )
  {
    while ( a2 != *(struct _EPROCESS **)(32LL * (unsigned int)v4 + v6 + 8) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= (unsigned int)v5 )
        goto LABEL_6;
    }
    if ( *((_DWORD *)this + 6) )
      OUTPUTDUPL_SESSION_MGR::Sqm((OUTPUTDUPL_SESSION_MGR *)this, v4);
    v7 = 32 * v4;
    if ( *(_DWORD *)(v7 + v6) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v8 + 24) = 3949LL;
      WdLogEvent5_WdAssertion(v8);
    }
    *(_QWORD *)(v7 + v6 + 8) = 0LL;
  }
LABEL_6:
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
