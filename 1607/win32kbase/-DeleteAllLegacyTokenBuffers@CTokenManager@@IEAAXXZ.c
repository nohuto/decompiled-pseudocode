/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0019D60
 * Callers:
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C001A54C (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C001AB08 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0016FA8 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this)
{
  CLegacyTokenBuffer *v2; // rcx
  CTokenManager ***v3; // rbx
  CTokenManager **v4; // rax
  CTokenManager *v5; // rcx

  v2 = (CLegacyTokenBuffer *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = (CTokenManager ***)((char *)this + 96);
  v4 = (CTokenManager **)*((_QWORD *)this + 12);
  v5 = *v4;
  if ( v4[1] != (CTokenManager *)((char *)this + 96) || *((CTokenManager ***)v5 + 1) != v4 )
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
  *((_DWORD *)this + 28) = 0;
}
