/*
 * XREFs of ?Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001A980
 * Callers:
 *     ?Create@CButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180007B18 (-Create@CButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAtlasButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800078A0 (-Create@CAtlasButton@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x18001B704 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001B790 (-Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180028DC8 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CButton::Initialize(CButton *this, struct MIL_CHANNEL__ *const a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CAtlasedImage **v7; // r14
  int v8; // eax
  int inserted; // eax
  int v10; // eax
  CAtlasedImage *v11; // rcx
  struct _MARGINS v13; // [rsp+30h] [rbp-18h] BYREF

  v4 = CAtlasedRectsVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x3Eu);
  }
  else
  {
    v6 = CAtlasButton::Create(a2, (struct CAtlasButton **)this + 39);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x40u);
    }
    else
    {
      v7 = (struct CAtlasedImage **)((char *)this + 320);
      v8 = CAtlasButton::Create(a2, (struct CAtlasButton **)this + 40);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x41u);
      }
      else
      {
        inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v7, *((_DWORD *)this + 72));
        v5 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x47u);
        }
        else
        {
          v10 = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                  this,
                  *((struct CAtlasedImage **)this + 39),
                  *((_DWORD *)this + 72));
          v5 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x48u);
          }
          else
          {
            v11 = *v7;
            v13 = 0LL;
            CAtlasedImage::SetInsetFromParent(v11, &v13);
          }
        }
      }
    }
  }
  return v5;
}
