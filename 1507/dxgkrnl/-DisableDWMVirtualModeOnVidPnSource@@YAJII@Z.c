/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34
 * Callers:
 *     DxgkSetVidPnSourceOwner1 @ 0x1C00B46A0 (DxgkSetVidPnSourceOwner1.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001B68 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000AB70 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00623A0 (DxgkGetGlobalRawmodeFlag.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0066174 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00663CC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00B3F38 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B5210 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B523C (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, unsigned int a2)
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
  __int64 v15; // rcx
  int Active; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edi
  int v22; // eax
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v32[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v33[96]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v34[80]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v35[464]; // [rsp+110h] [rbp+10h] BYREF
  struct DXGDEVICE *v36; // [rsp+300h] [rbp+200h] BYREF
  struct _LUID v37; // [rsp+308h] [rbp+208h] BYREF

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v6 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v30, v3, Current, &v36);
    v8 = (__int64)v36;
    if ( v36 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v36);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v32, (struct _KTHREAD **)(v8 + 88));
      v10 = *(_QWORD *)(v8 + 18704);
      if ( v10 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v35,
          *(struct ADAPTER_DISPLAY **)(v10 + 1976),
          v6);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v35);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, v8, 1, v11, 0);
        LODWORD(v8) = COREDEVICEACCESS::AcquireExclusive((__int64)v34);
        if ( (int)v8 >= 0 )
        {
          v37 = *(struct _LUID *)(v10 + 252);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v34);
          v12 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v33, 8u, 0);
          LOWORD(v36) = 8;
          while ( 1 )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v33, v12, v13, v14) < v12 )
            {
              v29 = WdLogNewEntry5_WdLowResource(v15);
              *(_QWORD *)(v29 + 24) = v12;
              WdLogEvent5_WdLowResource(v29);
              LODWORD(v8) = -1073741801;
              goto LABEL_14;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v33, 0LL, 0LL, 0LL, (unsigned __int16 *)&v36);
            v8 = Active;
            if ( Active != -1073741789 )
              break;
            v12 = (unsigned __int16)v36;
          }
          if ( Active < 0 )
            goto LABEL_23;
          v18 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v33, &v37, a2);
          v8 = v18;
          if ( v18 < 0 )
            goto LABEL_23;
          v21 = 0;
          if ( DxgkGetGlobalRawmodeFlag() )
            v21 = 0x20000;
          v22 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v33, v21, v19, v20);
          v8 = v22;
          if ( v22 < 0 || (v23 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v33, v21), v8 = v23, v23 < 0) )
          {
LABEL_23:
            v28 = WdLogNewEntry5_WdError(v17);
            *(_QWORD *)(v28 + 24) = v8;
            WdLogEvent5_WdError(v28);
          }
LABEL_14:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v33);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v35);
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v27 + 24) = v3;
        WdLogEvent5_WdError(v27);
        LODWORD(v8) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      if ( v31[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v26 + 24) = v3;
      WdLogEvent5_WdError(v26);
      LODWORD(v8) = -1073741811;
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v30);
    return (unsigned int)v8;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v25 + 24) = 2609LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
}
