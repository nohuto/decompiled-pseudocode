/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0081344
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C006FEA0 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C00813BC (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00706F4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this)
{
  CLegacyTokenBuffer *v2; // rcx
  CTokenManager ***v3; // rbx
  CTokenManager **v4; // rax
  CTokenManager *v5; // rcx

  v2 = (CLegacyTokenBuffer *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  v3 = (CTokenManager ***)((char *)this + 64);
  v4 = (CTokenManager **)*((_QWORD *)this + 8);
  v5 = *v4;
  if ( v4[1] != (CTokenManager *)((char *)this + 64) || *((CTokenManager ***)v5 + 1) != v4 )
    __fastfail(3u);
  while ( 1 )
  {
    *v3 = (CTokenManager **)v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 == (CTokenManager **)v3 )
      break;
    if ( v4 )
      CLegacyTokenBuffer::`scalar deleting destructor'((CLegacyTokenBuffer *)v4);
    v4 = *v3;
    v5 = **v3;
    if ( (*v3)[1] != (CTokenManager *)v3 || *((CTokenManager ***)v5 + 1) != v4 )
      __fastfail(3u);
  }
  *((_DWORD *)this + 20) = 0;
}
