/*
 * XREFs of ?ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18003009C
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x18002F6B0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::ClearResources(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 i; // rbx
  __int64 j; // rbx
  CMILCOMBase *v4; // rcx
  __int64 k; // rbp
  CMILCOMBase *v6; // rcx
  __int64 v7; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v6 = *(CMILCOMBase **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v6 )
    {
      CMILCOMBase::InternalRelease(v6);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 16) = 0;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 24); j = (unsigned int)(j + 1) )
  {
    v4 = *(CMILCOMBase **)(*((_QWORD *)this + 9) + 8 * j);
    if ( v4 )
    {
      CMILCOMBase::InternalRelease(v4);
      *(_QWORD *)(*((_QWORD *)this + 9) + 8 * j) = 0LL;
    }
  }
  *((_DWORD *)this + 24) = 0;
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 32); k = (unsigned int)(k + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * k);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 16LL))(v7 + 8);
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * k) = 0LL;
    }
  }
  *((_DWORD *)this + 32) = 0;
}
