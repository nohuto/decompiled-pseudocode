/*
 * XREFs of ?AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z @ 0x180123638
 * Callers:
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x1800371A4 (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CRemoteApplicationWindow@@SAJ_KPEAPEAV1@@Z @ 0x180125AA8 (-Create@CRemoteApplicationWindow@@SAJ_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRemoteApplicationWindowSet::AddApplicationWindow(
        CRemoteApplicationWindowSet *this,
        unsigned __int64 a2)
{
  unsigned int v2; // esi
  BOOL v3; // eax
  __int64 v4; // r8
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // ebx
  int v13; // eax
  struct CRemoteApplicationWindow *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v14 = 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 10) )
  {
LABEL_5:
    v8 = CRemoteApplicationWindow::Create(a2, &v14);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x36u);
      goto LABEL_12;
    }
    v9 = *((_DWORD *)this + 10);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_18:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x38u);
LABEL_12:
      if ( v14 )
        (*(void (__fastcall **)(struct CRemoteApplicationWindow *))(*(_QWORD *)v14 + 8LL))(v14);
      return v2;
    }
    v2 = 0;
    if ( v10 > *((_DWORD *)this + 9) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v14);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      v2 = v11;
      if ( v11 < 0 )
        goto LABEL_18;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v14;
      *((_DWORD *)this + 10) = v10;
    }
    (**(void (__fastcall ***)(struct CRemoteApplicationWindow *))v14)(v14);
    goto LABEL_12;
  }
  while ( !v3 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4);
    v3 = *(_QWORD *)(v7 + 16) == a2;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
    {
      if ( *(_QWORD *)(v7 + 16) == a2 )
        return v2;
      goto LABEL_5;
    }
  }
  return v2;
}
