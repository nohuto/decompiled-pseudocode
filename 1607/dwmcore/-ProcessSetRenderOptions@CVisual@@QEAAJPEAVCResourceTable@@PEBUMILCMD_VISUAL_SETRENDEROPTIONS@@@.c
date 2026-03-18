/*
 * XREFs of ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x18004F2E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  *((_BYTE *)this + 156) = 0;
  if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    v3 = *((_DWORD *)a3 + 3);
    if ( v3 != -1 )
    {
      *((_DWORD *)this + 39) &= 0xFFFFC3FF;
      *((_DWORD *)this + 39) |= (v3 & 0xF) << 10;
      *((_BYTE *)this + 156) |= 2u;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 8) != 0 )
  {
    v9 = *((_DWORD *)a3 + 4);
    if ( v9 != -1 )
    {
      *((_BYTE *)this + 156) |= 8u;
      *((_DWORD *)this + 62) = v9;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
  {
    v11 = *((_DWORD *)a3 + 5);
    if ( v11 != 5 )
    {
      *((_DWORD *)this + 39) &= 0xFFF83FFF;
      *((_DWORD *)this + 39) |= (v11 & 0x1F) << 14;
      *((_BYTE *)this + 156) |= 4u;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 1) != 0 )
  {
    v5 = *((_DWORD *)a3 + 6);
    if ( v5 )
    {
      *((_DWORD *)this + 39) &= 0xFFFFFCFF;
      *((_DWORD *)this + 39) |= (v5 & 3) << 8;
      *((_BYTE *)this + 156) |= 1u;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x10) != 0 )
  {
    v8 = *((_DWORD *)a3 + 7);
    if ( v8 != 5 )
    {
      *((_BYTE *)this + 156) |= 0x10u;
      *((_DWORD *)this + 63) = v8;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x20) != 0 )
  {
    v10 = *((_DWORD *)a3 + 8);
    if ( v10 != -1 )
    {
      *((_BYTE *)this + 156) |= 0x20u;
      *((_DWORD *)this + 64) = v10;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x40) != 0 )
  {
    v7 = *((_DWORD *)a3 + 9);
    if ( v7 != -1 )
    {
      *((_BYTE *)this + 156) |= 0x40u;
      *((_DWORD *)this + 65) = v7;
    }
  }
  if ( *((char *)a3 + 8) < 0 )
  {
    v6 = *((_DWORD *)a3 + 10);
    if ( v6 != -1 )
    {
      *((_BYTE *)this + 156) |= 0x80u;
      *((_DWORD *)this + 66) = v6;
    }
  }
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
