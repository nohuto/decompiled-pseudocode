/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00C8828
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C00C87F0 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C00C8B3C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v2; // r14
  char v3; // si
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _QWORD *v9; // [rsp+20h] [rbp-60h] BYREF
  char v10; // [rsp+28h] [rbp-58h]
  _BYTE v11[16]; // [rsp+30h] [rbp-50h] BYREF
  char v12[8]; // [rsp+40h] [rbp-40h] BYREF
  char v13[8]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-30h]
  char v15; // [rsp+58h] [rbp-28h]
  char v16[8]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp-18h]
  char v18; // [rsp+70h] [rbp-10h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 472));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v2 = (_QWORD **)((char *)this + 536);
  v3 = 1;
  v4 = *v2;
  while ( 1 )
  {
    do
    {
      if ( v4 == v2 || !v4 )
      {
        v3 = 0;
        goto LABEL_21;
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
    v14 = v5;
    v15 = 0;
    DXGADAPTER::AcquireReference((DXGADAPTER *)v5);
    v17 = v5;
    v18 = 0;
    DXGADAPTER::AcquireReference((DXGADAPTER *)v5);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
    if ( v5[248] )
      break;
LABEL_19:
    COREACCESS::~COREACCESS((COREACCESS *)v16);
    COREACCESS::~COREACCESS((COREACCESS *)v13);
  }
  v9 = v5;
  v10 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v9);
  if ( *((_DWORD *)v5 + 40) != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v5[248], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v5[248], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    if ( v10 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v9);
    goto LABEL_19;
  }
  if ( v10 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v9);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
LABEL_21:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v3;
}
