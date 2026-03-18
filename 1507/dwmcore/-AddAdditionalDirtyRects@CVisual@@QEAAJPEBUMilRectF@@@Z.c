/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180034D20
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180034854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F5C88 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Add@CMergedRect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051438 (-Add@CMergedRect@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, const struct MilRectF *a2)
{
  char v3; // al
  __int64 v4; // rax
  __int64 i; // rbx
  char v6; // al
  __int64 v7; // rax
  bool v8; // al
  unsigned __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rbp
  unsigned __int64 v15; // rax

  if ( *((float *)a2 + 2) > *(float *)a2 && *((float *)a2 + 3) > *((float *)a2 + 1) )
  {
    v3 = *((_BYTE *)this + 90);
    if ( (v3 & 2) != 0 )
    {
      *((_BYTE *)this + 90) = v3 & 0xFD;
      *((_DWORD *)this + 76) = 0;
      *(_QWORD *)((char *)this + 308) = 1LL;
    }
    CMergedRect::Add((char *)this + 240, a2);
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
        v15 = CPtrArrayBase::operator[]((__int64 *)this + 3, v13);
        if ( v15 != *((_QWORD *)this + 10) )
          CResource::NotifyOnChanged(v15, 0LL, 0LL);
        ++v13;
        --v14;
      }
      while ( v14 );
    }
    for ( i = *((_QWORD *)this + 10); i; i = *(_QWORD *)(i + 80) )
    {
      v6 = *(_BYTE *)(i + 88);
      if ( (v6 & 2) != 0 )
        break;
      *(_BYTE *)(i + 88) = v6 | 2;
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
          v12 = CPtrArrayBase::operator[]((__int64 *)(i + 24), v10);
          if ( v12 != *(_QWORD *)(i + 80) )
            CResource::NotifyOnChanged(v12, 0LL, 0LL);
          ++v10;
          --v11;
        }
        while ( v11 );
      }
    }
    v8 = (*((_BYTE *)this + 88) & 4) != 0;
    *((_BYTE *)this + 88) &= ~4u;
    *((_BYTE *)this + 88) |= 4 * (v8 | 2);
  }
  return 0LL;
}
