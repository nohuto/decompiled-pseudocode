/*
 * XREFs of ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x18010B900
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x18010B790 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessSetConstantOpacity(
        CMeshGeometry2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8

  v5 = 0;
  LODWORD(v6) = CMeshGeometry2D::GetVertexCount(this);
  if ( (_DWORD)v6 == *((_DWORD *)this + 32) >> 2 )
  {
    if ( (_DWORD)v6 )
    {
      v7 = 0LL;
      v6 = (unsigned int)v6;
      do
      {
        *(_DWORD *)(v7 + *((_QWORD *)this + 17)) = *((_DWORD *)a3 + 2);
        v7 += 4LL;
        --v6;
      }
      while ( v6 );
    }
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x3Bu);
  }
  return v5;
}
