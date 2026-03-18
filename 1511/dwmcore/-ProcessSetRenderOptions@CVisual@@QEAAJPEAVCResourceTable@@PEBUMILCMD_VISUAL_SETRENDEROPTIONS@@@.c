/*
 * XREFs of ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x180048004
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180048C68 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x18004BAEC (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  int v4; // eax
  __int64 i; // rdi
  char v6; // al
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax

  *((_DWORD *)this + 19) &= 0xFFFFFE00;
  if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    v9 = *((_DWORD *)a3 + 3);
    if ( v9 != -1 )
      *((_DWORD *)this + 19) = *((_DWORD *)this + 19) ^ (*((_DWORD *)this + 19) ^ (v9 << 11)) & 0x7800 | 2;
  }
  if ( (*((_BYTE *)a3 + 8) & 8) != 0 )
  {
    v11 = *((_DWORD *)a3 + 4);
    if ( v11 != -1 )
    {
      *((_DWORD *)this + 19) |= 8u;
      *((_DWORD *)this + 47) = v11;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
  {
    v15 = *((_DWORD *)a3 + 5);
    if ( v15 != 5 )
    {
      *((_DWORD *)this + 19) &= 0xFFF07FFF;
      *((_DWORD *)this + 19) |= ((v15 & 0x1F) << 15) | 4;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 1) != 0 )
  {
    v12 = *((_DWORD *)a3 + 6);
    if ( v12 )
    {
      *((_DWORD *)this + 19) &= 0xFFFFF9FF;
      *((_DWORD *)this + 19) |= ((v12 & 3) << 9) | 1;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x10) != 0 )
  {
    v13 = *((_DWORD *)a3 + 7);
    if ( v13 != 5 )
    {
      *((_DWORD *)this + 19) |= 0x10u;
      *((_DWORD *)this + 48) = v13;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x20) != 0 )
  {
    v14 = *((_DWORD *)a3 + 8);
    if ( v14 != -1 )
    {
      *((_DWORD *)this + 19) |= 0x20u;
      *((_DWORD *)this + 49) = v14;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x40) != 0 )
  {
    v16 = *((_DWORD *)a3 + 9);
    if ( v16 != -1 )
    {
      *((_DWORD *)this + 19) |= 0x40u;
      *((_DWORD *)this + 50) = v16;
    }
  }
  if ( *((char *)a3 + 8) < 0 )
  {
    v10 = *((_DWORD *)a3 + 10);
    if ( v10 != -1 )
    {
      *((_DWORD *)this + 19) |= 0x80u;
      *((_DWORD *)this + 51) = v10;
    }
  }
  if ( (*((_DWORD *)a3 + 2) & 0x100) != 0 )
  {
    v4 = *((_DWORD *)a3 + 11);
    if ( v4 != -1 )
    {
      *((_DWORD *)this + 19) |= 0x100u;
      *((_DWORD *)this + 20) = v4;
    }
  }
  CVisual::NotifyVisualTreeListeners(this);
  CVisual::ResetVisibleRegionForAll(this);
  for ( i = *((_QWORD *)this + 8); i; i = *(_QWORD *)(i + 64) )
  {
    v8 = *(_BYTE *)(i + 72);
    if ( (v8 & 1) != 0 && (v8 & 2) != 0 )
      break;
    *(_BYTE *)(i + 696) |= 1u;
    *(_BYTE *)(i + 72) = v8 | 3;
    CVisual::NotifyVisualTreeListeners((CVisual *)i);
  }
  *((_BYTE *)this + 72) |= 5u;
  v6 = *((_BYTE *)this + 72);
  *((_BYTE *)this + 696) |= 1u;
  *((_BYTE *)this + 72) ^= (*((_BYTE *)this + 72) ^ (8 * ((v6 & 8) != 0))) & 8;
  return 0LL;
}
