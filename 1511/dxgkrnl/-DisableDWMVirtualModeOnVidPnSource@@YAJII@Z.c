/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00C9138
 * Callers:
 *     DxgkSetVidPnSourceOwner1 @ 0x1C00AFBC0 (DxgkSetVidPnSourceOwner1.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000ADAC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00A9540 (DxgkGetGlobalRawmodeFlag.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B04D8 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B0504 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00C933C (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(unsigned int a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r9
  unsigned __int16 v12; // bx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int Active; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edi
  int v25; // eax
  int v26; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE v33[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v34[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v35[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v36[96]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[80]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v38[464]; // [rsp+110h] [rbp+10h] BYREF
  struct DXGDEVICE *v39; // [rsp+300h] [rbp+200h] BYREF
  struct _LUID v40; // [rsp+308h] [rbp+208h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33, v3, Current, &v39);
    v8 = (__int64)v39;
    if ( v39 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34, v39);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v35, (struct _KTHREAD **)(v8 + 88));
      v10 = *(_QWORD *)(v8 + 2832);
      if ( v10 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v38,
          *(struct ADAPTER_DISPLAY **)(v10 + 1984),
          v6);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v38);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, v8, 1, v11, 0);
        LODWORD(v8) = COREDEVICEACCESS::AcquireExclusive((__int64)v37);
        if ( (int)v8 >= 0 )
        {
          v40 = *(struct _LUID *)(v10 + 252);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v37);
          v12 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, 8u, 0);
          LOWORD(v39) = 8;
          while ( 1 )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v36, v12, v13, v14) < v12 )
            {
              v32 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
              *(_QWORD *)(v32 + 24) = v12;
              WdLogEvent5_WdLowResource(v32);
              LODWORD(v8) = -1073741801;
              goto LABEL_14;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v36, 0, 0, 0, (unsigned __int16 *)&v39);
            v8 = Active;
            if ( Active != -1073741789 )
              break;
            v12 = (unsigned __int16)v39;
          }
          if ( Active < 0 )
            goto LABEL_23;
          v21 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v36, &v40, a2);
          v8 = v21;
          if ( v21 < 0 )
            goto LABEL_23;
          v24 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v20) )
            v24 = 0x20000;
          v25 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v36, v24, v22, v23);
          v8 = v25;
          if ( v25 < 0 || (v26 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v36, v24), v8 = v26, v26 < 0) )
          {
LABEL_23:
            v31 = WdLogNewEntry5_WdError(v20);
            *(_QWORD *)(v31 + 24) = v8;
            WdLogEvent5_WdError(v31);
          }
LABEL_14:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v38);
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v30 + 24) = v3;
        WdLogEvent5_WdError(v30);
        LODWORD(v8) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
      if ( v34[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v29 + 24) = v3;
      WdLogEvent5_WdError(v29);
      LODWORD(v8) = -1073741811;
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33);
    return (unsigned int)v8;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v28 + 24) = 2632LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
}
