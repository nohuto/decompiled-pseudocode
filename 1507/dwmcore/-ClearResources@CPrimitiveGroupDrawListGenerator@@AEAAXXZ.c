/*
 * XREFs of ?ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x180076A60
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x1800761D0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::ClearResources(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 i; // rbx
  __int64 j; // rbx
  CMILCOMBase *v4; // rcx
  __int64 k; // rsi
  CMILCOMBase *v6; // rcx
  __int64 v7; // r14

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
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * k) = 0LL;
    }
  }
  *((_DWORD *)this + 32) = 0;
}
