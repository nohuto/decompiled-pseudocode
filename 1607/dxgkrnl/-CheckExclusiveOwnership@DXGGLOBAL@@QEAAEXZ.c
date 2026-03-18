/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00DD968
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C00DD930 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C00DDB18 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v2; // r14
  char v3; // di
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  struct DXGADAPTER *v8; // rcx
  struct DXGADAPTER *v9; // rcx
  _BYTE v11[16]; // [rsp+28h] [rbp-39h] BYREF
  char v12[8]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-21h]
  char v14; // [rsp+48h] [rbp-19h]
  char v15[8]; // [rsp+58h] [rbp-9h] BYREF
  char v16[8]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v17; // [rsp+68h] [rbp+7h]
  struct DXGADAPTER *v18; // [rsp+70h] [rbp+Fh]
  char v19; // [rsp+78h] [rbp+17h]
  char v20[8]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+88h] [rbp+27h]
  struct DXGADAPTER *v22; // [rsp+90h] [rbp+2Fh]
  char v23; // [rsp+98h] [rbp+37h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v2 = (_QWORD **)((char *)this + 416);
  v3 = 1;
  v4 = *v2;
  while ( 1 )
  {
    do
    {
      if ( v4 == v2 || !v4 )
      {
        v3 = 0;
        goto LABEL_28;
      }
      v5 = v4;
      v4 = (_QWORD *)*v4;
      _m_prefetchw(v5 + 3);
      v6 = v5[3];
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v5 + 3, v6 + 1, v6);
        if ( v7 == v6 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v6 );
    v18 = (struct DXGADAPTER *)v5;
    v19 = 0;
    _InterlockedAdd64(v5 + 3, 1uLL);
    v17 = -1LL;
    v22 = (struct DXGADAPTER *)v5;
    v23 = 0;
    _InterlockedAdd64(v5 + 3, 1uLL);
    v21 = -1LL;
    if ( !_InterlockedDecrement64(v5 + 3) )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v5[2], (struct DXGADAPTER *)v5);
    if ( v5[266] )
      break;
LABEL_17:
    v8 = v22;
    if ( v22 )
    {
      if ( v23 )
      {
        COREACCESS::Release((COREACCESS *)v20);
        v8 = v22;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v8 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), v8);
    }
    v9 = v18;
    if ( v18 )
    {
      if ( v19 )
      {
        COREACCESS::Release((COREACCESS *)v16);
        v9 = v18;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v9 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v9 + 2), v9);
    }
  }
  v13 = v5;
  v14 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  if ( *((_DWORD *)v5 + 44) != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v5[266], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v5[266], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    if ( v14 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    goto LABEL_17;
  }
  if ( v14 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
LABEL_28:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v3;
}
