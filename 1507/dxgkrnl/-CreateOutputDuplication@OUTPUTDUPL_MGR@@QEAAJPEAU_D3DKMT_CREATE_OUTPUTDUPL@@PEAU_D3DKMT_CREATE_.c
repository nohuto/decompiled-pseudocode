/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0152AC4
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C0155520 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0020940 (--0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0020A40 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C008E174 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0152F6C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0153D68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C0156C20 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0157918 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  bool v3; // zf
  DXGDIAGNOSTICSWITHMUTEX *v7; // rax
  __int64 v8; // rcx
  enum _POOL_TYPE v9; // r8d
  __int64 v10; // rax
  OUTPUTDUPL_MGR *v11; // rcx
  int v12; // ecx
  __int64 VidPnSourceId; // rdx
  bool v14; // cf
  unsigned int v15; // r13d
  __int64 v16; // rdi
  int v17; // ebx
  int VidPnSourceOwnerType; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // edi
  struct DXGFASTMUTEX **v26; // rbx
  __int64 v27; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  OUTPUTDUPL_CONTEXT **v34; // r15
  struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *v35; // rbx
  OUTPUTDUPL_CONTEXT *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  UINT v45; // eax
  unsigned int v46; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v47[8]; // [rsp+38h] [rbp-41h] BYREF
  char v48; // [rsp+40h] [rbp-39h]
  struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *v49; // [rsp+48h] [rbp-31h]
  _DWORD v50[16]; // [rsp+50h] [rbp-29h] BYREF

  v3 = *((_QWORD *)this + 7) == 0LL;
  v49 = a3;
  if ( v3 )
  {
    v7 = (DXGDIAGNOSTICSWITHMUTEX *)operator new[](0x20uLL, 0x674D444Fu, PagedPool);
    if ( v7 )
      v7 = DXGDIAGNOSTICSWITHMUTEX::DXGDIAGNOSTICSWITHMUTEX(v7, 0x1000u, v9);
    *((_QWORD *)this + 7) = v7;
    if ( !v7 )
    {
      v10 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v10 + 24) = 850LL;
      WdLogEvent5_WdLowResource(v10);
    }
  }
  memset(v50, 0, sizeof(v50));
  OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v50);
  v12 = *(_DWORD *)a3;
  VidPnSourceId = a2->VidPnSourceId;
  v14 = (*(_DWORD *)a3 & 0x10) != 0;
  v50[1] = 64;
  v50[13] = VidPnSourceId;
  v15 = -1;
  v46 = -1;
  v50[12] = v14 ? 0xB : 0;
  if ( (v12 & 0x20) != 0 || !*(_QWORD *)this )
  {
    LODWORD(v23) = 1;
  }
  else
  {
    v16 = (unsigned int)VidPnSourceId;
    v17 = *(_DWORD *)(1008 * VidPnSourceId + *(_QWORD *)(*(_QWORD *)this + 112LL) + 684);
    VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, VidPnSourceId);
    v23 = VidPnSourceOwnerType;
    if ( VidPnSourceOwnerType != 1 && (v17 & 1) == 0 )
    {
      v24 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
      *(_QWORD *)(v24 + 24) = v16;
      v25 = -1073741790;
      *(_QWORD *)(v24 + 32) = v23;
LABEL_27:
      v50[14] = v15;
      v50[15] = v25;
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v50, 1);
      return (unsigned int)v25;
    }
  }
  v26 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, *v26);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v27);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v26, CurrentProcess, &v50[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v26, 0LL, &v46);
    v15 = v46;
    v34 = ContextForProcess;
    v25 = -1073741653;
    if ( ContextForProcess )
    {
      v35 = v49;
      if ( (*(_DWORD *)v49 & 0x10) != 0 )
      {
        v45 = 3;
        if ( (_DWORD)v23 == 1 )
          v45 = 1;
        v25 = 0;
        a2->RequiredKeyedMutexCount = v45;
      }
      else
      {
        v36 = (OUTPUTDUPL_CONTEXT *)operator new[](0x150uLL, 0x674D444Fu, PagedPool);
        if ( v36 )
          v36 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v36,
                  this,
                  v15,
                  (*(_DWORD *)v35 >> 1) & 1,
                  (*(_DWORD *)v35 >> 3) & 1,
                  (*(_DWORD *)v35 >> 2) & 1);
        *v34 = v36;
        if ( v36 )
        {
          v25 = OUTPUTDUPL_CONTEXT::Initialize(v36, a2);
          if ( v25 < 0 )
          {
            v39 = WdLogNewEntry5_WdError(v38);
            v40 = a2->VidPnSourceId;
            v41 = v39;
            *(_QWORD *)(v39 + 24) = v40;
            *(_QWORD *)(v39 + 32) = PsGetCurrentProcess(v40);
            WdLogEvent5_WdError(v41);
            if ( *v34 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v34);
            *v34 = 0LL;
          }
        }
        else
        {
          v42 = WdLogNewEntry5_WdLowResource(v37);
          v43 = a2->VidPnSourceId;
          v44 = v42;
          *(_QWORD *)(v42 + 24) = v43;
          *(_QWORD *)(v42 + 32) = PsGetCurrentProcess(v43);
          WdLogEvent5_WdLowResource(v44);
          v25 = -1073741801;
        }
      }
    }
    if ( v48 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
    goto LABEL_27;
  }
  v30 = WdLogNewEntry5_WdError(v29);
  *(_QWORD *)(v30 + 24) = PsGetCurrentProcess(v31);
  *(_QWORD *)(v30 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v30);
  v50[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v50, 1);
  if ( v48 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
  return 3221227288LL;
}
