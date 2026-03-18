/*
 * XREFs of ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00E0AB4
 * Callers:
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E03D4 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 * Callees:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048418 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C004C8C0 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C004C8D8 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CTokenQueue::ReleaseAnalogTokensAndGetUpdates(
        CTokenQueue *this,
        unsigned int a2,
        struct CSM_SURFACE_UPDATE *a3,
        int a4,
        bool *a5,
        unsigned int *a6,
        struct CToken **a7)
{
  int v7; // esi
  bool *v8; // r14
  char v10; // r12
  CTokenQueue **v13; // rax
  CTokenQueue ***v14; // rcx
  CTokenQueue **v15; // rdi
  CTokenQueue *v16; // rdi
  __int64 v17; // rax
  CTokenQueue ***v18; // rcx
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
  v8 = a5;
  v10 = 0;
  *a6 = 0;
  v30[1] = v30;
  v30[0] = v30;
  v13 = (CTokenQueue **)*((_QWORD *)this + 1);
  *v8 = 0;
  v14 = (CTokenQueue ***)v13[1];
  if ( *v13 != this || *v14 != v13 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v14;
  *v14 = (CTokenQueue **)this;
  if ( v13 == (CTokenQueue **)this )
    return v10;
  while ( 1 )
  {
    v15 = v13 - 1;
    if ( (*((int (__fastcall **)(CTokenQueue **, _QWORD, bool **))*(v13 - 1) + 15))(v13 - 1, a2, &a5) < 0 )
    {
LABEL_10:
      (*((void (__fastcall **)(CTokenQueue **))*v15 + 7))(v15);
      (*(void (__fastcall **)(CTokenQueue **, __int64))*v15)(v15, 1LL);
      goto LABEL_11;
    }
    if ( !(_BYTE)a5 )
      break;
    if ( !(*((unsigned __int8 (__fastcall **)(CTokenQueue **))*v15 + 9))(v15) )
      goto LABEL_10;
    v16 = (CTokenQueue *)(v15 + 1);
    if ( !a4 )
    {
      v19 = (CTokenQueue **)*((_QWORD *)this + 1);
      v10 = 1;
      *(_QWORD *)v16 = this;
      *((_QWORD *)v16 + 1) = v19;
      if ( *v19 != this )
        __fastfail(3u);
      goto LABEL_20;
    }
    v17 = v30[0];
    *((_QWORD *)v16 + 1) = v30;
    ++v7;
    *(_QWORD *)v16 = v17;
    if ( *(_QWORD **)(v17 + 8) != v30 )
      __fastfail(3u);
    *(_QWORD *)(v17 + 8) = v16;
    v30[0] = v16;
LABEL_11:
    v13 = (CTokenQueue **)*((_QWORD *)this + 1);
    v18 = (CTokenQueue ***)v13[1];
    if ( *v13 != this || *v18 != v13 )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v18;
    *v18 = (CTokenQueue **)this;
    if ( v13 == (CTokenQueue **)this )
      goto LABEL_21;
  }
  v19 = (CTokenQueue **)*((_QWORD *)this + 1);
  v16 = (CTokenQueue *)(v15 + 1);
  *v8 = 1;
  *(_QWORD *)v16 = this;
  *((_QWORD *)v16 + 1) = v19;
  if ( *v19 != this )
    __fastfail(3u);
LABEL_20:
  *v19 = v16;
  *((_QWORD *)this + 1) = v16;
LABEL_21:
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
    *a6 = v21;
  }
  return v10;
}
