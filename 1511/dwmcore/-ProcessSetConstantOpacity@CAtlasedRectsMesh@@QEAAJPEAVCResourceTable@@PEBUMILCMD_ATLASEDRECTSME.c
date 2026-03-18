/*
 * XREFs of ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x18001D3FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessSetConstantOpacity(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        const struct MILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  __int64 v7; // rax
  __int64 v8; // r8

  v4 = 0;
  v5 = *((_DWORD *)this + 36);
  if ( v5 == *((_DWORD *)this + 44) >> 2 )
  {
    if ( v5 )
    {
      v7 = 0LL;
      v8 = v5;
      do
      {
        *(_DWORD *)(v7 + *((_QWORD *)this + 23)) = *((_DWORD *)a3 + 2);
        v7 += 4LL;
        --v8;
      }
      while ( v8 );
    }
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x3Bu);
  }
  return v4;
}
