/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180065100
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065570 (-SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800655B8 (-SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065600 (-SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180065648 (-SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065690 (-SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800656D8 (-SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065720 (-SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180065764 (-SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottom@CRectangleGeometry@@AEAAJM@Z @ 0x1800657A8 (-SetBottom@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetRight@CRectangleGeometry@@AEAAJM@Z @ 0x18006580C (-SetRight@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTop@CRectangleGeometry@@AEAAJM@Z @ 0x180065870 (-SetTop@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetLeft@CRectangleGeometry@@AEAAJM@Z @ 0x1800658D8 (-SetLeft@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v5 = CRectangleGeometry::SetLeft(this, *((float *)a3 + 2));
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE8u);
  }
  else
  {
    v7 = CRectangleGeometry::SetTop(this, *((float *)a3 + 3));
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xE9u);
    }
    else
    {
      v8 = CRectangleGeometry::SetRight(this, *((float *)a3 + 4));
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEAu);
      }
      else
      {
        v9 = CRectangleGeometry::SetBottom(this, *((float *)a3 + 5));
        v6 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xEBu);
        }
        else
        {
          v10 = CRectangleGeometry::SetTopLeftRadiusX(this, *((float *)a3 + 6));
          v6 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xECu);
          }
          else
          {
            v11 = CRectangleGeometry::SetTopLeftRadiusY(this, *((float *)a3 + 7));
            v6 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xEDu);
            }
            else
            {
              v12 = CRectangleGeometry::SetTopRightRadiusX(this, *((float *)a3 + 8));
              v6 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xEEu);
              }
              else
              {
                v13 = CRectangleGeometry::SetTopRightRadiusY(this, *((float *)a3 + 9));
                v6 = v13;
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xEFu);
                }
                else
                {
                  v14 = CRectangleGeometry::SetBottomLeftRadiusX(this, *((float *)a3 + 10));
                  v6 = v14;
                  if ( v14 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF0u);
                  }
                  else
                  {
                    v15 = CRectangleGeometry::SetBottomLeftRadiusY(this, *((float *)a3 + 11));
                    v6 = v15;
                    if ( v15 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF1u);
                    }
                    else
                    {
                      v16 = CRectangleGeometry::SetBottomRightRadiusX(this, *((float *)a3 + 12));
                      v6 = v16;
                      if ( v16 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xF2u);
                      }
                      else
                      {
                        v17 = CRectangleGeometry::SetBottomRightRadiusY(this, *((float *)a3 + 13));
                        v6 = v17;
                        if ( v17 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF3u);
                        }
                        else
                        {
                          *((_BYTE *)this + 88) = *((_DWORD *)a3 + 14) != 0;
                          CResource::NotifyOnChanged(this, 0LL, 0LL);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
