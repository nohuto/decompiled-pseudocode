/*
 * XREFs of ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x180089EF4
 * Callers:
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18006FBD4 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x18008A1C0 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180077404 (-Create@CDrawMesh2DInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180088FE4 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x180089144 (--1Mesh2D@@QEAA@XZ.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x180089944 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 */

__int64 __fastcall CTetherVisual::UpdateInstructions(CTetherVisual *this)
{
  CBaseObject *v1; // rsi
  _QWORD *v2; // r15
  CBaseObject *v4; // rcx
  struct CResource **v5; // r14
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  const struct tagRECT *v9; // rdx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct CResource *v15; // rax
  int v16; // eax
  int v17; // eax
  CBaseObject *v18; // rcx
  _QWORD v20[3]; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+78h] [rbp-41h]
  __int64 v22; // [rsp+80h] [rbp-39h]
  int v23; // [rsp+98h] [rbp-21h]
  __int64 v24; // [rsp+A0h] [rbp-19h]
  int v25; // [rsp+B8h] [rbp-1h]
  __int64 v26; // [rsp+C0h] [rbp+7h]
  int v27; // [rsp+D8h] [rbp+1Fh]
  int v28; // [rsp+120h] [rbp+67h] BYREF
  struct CRenderDataInstruction *v29; // [rsp+128h] [rbp+6Fh] BYREF

  v1 = 0LL;
  v2 = (_QWORD *)((char *)this + 368);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xD9u);
    goto LABEL_26;
  }
  if ( !*((_QWORD *)this + 48) )
  {
    Mesh2D::Mesh2D((Mesh2D *)v20, v9);
    CTetherVisual::GenerateMesh(this, (struct Mesh2D *)v20);
    v11 = CResource::Create(0x16u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), v2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int, __int64, int, __int64, int))(**(_QWORD **)(*v2 + 16LL) + 1024LL))(
              *(_QWORD *)(*v2 + 16LL),
              *(unsigned int *)(*v2 + 24LL),
              v20[0],
              v21,
              v22,
              v23,
              v26,
              v27,
              v24,
              v25);
      v10 = v12;
      if ( v12 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*v2 + 16LL) + 928LL))(
                *(_QWORD *)(*v2 + 16LL),
                *(unsigned int *)(*v2 + 24LL),
                0xFFFFFFFFLL);
        v10 = v13;
        if ( v13 >= 0 )
        {
          v14 = CResource::Create(
                  0xEu,
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                  (_QWORD *)this + 44);
          v10 = v14;
          if ( v14 >= 0 )
          {
            v15 = *v5;
            v28 = *(_DWORD *)(*v2 + 24LL);
            v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)v15 + 2) + 1032LL))(
                    *((_QWORD *)v15 + 2),
                    *((unsigned int *)v15 + 6),
                    &v28,
                    1LL);
            v10 = v16;
            if ( v16 >= 0 )
            {
              v17 = CDrawMesh2DInstruction::Create(*v5, *(struct CResource **)(*((_QWORD *)this + 41) + 16LL), &v29);
              v10 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xF3u);
                Mesh2D::~Mesh2D((Mesh2D *)v20);
                v1 = v29;
                goto LABEL_26;
              }
              v1 = v29;
              CVisual::AddInstruction(this, v29);
              if ( v1 )
                CBaseObject::Release(v1);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xF2u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xF0u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xEEu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xEAu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xE0u);
    }
    Mesh2D::~Mesh2D((Mesh2D *)v20);
  }
LABEL_26:
  if ( v10 < 0 )
  {
    if ( *v2 )
    {
      CBaseObject::Release((CBaseObject *)*v2);
      *v2 = 0LL;
    }
    if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
    v18 = (CBaseObject *)*((_QWORD *)this + 45);
    if ( v18 )
    {
      CBaseObject::Release(v18);
      *((_QWORD *)this + 45) = 0LL;
    }
    if ( v1 )
      CBaseObject::Release(v1);
  }
  return (unsigned int)v10;
}
