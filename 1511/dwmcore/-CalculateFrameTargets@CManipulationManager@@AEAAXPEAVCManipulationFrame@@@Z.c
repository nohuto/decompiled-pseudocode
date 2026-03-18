/*
 * XREFs of ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004A0C
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180004D7C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x180003CFC (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1800040C4 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x180004E5C (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 */

void __fastcall CManipulationManager::CalculateFrameTargets(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int i; // ebp
  __int64 v5; // r14
  struct IManipulationContext *v6; // rbx
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct IManipulationContext *v11; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v5 = 152LL * i;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
      (__int64)this + 128,
      &v11,
      (int *)((char *)a2 + v5 + 36));
    v6 = v11;
    if ( v11 && (*(_DWORD *)((_BYTE *)a2 + v5 + 44) & 0x40004) != 0 )
    {
      if ( (int)CGestureTargetingManager::ProcessInput(v11, (struct CManipulationFrame *)((char *)a2 + v5 + 32)) < 0 )
      {
        *((_DWORD *)v6 + 6) = 1;
      }
      else if ( *((_DWORD *)v6 + 6) != 1 )
      {
        *((_DWORD *)v6 + 6) = 2;
      }
    }
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v11);
  }
  v7 = 0;
  if ( *((int *)this + 40) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)(v8 + *((_QWORD *)this + 19));
      if ( *(_DWORD *)(v9 + 24) == 2 )
        CGestureTargetingManager::ProcessInteractions(
          (struct IManipulationContext *)v9,
          (struct IManipulationContext *)*((unsigned int *)a2 + 8));
      ++v7;
      v10 = *(_QWORD *)(v8 + *((_QWORD *)this + 19));
      v8 += 8LL;
      *(_DWORD *)(v10 + 24) = 0;
    }
    while ( v7 < *((_DWORD *)this + 40) );
  }
}
