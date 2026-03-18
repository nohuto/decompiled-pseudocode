/*
 * XREFs of ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C001BE30
 * Callers:
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C0019DE0 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001C1F4 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenQueue::AddToken(CTokenQueue *this, CompositionSurfaceObject **a2)
{
  CTokenQueue *v4; // rax
  CTokenQueue **v5; // rbx
  CTokenQueue **v6; // rax
  CTokenQueue ***v7; // rcx
  CTokenQueue **v8; // rbx

  if ( (*((unsigned __int8 (__fastcall **)(CompositionSurfaceObject **))*a2 + 13))(a2) )
  {
    v6 = (CTokenQueue **)*((_QWORD *)this + 1);
    v7 = (CTokenQueue ***)v6[1];
    if ( *v6 != this || *v7 != v6 )
      __fastfail(3u);
    while ( 1 )
    {
      *((_QWORD *)this + 1) = v7;
      *v7 = (CTokenQueue **)this;
      if ( v6 == (CTokenQueue **)this )
        break;
      v8 = v6 - 1;
      (*((void (__fastcall **)(CTokenQueue **))*(v6 - 1) + 7))(v6 - 1);
      (*(void (__fastcall **)(CTokenQueue **, __int64))*v8)(v8, 1LL);
      v6 = (CTokenQueue **)*((_QWORD *)this + 1);
      v7 = (CTokenQueue ***)v6[1];
      if ( *v6 != this || *v7 != v6 )
        __fastfail(3u);
    }
    CompositionSurfaceObject::SetSyncRefreshCount(a2[4], 0);
  }
  v4 = *(CTokenQueue **)this;
  v5 = a2 + 1;
  if ( *(CTokenQueue **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *v5 = v4;
  a2[2] = this;
  *((_QWORD *)v4 + 1) = v5;
  *(_QWORD *)this = v5;
  if ( *((_DWORD *)a2 + 6) == 2
    && !(*((unsigned int (__fastcall **)(CompositionSurfaceObject **))*a2 + 15))(a2)
    && (*((unsigned __int8 (__fastcall **)(CompositionSurfaceObject **))*a2 + 12))(a2)
    && (*v5 == this || (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)*v5 - 1) + 88LL))((__int64)*v5 - 8)) )
  {
    (*((void (__fastcall **)(CompositionSurfaceObject **))*a2 + 10))(a2);
  }
}
