/*
 * XREFs of hfontCreate @ 0x140102814
 * Callers:
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x140102720 (NtGdiHfontCreate.c)
 *     hfontCreatePublic @ 0x140247D30 (hfontCreatePublic.c)
 *     bInitSystemFont @ 0x1403FA27C (bInitSystemFont.c)
 *     bInitOneStockFontInternal @ 0x1403FB108 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1403FB52C (hfontInitDefaultGuiFont.c)
 *     bInitStockFontsInternal @ 0x1403FBDC8 (bInitStockFontsInternal.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?vSetLOCALFONT@@YAXPEAVLFONT@@PEAX@Z @ 0x140103FA8 (-vSetLOCALFONT@@YAXPEAVLFONT@@PEAX@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

struct HOBJ__ *__fastcall hfontCreate(unsigned __int16 *Src, int a2, int a3, void *a4, int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r14d
  struct Gre::Base::SESSION_GLOBALS *v10; // rsi
  char *Object; // rbx
  struct HOBJ__ *inserted; // rdi
  _OWORD v15[2]; // [rsp+28h] [rbp-89h] BYREF
  volatile signed __int16 *v16; // [rsp+48h] [rbp-69h]
  bool v17; // [rsp+50h] [rbp-61h]
  _BYTE v18[96]; // [rsp+60h] [rbp-51h] BYREF

  if ( !Src )
    return 0LL;
  v8 = *((_DWORD *)Src + 88);
  if ( v8 > 0x10 )
    return 0LL;
  v9 = 4 * v8 + 356;
  v10 = Gre::Base::Globals((Gre::Base *)Src);
  Object = (char *)AllocateObject(v10, v9 + 276, 0xAu);
  if ( !Object )
    return 0LL;
  *((_DWORD *)Object + 6) = a2;
  *((_DWORD *)Object + 7) = a3;
  *((_DWORD *)Object + 68) = v9;
  memmove(Object + 276, Src, v9);
  *((_DWORD *)Object + 8) = 0;
  *((_DWORD *)Object + 9) = *(_DWORD *)(*((_QWORD *)v10 + 232) + 1573016LL);
  cCapString((unsigned __int16 *)Object + 104, Src + 14, 32);
  *((_DWORD *)Src + 3) = lNormAngle(*((unsigned int *)Src + 3));
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v18);
  memset(v15, 0, sizeof(v15));
  PushThreadGuardedObject(
    v15,
    v15,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v16 = 0LL;
  v17 = (a5 & 1) != 0;
  inserted = HmgInsertObjectInternal(v10, Object, a5 | 1u, 0xAu);
  if ( !inserted )
  {
    FreeObject(v10, Object, 0xAu);
    if ( v16 && !v17 )
      _InterlockedDecrement16(v16 + 6);
    PopThreadGuardedObject(v15);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v18);
    return 0LL;
  }
  v16 = (volatile signed __int16 *)Object;
  vSetLOCALFONT((struct LFONT *)Object, a4);
  if ( v16 )
  {
    if ( !v17 )
      _InterlockedDecrement16(v16 + 6);
  }
  PopThreadGuardedObject(v15);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v18);
  return inserted;
}
