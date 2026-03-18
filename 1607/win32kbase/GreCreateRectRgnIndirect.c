/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C0034480
 * Callers:
 *     NtUserGetDC @ 0x1C00210B0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C002F220 (SetOrCreateRectRgnIndirectPublic.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C0057790 (UserValidateCopyRgn.c)
 *     CreateEmptyRgn @ 0x1C0057860 (CreateEmptyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0057880 (CreateEmptyRgnPublic.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002E7B8 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C00315D0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  struct HOBJ__ *v7; // rbx
  __int16 *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8, 0LL, 1);
    if ( v8 )
    {
      left = a1->left;
      right = a1->right;
      if ( a1->left > right )
      {
        a1->left = right;
        a1->right = left;
      }
      top = a1->top;
      bottom = a1->bottom;
      if ( top > bottom )
      {
        a1->top = bottom;
        a1->bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v8, a1);
      v7 = RGNOBJ::hrgnAssociate((struct OBJECT **)&v8);
      if ( !v7 )
        RGNOBJ::vDeleteRGNOBJ(&v8);
    }
    else
    {
      EngSetLastError(8u);
      v7 = 0LL;
    }
    if ( v9 == 1 )
      RGNOBJ::vDeleteRGNOBJ(&v8);
    return v7;
  }
}
