/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18002A440
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800241E0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C580 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180013848 (-Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001CED0 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180023F2C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(struct CCanvas **this, struct MIL_CHANNEL__ *const a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisual **v9; // r15
  int v10; // eax
  struct CVisual **v11; // rbp
  int v12; // eax
  struct CVisual **v13; // r14
  int v14; // eax
  struct CVisual **v15; // r12
  int v16; // eax
  int inserted; // eax
  int v18; // eax
  int v19; // eax
  CVisual *v20; // rcx
  int v21; // eax
  struct _MARGINS v22; // [rsp+30h] [rbp-28h] BYREF

  v6 = CVisual::Initialize((CVisual *)this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xCDu);
  }
  else if ( a3 )
  {
    *((_BYTE *)this + 264) |= 8u;
  }
  else
  {
    v9 = this + 35;
    v10 = CCanvas::Create(a2, this + 35);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xD1u);
    }
    else
    {
      v11 = this + 69;
      v12 = CCanvas::Create(a2, this + 69);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xD2u);
      }
      else
      {
        v13 = this + 70;
        v14 = CCanvas::Create(a2, this + 70);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xD3u);
        }
        else
        {
          v15 = this + 37;
          v16 = CTopLevelAtlasedRectsVisual::Create(a2, this + 37);
          v7 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xD4u);
          }
          else
          {
            inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v9 + 32), *v15, 0LL, 0, 1);
            v7 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xD6u);
            }
            else
            {
              v18 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v9 + 32), *v13, 0LL, 0, 1);
              v7 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xD7u);
              }
              else
              {
                v19 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v13 + 32), *v11, 0LL, 0, 1);
                v7 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xD8u);
                }
                else
                {
                  v20 = *v11;
                  v22 = 0LL;
                  CVisual::SetInsetFromParent(v20, &v22);
                  CVisual::SetInsetFromParent(*v15, &v22);
                  v21 = VisualCollection::InsertRelative((VisualCollection *)(this + 4), *v9, 0LL, 0, 0);
                  v7 = v21;
                  if ( v21 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xE0u);
                  else
                    *((_DWORD *)*v13 + 46) = -1;
                }
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
