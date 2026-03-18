/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008F7C8
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C008F6BC (OutputDuplProcessTerminate.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z @ 0x1C01553E0 (-Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(struct DXGFASTMUTEX **this, struct _EPROCESS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( a2 == this[6] )
    this[6] = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)this + 1);
  v9 = *(_QWORD *)this[2];
  if ( (_DWORD)v8 )
  {
    while ( a2 != *(struct _EPROCESS **)(32LL * (unsigned int)v7 + v9 + 8) )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= (unsigned int)v8 )
        goto LABEL_6;
    }
    if ( *((_DWORD *)this + 6) )
      OUTPUTDUPL_SESSION_MGR::Sqm((OUTPUTDUPL_SESSION_MGR *)this, v7);
    v10 = 32 * v7;
    if ( *(_DWORD *)(v10 + v9) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v4, v5, v6);
      *(_QWORD *)(v11 + 24) = 3972LL;
      WdLogEvent5_WdAssertion(v11);
    }
    *(_QWORD *)(v10 + v9 + 8) = 0LL;
  }
LABEL_6:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
