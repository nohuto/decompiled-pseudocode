/*
 * XREFs of ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180129D18
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BC24 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18012989C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18012A318 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 */

bool __fastcall CManipulationManager::CheckForBufferedDescendant(
        CManipulationManager *this,
        struct CManipulationFrame *a2,
        unsigned int a3)
{
  struct CManipulationFrame *v3; // r15
  int v4; // esi
  bool v5; // r12
  unsigned int v6; // r14d
  CManipulationManager *v7; // rdx
  __int64 v8; // rcx
  char *v9; // r13
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // bl
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 i; // [rsp+38h] [rbp-10h]
  unsigned int v23; // [rsp+A0h] [rbp+58h]
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v23 = a3;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  LODWORD(v24) = 0;
  v6 = 0;
  v7 = this;
  for ( i = *((_QWORD *)v3 + 19 * a3 + 7); v6 < *((_DWORD *)v3 + 4); v7 = this )
  {
    if ( v5 )
      break;
    v24 = 0LL;
    v17 = 0LL;
    v8 = 152LL * v6;
    v9 = (char *)v3 + v8;
    if ( v6 == a3 || *(_QWORD *)((char *)v3 + v8 + 56) != -1LL )
      goto LABEL_10;
    v4 |= 1u;
    v10 = (__int64 *)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
                       (char *)v7 + 128,
                       v19,
                       v9 + 36);
    v11 = 0LL;
    if ( &v18 != v10 )
    {
      v11 = *v10;
      *v10 = 0LL;
    }
    v18 = 0LL;
    v17 = v11;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v18);
    if ( v11
      && (v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *((unsigned int *)v9 + 9)),
          *Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v24, v12)) )
    {
      v13 = 0;
    }
    else
    {
LABEL_10:
      v13 = 1;
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(v19);
    }
    if ( v13 )
    {
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v24);
    }
    else
    {
      v14 = i;
      while ( v24 && !v5 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24) == v14;
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 88LL))(v24);
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v24, v15);
      }
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v24);
      v3 = a2;
    }
    a3 = v23;
    ++v6;
  }
  return v5;
}
