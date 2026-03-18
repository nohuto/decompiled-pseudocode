/*
 * XREFs of ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x18001B0A0
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18001AEB4 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWarpLockSubresource::Lock(CWarpLockSubresource *this)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 3);
  v8[0] = 13;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 80LL))(v1, 2013265920LL);
  v3 = *((_DWORD *)this + 8);
  v4 = *((_QWORD *)this + 2);
  v8[3] = 0;
  *(_QWORD *)&v9 = 0LL;
  DWORD2(v9) = 0;
  v8[1] = v3;
  v8[2] = 1;
  v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 24LL))(v4, v8);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA0u);
  else
    *(_OWORD *)((char *)this + 40) = v9;
  return v6;
}
