/*
 * XREFs of ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18008AADC
 * Callers:
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18006FD80 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x18008AEF0 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?BeginCommand@CResource@@QEAAJPEAXII@Z @ 0x18001D2AC (-BeginCommand@CResource@@QEAAJPEAXII@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x1800754F8 (-Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180088730 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x180088928 (--1Mesh2D@@QEAA@XZ.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x18008A398 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 */

__int64 __fastcall CTetherVisual::UpdateInstructions(CTetherVisual *this)
{
  CBaseObject *v1; // r15
  CBaseObject **v2; // rsi
  CBaseObject *v4; // rcx
  struct CResource **v5; // r14
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  const struct tagRECT *v9; // rdx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int appended; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  CResource *v18; // rcx
  int v19; // eax
  int v20; // eax
  CResource *v21; // rcx
  int v22; // eax
  struct CResource *v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  CBaseObject *v27; // rcx
  struct CRenderDataInstruction *v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  void *v31[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h]
  void *v33; // [rsp+68h] [rbp-A0h]
  int v34; // [rsp+80h] [rbp-88h]
  void *v35; // [rsp+88h] [rbp-80h]
  int v36; // [rsp+A0h] [rbp-68h]
  void *v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+C0h] [rbp-48h]
  _DWORD v39[2]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v40; // [rsp+E0h] [rbp-28h]
  unsigned int v41; // [rsp+E4h] [rbp-24h]
  unsigned int v42; // [rsp+E8h] [rbp-20h]
  unsigned int v43; // [rsp+ECh] [rbp-1Ch]
  int v44; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v45; // [rsp+F4h] [rbp-14h]
  int v46; // [rsp+100h] [rbp-8h] BYREF
  __int64 v47; // [rsp+104h] [rbp-4h]

  v1 = 0LL;
  v2 = (CBaseObject **)((char *)this + 368);
  v29 = 0LL;
  v4 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *v2 = 0LL;
  }
  v5 = (struct CResource **)((char *)this + 352);
  v6 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *v5 = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 45) = 0LL;
  }
  v8 = CVisual::ClearInstructions(this);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xF0u);
    goto LABEL_40;
  }
  if ( !*((_QWORD *)this + 48) )
  {
    Mesh2D::Mesh2D((Mesh2D *)v31, v9);
    CTetherVisual::GenerateMesh(this, (struct Mesh2D *)v31);
    v11 = CResource::Create(2u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), v2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v39[1] = 0;
      v41 = 16 * v34;
      v42 = 4 * v38;
      v40 = 12 * v32;
      v39[0] = 220;
      v43 = 4 * v36;
      v12 = CResource::BeginCommand(*v2, v39, 0x18u, 12 * (int)v32 + 16 * v34 + 4 * v36 + 4 * v38);
      v10 = v12;
      if ( v12 >= 0 )
      {
        appended = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v31[0], v40);
        v10 = appended;
        if ( appended >= 0 )
        {
          v14 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v33, v41);
          v10 = v14;
          if ( v14 >= 0 )
          {
            v15 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v37, v42);
            v10 = v15;
            if ( v15 >= 0 )
            {
              v16 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v35, v43);
              v10 = v16;
              if ( v16 >= 0 )
              {
                v17 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)*v2 + 2));
                v10 = v17;
                if ( v17 >= 0 )
                {
                  v18 = *v2;
                  v44 = 159;
                  v45 = 0xFFFFFFFF00000000uLL;
                  v19 = CResource::Send(v18, &v44, 0xCu);
                  v10 = v19;
                  if ( v19 >= 0 )
                  {
                    v20 = CResource::Create(
                            3u,
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                            (CBaseObject **)this + 44);
                    v10 = v20;
                    if ( v20 >= 0 )
                    {
                      v21 = *v5;
                      v46 = 221;
                      v47 = 0x400000000LL;
                      v22 = CResource::BeginCommand(v21, &v46, 0xCu, 4u);
                      v10 = v22;
                      if ( v22 >= 0 )
                      {
                        v23 = *v5;
                        LODWORD(v30) = *((_DWORD *)*v2 + 6);
                        v24 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)v23 + 2), &v30, 4u);
                        v10 = v24;
                        if ( v24 >= 0 )
                        {
                          v25 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)*v5 + 2));
                          v10 = v25;
                          if ( v25 >= 0 )
                          {
                            v26 = CDrawMesh2DInstruction::Create(
                                    *v5,
                                    *(struct CResource **)(*((_QWORD *)this + 41) + 16LL),
                                    &v29);
                            v10 = v26;
                            if ( v26 < 0 )
                            {
                              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x11Du);
                              Mesh2D::~Mesh2D(v31);
                              v1 = v29;
                              goto LABEL_40;
                            }
                            v1 = v29;
                            CVisual::AddInstruction(this, v29);
                            if ( v1 )
                              CBaseObject::Release(v1);
                          }
                          else
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x11Bu);
                          }
                        }
                        else
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x11Au);
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x118u);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x114u);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x112u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x10Du);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x10Cu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x10Bu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x10Au);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x109u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x107u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xF7u);
    }
    Mesh2D::~Mesh2D(v31);
  }
LABEL_40:
  if ( v10 < 0 )
  {
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
    if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
    v27 = (CBaseObject *)*((_QWORD *)this + 45);
    if ( v27 )
    {
      CBaseObject::Release(v27);
      *((_QWORD *)this + 45) = 0LL;
    }
    if ( v1 )
      CBaseObject::Release(v1);
  }
  return (unsigned int)v10;
}
