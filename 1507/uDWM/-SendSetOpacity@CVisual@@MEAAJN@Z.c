/*
 * XREFs of ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x18001E790
 * Callers:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18001E690 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?Hide@CImage@@UEAAXXZ @ 0x180071150 (-Hide@CImage@@UEAAXXZ.c)
 *     ?Unhide@CImage@@QEAAXN@Z @ 0x1800711BC (-Unhide@CImage@@QEAAXN@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180076204 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::SendSetOpacity(CVisual *this, double a2)
{
  __int64 v2; // rax
  struct MIL_CHANNEL__ *v3; // rdi
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v11[4]; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-38h] BYREF
  double v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]

  v2 = *((_QWORD *)this + 2);
  v10 = 0;
  v3 = *(struct MIL_CHANNEL__ **)(v2 + 16);
  v4 = *(_DWORD *)(v2 + 24);
  v5 = MilResource_CreateOrAddRefOnChannel(v3, 8LL, &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x22u);
  }
  else
  {
    v12[0] = 151;
    v14 = 0;
    v15 = 0;
    v12[1] = v10;
    v13 = a2;
    v7 = MilResource_SendCommand(v12, 0x18u, v3);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x2Au);
    }
    else
    {
      v11[2] = v10;
      v11[0] = 45;
      v11[1] = v4;
      v8 = MilResource_SendCommand(v11, 0xCu, v3);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x33u);
    }
  }
  if ( v10 )
    MilResource_ReleaseOnChannel(v3, v10, 0LL);
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x53Bu);
  return (unsigned int)v6;
}
