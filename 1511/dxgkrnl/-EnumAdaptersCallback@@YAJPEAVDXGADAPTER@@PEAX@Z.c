/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C009DC20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C007A1E4 (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C009E150 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C009F360 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  struct DXGGLOBAL *v2; // rax
  unsigned int v3; // edi
  __int64 v6; // rax
  DXGSESSIONMGR *v7; // rbp
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // r13
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rax
  int (__fastcall *v39)(_DWORD *); // rax
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _DWORD v46[2]; // [rsp+20h] [rbp-48h] BYREF
  int *v47; // [rsp+28h] [rbp-40h]
  int v48; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v49; // [rsp+80h] [rbp+18h] BYREF
  struct _LUID v50; // [rsp+88h] [rbp+20h] BYREF

  v2 = DXGGLOBAL::m_pGlobal;
  v3 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v6);
    v2 = DXGGLOBAL::m_pGlobal;
  }
  v7 = (DXGSESSIONMGR *)*((_QWORD *)v2 + 88);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    if ( _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL) <= 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v11 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v11);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
    if ( *((_DWORD *)this + 40) == 1 && !*((_BYTE *)this + 1917) )
    {
      v16 = *((_QWORD *)this + 249);
      if ( !v16 )
        goto LABEL_24;
      v17 = *(_QWORD *)(v16 + 408);
      v18 = *(_QWORD *)(v16 + 400);
      v20 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
      if ( v20 )
        v21 = *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)v18 - 1) + 16);
      else
        v21 = 0LL;
      if ( !v21 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v19);
        *(_QWORD *)(v22 + 24) = 825LL;
        WdLogEvent5_WdAssertion(v22);
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v18 + 8) + 728LL))(v17, v21) )
      {
        v23 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
        *(_QWORD *)(v23 + 24) = this;
        *(_QWORD *)(v23 + 32) = DXGPROCESS::GetCurrent();
        WdLogEvent5_WdEvent(v23);
      }
      else
      {
LABEL_24:
        ++a2[2];
        if ( *a2 < a2[1] )
        {
          v27 = DXGADAPTER::CreateHandle(this, &v49);
          v24 = v27;
          if ( v27 >= 0 )
          {
            v30 = (unsigned int)*a2;
            v31 = *((_QWORD *)a2 + 2);
            v32 = 5 * v30;
            *a2 = v30 + 1;
            *(_DWORD *)(v31 + 4 * v32) = v49;
            *(_QWORD *)(v31 + 4 * v32 + 4) = *(_QWORD *)((char *)this + 252);
            *(_DWORD *)(v31 + 4 * v32 + 16) = 0;
            v33 = *((_QWORD *)DXGPROCESS::GetCurrent() + 10);
            if ( (*(unsigned int (__fastcall **)(_QWORD))(v33 + 224))(0LL) )
            {
              v48 = 0;
              v47 = &v48;
              v39 = *(int (__fastcall **)(_DWORD *))(v33 + 376);
              v40 = 2;
              v46[0] = 2;
              v46[1] = 4;
              if ( v39(v46) >= 0 )
              {
                v40 = v48;
              }
              else
              {
                v45 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
                *(_QWORD *)(v45 + 24) = 4066LL;
                WdLogEvent5_WdWarning(v45);
              }
              if ( v40 == 0xFFFF
                || *(_QWORD *)((char *)SessionDataForSpecifiedSession + 18516) != *(_QWORD *)((char *)this + 252) )
              {
                *(_DWORD *)(v31 + 4 * v32 + 12) = 0;
              }
              else
              {
                *(_DWORD *)(v31 + 4 * v32 + 12) = *((_DWORD *)SessionDataForSpecifiedSession + 4631);
              }
            }
            else
            {
              v50 = *(struct _LUID *)((char *)this + 252);
              SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, &v50);
              if ( SessionAdapterFromLuid )
                v36 = *((_DWORD *)SessionAdapterFromLuid + 19);
              else
                v36 = 0;
              *(_DWORD *)(v31 + 4 * v32 + 12) = v36;
              if ( !*((_QWORD *)this + 249) )
              {
                v37 = *((_QWORD *)this + 248);
                if ( *(_QWORD *)(*(_QWORD *)(v37 + 16) + 1992LL) )
                {
                  v38 = WdLogNewEntry5_WdAssertion(v35);
                  *(_QWORD *)(v38 + 24) = 4544LL;
                  WdLogEvent5_WdAssertion(v38);
                }
                *(_DWORD *)(v31 + 4 * v32 + 16) = *(_DWORD *)(v37 + 316);
              }
            }
            goto LABEL_22;
          }
          v29 = WdLogNewEntry5_WdError(v28);
          *(_QWORD *)(v29 + 24) = this;
          *(_QWORD *)(v29 + 32) = v24;
          WdLogEvent5_WdError(v29);
LABEL_21:
          v3 = v24;
LABEL_22:
          ExReleasePushLockSharedEx((char *)this + 104, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference(this);
          return v3;
        }
        if ( *((_QWORD *)a2 + 2) )
        {
          v26 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
          *(_QWORD *)(v26 + 24) = (unsigned int)a2[2];
          *(_QWORD *)(v26 + 32) = (unsigned int)a2[1];
          WdLogEvent5_WdWarning(v26);
        }
      }
    }
    LODWORD(v24) = 0;
    goto LABEL_21;
  }
  v10 = WdLogNewEntry5_WdError(this);
  v3 = -1073741811;
  *(_QWORD *)(v10 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
  *(_QWORD *)(v10 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v10);
  return v3;
}
