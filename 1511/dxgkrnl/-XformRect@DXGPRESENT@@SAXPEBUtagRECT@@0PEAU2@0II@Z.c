/*
 * XREFs of ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C014CFF0
 * Callers:
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00C6DB4 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPRESENT::XformRect(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6)
{
  LONG v7; // r10d
  LONG v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  LONG v11; // edx
  LONG v12; // ecx
  LONG top; // ecx
  LONG bottom; // eax

  a3->left = a5 * (a4->left - a2->left);
  v7 = a5 * (a4->right - a2->left);
  a3->right = v7;
  a3->top = a6 * (a4->top - a2->top);
  v8 = a6 * (a4->bottom - a2->top);
  v9 = (unsigned int)(a3->left + 0x8000) >> 16;
  v10 = (unsigned int)(a3->top + 0x8000) >> 16;
  a3->bottom = v8;
  v11 = a1->left + v9;
  a3->left = v11;
  v12 = a1->left + ((unsigned int)(v7 + 0x8000) >> 16);
  a3->right = v12;
  a3->top = a1->top + v10;
  a3->bottom = a1->top + ((unsigned int)(a3->bottom + 0x8000) >> 16);
  if ( v11 == v12 )
  {
    if ( v12 == a1->right )
      a3->left = v11 - 1;
    else
      a3->right = v12 + 1;
  }
  top = a3->top;
  bottom = a3->bottom;
  if ( top == bottom )
  {
    if ( bottom == a1->bottom )
      a3->top = top - 1;
    else
      a3->bottom = bottom + 1;
  }
}
