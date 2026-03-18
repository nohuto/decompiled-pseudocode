/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424
 * Callers:
 *     ?CheckDeviceState@CComposition@@QEAAJXZ @ 0x18003B324 (-CheckDeviceState@CComposition@@QEAAJXZ.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x180072D6C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x18011B430 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180021818 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x18002A484 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18003B3A0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18003C3A4 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A7E44 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800BA560 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::ProcessRenderingStatus(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // r14
  int v14; // eax
  CGdiSpriteBitmap *v15; // rcx
  _DWORD v16[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+3Ch] [rbp-1Ch]
  __int64 v18; // [rsp+44h] [rbp-14h]

  v3 = *(_DWORD *)(a1 + 336);
  v4 = v3;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v3 = 1;
      if ( v4 == 2 )
      {
        v10 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)(a1 + 80), 0);
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xDA1u);
        CComposition::UpdateMmcssPartners((CComposition *)a1);
      }
      v11 = *(_QWORD *)(a1 + 40);
      if ( v11 )
      {
        v12 = (_QWORD *)(v11 + 176);
        v13 = *(_QWORD **)(v11 + 176);
        while ( v13 != v12 )
        {
          v15 = (CGdiSpriteBitmap *)(v13 - 69);
          v13 = (_QWORD *)*v13;
          CGdiSpriteBitmap::ReleaseDeviceResources(v15);
        }
      }
    }
    else if ( a2 == 2 )
    {
      v3 = 2;
      if ( v4 != 2 )
      {
        CMmcssTask::Revert((CMmcssTask *)(a1 + 80));
        CComposition::UpdateMmcssPartners((CComposition *)a1);
      }
      if ( v4 == 1 )
      {
        v7 = CLogicalSurfaceHandleMap::RecreateTexturesForDeviceBitmaps((CLogicalSurfaceHandleMap *)(*(_QWORD *)(a1 + 40) + 96LL));
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xDBEu);
      }
    }
    else if ( a2 == 3 )
    {
      v3 = 0;
      if ( v4 == 2 )
      {
        v9 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)(a1 + 80), 0);
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD89u);
        CComposition::UpdateMmcssPartners((CComposition *)a1);
      }
      if ( v4 == 1 )
      {
        v14 = CLogicalSurfaceHandleMap::RecreateTexturesForDeviceBitmaps((CLogicalSurfaceHandleMap *)(*(_QWORD *)(a1 + 40) + 96LL));
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xD93u);
      }
    }
  }
  *(_DWORD *)(a1 + 336) = v3;
  if ( v3 != v4 )
  {
    v8 = *(_QWORD *)(a1 + 344);
    if ( v8 && v3 == 1 )
      *(_BYTE *)(v8 + 28) = 1;
    v16[0] = 5;
    v16[1] = 0;
    v16[2] = v4;
    v17 = v3;
    v18 = 0LL;
    CComposition::NotifyHelper((CComposition *)a1, (struct MIL_MESSAGE *)v16, a3);
  }
  result = *(_QWORD *)(a1 + 344);
  if ( result && v3 == 2 )
  {
    if ( *(_DWORD *)(a1 + 464) )
      *(_BYTE *)(result + 28) = 1;
  }
  return result;
}
