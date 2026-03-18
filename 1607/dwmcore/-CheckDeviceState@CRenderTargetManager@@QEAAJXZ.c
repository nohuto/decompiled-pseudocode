/*
 * XREFs of ?CheckDeviceState@CRenderTargetManager@@QEAAJXZ @ 0x180073820
 * Callers:
 *     ?CheckDeviceState@CComposition@@QEAAJXZ @ 0x18003B324 (-CheckDeviceState@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180072D1C (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180073B70 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x1800745A0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::CheckDeviceState(CRenderTargetManager *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  char v5; // r15
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  char v9; // al
  CHwndRenderTarget *v10; // rcx
  __int64 (*v11)(void); // rax
  int v12; // eax
  bool v13; // bl
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  int v17; // eax

  if ( *((_BYTE *)this + 110) )
  {
    return 0;
  }
  else
  {
    v4 = 0LL;
    v5 = 1;
    if ( *((_DWORD *)this + 12) )
    {
      do
      {
        v6 = *((_QWORD *)this + 3);
        v7 = *(_QWORD *)(v6 + 8 * v4);
        v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL);
        if ( v8 == CHwndRenderTarget::IsOfType )
          v9 = CHwndRenderTarget::IsOfType(v7, 38LL);
        else
          v9 = v8(v7, 38LL);
        if ( v9
          || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 8 * v4) + 48LL))(
               *(_QWORD *)(v6 + 8 * v4),
               43LL) )
        {
          v10 = (CHwndRenderTarget *)(*(_QWORD *)(v6 + 8 * v4) + 112LL);
          v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 128LL);
          if ( (char *)v11 == (char *)CHwndRenderTarget::CheckDeviceState )
            v12 = CHwndRenderTarget::CheckDeviceState(v10);
          else
            v12 = v11();
          v2 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v12, 0x538u);
            return v2;
          }
          if ( v12 == 142213121 )
          {
            v13 = 1;
          }
          else
          {
            v13 = 0;
            v5 = 0;
          }
          v14 = *(_QWORD *)(v6 + 8 * v4);
          v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL);
          if ( v15 == CHwndRenderTarget::IsOfType
             ? CHwndRenderTarget::IsOfType(v14, 38LL)
             : (unsigned __int8)v15(v14, 38LL) )
          {
            v17 = CRenderTargetManager::NotifyIndirectSwapchainsOfTargetOcclusion(
                    this,
                    *(struct CRenderTarget **)(v6 + 8 * v4),
                    v13);
            v2 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v17, 0x533u);
              return v2;
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 12) );
      if ( !v5 )
        return 0;
    }
    return 142213121;
  }
}
