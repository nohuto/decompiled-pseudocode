/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1C003D5EC
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C003D74C (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C003C9AC (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003C9CC (-DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C003CAAC (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C003CAE8 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  unsigned int v7; // edx
  _QWORD **v8; // rsi
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // rbx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  *((_QWORD *)this + 3) = 0LL;
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteOutstandingDirectFlipTokensInternal(this);
  CTokenManager::DeleteOutstandingAnalogTokenInternal(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this, v7);
  CTokenManager::DeleteAllCompositionTokens(this);
  v8 = (_QWORD **)((char *)this + 232);
  v9 = (_QWORD **)*((_QWORD *)this + 29);
  v10 = *v9;
  if ( v9[1] != (_QWORD *)((char *)this + 232) || (_QWORD **)v10[1] != v9 )
    __fastfail(3u);
  while ( 1 )
  {
    *v8 = v10;
    v10[1] = v8;
    if ( v9 == v8 )
      break;
    v11 = (void (__fastcall ***)(_QWORD, __int64))(v9 - 1);
    ((void (__fastcall *)(_QWORD **))(*(v9 - 1))[7])(v9 - 1);
    (**v11)(v11, 1LL);
    v9 = (_QWORD **)*v8;
    v10 = (_QWORD *)**v8;
    if ( (_QWORD **)(*v8)[1] != v8 || (_QWORD **)v10[1] != v9 )
      __fastfail(3u);
  }
  CTokenManager::DeleteAllTokenQueues(this);
}
