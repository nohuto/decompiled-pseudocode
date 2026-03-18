/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C00D81F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0093374 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER *v12; // rdi
  int PairingAdapters; // eax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rbx
  __int64 v16; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+30h] [rbp-50h] BYREF
  DXGADAPTER *v25[2]; // [rsp+38h] [rbp-48h] BYREF
  DXGPUSHLOCK *v26[2]; // [rsp+48h] [rbp-38h] BYREF
  int v27; // [rsp+58h] [rbp-28h]
  _BYTE v28[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+68h] [rbp-18h]
  DXGADAPTER *v30; // [rsp+70h] [rbp-10h]
  char v31; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v32; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGADAPTER *v33; // [rsp+B8h] [rbp+38h] BYREF

  v3 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v25, v3, ProcessDxgProcess, &v33);
    v12 = v33;
    if ( v33 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v33, 0, &v32, &v24, 0LL, 0LL);
      v3 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v23 + 24) = v12;
        *(_QWORD *)(v23 + 32) = v3;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        v15 = v32;
        v30 = v32;
        v31 = 0;
        if ( v32 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v32 + 3);
          v29 = -1LL;
          v15 = v32;
        }
        DXGADAPTER::ReleaseReference(v15);
        v16 = *((_QWORD *)v15 + 267);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, (struct _KTHREAD **)(v16 + 592));
        DXGPUSHLOCK::AcquireShared(v26[1]);
        v27 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue((void **)v16, v26, 1);
        if ( PresentHistoryTokenQueue )
        {
          v18 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v18;
          ObfReferenceObject(v18);
          LODWORD(v3) = 0;
        }
        else
        {
          *a2 = 0LL;
          LODWORD(v3) = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
        COREACCESS::~COREACCESS((COREACCESS *)v28);
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      *(_QWORD *)(v22 + 24) = v3;
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v25, v19);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v7);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
  }
  return (unsigned int)v3;
}
