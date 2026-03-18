/*
 * XREFs of ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00E2A30
 * Callers:
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E2308 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 * Callees:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039C4C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C0072F78 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0074A40 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CTokenQueue::ReleaseAnalogTokensAndGetUpdates(
        CTokenQueue *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE *a3,
        int a4,
        bool *a5,
        unsigned int *a6,
        struct CToken **a7)
{
  unsigned int *v7; // r13
  int v8; // esi
  char v10; // r15
  CTokenQueue **v12; // rax
  CTokenQueue ***v13; // rcx
  CTokenQueue **v14; // rdi
  CTokenQueue *v15; // rdi
  __int64 v16; // rax
  CTokenQueue ***v17; // rcx
  CTokenQueue **v18; // rax
  _QWORD *v19; // rax
  int v20; // edi
  __int64 v21; // rcx
  struct CToken **v22; // r14
  const struct CToken *v23; // rbx
  CompositionSurfaceObject *v24; // rsi
  const struct CFlipToken *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD v29[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+48h]

  v30 = a2;
  v7 = a6;
  v8 = 0;
  v29[1] = v29;
  v10 = 0;
  *a6 = 0;
  v29[0] = v29;
  v12 = (CTokenQueue **)*((_QWORD *)this + 1);
  *a5 = 0;
  v13 = (CTokenQueue ***)v12[1];
  if ( *v12 != this || *v13 != v12 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v13;
  *v13 = (CTokenQueue **)this;
  if ( v12 == (CTokenQueue **)this )
    return v10;
  while ( 1 )
  {
    v14 = v12 - 1;
    if ( (*((int (__fastcall **)(CTokenQueue **, __int64, unsigned int **))*(v12 - 1) + 20))(v12 - 1, a2, &a6) < 0 )
    {
LABEL_10:
      (*((void (__fastcall **)(CTokenQueue **))*v14 + 7))(v14);
      (*(void (__fastcall **)(CTokenQueue **, __int64))*v14)(v14, 1LL);
      goto LABEL_11;
    }
    if ( !(_BYTE)a6 )
      break;
    if ( !(*((unsigned __int8 (__fastcall **)(CTokenQueue **))*v14 + 9))(v14) )
      goto LABEL_10;
    v15 = (CTokenQueue *)(v14 + 1);
    if ( !a4 )
    {
      v18 = (CTokenQueue **)*((_QWORD *)this + 1);
      v10 = 1;
      *(_QWORD *)v15 = this;
      *((_QWORD *)v15 + 1) = v18;
      if ( *v18 != this )
        __fastfail(3u);
      goto LABEL_20;
    }
    v16 = v29[0];
    *((_QWORD *)v15 + 1) = v29;
    ++v8;
    *(_QWORD *)v15 = v16;
    if ( *(_QWORD **)(v16 + 8) != v29 )
      __fastfail(3u);
    *(_QWORD *)(v16 + 8) = v15;
    v29[0] = v15;
LABEL_11:
    v12 = (CTokenQueue **)*((_QWORD *)this + 1);
    v17 = (CTokenQueue ***)v12[1];
    if ( *v12 != this || *v17 != v12 )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v17;
    *v17 = (CTokenQueue **)this;
    if ( v12 == (CTokenQueue **)this )
      goto LABEL_21;
    a2 = v30;
  }
  v18 = (CTokenQueue **)*((_QWORD *)this + 1);
  v15 = (CTokenQueue *)(v14 + 1);
  *a5 = 1;
  *(_QWORD *)v15 = this;
  *((_QWORD *)v15 + 1) = v18;
  if ( *v18 != this )
    __fastfail(3u);
LABEL_20:
  *v18 = v15;
  *((_QWORD *)this + 1) = v15;
LABEL_21:
  if ( v8 )
  {
    v19 = (_QWORD *)v29[0];
    v20 = 0;
    v21 = *(_QWORD *)v29[0];
    if ( *(_QWORD **)(v29[0] + 8LL) != v29 || *(_QWORD *)(v21 + 8) != v29[0] )
      __fastfail(3u);
    v29[0] = *(_QWORD *)v29[0];
    *(_QWORD *)(v21 + 8) = v29;
    if ( v19 != v29 )
    {
      v22 = a7;
      do
      {
        v23 = (const struct CToken *)(v19 - 1);
        if ( v20
          || (v24 = (CompositionSurfaceObject *)*((_QWORD *)v23 + 4),
              (int)CompositionSurfaceObject::GetSurfaceUpdate(v24, 0LL, a3) < 0) )
        {
          (*(void (__fastcall **)(const struct CToken *))(*(_QWORD *)v23 + 56LL))(v23);
          (**(void (__fastcall ***)(const struct CToken *, __int64))v23)(v23, 1LL);
        }
        else
        {
          *((_DWORD *)a3 + 63) = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)v23 + 120LL))(v23);
          v20 = 1;
          v25 = CFlipToken::FromToken(v23);
          EtwTraceCompositionSurfaceObjectUpdateEvent((__int64)v24, *((_DWORD *)v25 + 25), v26);
          *v22 = v23;
        }
        v19 = (_QWORD *)v29[0];
        v27 = *(_QWORD *)v29[0];
        if ( *(_QWORD **)(v29[0] + 8LL) != v29 || *(_QWORD *)(v27 + 8) != v29[0] )
          __fastfail(3u);
        v29[0] = *(_QWORD *)v29[0];
        *(_QWORD *)(v27 + 8) = v29;
      }
      while ( v19 != v29 );
    }
    *v7 = v20;
  }
  return v10;
}
