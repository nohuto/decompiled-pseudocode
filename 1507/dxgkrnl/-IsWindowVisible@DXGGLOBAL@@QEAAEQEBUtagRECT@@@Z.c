/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00B738C
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C00B4F20 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C0147990 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00B62C8 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  _QWORD **v4; // r14
  char v5; // di
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // r8
  __int64 v11; // r9
  int IsWindowVisible; // eax
  _QWORD *v14; // [rsp+20h] [rbp-60h] BYREF
  char v15; // [rsp+28h] [rbp-58h]
  _BYTE v16[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v17[64]; // [rsp+40h] [rbp-40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
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
    if ( v7[247] )
      break;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  }
  v14 = v7;
  v15 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v14);
  if ( *((_DWORD *)v7 + 40) != 1 )
  {
LABEL_11:
    if ( v15 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v14);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v7[247], a2, v10, v11);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    goto LABEL_11;
  }
  v5 = 0;
LABEL_16:
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v14);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
LABEL_19:
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return v5;
}
