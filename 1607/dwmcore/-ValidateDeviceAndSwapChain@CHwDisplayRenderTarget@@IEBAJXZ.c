/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18008F84C
 * Callers:
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007B130 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800B8DE0 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@MEBA_NXZ @ 0x18008EE30 (-IsValid@CHwDisplayRenderTarget@@MEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(CHwDisplayRenderTarget *); // rax
  char IsValid; // al

  v1 = *((_DWORD *)this + 77);
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v1, 0x55Du);
  }
  else
  {
    v3 = *((_QWORD *)this + 23);
    if ( !v3 )
    {
      v1 = -2003304307;
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304307, 0x568u);
      goto LABEL_12;
    }
    v1 = *(_DWORD *)(v3 + 824);
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v1, 0x564u);
    }
    else if ( *((_BYTE *)this + 192) )
    {
      if ( !*((_QWORD *)this + 27)
        || ((v4 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 208LL),
             v4 != CHwDisplayRenderTarget::IsValid)
          ? (IsValid = ((__int64 (*)(void))v4)())
          : (IsValid = CHwDisplayRenderTarget::IsValid(this)),
            !IsValid) )
      {
        v1 = -2003304442;
        MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, -2003304442, 0x571u);
        goto LABEL_12;
      }
    }
  }
  if ( v1 < 0 )
LABEL_12:
    *((_DWORD *)this + 77) = v1;
  return (unsigned int)v1;
}
