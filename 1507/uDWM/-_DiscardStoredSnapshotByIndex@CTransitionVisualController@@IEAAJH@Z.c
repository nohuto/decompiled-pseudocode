/*
 * XREFs of ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x18000CEC0
 * Callers:
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x18000CE9C (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x18000CF2C (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionVisualController::_DiscardStoredSnapshotByIndex(
        CTransitionVisualController *this,
        unsigned int a2)
{
  unsigned int v3; // edi
  struct CTransitionWindowSnapshot *v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx

  v3 = a2;
  v4 = *(struct CTransitionWindowSnapshot **)(*((_QWORD *)this + 7) + 16LL * a2 + 8);
  CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(this, v4);
  v5 = *((_DWORD *)this + 20);
  if ( v3 >= v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  else
  {
    v6 = *((_QWORD *)this + 7);
    if ( v3 < v5 - 1 )
    {
      do
      {
        v8 = 2LL * v3;
        v9 = 2LL * ++v3;
        *(_OWORD *)(v6 + 8 * v8) = *(_OWORD *)(v6 + 8 * v9);
      }
      while ( v3 < *((_DWORD *)this + 20) - 1 );
    }
    --*((_DWORD *)this + 20);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return 0LL;
}
