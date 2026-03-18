/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00783C0
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C0074920 (OutputDuplProcessTerminate.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(struct DXGFASTMUTEX *const *this, struct _EPROCESS *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( a2 == this[6] )
    *((_QWORD *)this + 6) = 0LL;
  v4 = 0LL;
  v5 = *((_DWORD *)this + 1);
  v6 = **((_QWORD **)this + 2);
  if ( v5 )
  {
    while ( a2 != *(struct _EPROCESS **)(32LL * (unsigned int)v4 + v6 + 8) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v5 )
        goto LABEL_6;
    }
    v7 = 32LL * (unsigned int)v4;
    if ( *(_DWORD *)(v7 + v6) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v8 + 24) = 4039LL;
      WdLogEvent5_WdAssertion(v8);
    }
    *(_QWORD *)(v7 + v6 + 8) = 0LL;
  }
LABEL_6:
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
