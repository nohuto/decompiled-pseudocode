/*
 * XREFs of ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x18013F710
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18013F5E8 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  if ( v5 >= 0 )
    *(_OWORD *)((char *)this + 40) = v9;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA0u);
  return v6;
}
