/*
 * XREFs of ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1800EA3BC
 * Callers:
 *     ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1800E8E68 (-PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::NotifyMetaData(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 (__fastcall *v10)(__int64 *, _OWORD *); // rbx
  int v11; // eax
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 88);
  v3 = 0;
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 416LL))(*(_QWORD *)(a1 + 88)) )
    {
      v6 = *(__int64 **)(a1 + 88);
      if ( v6 )
      {
        v7 = *v6;
        v8 = *(_OWORD *)(a2 + 16);
        v13[0] = *(_OWORD *)a2;
        v9 = *(_OWORD *)(a2 + 32);
        v10 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v7 + 216);
        v13[1] = v8;
        *(_QWORD *)&v8 = *(_QWORD *)(a2 + 48);
        v13[2] = v9;
        v14 = v8;
        v11 = v10(v6, v13);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1F2u);
      }
    }
  }
  return v3;
}
