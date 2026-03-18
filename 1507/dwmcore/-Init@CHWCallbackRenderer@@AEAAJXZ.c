/*
 * XREFs of ?Init@CHWCallbackRenderer@@AEAAJXZ @ 0x18001E51C
 * Callers:
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x180060FA0 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHWCallbackRenderer::Init(CHWCallbackRenderer *this)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v3; // ebx
  _DWORD v5[6]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 3);
  v5[1] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[0] = 16;
  v5[2] = 4;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, char *))(**(_QWORD **)(v1 + 544) + 24LL))(
         *(_QWORD *)(v1 + 544),
         v5,
         0LL,
         (char *)this + 112);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x4Fu);
  return v3;
}
