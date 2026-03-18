/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x18004D6F0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010F908 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180064644 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, const struct MilRectF *a2)
{
  char v3; // al
  __int64 v4; // rax
  __int64 i; // rbx
  char v6; // al
  __int64 v7; // rax
  bool v8; // al
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax

  if ( *((float *)a2 + 2) > *(float *)a2 && *((float *)a2 + 3) > *((float *)a2 + 1) )
  {
    v3 = *((_BYTE *)this + 73);
    if ( v3 < 0 )
    {
      *((_BYTE *)this + 73) = v3 & 0x7F;
      *((_DWORD *)this + 72) = 0;
      *(_QWORD *)((char *)this + 292) = 1LL;
    }
    CMergedRectBase<4>::Add((char *)this + 224, a2);
    v4 = *((_QWORD *)this + 3);
    if ( (v4 & 2) != 0 )
      v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v4) = v4 & 1;
    if ( (_DWORD)v4 )
    {
      v13 = 0LL;
      v14 = (unsigned int)v4;
      do
      {
        v15 = CPtrArrayBase::operator[]((char *)this + 24, v13);
        if ( v15 != *((_QWORD *)this + 8) )
          CResource::NotifyOnChanged(v15, 0LL, 0LL);
        ++v13;
        --v14;
      }
      while ( v14 );
    }
    for ( i = *((_QWORD *)this + 8); i; i = *(_QWORD *)(i + 64) )
    {
      v6 = *(_BYTE *)(i + 72);
      if ( (v6 & 2) != 0 )
        break;
      *(_BYTE *)(i + 72) = v6 | 2;
      v7 = *(_QWORD *)(i + 24);
      if ( (v7 & 2) != 0 )
        v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v7) = v7 & 1;
      if ( (_DWORD)v7 )
      {
        v10 = 0LL;
        v11 = (unsigned int)v7;
        do
        {
          v12 = CPtrArrayBase::operator[](i + 24, v10);
          if ( v12 != *(_QWORD *)(i + 64) )
            CResource::NotifyOnChanged(v12, 0LL, 0LL);
          ++v10;
          --v11;
        }
        while ( v11 );
      }
    }
    v8 = (*((_BYTE *)this + 72) & 4) != 0;
    *((_BYTE *)this + 72) &= ~4u;
    *((_BYTE *)this + 72) |= 4 * (v8 | 2);
  }
  return 0LL;
}
