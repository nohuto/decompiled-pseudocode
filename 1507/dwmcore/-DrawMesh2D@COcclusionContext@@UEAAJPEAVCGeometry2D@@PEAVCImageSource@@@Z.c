/*
 * XREFs of ?DrawMesh2D@COcclusionContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1800FAB50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::DrawMesh2D(
        COcclusionContext *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 1) + 144LL))((char *)a3 + 8, 52LL) )
  {
    *(_QWORD *)&v11 = *((_QWORD *)this + 63);
    v5 = *((unsigned int *)this + 188);
    *((_QWORD *)&v11 + 1) = a3;
    LOBYTE(v12) = 1;
    v6 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
    {
      if ( v6 > *((_DWORD *)this + 187) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 728, 0x28u, 1, &v11);
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        v7 = 5 * v5;
        v8 = *((_QWORD *)this + 91);
        *(_OWORD *)(v8 + 8 * v7) = v11;
        *(_OWORD *)(v8 + 8 * v7 + 16) = v12;
        *(_QWORD *)(v8 + 8 * v7 + 32) = v13;
        *((_DWORD *)this + 188) = v6;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
  }
  return 0LL;
}
