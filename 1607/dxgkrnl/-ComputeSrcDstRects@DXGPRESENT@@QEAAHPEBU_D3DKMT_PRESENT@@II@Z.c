/*
 * XREFs of ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00DC5B8
 * Callers:
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00DBD30 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00DC1A0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C00DC680 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0171234 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::ComputeSrcDstRects(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        LONG a3,
        LONG a4)
{
  struct tagRECT *v4; // rdi
  int v6; // r10d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v8; // eax
  RECT *p_DstRect; // r9
  RECT *p_SrcRect; // r8
  LONG bottom; // eax
  LONG right; // ecx

  this[8].top = 0;
  v4 = this + 8;
  v6 = this[2].left - this[1].right;
  this[8].left = 0;
  this[8].right = v6;
  this[8].bottom = this[2].top - this[1].bottom;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) == 0 || DXGPRESENT::IntersectRect(v4, &a2->DstRect, v4) )
    {
      this[9] = *v4;
LABEL_7:
      bottom = this[1].bottom;
      right = this[1].right;
      this[8].top += bottom;
      v4->left += right;
      this[8].right += right;
      this[8].bottom += bottom;
      return 1LL;
    }
  }
  else
  {
    this[9].top = 0;
    this[9].left = 0;
    this[9].right = a3;
    this[9].bottom = a4;
    v8 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&v8 & 0x40) != 0 )
      p_DstRect = &a2->DstRect;
    else
      p_DstRect = 0LL;
    if ( *(_BYTE *)&v8 < 0 )
      p_SrcRect = &a2->SrcRect;
    else
      p_SrcRect = 0LL;
    if ( (unsigned int)DXGPRESENT::ClipRects(this + 9, v4, p_SrcRect, p_DstRect) )
      goto LABEL_7;
  }
  return 0LL;
}
