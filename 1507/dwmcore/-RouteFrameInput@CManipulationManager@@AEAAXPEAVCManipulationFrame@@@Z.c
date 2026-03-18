/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BC24
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BB8C (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x1800E2940 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x180129660 (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180129D18 (-CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z @ 0x180129F10 (-CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012C014 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  struct CManipulationFrame *v2; // rbx
  CManipulationManager *v3; // r13
  unsigned __int64 *v4; // rax
  CManipulationManager *v5; // rcx
  char v6; // si
  bool v7; // si
  unsigned int v8; // r14d
  bool v9; // cf
  __int64 v10; // r15
  __int64 v11; // r12
  const GUID *v12; // r9
  unsigned int i; // r15d
  __int64 v14; // rdx
  const GUID *v15; // r8
  bool v17; // [rsp+30h] [rbp-C8h]
  int v19; // [rsp+34h] [rbp-C4h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-C0h]
  unsigned int v21; // [rsp+3Ch] [rbp-BCh]
  const GUID *v22; // [rsp+40h] [rbp-B8h] BYREF
  CManipulationManager *v23; // [rsp+48h] [rbp-B0h]
  RTL_SRWLOCK *v24; // [rsp+50h] [rbp-A8h] BYREF
  CManipulationManager *v25; // [rsp+58h] [rbp-A0h]
  struct CManipulationFrame *v26; // [rsp+60h] [rbp-98h]
  __int64 v27; // [rsp+68h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-88h] BYREF
  int *v29; // [rsp+90h] [rbp-68h]
  int v30; // [rsp+98h] [rbp-60h]
  int v31; // [rsp+9Ch] [rbp-5Ch]
  char *v32; // [rsp+A0h] [rbp-58h]
  int v33; // [rsp+A8h] [rbp-50h]
  int v34; // [rsp+ACh] [rbp-4Ch]
  const GUID **v35; // [rsp+B0h] [rbp-48h]
  int v36; // [rsp+B8h] [rbp-40h]
  int v37; // [rsp+BCh] [rbp-3Ch]

  v27 = -2LL;
  v2 = a2;
  v3 = this;
  v23 = this;
  v25 = this;
  v26 = a2;
  v4 = CManipulationManager::CurrentPerfCount(this, *((_DWORD *)a2 + 8));
  if ( *v4 - *((_QWORD *)v2 + 14) > *((_QWORD *)v5 + 37) )
  {
    *((_BYTE *)v2 + 28) |= 2u;
    CManipulationManager::TargetFrameInput(v5, v2);
  }
  v6 = *((_BYTE *)v2 + 28);
  if ( (v6 & 1) != 0 )
  {
    v7 = (v6 & 4) != 0;
LABEL_5:
    v8 = 0;
    v20 = 0;
    v17 = v7;
LABEL_6:
    v9 = v8 < *((_DWORD *)v2 + 4);
    while ( v9 )
    {
      v10 = 152LL * v8;
      if ( (*((_BYTE *)v2 + v10 + 180) & 1) == v7
        && *(_DWORD *)((char *)v2 + v10 + 40)
        && *(_QWORD *)((char *)v2 + v10 + 56) != -1LL
        && !CManipulationManager::CheckForBufferedDescendant(v3, v2, v8) )
      {
        v24 = &CManipulationManager::s_rwPointerBufferLock;
        CReadWriteLock::EnterWrite(&CManipulationManager::s_rwPointerBufferLock);
        v11 = 0LL;
        v12 = *(const GUID **)((char *)v2 + v10 + 56);
        v22 = v12;
        v21 = *(_DWORD *)((char *)v2 + v10 + 176);
        for ( i = v8; i < *((_DWORD *)v2 + 4); ++i )
        {
          v14 = 152LL * i;
          if ( *(const GUID **)((char *)v2 + v14 + 56) == v12 && (*((_BYTE *)v2 + v14 + 180) & 1) == v7 )
          {
            v15 = (const GUID *)((char *)v2 + v14 + 36);
            CManipulationManager::s_rgPointerIds[v11] = v15->Data1;
            v11 = (unsigned int)(v11 + 1);
            *(_DWORD *)((char *)v2 + v14 + 40) = 0;
            if ( (unsigned int)pRelatedActivityId > 4
              && (qword_180190AC0 & 2) != 0
              && (qword_180190AC8 & 2) == qword_180190AC8 )
            {
              v19 = *((_DWORD *)v2 + 6);
              v29 = &v19;
              v30 = 4;
              v31 = 0;
              v32 = (char *)v2 + v14 + 36;
              v33 = 4;
              v34 = 0;
              v35 = &v22;
              v36 = 8;
              v37 = 0;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016EF9A, v15, v12, 5u, &pData);
              v12 = v22;
            }
          }
        }
        v19 = v11;
        v3 = v23;
        try
        {
          SetManipulationInputTarget(
            *((unsigned int *)v2 + 6),
            v22,
            v21,
            (unsigned int)v11,
            CManipulationManager::s_rgPointerIds);
        }
        catch ( ... )
        {
          v7 = v17;
          v8 = v20;
          LODWORD(v11) = v19;
          v3 = v25;
          v23 = v25;
          v2 = v26;
        }
        *((_DWORD *)v2 + 5) += v11;
        CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((CReadWriteLock **)&v24);
      }
      v20 = ++v8;
      v9 = v8 < *((_DWORD *)v2 + 4);
      if ( v8 == *((_DWORD *)v2 + 4) )
      {
        if ( !v7 )
          goto LABEL_6;
        v7 = 0;
        goto LABEL_5;
      }
    }
    *((_BYTE *)v2 + 28) &= 0xFAu;
  }
}
