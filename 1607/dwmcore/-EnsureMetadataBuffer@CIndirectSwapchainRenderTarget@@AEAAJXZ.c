/*
 * XREFs of ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8B18
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18011F7A0 (-Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18011F870 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18011F8BC (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180110BAC (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rdi
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-20h] BYREF

  v1 = (char *)this + 480;
  *((_DWORD *)this + 126) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 480, 1u);
  v3 = *((_QWORD *)this + 2);
  v11 = 3;
  v12[0] = *(_QWORD *)(v3 + 472);
  v12[1] = *(_QWORD *)(v3 + 312);
  v4 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v11, 4LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1E8u);
  }
  else
  {
    v6 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, v12, 16LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1E9u);
    }
    else if ( (*((_BYTE *)this + 512) & 4) != 0
           || (v11 = 2, v7 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v11, 4LL), v5 = v7, v7 >= 0) )
    {
      if ( (*((_BYTE *)this + 512) & 2) != 0
        && (v11 = 1, v8 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v11, 4LL), v5 = v8, v8 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1F5u);
      }
      else if ( (*((_BYTE *)this + 512) & 1) != 0 )
      {
        v11 = 0;
        v9 = DynArray<unsigned char,0>::AddMultipleAndSet(v1, &v11, 4LL);
        v5 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1FBu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1EFu);
    }
  }
  return v5;
}
