/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C017B898
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C017E790 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0027454 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00781E8 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C017BD18 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C017C6B0 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C017CC68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C0180894 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0181558 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  int v7; // ecx
  __int64 VidPnSourceId; // rdx
  bool v9; // cf
  __int64 v10; // rsi
  int v11; // ebx
  int VidPnSourceOwnerType; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // esi
  unsigned int v20; // r13d
  struct DXGFASTMUTEX **v21; // rbx
  __int64 v22; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // r12
  struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *v29; // rbx
  OUTPUTDUPL_CONTEXT *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  UINT v39; // eax
  unsigned int v40; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v41[8]; // [rsp+38h] [rbp-41h] BYREF
  char v42; // [rsp+40h] [rbp-39h]
  struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *v43; // [rsp+48h] [rbp-31h]
  _DWORD v44[16]; // [rsp+50h] [rbp-29h] BYREF

  v43 = a3;
  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v44, 0, sizeof(v44));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v44);
  v7 = *(_DWORD *)a3;
  VidPnSourceId = a2->VidPnSourceId;
  v9 = (*(_DWORD *)a3 & 0x10) != 0;
  v44[1] = 64;
  v44[13] = VidPnSourceId;
  v40 = -1;
  v44[12] = v9 ? 0xB : 0;
  if ( (v7 & 0x20) != 0 || !*(_QWORD *)this )
  {
    LODWORD(v17) = 1;
  }
  else
  {
    v10 = (unsigned int)VidPnSourceId;
    v11 = *(_DWORD *)(1016 * VidPnSourceId + *(_QWORD *)(*(_QWORD *)this + 112LL) + 684);
    VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, VidPnSourceId);
    v17 = VidPnSourceOwnerType;
    if ( VidPnSourceOwnerType != 1 && (v11 & 1) == 0 )
    {
      v18 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      *(_QWORD *)(v18 + 24) = v10;
      v19 = -1073741790;
      *(_QWORD *)(v18 + 32) = v17;
      v20 = v40;
LABEL_27:
      v44[14] = v20;
      v44[15] = v19;
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v44, 1);
      return (unsigned int)v19;
    }
  }
  v21 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, *v21);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v22);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v21, CurrentProcess, &v44[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v21, 0LL, &v40);
    v19 = -1073741653;
    if ( ContextForProcess )
    {
      v29 = v43;
      if ( (*(_DWORD *)v43 & 0x10) == 0 )
      {
        v30 = (OUTPUTDUPL_CONTEXT *)operator new(0x150uLL, 0x674D444Fu, PagedPool);
        v20 = v40;
        if ( v30 )
          v30 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v30,
                  this,
                  v40,
                  (*(_DWORD *)v29 >> 1) & 1,
                  (*(_DWORD *)v29 >> 3) & 1,
                  (*(_DWORD *)v29 >> 2) & 1);
        *ContextForProcess = v30;
        if ( v30 )
        {
          v19 = OUTPUTDUPL_CONTEXT::Initialize(v30, a2);
          if ( v19 < 0 )
          {
            v33 = WdLogNewEntry5_WdError(v32);
            v34 = a2->VidPnSourceId;
            v35 = v33;
            *(_QWORD *)(v33 + 24) = v34;
            *(_QWORD *)(v33 + 32) = PsGetCurrentProcess(v34);
            WdLogEvent5_WdError(v35);
            if ( *ContextForProcess )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*ContextForProcess);
            *ContextForProcess = 0LL;
          }
        }
        else
        {
          v36 = WdLogNewEntry5_WdLowResource(v31);
          v37 = a2->VidPnSourceId;
          v38 = v36;
          *(_QWORD *)(v36 + 24) = v37;
          *(_QWORD *)(v36 + 32) = PsGetCurrentProcess(v37);
          WdLogEvent5_WdLowResource(v38);
          v19 = -1073741801;
        }
        goto LABEL_25;
      }
      v39 = 3;
      if ( (_DWORD)v17 == 1 )
        v39 = 1;
      v19 = 0;
      a2->RequiredKeyedMutexCount = v39;
    }
    v20 = v40;
LABEL_25:
    if ( v42 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
    goto LABEL_27;
  }
  v25 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v25 + 24) = PsGetCurrentProcess(v26);
  *(_QWORD *)(v25 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v25);
  v44[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v44, 1);
  if ( v42 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
  return 3221227288LL;
}
