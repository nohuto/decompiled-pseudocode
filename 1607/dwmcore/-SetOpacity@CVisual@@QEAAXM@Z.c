/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180051FB0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C310 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180050D9C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800AC9C8 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     ??1CAnimationSourceMapEntry@@QEAA@XZ @ 0x18011E2B0 (--1CAnimationSourceMapEntry@@QEAA@XZ.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  __int64 v2; // r8
  float v4; // xmm4_4
  float v5; // edx
  float *v6; // rcx
  float v8; // xmm1_4
  bool v9; // r15
  struct CSparseStorage::DataInfo *SlotForData; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 i; // rbx
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // al
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rdi
  _QWORD *j; // rcx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]

  v2 = *((_QWORD *)this + 34);
  if ( (*(_DWORD *)(v2 + 4) & 0x100000) != 0 )
  {
    v5 = *(float *)(v2 + 12);
    v6 = (float *)(v2 + 12);
    if ( (LODWORD(v5) & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v6 = (float *)((char *)v6 + (LODWORD(v5) & 0xFFFFFF) + 4);
        v5 = *v6;
      }
      while ( (*(_DWORD *)v6 & 0x7F000000) != 0xC000000 );
    }
    v4 = v6[1];
  }
  else
  {
    v4 = FLOAT_1_0;
  }
  if ( v4 != a2 )
  {
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
    v9 = v8 < 0.0000011920929 != (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm) < 0.0000011920929;
    if ( LODWORD(a2) == `CVisual::SetOpacityInternal'::`2'::sc_defaultValue )
    {
      *(_DWORD *)(v2 + 4) &= ~0x100000u;
    }
    else
    {
      SlotForData = CSparseStorage::FindSlotForData((CVisual *)((char *)this + 272), 0xCu, 4u);
      *((float *)SlotForData + 1) = a2;
      *(_DWORD *)SlotForData &= 0x8CFFFFFF;
      *(_DWORD *)SlotForData |= 0xC000000u;
      *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) |= 0x100000u;
    }
    v11 = *((_QWORD *)this + 3);
    if ( (v11 & 2) != 0 )
      v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v11) = v11 & 1;
    if ( (_DWORD)v11 )
    {
      v12 = 0LL;
      v13 = (unsigned int)v11;
      do
      {
        v14 = CPtrArrayBase::operator[]((char *)this + 24, v12);
        if ( v14 != *((_QWORD *)this + 18) )
          CResource::NotifyOnChanged(v14, 0LL, 0LL);
        ++v12;
        --v13;
      }
      while ( v13 );
    }
    CVisual::ResetVisibleRegionForAll(this);
    for ( i = *((_QWORD *)this + 18); i; i = *(_QWORD *)(i + 144) )
    {
      if ( !v9 || (v16 = *(_BYTE *)(i + 152), (v16 & 1) != 0) )
      {
        v16 = *(_BYTE *)(i + 152);
        if ( (v16 & 2) != 0 )
          break;
      }
      if ( v9 )
      {
        *(_BYTE *)(i + 544) |= 1u;
        *(_BYTE *)(i + 152) = v16 | 1;
      }
      *(_BYTE *)(i + 152) |= 2u;
      v17 = *(_QWORD *)(i + 24);
      if ( (v17 & 2) != 0 )
        v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v17) = v17 & 1;
      if ( (_DWORD)v17 )
      {
        v18 = 0LL;
        v19 = (unsigned int)v17;
        do
        {
          v20 = CPtrArrayBase::operator[](i + 24, v18);
          if ( v20 != *(_QWORD *)(i + 144) )
            CResource::NotifyOnChanged(v20, 0LL, 0LL);
          ++v18;
          --v19;
        }
        while ( v19 );
      }
    }
    if ( v9 )
    {
      *((_BYTE *)this + 152) |= 1u;
      *((_BYTE *)this + 544) |= 1u;
    }
    *((_BYTE *)this + 152) |= 4u;
    v21 = *((_BYTE *)this + 152);
    v28 = 0LL;
    Buffer = 23;
    v22 = v21 ^ (v21 ^ (8 * ((v21 & 8) != 0))) & 8;
    v23 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 152) = v22;
    v24 = *(_QWORD *)(v23 + 352);
    v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 40), &Buffer);
    CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&Buffer);
    if ( v25 )
    {
      for ( j = (_QWORD *)v25[1]; j; j = (_QWORD *)j[1] )
        *(_QWORD *)(*j + 280LL) = v24;
    }
  }
}
