/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C01400CC
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this)
{
  signed __int64 v2; // rcx
  __int64 v3; // r9
  DXGADAPTER *v4; // r8
  DXGADAPTER *v5; // rdx
  DXGADAPTER *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = (DXGGLOBAL *)((char *)this + 416);
  v5 = (DXGADAPTER *)*((_QWORD *)this + 52);
  while ( v5 != v4 && v5 )
  {
    v6 = v5;
    if ( DXGADAPTER::IsBddFallbackDriver(v5) )
    {
      _m_prefetchw((char *)v6 + 24);
      v7 = *((_QWORD *)v6 + 3);
      while ( v7 )
      {
        v2 = v7 + 1;
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_10;
      }
    }
  }
  v9 = WdLogNewEntry5_WdAssertion(v2, v5, v4, v3);
  *(_QWORD *)(v9 + 24) = 1343LL;
  WdLogEvent5_WdAssertion(v9);
  v6 = 0LL;
LABEL_10:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v6;
}
