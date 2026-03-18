/*
 * XREFs of ?ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS@@@Z @ 0x1800F698C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18012F398 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012F468 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18012F594 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18012F8B8 (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012F948 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012FA78 (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x18012FBA8 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetComponents(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  _OWORD v17[4]; // [rsp+30h] [rbp-58h] BYREF

  v5 = CComponentTransform3D::SetAnchor(this, *((float *)a3 + 2), *((float *)a3 + 3));
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = CComponentTransform3D::SetCenter(this, *((float *)a3 + 4), *((float *)a3 + 5), *((float *)a3 + 6));
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = CComponentTransform3D::SetOrientation(
             this,
             *((float *)a3 + 7),
             *((float *)a3 + 8),
             *((float *)a3 + 9),
             *((float *)a3 + 10));
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = CComponentTransform3D::SetRotationAxis(this, *((float *)a3 + 12), *((float *)a3 + 13), *((float *)a3 + 14));
        v6 = v9;
        if ( v9 >= 0 )
        {
          v10 = CComponentTransform3D::SetRotationAngle(this, *((float *)a3 + 11));
          v6 = v10;
          if ( v10 >= 0 )
          {
            v11 = CComponentTransform3D::SetScale(this, *((float *)a3 + 15), *((float *)a3 + 16), *((float *)a3 + 17));
            v6 = v11;
            if ( v11 >= 0 )
            {
              v12 = *(_OWORD *)((char *)a3 + 88);
              v17[0] = *(_OWORD *)((char *)a3 + 72);
              v13 = *(_OWORD *)((char *)a3 + 104);
              v17[1] = v12;
              v14 = *(_OWORD *)((char *)a3 + 120);
              v17[2] = v13;
              v17[3] = v14;
              v15 = CComponentTransform3D::SetTransformMatrix(this, (const struct D2DMatrix *)v17);
              v6 = v15;
              if ( v15 >= 0 )
                v6 = 0;
              else
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x23u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x22u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x21u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x20u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1Eu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1Du);
  }
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v6;
}
