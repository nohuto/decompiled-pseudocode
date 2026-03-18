/*
 * XREFs of ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x18013F7C8
 * Callers:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18013F430 (--1CWarpLockSubresource@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWarpLockSubresource::Unlock(CWarpLockSubresource *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]

  v1 = *((_QWORD *)this + 3);
  v7 = 14;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 80LL))(v1, 2013265920LL);
  v3 = *((_QWORD *)this + 2);
  v8 = *((_DWORD *)this + 8);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 24LL))(v3, &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = 0;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xBDu);
  }
  return v5;
}
