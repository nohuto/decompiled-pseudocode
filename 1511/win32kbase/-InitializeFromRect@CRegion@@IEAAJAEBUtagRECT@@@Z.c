/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C003E8A0
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003E934 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00E6648 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002B390 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 */

__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, struct _RECTL *a2)
{
  unsigned int v4; // ebx
  __int16 *v5; // rsi
  struct _RECTL v7; // [rsp+20h] [rbp-28h] BYREF
  __int16 *v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]

  v4 = -1073741801;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8, 0LL, 1);
  v5 = v8;
  if ( v8 )
  {
    v7 = *a2;
    RGNOBJ::vSet((RGNOBJ *)&v8, &v7);
    v4 = 0;
    *((_QWORD *)this + 1) = v5;
    *((_DWORD *)this + 1) = 2;
  }
  if ( v9 == 1 )
    RGNOBJ::vDeleteRGNOBJ(&v8);
  return v4;
}
