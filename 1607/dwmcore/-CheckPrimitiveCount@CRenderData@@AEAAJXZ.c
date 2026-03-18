/*
 * XREFs of ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18004E838
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18004E39C (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18004BC54 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800AE724 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800AE798 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CRenderData::CheckPrimitiveCount(CRenderData *this)
{
  unsigned int v2; // esi
  int FirstItemSafe; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-58h]
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+88h] [rbp+10h] BYREF
  void *v10; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v7[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 112));
  v7[1] = 0LL;
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v7, &v8, &v10, &v9);
  v4 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v6 = 741;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstItemSafe, v6);
  }
  else
  {
    if ( !FirstItemSafe )
    {
      while ( 1 )
      {
        if ( v2 > 1 )
          goto LABEL_12;
        if ( v8 == 301 )
          break;
        if ( v8 <= 0x12E )
          goto LABEL_17;
        if ( v8 <= 0x131 )
          break;
        if ( v8 == 306 )
        {
          v2 = 2;
        }
        else
        {
          if ( v8 <= 0x137 )
            break;
          if ( v8 > 0x139 )
          {
LABEL_17:
            v4 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2ECu);
            return v4;
          }
        }
LABEL_10:
        FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v7, &v8, &v10, &v9);
        v4 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v6 = 776;
          goto LABEL_20;
        }
        if ( FirstItemSafe )
          goto LABEL_12;
      }
      ++v2;
      goto LABEL_10;
    }
LABEL_12:
    v4 = 0;
    *((_BYTE *)this + 193) = v2 <= 1;
  }
  return v4;
}
