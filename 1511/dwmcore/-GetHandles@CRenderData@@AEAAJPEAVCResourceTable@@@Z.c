/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009E728
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009E610 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x180085B7C (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18009F904 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A16CC (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A1740 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  __int64 v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // r13d
  int FirstItemSafe; // eax
  unsigned int v9; // ebx
  bool v10; // zf
  _DWORD *v12; // rsi
  _DWORD *v13; // rsi
  int v14; // eax
  int v15; // esi
  int v16; // r9d
  _DWORD *v17; // rsi
  _DWORD *v18; // rsi
  unsigned int v19; // [rsp+20h] [rbp-40h]
  _QWORD v20[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+50h] BYREF
  void *v23; // [rsp+B8h] [rbp+58h] BYREF

  v20[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 40));
  v20[1] = 0LL;
  v5 = *((_DWORD *)this + 28);
  v21 = 0LL;
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v9 = -2147024362;
    goto LABEL_61;
  }
  if ( v6 <= *((_DWORD *)this + 27) )
  {
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v5) = v21;
    *((_DWORD *)this + 28) = v6;
    goto LABEL_4;
  }
  v14 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 88, 8LL, v4, &v21);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
  v9 = v15;
  if ( v15 < 0 )
  {
LABEL_61:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x19u);
    return v9;
  }
LABEL_4:
  v7 = 0;
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v20, &v22, &v23, (unsigned int *)&v21);
  v9 = FirstItemSafe;
  v10 = FirstItemSafe == 0;
  if ( FirstItemSafe < 0 )
  {
    v19 = 33;
LABEL_64:
    v16 = FirstItemSafe;
LABEL_101:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v19);
    return v9;
  }
  while ( v10 )
  {
    if ( v22 <= 0xD5 )
    {
      switch ( v22 )
      {
        case 0xD5u:
          if ( (unsigned int)v21 < 0x24 )
          {
            v19 = 152;
            goto LABEL_100;
          }
          goto LABEL_57;
        case 0xCFu:
          if ( (unsigned int)v21 < 0xC )
          {
            v19 = 115;
            goto LABEL_100;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            55LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 118;
            goto LABEL_64;
          }
          break;
        case 0xD0u:
          if ( (unsigned int)v21 < 0x1C )
          {
            v19 = 126;
            goto LABEL_100;
          }
          v18 = v23;
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            65LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 130;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v18 + 2,
                            46LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 131;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v18 + 3,
                            46LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 132;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v18 + 4,
                            45LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 133;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v18 + 5,
                            45LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 134;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v18 + 6,
                            45LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 135;
            goto LABEL_64;
          }
          break;
        case 0xD1u:
          if ( (unsigned int)v21 < 0xC )
          {
            v19 = 183;
            goto LABEL_100;
          }
          v17 = v23;
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            1LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 187;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v17 + 2,
                            55LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 188;
            goto LABEL_64;
          }
          break;
        case 0xD2u:
          if ( (unsigned int)v21 < 0xC )
          {
            v19 = 196;
            goto LABEL_100;
          }
          v12 = v23;
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            4LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 200;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v12 + 2,
                            55LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 201;
            goto LABEL_64;
          }
          break;
        case 0xD3u:
          if ( (unsigned int)v21 < 0x14 )
          {
            v19 = 143;
LABEL_100:
            v9 = -2003303421;
            v16 = -2003303421;
            goto LABEL_101;
          }
          break;
        case 0xD4u:
          if ( (unsigned int)v21 < 8 )
          {
            v19 = 209;
            goto LABEL_100;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            31LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 213;
            goto LABEL_64;
          }
          break;
        default:
LABEL_77:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2Fu);
          break;
      }
    }
    else
    {
      switch ( v22 )
      {
        case 0xD6u:
          if ( (unsigned int)v21 < 0x24 )
          {
            v19 = 166;
            goto LABEL_100;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            55LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 170;
            goto LABEL_64;
          }
LABEL_57:
          *((_BYTE *)this + 120) = 1;
          break;
        case 0xD7u:
          if ( (unsigned int)v21 < 0x1C )
          {
            v19 = 54;
            goto LABEL_100;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 5,
                            70LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 58;
            goto LABEL_64;
          }
          break;
        case 0xD8u:
          if ( (unsigned int)v21 < 0xC )
          {
            v19 = 68;
            goto LABEL_100;
          }
          v13 = v23;
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            70LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 72;
            goto LABEL_64;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            v13 + 2,
                            65LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 73;
            goto LABEL_64;
          }
          break;
        case 0xD9u:
          if ( (unsigned int)v21 < 0x1C )
          {
            v19 = 83;
            goto LABEL_100;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 5,
                            55LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 87;
            goto LABEL_64;
          }
          break;
        case 0xDAu:
          if ( (unsigned int)v21 < 0xC )
          {
            v19 = 97;
            goto LABEL_100;
          }
          FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                            this,
                            (_DWORD *)v23 + 1,
                            57LL,
                            (__int64)this + 88,
                            (__int64)a2);
          v9 = FirstItemSafe;
          if ( FirstItemSafe < 0 )
          {
            v19 = 101;
            goto LABEL_64;
          }
          ++v7;
          break;
        case 0xDBu:
          --v7;
          break;
        default:
          goto LABEL_77;
      }
    }
    FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v20, &v22, &v23, (unsigned int *)&v21);
    v9 = FirstItemSafe;
    v10 = FirstItemSafe == 0;
    if ( FirstItemSafe < 0 )
    {
      v19 = 223;
      goto LABEL_64;
    }
  }
  if ( v9 == 1 )
    v9 = 0;
  if ( v7 )
  {
    v19 = 242;
    goto LABEL_100;
  }
  return v9;
}
