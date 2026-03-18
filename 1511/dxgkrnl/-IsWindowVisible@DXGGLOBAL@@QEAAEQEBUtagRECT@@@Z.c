/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C0097078
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C00C5750 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C014B6AC (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C009B154 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
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
  _BYTE v12[8]; // [rsp+20h] [rbp-60h] BYREF
  char v13; // [rsp+28h] [rbp-58h]
  _BYTE v14[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v15[64]; // [rsp+40h] [rbp-40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGGLOBAL *)((char *)this + 472));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v4 = (_QWORD **)((char *)this + 536);
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
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    if ( v7[248] )
      break;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v12,
    (struct DXGADAPTER *)v7,
    1);
  if ( *((_DWORD *)v7 + 40) != 1 )
  {
LABEL_11:
    if ( v13 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v7[248], a2);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    goto LABEL_11;
  }
  v5 = 0;
LABEL_16:
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
LABEL_19:
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v5;
}
