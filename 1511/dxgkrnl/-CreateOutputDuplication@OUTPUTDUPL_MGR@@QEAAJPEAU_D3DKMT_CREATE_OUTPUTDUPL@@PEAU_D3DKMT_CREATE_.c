/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0156D64
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C0159800 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0020864 (--0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0020934 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C009EA60 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0157210 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0157FD4 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C015AF38 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C015BC30 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  bool v3; // zf
  DXGDIAGNOSTICSWITHMUTEX *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  OUTPUTDUPL_MGR *v13; // rcx
  int v14; // ecx
  __int64 VidPnSourceId; // rdx
  bool v16; // cf
  unsigned int v17; // r13d
  __int64 v18; // rdi
  int v19; // ebx
  int VidPnSourceOwnerType; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rax
  int v27; // edi
  struct DXGFASTMUTEX **v28; // rbx
  __int64 v29; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  OUTPUTDUPL_CONTEXT **v36; // r15
  struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *v37; // rbx
  OUTPUTDUPL_CONTEXT *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rbx
  UINT v50; // eax
  unsigned int v51; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v52[8]; // [rsp+38h] [rbp-41h] BYREF
  char v53; // [rsp+40h] [rbp-39h]
  struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *v54; // [rsp+48h] [rbp-31h]
  _DWORD v55[16]; // [rsp+50h] [rbp-29h] BYREF

  v3 = *((_QWORD *)this + 7) == 0LL;
  v54 = a3;
  if ( v3 )
  {
    v7 = (DXGDIAGNOSTICSWITHMUTEX *)operator new[](0x20uLL, 0x674D444Fu, PagedPool);
    if ( v7 )
      v7 = DXGDIAGNOSTICSWITHMUTEX::DXGDIAGNOSTICSWITHMUTEX(v7, 0x1000u, (enum _POOL_TYPE)v10);
    *((_QWORD *)this + 7) = v7;
    if ( !v7 )
    {
      v12 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = 837LL;
      WdLogEvent5_WdLowResource(v12);
    }
  }
  memset(v55, 0, sizeof(v55));
  OUTPUTDUPL_MGR::InitializePacketHeader(v13, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v55);
  v14 = *(_DWORD *)a3;
  VidPnSourceId = a2->VidPnSourceId;
  v16 = (*(_DWORD *)a3 & 0x10) != 0;
  v55[1] = 64;
  v55[13] = VidPnSourceId;
  v17 = -1;
  v51 = -1;
  v55[12] = v16 ? 0xB : 0;
  if ( (v14 & 0x20) != 0 || !*(_QWORD *)this )
  {
    LODWORD(v25) = 1;
  }
  else
  {
    v18 = (unsigned int)VidPnSourceId;
    v19 = *(_DWORD *)(1016 * VidPnSourceId + *(_QWORD *)(*(_QWORD *)this + 136LL) + 684);
    VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, VidPnSourceId);
    v25 = VidPnSourceOwnerType;
    if ( VidPnSourceOwnerType != 1 && (v19 & 1) == 0 )
    {
      v26 = WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = v18;
      v27 = -1073741790;
      *(_QWORD *)(v26 + 32) = v25;
LABEL_27:
      v55[14] = v17;
      v55[15] = v27;
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v55, 1);
      return (unsigned int)v27;
    }
  }
  v28 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v52, *v28);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v29);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v28, CurrentProcess, &v55[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v28, 0LL, &v51);
    v17 = v51;
    v36 = ContextForProcess;
    v27 = -1073741653;
    if ( ContextForProcess )
    {
      v37 = v54;
      if ( (*(_DWORD *)v54 & 0x10) != 0 )
      {
        v50 = 3;
        if ( (_DWORD)v25 == 1 )
          v50 = 1;
        v27 = 0;
        a2->RequiredKeyedMutexCount = v50;
      }
      else
      {
        v38 = (OUTPUTDUPL_CONTEXT *)operator new[](0x150uLL, 0x674D444Fu, PagedPool);
        if ( v38 )
          v38 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v38,
                  this,
                  v17,
                  (*(_DWORD *)v37 >> 1) & 1,
                  (*(_DWORD *)v37 >> 3) & 1,
                  (*(_DWORD *)v37 >> 2) & 1);
        *v36 = v38;
        if ( v38 )
        {
          v27 = OUTPUTDUPL_CONTEXT::Initialize(v38, a2);
          if ( v27 < 0 )
          {
            v44 = WdLogNewEntry5_WdError(v43);
            v45 = a2->VidPnSourceId;
            v46 = v44;
            *(_QWORD *)(v44 + 24) = v45;
            *(_QWORD *)(v44 + 32) = PsGetCurrentProcess(v45);
            WdLogEvent5_WdError(v46);
            if ( *v36 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v36);
            *v36 = 0LL;
          }
        }
        else
        {
          v47 = WdLogNewEntry5_WdLowResource(v40, v39, v41, v42);
          v48 = a2->VidPnSourceId;
          v49 = v47;
          *(_QWORD *)(v47 + 24) = v48;
          *(_QWORD *)(v47 + 32) = PsGetCurrentProcess(v48);
          WdLogEvent5_WdLowResource(v49);
          v27 = -1073741801;
        }
      }
    }
    if ( v53 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
    goto LABEL_27;
  }
  v32 = WdLogNewEntry5_WdError(v31);
  *(_QWORD *)(v32 + 24) = PsGetCurrentProcess(v33);
  *(_QWORD *)(v32 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v32);
  v55[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v55, 1);
  if ( v53 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
  return 3221227288LL;
}
