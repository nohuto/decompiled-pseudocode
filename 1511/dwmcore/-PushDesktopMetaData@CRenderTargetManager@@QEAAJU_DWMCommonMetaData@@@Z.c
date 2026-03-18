/*
 * XREFs of ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180104DB0
 * Callers:
 *     ?NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ @ 0x180100FC8 (-NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ.c)
 *     ?NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z @ 0x18010118C (-NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180106278 (-NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CRenderTargetManager::PushDesktopMetaData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // edi
  int v4; // ebp
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  _OWORD v14[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v7 = a1;
  if ( v2 )
  {
    v8 = 0LL;
    while ( !v4 )
    {
      v9 = *(_QWORD *)(v8 + *(_QWORD *)(v7 + 24));
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 37LL)
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 168LL))(v9) )
      {
        v10 = *(_OWORD *)(a2 + 16);
        v14[0] = *(_OWORD *)a2;
        v11 = *(_OWORD *)(a2 + 32);
        v14[1] = v10;
        *(_QWORD *)&v10 = *(_QWORD *)(a2 + 48);
        v14[2] = v11;
        v15 = v10;
        v12 = CHwndRenderTarget::NotifyMetaData(v9, v14);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1C2u);
          return v3;
        }
        v4 = 1;
      }
      ++v5;
      v8 += 8LL;
      if ( v5 >= v2 )
        return v3;
      v7 = a1;
    }
  }
  return v3;
}
