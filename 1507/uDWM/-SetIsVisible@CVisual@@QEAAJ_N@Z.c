/*
 * XREFs of ?SetIsVisible@CVisual@@QEAAJ_N@Z @ 0x18001EA00
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180024864 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180027100 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::SetIsVisible(CVisual *this, char a2)
{
  int v2; // ebx
  char v4; // dl
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __m128i si128; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( ((*((_BYTE *)this + 84) & 4) != 0) != a2 )
  {
    v4 = *((_BYTE *)this + 84) ^ (*((_BYTE *)this + 84) ^ (4 * a2)) & 4;
    *((_BYTE *)this + 84) = v4;
    v5 = (v4 & 4) == 0;
    v6 = *((_QWORD *)this + 3);
    if ( v5 )
    {
      si128.m128i_i32[0] = 51;
      *(__int64 *)((char *)si128.m128i_i64 + 4) = 0LL;
      si128.m128i_i32[2] = *(_DWORD *)(*((_QWORD *)this + 2) + 24LL);
      v9 = CResource::Send(*(CResource **)(*(_QWORD *)(v6 + 40) + 16LL), &si128, 0xCu);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1AEu);
      if ( v2 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x629u);
    }
    else
    {
      v7 = *((_QWORD *)this + 2);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      si128.m128i_i64[1] = *(unsigned int *)(v7 + 24);
      v8 = CResource::Send(*(CResource **)(*(_QWORD *)(v6 + 40) + 16LL), &si128, 0x10u);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x190u);
      if ( v2 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x625u);
    }
  }
  return (unsigned int)v2;
}
