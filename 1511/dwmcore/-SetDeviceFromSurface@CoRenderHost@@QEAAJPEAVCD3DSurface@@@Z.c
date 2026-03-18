/*
 * XREFs of ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180104140
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18007C290 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180103C28 (-BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801040B4 (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

__int64 __fastcall CoRenderHost::SetDeviceFromSurface(struct CD3DSurface **this, struct CD3DSurface *a2)
{
  struct CD3DSurface **v4; // r15
  struct CD3DSurface *v5; // r12
  int v6; // eax
  unsigned int v7; // ebx

  if ( a2 == this[4] )
    return 0;
  v4 = this + 5;
  v5 = this[5];
  CoRenderHost::ReleaseResources((CoRenderHost *)this);
  v6 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)a2 + 3) + 24LL))((char *)a2 + 24, (char *)this + 8);
  v7 = v6;
  if ( v6 >= 0 )
  {
    this[4] = a2;
    (**(void (__fastcall ***)(struct CD3DSurface *))a2)(a2);
    (*(void (__fastcall **)(_QWORD, struct CD3DSurface **))(**((_QWORD **)a2 + 17) + 24LL))(*((_QWORD *)a2 + 17), v4);
    if ( v5 && v5 != *v4 )
      (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)this[3] + 104LL))(this[3]);
    return 0;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x94u);
  return v7;
}
