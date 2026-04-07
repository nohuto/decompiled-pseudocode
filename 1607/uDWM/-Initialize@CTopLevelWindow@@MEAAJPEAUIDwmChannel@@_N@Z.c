/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x1800273B0
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x180021210 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800397DC (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038330 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(CTopLevelWindow *this, struct IDwmChannel *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisual **v9; // r15
  int inserted; // eax
  struct CVisual **v11; // rbp
  struct CVisual **v12; // r14
  struct CVisual **v13; // r12
  CVisual *v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-48h]
  struct _MARGINS v16; // [rsp+30h] [rbp-38h] BYREF

  v6 = CResource::Create(0x23u, (__int64)a2, (_QWORD *)this + 2);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x69u);
  if ( (v7 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xACu);
    return v7;
  }
  if ( !a3 )
  {
    v9 = (struct CVisual **)((char *)this + 280);
    inserted = CCanvas::Create(a2, (struct CCanvas **)this + 35);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v15 = 176;
    }
    else
    {
      v11 = (struct CVisual **)((char *)this + 552);
      inserted = CCanvas::Create(a2, (struct CCanvas **)this + 69);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v15 = 177;
      }
      else
      {
        v12 = (struct CVisual **)((char *)this + 560);
        inserted = CCanvas::Create(a2, (struct CCanvas **)this + 70);
        v7 = inserted;
        if ( inserted < 0 )
        {
          v15 = 178;
        }
        else
        {
          v13 = (struct CVisual **)((char *)this + 296);
          inserted = CTopLevelAtlasedRectsVisual::Create(a2, (struct CTopLevelAtlasedRectsVisual **)this + 37);
          v7 = inserted;
          if ( inserted < 0 )
          {
            v15 = 179;
          }
          else
          {
            inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v9 + 32), *v13, 0LL, 0, 1);
            v7 = inserted;
            if ( inserted < 0 )
            {
              v15 = 181;
            }
            else
            {
              inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v9 + 32), *v12, 0LL, 0, 1);
              v7 = inserted;
              if ( inserted < 0 )
              {
                v15 = 182;
              }
              else
              {
                inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v12 + 32), *v11, 0LL, 0, 1);
                v7 = inserted;
                if ( inserted < 0 )
                {
                  v15 = 183;
                }
                else
                {
                  v14 = *v11;
                  v16 = 0LL;
                  CVisual::SetInsetFromParent(v14, &v16);
                  CVisual::SetInsetFromParent(*v13, &v16);
                  inserted = VisualCollection::InsertRelative((CTopLevelWindow *)((char *)this + 32), *v9, 0LL, 0, 0);
                  v7 = inserted;
                  if ( inserted >= 0 )
                  {
                    *((_DWORD *)*v12 + 46) = -1;
                    return v7;
                  }
                  v15 = 191;
                }
              }
            }
          }
        }
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v15);
    return v7;
  }
  *((_BYTE *)this + 264) |= 8u;
  return v7;
}
