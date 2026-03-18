/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18004E468
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18004E39C (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18004BC54 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x18008E2B8 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800AE724 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800AE798 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  __int64 v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // r12d
  int FirstItemSafe; // eax
  int v9; // ebx
  bool v10; // zf
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-40h]
  _QWORD v15[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+B0h] [rbp+50h] BYREF
  void *v18; // [rsp+B8h] [rbp+58h] BYREF

  v15[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 112));
  v15[1] = 0LL;
  v5 = *((_DWORD *)this + 46);
  v16 = 0LL;
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_39;
  }
  if ( v6 > *((_DWORD *)this + 45) )
  {
    v12 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 160, 8LL, v4, &v16);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
LABEL_39:
    if ( v9 < 0 )
    {
      v14 = 25;
      v13 = v9;
      goto LABEL_101;
    }
    goto LABEL_4;
  }
  *(_QWORD *)(*((_QWORD *)this + 20) + 8LL * v5) = v16;
  *((_DWORD *)this + 46) = v6;
LABEL_4:
  v7 = 0;
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v15, &v17, &v18, (unsigned int *)&v16);
  v9 = FirstItemSafe;
  v10 = FirstItemSafe == 0;
  if ( FirstItemSafe < 0 )
  {
    v14 = 33;
    goto LABEL_76;
  }
  while ( 1 )
  {
    if ( !v10 )
    {
      if ( v9 == 1 )
        v9 = 0;
      if ( !v7 )
        return (unsigned int)v9;
      v14 = 242;
LABEL_79:
      v9 = -2003303421;
      v13 = -2003303421;
      goto LABEL_101;
    }
    if ( v17 > 0x133 )
      break;
    switch ( v17 )
    {
      case 0x133u:
        if ( (unsigned int)v16 < 0x24 )
        {
          v14 = 152;
          goto LABEL_79;
        }
LABEL_56:
        *((_BYTE *)this + 192) = 1;
        break;
      case 0x12Du:
        if ( (unsigned int)v16 < 0xC )
        {
          v14 = 115;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 118;
          goto LABEL_76;
        }
        break;
      case 0x12Eu:
        if ( (unsigned int)v16 < 0x1C )
        {
          v14 = 126;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 130;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 131;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 132;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 133;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 134;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 135;
          goto LABEL_76;
        }
        break;
      case 0x12Fu:
        if ( (unsigned int)v16 < 0xC )
        {
          v14 = 183;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 187;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 188;
          goto LABEL_76;
        }
        break;
      case 0x130u:
        if ( (unsigned int)v16 < 0xC )
        {
          v14 = 196;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 200;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 201;
          goto LABEL_76;
        }
        break;
      case 0x131u:
        if ( (unsigned int)v16 < 0x14 )
        {
          v14 = 143;
          goto LABEL_79;
        }
        break;
      case 0x132u:
        if ( (unsigned int)v16 < 8 )
        {
          v14 = 209;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 213;
          goto LABEL_76;
        }
        break;
      default:
LABEL_74:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2Fu);
        break;
    }
LABEL_31:
    FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v15, &v17, &v18, (unsigned int *)&v16);
    v9 = FirstItemSafe;
    v10 = FirstItemSafe == 0;
    if ( FirstItemSafe < 0 )
    {
      v14 = 223;
      goto LABEL_76;
    }
  }
  if ( v17 != 308 )
  {
    switch ( v17 )
    {
      case 0x135u:
        if ( (unsigned int)v16 < 0x18 )
        {
          v14 = 54;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 58;
          goto LABEL_76;
        }
        break;
      case 0x136u:
        if ( (unsigned int)v16 < 0xC )
        {
          v14 = 68;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 72;
          goto LABEL_76;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 73;
          goto LABEL_76;
        }
        break;
      case 0x137u:
        if ( (unsigned int)v16 < 0x18 )
        {
          v14 = 83;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 87;
          goto LABEL_76;
        }
        break;
      case 0x138u:
        if ( (unsigned int)v16 < 8 )
        {
          v14 = 97;
          goto LABEL_79;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
        v9 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v14 = 101;
          goto LABEL_76;
        }
        ++v7;
        break;
      case 0x139u:
        --v7;
        break;
      default:
        goto LABEL_74;
    }
    goto LABEL_31;
  }
  if ( (unsigned int)v16 < 0x24 )
  {
    v14 = 166;
    goto LABEL_79;
  }
  FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
  v9 = FirstItemSafe;
  if ( FirstItemSafe >= 0 )
    goto LABEL_56;
  v14 = 170;
LABEL_76:
  v13 = FirstItemSafe;
LABEL_101:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
  return (unsigned int)v9;
}
