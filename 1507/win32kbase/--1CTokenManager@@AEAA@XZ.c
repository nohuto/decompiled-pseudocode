/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1C006FEA0
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C006FF60 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C006FE60 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C006FE80 (-DeleteOutstandingDirectFlipTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0081308 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0081344 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  _QWORD **v5; // rsi
  _QWORD **v6; // rax
  _QWORD *v7; // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rbx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
    MmUnmapViewInSessionSpace(v4);
  *((_QWORD *)this + 2) = 0LL;
  if ( *(_QWORD *)this )
    ObfDereferenceObject(*(PVOID *)this);
  CTokenManager::DeleteOutstandingDirectFlipTokensInternal(this);
  CTokenManager::DeleteOutstandingAnalogTokenInternal(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  v5 = (_QWORD **)((char *)this + 200);
  v6 = (_QWORD **)*((_QWORD *)this + 25);
  v7 = *v6;
  if ( v6[1] != (_QWORD *)((char *)this + 200) || (_QWORD **)v7[1] != v6 )
    __fastfail(3u);
  while ( 1 )
  {
    *v5 = v7;
    v7[1] = v5;
    if ( v6 == v5 )
      break;
    v8 = (void (__fastcall ***)(_QWORD, __int64))(v6 - 1);
    ((void (__fastcall *)(_QWORD **))(*(v6 - 1))[7])(v6 - 1);
    (**v8)(v8, 1LL);
    v6 = (_QWORD **)*v5;
    v7 = (_QWORD *)**v5;
    if ( (_QWORD **)(*v5)[1] != v5 || (_QWORD **)v7[1] != v6 )
      __fastfail(3u);
  }
  CTokenManager::DeleteAllTokenQueues(this);
}
