/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x180024960
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001EC40 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039EC8 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800081E8 (-Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180015C90 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18001C9C0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(CBaseObject **this, struct MIL_CHANNEL__ *const a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisual **v8; // r15
  int v9; // eax
  struct CVisual **v10; // rbp
  int v11; // eax
  struct CVisual **v12; // r14
  int v13; // eax
  struct CVisual **v14; // r12
  int v15; // eax
  int inserted; // eax
  int v17; // eax
  int v18; // eax
  CVisual *v19; // rcx
  int v20; // eax
  struct _MARGINS v22; // [rsp+30h] [rbp-28h] BYREF

  v6 = CVisual::Initialize(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xB3u);
  }
  else if ( a3 )
  {
    *((_BYTE *)this + 264) |= 8u;
  }
  else
  {
    v8 = this + 35;
    v9 = CCanvas::Create(a2, this + 35);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xB7u);
    }
    else
    {
      v10 = this + 69;
      v11 = CCanvas::Create(a2, this + 69);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xB8u);
      }
      else
      {
        v12 = this + 70;
        v13 = CCanvas::Create(a2, this + 70);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xB9u);
        }
        else
        {
          v14 = this + 37;
          v15 = CTopLevelAtlasedRectsVisual::Create(a2, this + 37);
          v7 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xBAu);
          }
          else
          {
            inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v8 + 32), *v14, 0LL, 0, 1);
            v7 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xBCu);
            }
            else
            {
              v17 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v8 + 32), *v12, 0LL, 0, 1);
              v7 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xBDu);
              }
              else
              {
                v18 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v12 + 32), *v10, 0LL, 0, 1);
                v7 = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xBEu);
                }
                else
                {
                  v19 = *v10;
                  v22 = 0LL;
                  CVisual::SetInsetFromParent(v19, &v22);
                  CVisual::SetInsetFromParent(*v14, &v22);
                  v20 = VisualCollection::InsertRelative((VisualCollection *)(this + 4), *v8, 0LL, 0, 0);
                  v7 = v20;
                  if ( v20 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xC6u);
                  else
                    *((_DWORD *)*v12 + 46) = -1;
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
