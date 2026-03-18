/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007B250 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18007B964 (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180104ECC (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ @ 0x180086760 (-ReleaseDeviceResources@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x180094B10 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180095BC0 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A49A0 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800A4BAC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A6008 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 */

__int64 __fastcall CComposition::ProcessRenderingStatus(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // r15
  _QWORD *v11; // r14
  int v12; // eax
  int v13; // eax
  CGdiSpriteBitmap *v14; // rcx
  _DWORD v15[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+3Ch] [rbp-1Ch]
  __int64 v17; // [rsp+44h] [rbp-14h]

  v2 = *(_DWORD *)(a1 + 336);
  v3 = v2;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v2 = 1;
      if ( v3 == 2 )
      {
        v8 = CMmcssTask::Apply((CMmcssTask *)(a1 + 80), 0);
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF06u);
        CComposition::UpdateMmcssPartners((CComposition *)a1);
      }
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
      {
        v10 = (_QWORD *)(v9 + 176);
        v11 = *(_QWORD **)(v9 + 176);
        while ( v11 != v10 )
        {
          v14 = (CGdiSpriteBitmap *)(v11 - 60);
          v11 = (_QWORD *)*v11;
          CGdiSpriteBitmap::ReleaseDeviceResources(v14);
        }
      }
    }
    else if ( a2 == 2 )
    {
      v2 = 2;
      if ( v3 != 2 )
      {
        CMmcssTask::Revert((CMmcssTask *)(a1 + 80));
        CComposition::UpdateMmcssPartners((CComposition *)a1);
      }
      if ( v3 == 1 )
      {
        v6 = CLogicalSurfaceHandleMap::RecreateTexturesForDeviceBitmaps((CLogicalSurfaceHandleMap *)(*(_QWORD *)(a1 + 40) + 96LL));
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF23u);
      }
    }
    else if ( a2 == 3 )
    {
      v2 = 0;
      if ( v3 == 2 )
      {
        v12 = CMmcssTask::Apply((CMmcssTask *)(a1 + 80), 0);
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xEEEu);
        CComposition::UpdateMmcssPartners((CComposition *)a1);
      }
      if ( v3 == 1 )
      {
        v13 = CLogicalSurfaceHandleMap::RecreateTexturesForDeviceBitmaps((CLogicalSurfaceHandleMap *)(*(_QWORD *)(a1 + 40) + 96LL));
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xEF8u);
      }
    }
  }
  *(_DWORD *)(a1 + 336) = v2;
  if ( v2 != v3 )
  {
    v7 = *(_QWORD *)(a1 + 344);
    if ( v7 && v2 == 1 )
      *(_BYTE *)(v7 + 28) = 1;
    v15[0] = 5;
    v15[1] = 0;
    v15[2] = v3;
    v16 = v2;
    v17 = 0LL;
    CComposition::NotifyHelper((CComposition *)a1, (struct MIL_MESSAGE *)v15);
  }
  result = *(_QWORD *)(a1 + 344);
  if ( result && v2 == 2 )
  {
    if ( *(_DWORD *)(a1 + 464) )
      *(_BYTE *)(result + 28) = 1;
  }
  return result;
}
