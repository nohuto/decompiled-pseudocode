/*
 * XREFs of ?GetIndicesCore@CGeometry2DGroup@@MEAAJIPEAII@Z @ 0x18011C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::GetIndicesCore(
        CGeometry2DGroup *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned int v9; // eax
  __int64 i; // rsi
  __int64 v11; // r14
  int v12; // eax
  unsigned int v14; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v9 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v9;
  if ( (v9 & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
      if ( v11 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11);
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)v11 + 128LL))(
                v11,
                a2,
                a3,
                a4);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x17Fu);
          break;
        }
        a4 -= v14;
        a3 += v14;
        a2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v4;
}
