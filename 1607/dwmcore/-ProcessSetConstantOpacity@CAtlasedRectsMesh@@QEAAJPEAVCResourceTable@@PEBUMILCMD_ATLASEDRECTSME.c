/*
 * XREFs of ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x1800212E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
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
  v5 = *((_DWORD *)this + 54);
  if ( v5 == *((_DWORD *)this + 62) >> 2 )
  {
    if ( v5 )
    {
      v7 = 0LL;
      v8 = v5;
      do
      {
        *(_DWORD *)(v7 + *((_QWORD *)this + 32)) = *((_DWORD *)a3 + 2);
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
