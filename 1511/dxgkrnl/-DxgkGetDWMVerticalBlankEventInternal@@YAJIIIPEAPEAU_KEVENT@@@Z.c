/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BB068
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C00BAF70 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000BE34 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C009A458 (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(
        unsigned int a1,
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
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  struct DXGADAPTER *v22; // r15
  __int64 v23; // rdx
  int PairingAdapters; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rax
  struct DXGADAPTER *v31; // r14
  ADAPTER_DISPLAY **v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v40; // [rsp+28h] [rbp-39h] BYREF
  struct DXGADAPTER *v41; // [rsp+30h] [rbp-31h] BYREF
  struct DXGADAPTER *v42; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v43[24]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v44[64]; // [rsp+58h] [rbp-9h] BYREF

  v4 = a3;
  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( Current )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      LODWORD(v12) = -1073741790;
      *(_QWORD *)(v17 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v17);
      return (unsigned int)v12;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, v10);
    LODWORD(v12) = -1073741811;
    v21 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)v10 + 58)
      && (v20 = *((_QWORD *)v10 + 27),
          v18 = ((unsigned int)v7 >> 26) & 0x30,
          v19 = *(unsigned int *)(v20 + 16LL * (unsigned int)v21 + 8),
          (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * (unsigned int)v21 + 8) & 0x30))
      && (v19 & 0x1000) == 0
      && (v19 & 0xF) != 0
      && (*(_BYTE *)(v20 + 16LL * (unsigned int)v21 + 8) & 0xF) == 1
      && (v22 = *(struct DXGADAPTER **)(v20 + 16LL * (unsigned int)v21)) != 0LL )
    {
      if ( !(_DWORD)v6 )
        goto LABEL_19;
      v23 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)v10 + 58) )
      {
        v18 = ((unsigned int)v6 >> 26) & 0x30;
        v19 = *(unsigned int *)(v20 + 16LL * (unsigned int)v23 + 8);
        if ( (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * (unsigned int)v23 + 8) & 0x30)
          && (v19 & 0x1000) == 0
          && (v19 & 0xF) != 0
          && (*(_BYTE *)(v20 + 16LL * (unsigned int)v23 + 8) & 0xF) == 3 )
        {
          v5 = *(_QWORD *)(v20 + 16LL * (unsigned int)v23);
          if ( v5 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v5 + 64));
LABEL_19:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
            v40 = v5;
            PairingAdapters = DxgkpGetPairingAdapters(v22, v4, &v42, &v41);
            v12 = PairingAdapters;
            if ( PairingAdapters >= 0 )
            {
              v31 = v42;
              v32 = (ADAPTER_DISPLAY **)v41;
              if ( !v42 || !v41 )
              {
                v33 = WdLogNewEntry5_WdAssertion(v26);
                *(_QWORD *)(v33 + 24) = 23420LL;
                WdLogEvent5_WdAssertion(v33);
              }
              if ( (unsigned int)v4 < *((_DWORD *)v32[248] + 26) )
              {
                if ( !v5
                  || v31 == *(struct DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL)
                  && v32 == *(ADAPTER_DISPLAY ***)(v5 + 2832) )
                {
                  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v31, (struct DXGADAPTER *const)v32);
                  DXGADAPTER::ReleaseReference(v31);
                  DXGADAPTER::ReleaseReference((DXGADAPTER *)v32);
                  v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44);
                  if ( v36 >= 0 )
                  {
                    if ( !*((_QWORD *)v31 + 249) )
                    {
                      v37 = WdLogNewEntry5_WdAssertion(v35);
                      *(_QWORD *)(v37 + 24) = 23455LL;
                      WdLogEvent5_WdAssertion(v37);
                    }
                    if ( !v32[248] )
                    {
                      v38 = WdLogNewEntry5_WdAssertion(v35);
                      *(_QWORD *)(v38 + 24) = 23456LL;
                      WdLogEvent5_WdAssertion(v38);
                    }
                    if ( !(_DWORD)v6 || *(_DWORD *)(v5 + 352) == 1 )
                    {
                      ADAPTER_DISPLAY::GetVBlankEvent(v32[248], v4, a4);
                      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v44);
                    }
                    else
                    {
                      v36 = -1073741130;
                    }
                  }
                  LODWORD(v12) = v36;
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
                }
                else
                {
                  v34 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
                  *(_QWORD *)(v34 + 24) = v22;
                  *(_QWORD *)(v34 + 32) = v6;
                  WdLogEvent5_WdWarning(v34);
                  LODWORD(v12) = -1073741811;
                }
                goto LABEL_42;
              }
              v29 = (_QWORD *)WdLogNewEntry5_WdError(v26);
              LODWORD(v12) = -1073741811;
              v29[3] = v4;
              v29[4] = -1073741811LL;
            }
            else
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdError(v26);
              v29[3] = v22;
              v29[4] = v4;
              v29[5] = v12;
            }
            WdLogEvent5_WdError(v29);
LABEL_42:
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v40);
            return (unsigned int)v12;
          }
        }
      }
      v30 = WdLogNewEntry5_WdWarning(v18, v23, v19, v20);
      *(_QWORD *)(v30 + 24) = v22;
      *(_QWORD *)(v30 + 32) = v6;
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v18, v21, v19, v20);
      *(_QWORD *)(v30 + 24) = v7;
      *(_QWORD *)(v30 + 32) = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v30);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
    return (unsigned int)v12;
  }
  v11 = WdLogNewEntry5_WdError(v9);
  LODWORD(v12) = -1073741811;
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v11);
  return (unsigned int)v12;
}
