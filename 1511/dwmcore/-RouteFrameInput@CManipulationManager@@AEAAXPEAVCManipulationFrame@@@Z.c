/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A6560
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800046B0 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z @ 0x180004230 (-CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180004748 (-CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800048FC (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x18001D7C8 (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  struct CManipulationFrame *v2; // rbx
  CManipulationManager *v3; // r13
  unsigned __int64 *v4; // rax
  CManipulationManager *v5; // rcx
  char v6; // r14
  bool v7; // r14
  unsigned int v8; // esi
  bool v9; // cf
  __int64 v10; // r15
  __int64 v11; // r12
  const GUID *v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  __int64 v15; // rdx
  const GUID *v16; // r8
  bool v18; // [rsp+30h] [rbp-C8h]
  int v20; // [rsp+34h] [rbp-C4h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-C0h]
  unsigned int v22; // [rsp+3Ch] [rbp-BCh]
  const GUID *v23; // [rsp+40h] [rbp-B8h] BYREF
  CManipulationManager *v24; // [rsp+48h] [rbp-B0h]
  RTL_SRWLOCK *v25; // [rsp+50h] [rbp-A8h] BYREF
  CManipulationManager *v26; // [rsp+58h] [rbp-A0h]
  struct CManipulationFrame *v27; // [rsp+60h] [rbp-98h]
  __int64 v28; // [rsp+68h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-88h] BYREF
  int *v30; // [rsp+90h] [rbp-68h]
  int v31; // [rsp+98h] [rbp-60h]
  int v32; // [rsp+9Ch] [rbp-5Ch]
  char *v33; // [rsp+A0h] [rbp-58h]
  int v34; // [rsp+A8h] [rbp-50h]
  int v35; // [rsp+ACh] [rbp-4Ch]
  const GUID **v36; // [rsp+B0h] [rbp-48h]
  int v37; // [rsp+B8h] [rbp-40h]
  int v38; // [rsp+BCh] [rbp-3Ch]

  v28 = -2LL;
  v2 = a2;
  v3 = this;
  v24 = this;
  v26 = this;
  v27 = a2;
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
    v21 = 0;
    v18 = v7;
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
        v25 = &CManipulationManager::s_rwPointerBufferLock;
        CReadWriteLock::EnterWrite(&CManipulationManager::s_rwPointerBufferLock);
        v11 = 0LL;
        v20 = 0;
        v12 = *(const GUID **)((char *)v2 + v10 + 56);
        v23 = v12;
        v13 = *(_DWORD *)((char *)v2 + v10 + 176);
        v22 = v13;
        v14 = v8;
        if ( v8 < *((_DWORD *)v2 + 4) )
        {
          do
          {
            v15 = 152LL * v14;
            if ( *(const GUID **)((char *)v2 + v15 + 56) == v12 && (*((_BYTE *)v2 + v15 + 180) & 1) == v7 )
            {
              v16 = (const GUID *)((char *)v2 + v15 + 36);
              CManipulationManager::s_rgPointerIds[v11] = v16->Data1;
              v11 = (unsigned int)(v11 + 1);
              *(_DWORD *)((char *)v2 + v15 + 40) = 0;
              if ( (unsigned int)pRelatedActivityId > 4
                && (qword_18019E950 & 2) != 0
                && (qword_18019E958 & 2) == qword_18019E958 )
              {
                v20 = *((_DWORD *)v2 + 6);
                v30 = &v20;
                v31 = 4;
                v32 = 0;
                v33 = (char *)v2 + v15 + 36;
                v34 = 4;
                v35 = 0;
                v36 = &v23;
                v37 = 8;
                v38 = 0;
                TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E186, v16, v12, 5u, &pData);
                v12 = v23;
              }
            }
            ++v14;
          }
          while ( v14 < *((_DWORD *)v2 + 4) );
          v20 = v11;
          v3 = v24;
          v13 = v22;
        }
        try
        {
          SetManipulationInputTarget(
            *((unsigned int *)v2 + 6),
            v23,
            v13,
            (unsigned int)v11,
            CManipulationManager::s_rgPointerIds);
        }
        catch ( ... )
        {
          v7 = v18;
          v8 = v21;
          LODWORD(v11) = v20;
          v3 = v26;
          v24 = v26;
          v2 = v27;
        }
        *((_DWORD *)v2 + 5) += v11;
        CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((CReadWriteLock **)&v25);
      }
      v21 = ++v8;
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
