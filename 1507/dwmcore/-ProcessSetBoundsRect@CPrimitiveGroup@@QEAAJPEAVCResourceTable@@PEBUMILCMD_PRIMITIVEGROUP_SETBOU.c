/*
 * XREFs of ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x18006F2AC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E074 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180087AD8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetBoundsRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_SETBOUNDSRECT *a3)
{
  __int64 v3; // r9
  _OWORD *v4; // rdx
  _OWORD *v5; // rcx
  _DWORD *v6; // r9

  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)a3 + 2)
    && (unsigned __int8)operator!=(v3 + 68) )
  {
    *v5 = *v4;
    CResource::NotifyOnChanged(v6, 3u, 0LL);
  }
  return 0LL;
}
