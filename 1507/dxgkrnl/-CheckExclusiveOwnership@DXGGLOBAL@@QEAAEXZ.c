/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00B2FD8
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C00B2FA0 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C00B33E0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  __int64 v2; // rdx
  struct DXGADAPTER *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD **v6; // r15
  char v7; // di
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  struct DXGADAPTER *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // [rsp+20h] [rbp-60h] BYREF
  char v28; // [rsp+28h] [rbp-58h]
  _BYTE v29[16]; // [rsp+30h] [rbp-50h] BYREF
  char v30[8]; // [rsp+40h] [rbp-40h] BYREF
  char v31[8]; // [rsp+48h] [rbp-38h] BYREF
  struct DXGADAPTER *v32; // [rsp+50h] [rbp-30h]
  char v33; // [rsp+58h] [rbp-28h]
  char v34[8]; // [rsp+60h] [rbp-20h] BYREF
  struct DXGADAPTER *v35; // [rsp+68h] [rbp-18h]
  char v36; // [rsp+70h] [rbp-10h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v6 = (_QWORD **)((char *)this + 416);
  v7 = 1;
  v8 = *v6;
  while ( 1 )
  {
    do
    {
      if ( v8 == v6 || !v8 )
      {
        v7 = 0;
        goto LABEL_42;
      }
      v9 = v8;
      v8 = (_QWORD *)*v8;
      _m_prefetchw(v9 + 3);
      v10 = v9[3];
      while ( v10 )
      {
        v3 = (struct DXGADAPTER *)(v10 + 1);
        v11 = v10;
        v10 = _InterlockedCompareExchange64(v9 + 3, v10 + 1, v10);
        if ( v11 == v10 )
        {
          LOBYTE(v10) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v10 );
    v32 = (struct DXGADAPTER *)v9;
    v33 = 0;
    if ( _InterlockedIncrement64(v9 + 3) <= 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
      *(_QWORD *)(v20 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v35 = (struct DXGADAPTER *)v9;
    v36 = 0;
    if ( _InterlockedIncrement64(v9 + 3) <= 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
      *(_QWORD *)(v21 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v12 = _InterlockedDecrement64(v9 + 3);
    if ( !v12 )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v9[2], (struct DXGADAPTER *)v9);
    if ( v12 < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
      *(_QWORD *)(v22 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( v9[247] )
      break;
LABEL_27:
    v16 = v35;
    if ( v35 )
    {
      if ( v36 )
      {
        COREACCESS::Release((COREACCESS *)v34);
        v16 = v35;
      }
      v17 = _InterlockedDecrement64((volatile signed __int64 *)v16 + 3);
      if ( !v17 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v16 + 2), v16);
      if ( v17 < 0 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v16, v2, v4, v5);
        *(_QWORD *)(v25 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v25);
      }
    }
    v3 = v32;
    if ( v32 )
    {
      if ( v33 )
      {
        COREACCESS::Release((COREACCESS *)v31);
        v3 = v32;
      }
      v18 = _InterlockedDecrement64((volatile signed __int64 *)v3 + 3);
      if ( !v18 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v3 + 2), v3);
      if ( v18 < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
        *(_QWORD *)(v26 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v26);
      }
    }
  }
  v27 = v9;
  if ( _InterlockedIncrement64(v9 + 3) <= 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v23 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v23);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9 + 13, 0LL);
  v13 = *((_DWORD *)v9 + 40);
  v28 = 1;
  if ( v13 != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v9[247], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v9[247], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    v28 = 0;
    ExReleasePushLockSharedEx(v9 + 13, 0LL);
    KeLeaveCriticalRegion();
    v15 = _InterlockedDecrement64(v9 + 3);
    if ( !v15 )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v9[2], (struct DXGADAPTER *)v9);
    if ( v15 < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v14, v2, v4, v5);
      *(_QWORD *)(v24 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v24);
    }
    goto LABEL_27;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v27);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
LABEL_42:
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  return v7;
}
