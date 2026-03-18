/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00DE56C
 * Callers:
 *     DxgkSetVidPnSourceOwner1 @ 0x1C0073160 (DxgkSetVidPnSourceOwner1.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C00015B4 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0073EC4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0073EF0 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C008A078 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00B8BF0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00DE7C8 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C01807D4 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r9
  unsigned __int16 v14; // bx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int Active; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // edi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned int v28; // edx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _BYTE v36[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v37[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v38[64]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  _BYTE v40[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[96]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v42[464]; // [rsp+130h] [rbp+30h] BYREF
  struct DXGDEVICE *v43; // [rsp+320h] [rbp+220h] BYREF
  struct _LUID v44; // [rsp+328h] [rbp+228h] BYREF

  v3 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v36, v3, ProcessDxgProcess, &v43);
    v10 = (__int64)v43;
    if ( v43 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v43);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v40,
        (struct _KTHREAD **)(v10 + 88));
      v12 = *(_QWORD *)(v10 + 2856);
      if ( v12 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v42,
          *(struct ADAPTER_DISPLAY **)(v12 + 2128),
          v8);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v42);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, v10, 1, v13, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireExclusive((__int64)v41);
        if ( (int)v10 >= 0 )
        {
          v44 = *(struct _LUID *)(v12 + 268);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v41);
          v14 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v38, 8u, 0);
          LOWORD(v43) = 8;
          while ( 1 )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v38, v14, v15, v16) < v14 )
            {
              v35 = WdLogNewEntry5_WdLowResource(v17);
              *(_QWORD *)(v35 + 24) = v14;
              WdLogEvent5_WdLowResource(v35);
              LODWORD(v10) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v38, 0, 0, 0, (unsigned __int16 *)&v43);
            v10 = Active;
            if ( Active != -1073741789 )
              break;
            v14 = (unsigned __int16)v43;
          }
          if ( Active < 0 )
            goto LABEL_30;
          v20 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v38, &v44, a2);
          v10 = v20;
          if ( v20 < 0 )
            goto LABEL_30;
          v23 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v19) )
            v23 = 0x20000;
          v24 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v38, v23, v21, v22);
          v10 = v24;
          if ( v24 < 0 || (v25 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v38, v23), v10 = v25, v25 < 0) )
          {
LABEL_30:
            v34 = WdLogNewEntry5_WdError(v19);
            *(_QWORD *)(v34 + 24) = v10;
            WdLogEvent5_WdError(v34);
          }
          else
          {
            v26 = *(_QWORD *)(v39 + 40);
            if ( v26 )
            {
              v27 = *(_DWORD *)(v39 + 36);
              v28 = 0;
              if ( v27 )
              {
                while ( 1 )
                {
                  v29 = 168LL * v28;
                  if ( *(_DWORD *)(v29 + v26 + 152) || *(_DWORD *)(v29 + v26 + 164) || *(_DWORD *)(v29 + v26 + 160) )
                    break;
                  if ( ++v28 >= v27 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange();
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v38);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v42);
      }
      else
      {
        v33 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v33 + 24) = v3;
        WdLogEvent5_WdError(v33);
        LODWORD(v10) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
      if ( v37[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v32 + 24) = v3;
      WdLogEvent5_WdError(v32);
      LODWORD(v10) = -1073741811;
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v36);
    return (unsigned int)v10;
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v31 + 24) = 2873LL;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
}
