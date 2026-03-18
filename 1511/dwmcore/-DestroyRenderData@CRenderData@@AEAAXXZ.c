/*
 * XREFs of ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18009EC3C
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009E610 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x18009ECA8 (--1CRenderData@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CRenderData::DestroyRenderData(CRenderData *this)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx

  if ( *((_DWORD *)this + 28) )
  {
    v2 = *((unsigned int *)this + 28);
    v3 = 0LL;
    do
    {
      v4 = *((_QWORD *)this + 11);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v3 + v4));
      *(_QWORD *)(v3 + v4) = 0LL;
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 28) = 0;
  CDataStreamWriter::Reset((CRenderData *)((char *)this + 40));
}
