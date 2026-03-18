/*
 * XREFs of ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C0047794
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0046FD8 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00A4468 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00040A0 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenQueue::AddToken(CTokenQueue *this, CompositionSurfaceObject **a2)
{
  __int64 v4; // rcx
  char *v5; // rax
  CTokenQueue **v6; // rax
  CTokenQueue ***v7; // rcx
  CTokenQueue **v8; // rbx

  if ( (*((unsigned __int8 (__fastcall **)(CompositionSurfaceObject **))*a2 + 11))(a2) )
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
  v4 = *(_QWORD *)this;
  v5 = (char *)(a2 + 1);
  a2[1] = *(CompositionSurfaceObject **)this;
  a2[2] = this;
  if ( *(CTokenQueue **)(v4 + 8) != this )
    __fastfail(3u);
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)this = v5;
}
