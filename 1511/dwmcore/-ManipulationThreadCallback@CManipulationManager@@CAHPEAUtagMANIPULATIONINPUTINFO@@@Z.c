/*
 * XREFs of ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B20A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATIONINPUTINFO@@PEAPEAV1@@Z @ 0x180003878 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATIONINPUTINFO@@PEAPEAV1@@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180003A28 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180003B1C (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x18001D7C8 (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadCallback(struct tagMANIPULATIONINPUTINFO *a1)
{
  unsigned int v1; // esi
  unsigned int v3; // r14d
  int v4; // eax
  CReadWriteLock *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct CManipulationFrame *v12; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v13; // [rsp+68h] [rbp+38h] BYREF
  struct CManipulationFrame *v14; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0;
  v12 = 0LL;
  if ( !a1 )
    goto LABEL_16;
  v3 = *((_DWORD *)a1 + 4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(a1, &MANIPULATION_FRAME_RECEIVED, v3, *(unsigned int *)a1);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v12);
  v4 = CManipulationFrame::Create(a1, &v12);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1E5u);
    goto LABEL_13;
  }
  v5 = v12;
  v14 = v12;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
  v13 = (RTL_SRWLOCK *)v5;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v13);
  v8 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v7, v6, (__int64)&v13);
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v14);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1E7u);
LABEL_13:
    v13 = &CManipulationManager::s_rwPointerBufferLock;
    CReadWriteLock::EnterWrite(&CManipulationManager::s_rwPointerBufferLock);
    if ( *(_DWORD *)a1 )
    {
      do
      {
        v10 = v1++;
        CManipulationManager::s_rgPointerIds[v10] = *((_DWORD *)a1 + 36 * v10 + 3);
      }
      while ( v1 < *(_DWORD *)a1 );
    }
    SetManipulationInputTarget(
      *((unsigned int *)a1 + 4),
      0LL,
      0LL,
      *(unsigned int *)a1,
      CManipulationManager::s_rgPointerIds);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((CReadWriteLock **)&v13);
    goto LABEL_16;
  }
  if ( !SetEvent(qword_1801A3ED8) )
  {
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v9, &v13, 0, 0LL);
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v13);
    goto LABEL_13;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(v9, &MANIPULATION_FRAME_QUEUED, v3, *(unsigned int *)a1);
LABEL_16:
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v12);
  return 1LL;
}
