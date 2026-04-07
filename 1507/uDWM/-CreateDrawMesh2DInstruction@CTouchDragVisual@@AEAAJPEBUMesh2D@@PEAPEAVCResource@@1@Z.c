/*
 * XREFs of ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCResource@@1@Z @ 0x1800856F8
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180086164 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?BeginCommand@CResource@@QEAAJPEAXII@Z @ 0x180017A04 (-BeginCommand@CResource@@QEAAJPEAXII@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18006D448 (-Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTouchDragVisual::CreateDrawMesh2DInstruction(
        CTouchDragVisual *this,
        const struct Mesh2D *a2,
        struct CResource **a3,
        struct CResource **a4)
{
  CBaseObject *v4; // rsi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  int appended; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  CResource *v22; // rcx
  int v23; // eax
  int v24; // eax
  CResource *v25; // rcx
  int v26; // eax
  CBaseObject *v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  struct CRenderDataInstruction *v32; // [rsp+30h] [rbp-50h] BYREF
  int v33; // [rsp+38h] [rbp-48h] BYREF
  int v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+44h] [rbp-3Ch]
  __int64 v36; // [rsp+4Ch] [rbp-34h]
  unsigned int v37; // [rsp+54h] [rbp-2Ch]
  int v38; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v39; // [rsp+5Ch] [rbp-24h]
  int v40; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+6Ch] [rbp-14h]

  v4 = 0LL;
  v32 = 0LL;
  v9 = CResource::Create(2u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *((_DWORD *)a2 + 30);
    v12 = *((_DWORD *)a2 + 14);
    v36 = 0LL;
    v35 = 0LL;
    v13 = *((_DWORD *)a2 + 6);
    LODWORD(v36) = 16 * v12;
    v14 = 3 * v13;
    HIDWORD(v36) = 4 * v11;
    v15 = 4 * *((_DWORD *)a2 + 22);
    HIDWORD(v35) = 4 * v14;
    v34 = 213;
    v37 = v15;
    v16 = CResource::BeginCommand(*a4, &v34, 0x18u, 4 * v14 + 16 * v12 + v15 + 4 * v11);
    v10 = v16;
    if ( v16 >= 0 )
    {
      appended = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*a4 + 2), *(void **)a2, HIDWORD(v35));
      v10 = appended;
      if ( appended >= 0 )
      {
        v18 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*a4 + 2), *((void **)a2 + 4), v36);
        v10 = v18;
        if ( v18 >= 0 )
        {
          v19 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*a4 + 2), *((void **)a2 + 12), HIDWORD(v36));
          v10 = v19;
          if ( v19 >= 0 )
          {
            v20 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*a4 + 2), *((void **)a2 + 8), v37);
            v10 = v20;
            if ( v20 >= 0 )
            {
              v21 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)*a4 + 2));
              v10 = v21;
              if ( v21 >= 0 )
              {
                v22 = *a4;
                v38 = 149;
                v39 = 0xFFFFFFFF00000000uLL;
                v23 = CResource::Send(v22, &v38, 0xCu);
                v10 = v23;
                if ( v23 >= 0 )
                {
                  v24 = CResource::Create(3u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), a3);
                  v10 = v24;
                  if ( v24 >= 0 )
                  {
                    v25 = *a3;
                    v40 = 214;
                    v41 = 0x400000000LL;
                    v26 = CResource::BeginCommand(v25, &v40, 0xCu, 4u);
                    v10 = v26;
                    if ( v26 >= 0 )
                    {
                      v27 = *a3;
                      v33 = *((_DWORD *)*a4 + 6);
                      v28 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)v27 + 2), &v33, 4u);
                      v10 = v28;
                      if ( v28 >= 0 )
                      {
                        v29 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)*a3 + 2));
                        v10 = v29;
                        if ( v29 >= 0 )
                        {
                          v30 = CDrawMesh2DInstruction::Create(
                                  *a3,
                                  *(struct CResource **)(*((_QWORD *)this + 46) + 16LL),
                                  &v32);
                          v10 = v30;
                          if ( v30 >= 0 )
                          {
                            v4 = v32;
                            CVisual::AddInstruction(this, v32);
                            if ( v4 )
                              CBaseObject::Release(v4);
                          }
                          else
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x13Eu);
                            v4 = v32;
                          }
                        }
                        else
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x13Cu);
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x13Bu);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x139u);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x135u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x133u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x12Eu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x12Du);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x12Cu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x12Bu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x12Au);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x128u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x119u);
  }
  if ( v10 < 0 )
  {
    if ( *a4 )
    {
      CBaseObject::Release(*a4);
      *a4 = 0LL;
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  return (unsigned int)v10;
}
