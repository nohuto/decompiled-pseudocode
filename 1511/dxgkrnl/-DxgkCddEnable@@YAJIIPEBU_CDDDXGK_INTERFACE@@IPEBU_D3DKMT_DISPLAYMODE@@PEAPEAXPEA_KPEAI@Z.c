/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00C4160
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00075F8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007630 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C00076BC (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C001AC48 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C012C790 (-GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // rbp
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // rsi
  char *v15; // rdi
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int CddShadowPitch; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  PVOID *v38; // rbx
  unsigned __int64 *v39; // rsi
  __int64 v40; // rax
  void *DoDCddShadowSession; // rax
  unsigned __int64 v42; // rcx
  _BYTE v43[80]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp+10h] BYREF

  v10 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v34 + 24) = 390LL;
    WdLogEvent5_WdAssertion(v34);
    LODWORD(v27) = -1073741637;
    goto LABEL_17;
  }
  Current = DXGPROCESS::GetCurrent();
  v14 = Current;
  if ( !Current )
  {
    LODWORD(v27) = -1073741811;
    v35 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    *(_QWORD *)(v35 + 32) = PsGetCurrentProcess();
    v36 = (_QWORD *)v35;
LABEL_26:
    WdLogEvent5_WdError(v36);
    goto LABEL_17;
  }
  v15 = (char *)Current + 192;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v16 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v16 < *((_DWORD *)v14 + 58)
    && (v17 = *((_QWORD *)v14 + 27),
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 3 )
  {
    v19 = *(_QWORD *)(v17 + 16LL * v16);
  }
  else
  {
    v19 = 0LL;
  }
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    LODWORD(v27) = -1073741811;
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v36[3] = -1073741811LL;
    v36[4] = v10;
    v36[5] = v14;
    goto LABEL_26;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, v19, 1, v21, 0);
  v22 = COREDEVICEACCESS::AcquireExclusive((__int64)v43);
  v27 = v22;
  if ( v22 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
    v37[3] = v27;
    v37[4] = v19;
    v37[5] = v14;
    WdLogEvent5_WdEvent(v37);
  }
  else
  {
    v27 = *(_QWORD *)(v19 + 2832);
    if ( !v27 || !*(_QWORD *)(v27 + 1984) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v33 + 24) = 426LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v28 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    if ( *(_QWORD *)(v19 + 2832) != v28 )
    {
      v38 = a6;
      v39 = a7;
      if ( !a6 || !a7 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v40 + 24) = 434LL;
        WdLogEvent5_WdAssertion(v40);
      }
      if ( *v38 )
      {
        ObfDereferenceObject(*v38);
        *v38 = 0LL;
      }
      if ( ADAPTER_DISPLAY::IsIdenticalMode(*(DXGADAPTER ***)(v27 + 1984), a4) )
      {
        DoDCddShadowSession = ADAPTER_DISPLAY::GetDoDCddShadowSession(*(ADAPTER_DISPLAY **)(v27 + 1984), a4, &v44);
        v42 = v44;
        if ( *v39 > v44 )
        {
          if ( DoDCddShadowSession )
            ObfDereferenceObject(DoDCddShadowSession);
        }
        else
        {
          *v38 = DoDCddShadowSession;
          *v39 = v42;
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v27 + 1984), a4);
    *a8 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v27 + 1984), a4, 1);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v27 + 1984), a4, a3);
    LODWORD(v27) = 0;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
LABEL_17:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 3002);
  return (unsigned int)v27;
}
