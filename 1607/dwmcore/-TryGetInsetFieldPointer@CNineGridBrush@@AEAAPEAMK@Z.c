/*
 * XREFs of ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x18013FDE4
 * Callers:
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x18010D908 (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETIN.c)
 *     ?GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18013FB90 (-GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013FD60 (-SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall CNineGridBrush::TryGetInsetFieldPointer(CNineGridBrush *this, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a2 )
    return (float *)((char *)this + 160);
  v2 = a2 - 1;
  if ( !v2 )
    return (float *)((char *)this + 164);
  v3 = v2 - 2;
  if ( !v3 )
    return (float *)((char *)this + 136);
  v4 = v3 - 1;
  if ( !v4 )
    return (float *)((char *)this + 140);
  v5 = v4 - 1;
  if ( !v5 )
    return (float *)((char *)this + 152);
  v6 = v5 - 1;
  if ( !v6 )
    return (float *)((char *)this + 156);
  v7 = v6 - 2;
  if ( !v7 )
    return (float *)((char *)this + 144);
  if ( v7 == 1 )
    return (float *)((char *)this + 148);
  return 0LL;
}
