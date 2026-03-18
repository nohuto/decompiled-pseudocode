/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x1C001AB08
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C001AC58 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0019C44 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0019D24 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0019D60 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::~CTokenManager(CTokenManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  _QWORD **v7; // rsi
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rbx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    ObCloseHandle(v3, 0);
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  *((_QWORD *)this + 3) = 0LL;
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteOutstandingAnalogTokenInternal(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  v7 = (_QWORD **)((char *)this + 224);
  v8 = (_QWORD **)*((_QWORD *)this + 28);
  v9 = *v8;
  if ( v8[1] != (_QWORD *)((char *)this + 224) || (_QWORD **)v9[1] != v8 )
    __fastfail(3u);
  while ( 1 )
  {
    *v7 = v9;
    v9[1] = v7;
    if ( v8 == v7 )
      break;
    v10 = (void (__fastcall ***)(_QWORD, __int64))(v8 - 1);
    ((void (__fastcall *)(_QWORD **))(*(v8 - 1))[7])(v8 - 1);
    (**v10)(v10, 1LL);
    v8 = (_QWORD **)*v7;
    v9 = (_QWORD *)**v7;
    if ( (_QWORD **)(*v7)[1] != v7 || (_QWORD **)v9[1] != v8 )
      __fastfail(3u);
  }
  CTokenManager::DeleteAllTokenQueues(this);
}
