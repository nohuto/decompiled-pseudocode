/*
 * XREFs of ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800891B8
 * Callers:
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FC5C (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x1800890D8 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x180089600 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
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
 *     ?GenerateMesh@CTextTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800889B8 (-GenerateMesh@CTextTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x18008966C (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::UpdateInstructions(CTextTetherVisual *this)
{
  CBaseObject *v1; // r15
  CBaseObject **v2; // rsi
  CBaseObject *v4; // rcx
  struct CResource **v5; // r14
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  int v9; // ebx
  int updated; // eax
  const struct tagRECT *v11; // rdx
  int Mesh; // eax
  int v13; // eax
  int v14; // eax
  int appended; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  CResource *v20; // rcx
  int v21; // eax
  int v22; // eax
  CResource *v23; // rcx
  int v24; // eax
  struct CResource *v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  CBaseObject *v29; // rcx
  struct CRenderDataInstruction *v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  void *v33[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h]
  void *v35; // [rsp+68h] [rbp-A0h]
  int v36; // [rsp+80h] [rbp-88h]
  void *v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+A0h] [rbp-68h]
  void *v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+C0h] [rbp-48h]
  _DWORD v41[2]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v42; // [rsp+E0h] [rbp-28h]
  unsigned int v43; // [rsp+E4h] [rbp-24h]
  unsigned int v44; // [rsp+E8h] [rbp-20h]
  unsigned int v45; // [rsp+ECh] [rbp-1Ch]
  int v46; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v47; // [rsp+F4h] [rbp-14h]
  int v48; // [rsp+100h] [rbp-8h] BYREF
  __int64 v49; // [rsp+104h] [rbp-4h]

  v1 = 0LL;
  v2 = (CBaseObject **)((char *)this + 416);
  v31 = 0LL;
  v4 = (CBaseObject *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *v2 = 0LL;
  }
  v5 = (struct CResource **)((char *)this + 400);
  v6 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *v5 = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 51) = 0LL;
  }
  v8 = CVisual::ClearInstructions(this);
  v9 = v8;
  if ( v8 >= 0 )
  {
    updated = CTextTetherVisual::_UpdateHandleInstructions(this);
    v9 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x13Au);
      goto LABEL_46;
    }
    if ( !*((_BYTE *)this + 457) && *((_BYTE *)this + 292) )
    {
      Mesh2D::Mesh2D((Mesh2D *)v33, v11);
      Mesh = CTextTetherVisual::GenerateMesh(this, (struct Mesh2D *)v33);
      v9 = Mesh;
      if ( Mesh >= 0 )
      {
        v13 = CResource::Create(2u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), v2);
        v9 = v13;
        if ( v13 >= 0 )
        {
          v41[1] = 0;
          v43 = 16 * v36;
          v44 = 4 * v40;
          v42 = 12 * v34;
          v41[0] = 220;
          v45 = 4 * v38;
          v14 = CResource::BeginCommand(*v2, v41, 0x18u, 12 * (int)v34 + 16 * v36 + 4 * v38 + 4 * v40);
          v9 = v14;
          if ( v14 >= 0 )
          {
            appended = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v33[0], v42);
            v9 = appended;
            if ( appended >= 0 )
            {
              v16 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v35, v43);
              v9 = v16;
              if ( v16 >= 0 )
              {
                v17 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v39, v44);
                v9 = v17;
                if ( v17 >= 0 )
                {
                  v18 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)*v2 + 2), v37, v45);
                  v9 = v18;
                  if ( v18 >= 0 )
                  {
                    v19 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)*v2 + 2));
                    v9 = v19;
                    if ( v19 >= 0 )
                    {
                      v20 = *v2;
                      v46 = 159;
                      v47 = 0xFFFFFFFF00000000uLL;
                      v21 = CResource::Send(v20, &v46, 0xCu);
                      v9 = v21;
                      if ( v21 >= 0 )
                      {
                        v22 = CResource::Create(
                                3u,
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                                (CBaseObject **)this + 50);
                        v9 = v22;
                        if ( v22 >= 0 )
                        {
                          v23 = *v5;
                          v48 = 221;
                          v49 = 0x400000000LL;
                          v24 = CResource::BeginCommand(v23, &v48, 0xCu, 4u);
                          v9 = v24;
                          if ( v24 >= 0 )
                          {
                            v25 = *v5;
                            LODWORD(v32) = *((_DWORD *)*v2 + 6);
                            v26 = MilChannel_AppendCommandData(*((struct MIL_CHANNEL__ **)v25 + 2), &v32, 4u);
                            v9 = v26;
                            if ( v26 >= 0 )
                            {
                              v27 = MilChannel_EndCommand(*((struct MIL_CHANNEL__ **)*v5 + 2));
                              v9 = v27;
                              if ( v27 >= 0 )
                              {
                                v28 = CDrawMesh2DInstruction::Create(
                                        *v5,
                                        *(struct CResource **)(*((_QWORD *)this + 47) + 16LL),
                                        &v31);
                                v9 = v28;
                                if ( v28 < 0 )
                                {
                                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x167u);
                                  Mesh2D::~Mesh2D(v33);
                                  v1 = v31;
                                  goto LABEL_46;
                                }
                                v1 = v31;
                                CVisual::AddInstruction(this, v31);
                                if ( v1 )
                                  CBaseObject::Release(v1);
                              }
                              else
                              {
                                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x165u);
                              }
                            }
                            else
                            {
                              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x164u);
                            }
                          }
                          else
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x162u);
                          }
                        }
                        else
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x15Eu);
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x15Cu);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x157u);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x156u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x155u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x154u);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x153u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x151u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x141u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Mesh, 0x13Fu);
      }
      Mesh2D::~Mesh2D(v33);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x138u);
  }
LABEL_46:
  if ( v9 < 0 )
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
    v29 = (CBaseObject *)*((_QWORD *)this + 51);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *((_QWORD *)this + 51) = 0LL;
    }
    if ( v1 )
      CBaseObject::Release(v1);
  }
  return (unsigned int)v9;
}
