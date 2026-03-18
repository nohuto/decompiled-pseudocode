/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C003CAE8
 * Callers:
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003D340 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003D5EC (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C003D8A4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this, unsigned int a2)
{
  CLegacyTokenBuffer *v3; // rcx
  CTokenManager ***v4; // rbx
  CTokenManager **v5; // rax
  CTokenManager *v6; // rcx

  v3 = (CLegacyTokenBuffer *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v4 = (CTokenManager ***)((char *)this + 96);
  v5 = (CTokenManager **)*((_QWORD *)this + 12);
  v6 = *v5;
  if ( v5[1] != (CTokenManager *)((char *)this + 96) || *((CTokenManager ***)v6 + 1) != v5 )
    __fastfail(3u);
  while ( 1 )
  {
    *v4 = (CTokenManager **)v6;
    *((_QWORD *)v6 + 1) = v4;
    if ( v5 == (CTokenManager **)v4 )
      break;
    if ( v5 )
      CLegacyTokenBuffer::`scalar deleting destructor'((CLegacyTokenBuffer *)v5, a2);
    v5 = *v4;
    v6 = **v4;
    if ( (*v4)[1] != (CTokenManager *)v4 || *((CTokenManager ***)v6 + 1) != v5 )
      __fastfail(3u);
  }
  *((_DWORD *)this + 28) = 0;
}
