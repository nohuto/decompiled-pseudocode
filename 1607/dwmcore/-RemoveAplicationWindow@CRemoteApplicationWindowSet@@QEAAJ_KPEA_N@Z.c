/*
 * XREFs of ?RemoveAplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_KPEA_N@Z @ 0x180161F44
 * Callers:
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteApplicationWindowSet::RemoveAplicationWindow(
        CRemoteApplicationWindowSet *this,
        __int64 a2,
        bool *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rcx

  v3 = 0LL;
  *a3 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    v6 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v7 = *(_QWORD **)(v6 + 8 * v3);
      if ( v7[2] == a2 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
        return 2147942406LL;
    }
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    v8 = *((_DWORD *)this + 10);
    if ( (unsigned int)v3 < v8 )
    {
      v9 = *((_QWORD *)this + 2);
      if ( (unsigned int)v3 < v8 - 1 )
      {
        do
        {
          v10 = (unsigned int)v3;
          LODWORD(v3) = v3 + 1;
          *(_QWORD *)(v9 + 8 * v10) = *(_QWORD *)(v9 + 8LL * (unsigned int)v3);
        }
        while ( (unsigned int)v3 < *((_DWORD *)this + 10) - 1 );
      }
      --*((_DWORD *)this + 10);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
    *a3 = 1;
  }
  return 2147942406LL;
}
