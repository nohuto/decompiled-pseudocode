/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C00198A8
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0019420 (NtDCompositionGetFrameSurfaceUpdates.c)
 * Callees:
 *     EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0016ED0 (EtwTraceCompositionSurfaceObjectUpdateEvent.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C001BF3C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C001F168 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::GetSurfaceUpdates(
        DirectComposition::CCompositionFrame *this,
        struct CSM_SURFACE_UPDATE *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // r14d
  _QWORD *v9; // rax
  unsigned int v10; // edi
  bool v11; // zf
  _QWORD *v12; // rax
  __int64 result; // rax
  CompositionSurfaceObject *v14; // rdi
  const struct CFlipToken *v15; // rax
  __int64 v16; // r8
  DirectComposition::CCompositionFrame *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  DirectComposition::CCompositionFrame *v24; // rcx

  v4 = 0;
  if ( *((_DWORD *)this + 32) )
    goto LABEL_6;
  if ( !*((_QWORD *)this + 13) )
  {
    v9 = (_QWORD *)((char *)this + 136);
    if ( (_QWORD *)*v9 != v9 )
    {
      v18 = *v9 - 8LL;
      *((_DWORD *)this + 30) = 1;
      *((_QWORD *)this + 13) = v18;
    }
  }
  v10 = *((_DWORD *)this + 30);
  if ( !v10 )
    goto LABEL_6;
  do
  {
    if ( !a3 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 72LL))(*((_QWORD *)this + 13)) )
    {
      v14 = *(CompositionSurfaceObject **)(*((_QWORD *)this + 13) + 32LL);
      if ( CompositionSurfaceObject::GetSurfaceUpdate(v14, *((_QWORD *)this + 8), a2) >= 0 )
      {
        v15 = CFlipToken::FromToken(*((const struct CToken **)this + 13));
        if ( v15 )
          EtwTraceCompositionSurfaceObjectUpdateEvent((__int64)v14, *((_DWORD *)v15 + 23), v16);
        a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
        --a3;
        ++v4;
      }
    }
    v17 = *(DirectComposition::CCompositionFrame **)(*((_QWORD *)this + 13) + 8LL);
    if ( v17 == (DirectComposition::CCompositionFrame *)((char *)this + 136) )
    {
      *((_DWORD *)this + 30) = 0;
      *((_QWORD *)this + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)this + 13) = (char *)v17 - 8;
    }
    v10 = *((_DWORD *)this + 30);
  }
  while ( v10 );
  if ( !v10 )
  {
LABEL_6:
    v11 = *((_QWORD *)this + 14) == 0LL;
    *((_DWORD *)this + 32) = 1;
    if ( v11 )
    {
      v12 = (_QWORD *)((char *)this + 152);
      if ( (_QWORD *)*v12 != v12 )
      {
        *((_QWORD *)this + 14) = *v12;
        *((_DWORD *)this + 31) = 1;
      }
    }
    v10 = *((_DWORD *)this + 31);
    if ( !v10 )
      goto LABEL_10;
    do
    {
      if ( !a3 )
        break;
      v19 = *((_QWORD *)this + 14);
      v20 = 0LL;
      v21 = *(_DWORD *)(v19 + 64);
      if ( *(_DWORD *)(v19 + 80) == v21 )
        *(_DWORD *)(v19 + 80) = 0;
      v22 = *(_DWORD *)(v19 + 80);
      if ( v22 < v21 )
        v20 = *(_QWORD *)(v19 + 56) + 32LL * v22;
      if ( v20 )
      {
        do
        {
          if ( !a3 )
            break;
          if ( CompositionSurfaceObject::GetSurfaceUpdate(
                 *(CompositionSurfaceObject **)(v20 + 8),
                 *((_QWORD *)this + 8),
                 a2) >= 0 )
          {
            a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
            --a3;
            ++v4;
          }
          ++*(_DWORD *)(v19 + 80);
          v20 = 0LL;
          v23 = *(unsigned int *)(v19 + 80);
          if ( (unsigned int)v23 < *(_DWORD *)(v19 + 64) )
            v20 = *(_QWORD *)(v19 + 56) + 32 * v23;
        }
        while ( v20 );
        if ( v20 && !a3 )
          break;
      }
      v24 = (DirectComposition::CCompositionFrame *)**((_QWORD **)this + 14);
      if ( v24 == (DirectComposition::CCompositionFrame *)((char *)this + 152) )
      {
        *((_DWORD *)this + 31) = 0;
        *((_QWORD *)this + 14) = 0LL;
      }
      else
      {
        *((_QWORD *)this + 14) = v24;
      }
      v10 = *((_DWORD *)this + 31);
    }
    while ( v10 );
    if ( !v10 )
LABEL_10:
      *((_DWORD *)this + 32) = 0;
  }
  result = v10;
  *a4 = v4;
  return result;
}
