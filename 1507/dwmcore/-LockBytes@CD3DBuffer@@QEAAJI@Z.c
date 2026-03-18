/*
 * XREFs of ?LockBytes@CD3DBuffer@@QEAAJI@Z @ 0x18005AFA0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DBuffer::LockBytes(CD3DBuffer *this, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebp
  int v5; // eax
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( *((_DWORD *)this + 13) == 2 )
  {
    v4 = 5;
    if ( *((_DWORD *)this + 11) - *((_DWORD *)this + 10) < a2 )
      v4 = 4;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(*((_QWORD *)this + 3) + 552LL)
                                                                                     + 112LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 552LL),
           *((_QWORD *)this + 2),
           0LL,
           v4,
           0,
           v7);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x28u);
      return v3;
    }
    *((_QWORD *)this + 4) = v7[0];
    if ( v4 == 4 )
      *((_DWORD *)this + 10) = 0;
  }
  *((_BYTE *)this + 56) = 1;
  return v3;
}
