/*
 * XREFs of ?AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z @ 0x180161DC4
 * Callers:
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051F00 (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CRemoteApplicationWindow@@SAJ_KPEAPEAV1@@Z @ 0x180164D24 (-Create@CRemoteApplicationWindow@@SAJ_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRemoteApplicationWindowSet::AddApplicationWindow(
        CRemoteApplicationWindowSet *this,
        unsigned __int64 a2)
{
  unsigned int v2; // ebx
  BOOL v3; // eax
  __int64 v4; // r8
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  struct CRemoteApplicationWindow *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v13 = 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 10) )
  {
LABEL_5:
    v8 = CRemoteApplicationWindow::Create(a2, &v13);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x36u);
    }
    else
    {
      v9 = *((_DWORD *)this + 10);
      v10 = v9 + 1;
      if ( v9 + 1 >= v9 )
      {
        v2 = 0;
        if ( v10 <= *((_DWORD *)this + 9) )
        {
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v13;
          *((_DWORD *)this + 10) = v10;
LABEL_13:
          (**(void (__fastcall ***)(struct CRemoteApplicationWindow *))v13)(v13);
          goto LABEL_16;
        }
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v13);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( (v2 & 0x80000000) == 0 )
        goto LABEL_13;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x38u);
    }
LABEL_16:
    if ( v13 )
      (*(void (__fastcall **)(struct CRemoteApplicationWindow *))(*(_QWORD *)v13 + 8LL))(v13);
    return v2;
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
