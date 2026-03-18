/*
 * XREFs of ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEAIPEA_NPEAPEAVCToken@@@Z @ 0x1C00E0D74
 * Callers:
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E06D8 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 * Callees:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048418 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C004C8C0 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C004C8D8 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CTokenQueue::ReleaseOutOfFrameDirectFlipTokensAndGetUpdates(
        CTokenQueue *this,
        unsigned int a2,
        struct CSM_SURFACE_UPDATE *a3,
        int a4,
        unsigned int *a5,
        bool *a6,
        struct CToken **a7)
{
  int v7; // esi
  bool *v8; // r14
  char v10; // r12
  CTokenQueue *v13; // rax
  CTokenQueue **v14; // rcx
  _QWORD *v15; // rdi
  CTokenQueue *v16; // rdi
  __int64 v17; // rax
  CTokenQueue **v18; // rcx
  CTokenQueue **v19; // rax
  _QWORD *v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rcx
  struct CToken **v23; // r14
  const struct CToken *v24; // rbx
  CompositionSurfaceObject *v25; // rsi
  const struct CFlipToken *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD v30[2]; // [rsp+20h] [rbp-10h] BYREF

  v7 = 0;
  v8 = a6;
  v10 = 0;
  *a5 = 0;
  v30[1] = v30;
  v30[0] = v30;
  v13 = (CTokenQueue *)*((_QWORD *)this + 1);
  *v8 = 0;
  v14 = (CTokenQueue **)*((_QWORD *)v13 + 1);
  if ( *(CTokenQueue **)v13 != this || *v14 != v13 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v14;
  *v14 = this;
  if ( v13 != this )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)((char *)v13 - 8);
      if ( !*((_BYTE *)v13 + 80) )
        break;
      if ( (*(int (__fastcall **)(_QWORD *, _QWORD, bool **))(*v15 + 80LL))((_QWORD *)v13 - 1, a2, &a6) < 0 )
        goto LABEL_11;
      if ( !(_BYTE)a6 )
      {
        v19 = (CTokenQueue **)*((_QWORD *)this + 1);
        v16 = (CTokenQueue *)(v15 + 1);
        *(_QWORD *)v16 = this;
        *((_QWORD *)v16 + 1) = v19;
        if ( *v19 != this )
          __fastfail(3u);
        goto LABEL_24;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v15 + 72LL))(v15) )
      {
        v16 = (CTokenQueue *)(v15 + 1);
        if ( !a4 )
        {
          v19 = (CTokenQueue **)*((_QWORD *)this + 1);
          v10 = 1;
          *(_QWORD *)v16 = this;
          *((_QWORD *)v16 + 1) = v19;
          if ( *v19 != this )
            __fastfail(3u);
          goto LABEL_24;
        }
        v17 = v30[0];
        *((_QWORD *)v16 + 1) = v30;
        ++v7;
        *(_QWORD *)v16 = v17;
        if ( *(_QWORD **)(v17 + 8) != v30 )
          __fastfail(3u);
        *(_QWORD *)(v17 + 8) = v16;
        v30[0] = v16;
      }
      else
      {
LABEL_11:
        (*(void (__fastcall **)(_QWORD *))(*v15 + 56LL))(v15);
        (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
      }
      v13 = (CTokenQueue *)*((_QWORD *)this + 1);
      v18 = (CTokenQueue **)*((_QWORD *)v13 + 1);
      if ( *(CTokenQueue **)v13 != this || *v18 != v13 )
        __fastfail(3u);
      *((_QWORD *)this + 1) = v18;
      *v18 = this;
      if ( v13 == this )
        goto LABEL_25;
    }
    v19 = (CTokenQueue **)*((_QWORD *)this + 1);
    v16 = (CTokenQueue *)(v15 + 1);
    *v8 = 1;
    *(_QWORD *)v16 = this;
    *((_QWORD *)v16 + 1) = v19;
    if ( *v19 != this )
      __fastfail(3u);
LABEL_24:
    *v19 = v16;
    *((_QWORD *)this + 1) = v16;
LABEL_25:
    if ( v7 )
    {
      v20 = (_QWORD *)v30[0];
      v21 = 0;
      v22 = *(_QWORD *)v30[0];
      if ( *(_QWORD **)(v30[0] + 8LL) != v30 || *(_QWORD *)(v22 + 8) != v30[0] )
        __fastfail(3u);
      v30[0] = *(_QWORD *)v30[0];
      *(_QWORD *)(v22 + 8) = v30;
      if ( v20 != v30 )
      {
        v23 = a7;
        do
        {
          v24 = (const struct CToken *)(v20 - 1);
          if ( v21
            || (v25 = (CompositionSurfaceObject *)*((_QWORD *)v24 + 4),
                (int)CompositionSurfaceObject::GetSurfaceUpdate(v25, 0LL, a3) < 0) )
          {
            (*(void (__fastcall **)(const struct CToken *))(*(_QWORD *)v24 + 56LL))(v24);
            (**(void (__fastcall ***)(const struct CToken *, __int64))v24)(v24, 1LL);
          }
          else
          {
            *((_DWORD *)a3 + 63) = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)v24 + 96LL))(v24);
            v21 = 1;
            v26 = CFlipToken::FromToken(v24);
            if ( v26 )
              EtwTraceCompositionSurfaceObjectUpdateEvent((__int64)v25, *((_DWORD *)v26 + 25), v27);
            (*(void (__fastcall **)(const struct CToken *))(*(_QWORD *)v24 + 112LL))(v24);
            *v23 = v24;
          }
          v20 = (_QWORD *)v30[0];
          v28 = *(_QWORD *)v30[0];
          if ( *(_QWORD **)(v30[0] + 8LL) != v30 || *(_QWORD *)(v28 + 8) != v30[0] )
            __fastfail(3u);
          v30[0] = *(_QWORD *)v30[0];
          *(_QWORD *)(v28 + 8) = v30;
        }
        while ( v20 != v30 );
      }
      *a5 = v21;
    }
  }
  return v10;
}
