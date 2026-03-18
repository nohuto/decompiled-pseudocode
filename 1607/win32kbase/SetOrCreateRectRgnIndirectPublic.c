/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C002F220
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034480 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  __int64 RectRgnIndirect; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  LONG bottom; // esi
  LONG right; // r15d
  LONG top; // r14d
  LONG left; // r12d
  __int64 v11; // rcx
  unsigned int v12; // edi
  struct _RECTL v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v16[40]; // [rsp+38h] [rbp-38h] BYREF
  int v17; // [rsp+60h] [rbp-10h]

  v2 = 0;
  if ( *a1 )
  {
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v15, *a1, 0, 0);
    v11 = v15;
    v12 = 0;
    if ( v15 )
    {
      v14.left = left;
      v14.top = top;
      v14.right = right;
      v14.bottom = bottom;
      if ( (((left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        if ( left > right )
        {
          v14.left = right;
          v14.right = left;
        }
        if ( top > bottom )
        {
          v14.top = bottom;
          v14.bottom = top;
        }
        RGNOBJ::vSet((RGNOBJ *)&v15, &v14);
        v11 = v15;
        v12 = 1;
      }
    }
    if ( !v17 )
    {
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v15);
      v11 = v15;
    }
    if ( v11 )
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
    UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v16);
    return v12;
  }
  else
  {
    RectRgnIndirect = GreCreateRectRgnIndirect(a2);
    *a1 = (HRGN)RectRgnIndirect;
    v5 = RectRgnIndirect;
    if ( RectRgnIndirect )
    {
      PsGetCurrentProcessId();
      LOBYTE(v6) = 4;
      HmgSetOwner(v5, 0LL, v6);
      return 1;
    }
  }
  return v2;
}
