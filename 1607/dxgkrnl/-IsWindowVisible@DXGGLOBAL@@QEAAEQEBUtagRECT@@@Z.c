/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00A3AC4
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C0073C20 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0170AB0 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C0087BB8 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  _QWORD **v4; // r14
  char v5; // di
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  int IsWindowVisible; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  _BYTE v14[16]; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-29h] BYREF
  char v16; // [rsp+48h] [rbp-19h]
  _BYTE v17[80]; // [rsp+58h] [rbp-9h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v4 = (_QWORD **)((char *)this + 416);
  v5 = 1;
  v6 = *v4;
  while ( 1 )
  {
    do
    {
      if ( v6 == v4 || !v6 )
      {
        v5 = 0;
        goto LABEL_19;
      }
      v7 = v6;
      v6 = (_QWORD *)*v6;
      _m_prefetchw(v7 + 3);
      v8 = v7[3];
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64(v7 + 3, v8 + 1, v8);
        if ( v9 == v8 )
        {
          LOBYTE(v8) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v8 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    if ( v7[266] )
      break;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v15,
    (struct DXGADAPTER *)v7,
    1);
  if ( *((_DWORD *)v7 + 44) != 1 )
  {
LABEL_11:
    if ( v16 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v7[266], a2);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    if ( IsWindowVisible != 261 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v13 + 24) = 1534LL;
      WdLogEvent5_WdAssertion(v13);
    }
    goto LABEL_11;
  }
  v5 = 0;
LABEL_16:
  if ( v16 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
LABEL_19:
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v5;
}
