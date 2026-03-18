/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CEA48
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C00CE950 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00096CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C00CF14C (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct _KEVENT **a4)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  struct DXGADAPTER *v20; // r15
  int PairingAdapters; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGADAPTER *v26; // r14
  ADAPTER_DISPLAY **v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+28h] [rbp-39h] BYREF
  struct DXGADAPTER *v44; // [rsp+30h] [rbp-31h] BYREF
  struct DXGADAPTER *v45; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v46[24]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v47[64]; // [rsp+58h] [rbp-9h] BYREF

  v4 = a3;
  v5 = 0LL;
  v6 = a2;
  v7 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v10 = Current;
  if ( !Current )
  {
    v36 = WdLogNewEntry5_WdError(v9);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    return (unsigned int)v18;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
  {
    v37 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    LODWORD(v18) = -1073741790;
    *(_QWORD *)(v37 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v37);
    return (unsigned int)v18;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, v10);
  LODWORD(v18) = -1073741811;
  v19 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 >= *((_DWORD *)v10 + 58)
    || (v17 = *((_QWORD *)v10 + 27),
        v15 = ((unsigned int)v7 >> 26) & 0x30,
        v16 = *(unsigned int *)(v17 + 16LL * (unsigned int)v19 + 8),
        (((unsigned int)v7 >> 26) & 0x30) != (*(_BYTE *)(v17 + 16LL * (unsigned int)v19 + 8) & 0x30))
    || (v16 & 0x1000) != 0
    || (v16 & 0xF) == 0
    || (*(_BYTE *)(v17 + 16LL * (unsigned int)v19 + 8) & 0xF) != 1
    || (v20 = *(struct DXGADAPTER **)(v17 + 16LL * (unsigned int)v19)) == 0LL )
  {
    v39 = WdLogNewEntry5_WdWarning(v15, v19, v16, v17);
    *(_QWORD *)(v39 + 24) = v7;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    goto LABEL_45;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_10;
  v38 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v38 >= *((_DWORD *)v10 + 58)
    || (v15 = ((unsigned int)v6 >> 26) & 0x30,
        v16 = *(unsigned int *)(v17 + 16LL * (unsigned int)v38 + 8),
        (((unsigned int)v6 >> 26) & 0x30) != (*(_BYTE *)(v17 + 16LL * (unsigned int)v38 + 8) & 0x30))
    || (v16 & 0x1000) != 0
    || (v16 & 0xF) == 0
    || (*(_BYTE *)(v17 + 16LL * (unsigned int)v38 + 8) & 0xF) != 3
    || (v5 = *(_QWORD *)(v17 + 16LL * (unsigned int)v38)) == 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v15, v38, v16, v17);
    *(_QWORD *)(v39 + 24) = v20;
    *(_QWORD *)(v39 + 32) = v6;
LABEL_45:
    WdLogEvent5_WdWarning(v39);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
    return (unsigned int)v18;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v5 + 64));
LABEL_10:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
  v43 = v5;
  PairingAdapters = DxgkpGetPairingAdapters(v20, (unsigned int)v4, &v45, &v44);
  v18 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v40[3] = v20;
    v40[4] = v4;
    v40[5] = v18;
  }
  else
  {
    v26 = v45;
    v27 = (ADAPTER_DISPLAY **)v44;
    if ( !v45 || !v44 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      *(_QWORD *)(v41 + 24) = 22836LL;
      WdLogEvent5_WdAssertion(v41);
    }
    if ( (unsigned int)v4 < *((_DWORD *)v27[247] + 20) )
    {
      if ( !v5
        || v26 == *(struct DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL) && v27 == *(ADAPTER_DISPLAY ***)(v5 + 18704) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v26, (struct DXGADAPTER *const)v27);
        DXGADAPTER::ReleaseReference(v26);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v27);
        v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
        if ( v30 >= 0 )
        {
          if ( !*((_QWORD *)v26 + 248) )
          {
            v34 = WdLogNewEntry5_WdAssertion(v29, v28, v31, v32);
            *(_QWORD *)(v34 + 24) = 22871LL;
            WdLogEvent5_WdAssertion(v34);
          }
          if ( !v27[247] )
          {
            v35 = WdLogNewEntry5_WdAssertion(v29, v28, v31, v32);
            *(_QWORD *)(v35 + 24) = 22872LL;
            WdLogEvent5_WdAssertion(v35);
          }
          if ( !(_DWORD)v6 || *(_DWORD *)(v5 + 352) == 1 )
          {
            ADAPTER_DISPLAY::GetVBlankEvent(v27[247], v4, a4);
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v47);
          }
          else
          {
            v30 = -1073741130;
          }
        }
        LODWORD(v18) = v30;
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      }
      else
      {
        v42 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
        *(_QWORD *)(v42 + 24) = v20;
        *(_QWORD *)(v42 + 32) = v6;
        WdLogEvent5_WdWarning(v42);
        LODWORD(v18) = -1073741811;
      }
      goto LABEL_23;
    }
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    LODWORD(v18) = -1073741811;
    v40[3] = v4;
    v40[4] = -1073741811LL;
  }
  WdLogEvent5_WdError(v40);
LABEL_23:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v43);
  return (unsigned int)v18;
}
