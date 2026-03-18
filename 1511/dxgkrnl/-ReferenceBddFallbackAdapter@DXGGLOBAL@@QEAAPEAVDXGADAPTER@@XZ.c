/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C01465A4
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this)
{
  signed __int64 v2; // rcx
  DXGADAPTER *v3; // r8
  DXGADAPTER *v4; // rdx
  DXGADAPTER *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 472));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v3 = (DXGGLOBAL *)((char *)this + 536);
  v4 = (DXGADAPTER *)*((_QWORD *)this + 67);
  while ( v4 != v3 && v4 )
  {
    v5 = v4;
    if ( DXGADAPTER::IsBddFallbackDriver(v4) )
    {
      _m_prefetchw((char *)v5 + 24);
      v6 = *((_QWORD *)v5 + 3);
      while ( v6 )
      {
        v2 = v6 + 1;
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 3, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_10;
      }
    }
  }
  v8 = WdLogNewEntry5_WdAssertion(v2);
  *(_QWORD *)(v8 + 24) = 1321LL;
  WdLogEvent5_WdAssertion(v8);
  v5 = 0LL;
LABEL_10:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v5;
}
