/*
 * XREFs of ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C013F2C8
 * Callers:
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C013F198 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01260F8 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall DXGGLOBAL::EnableFormattingBuffer(DXGGLOBAL *this, unsigned int a2)
{
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v4 = (_QWORD **)((char *)this + 416);
  v5 = *v4;
LABEL_2:
  while ( v5 != v4 && v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6[248] )
    {
      _m_prefetchw(v6 + 3);
      v7 = v6[3];
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          v11 = v6;
          v12 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v11);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
          if ( *((_DWORD *)v6 + 40) == 1 )
            ADAPTER_RENDER::EnableFormattingBuffer((ADAPTER_RENDER *)v6[248], a2, v9, v10);
          if ( v12 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v11);
          goto LABEL_2;
        }
      }
    }
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
