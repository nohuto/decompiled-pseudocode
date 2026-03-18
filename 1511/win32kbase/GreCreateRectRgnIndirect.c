/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C0023BD0
 * Callers:
 *     CreateEmptyRgn @ 0x1C0022330 (CreateEmptyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0022340 (CreateEmptyRgnPublic.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0026470 (SetOrCreateRectRgnIndirectPublic.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C0042DC0 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C0073690 (UserValidateCopyRgn.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002A02C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

HRGN __fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  unsigned int v3; // ebp
  HRGN v4; // rsi
  int v5; // r14d
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  __int32 v14; // [rsp+50h] [rbp+8h]

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v3 = 216;
  v4 = 0LL;
  v13 = 0;
  if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
  {
    v3 = 376;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( dword_1C0103610 >= v3 && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0 )
  {
    v6 = Win32AllocateFromPagedLookasideListImpl_0();
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v3 + v6 - 160), 0LL);
      LOWORD(v14) = *(_WORD *)(v6 + 12);
      HIWORD(v14) = *(_WORD *)(v6 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v6 + 12), v14);
LABEL_14:
      *(_QWORD *)(v6 + 24) = 216LL;
      *(_DWORD *)(v6 + 80) = 0;
      *(_DWORD *)(v6 + 32) = 0;
      v12 = v6;
      v7 = (_QWORD *)(v6 + 48);
      v7[1] = v7;
      *v7 = v7;
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
      RGNOBJ::vSet((RGNOBJ *)&v12, a1);
      v4 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v12);
      if ( !v4 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
        if ( v13 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
      }
      return v4;
    }
  }
  v6 = (__int64)PALLOCMEM2(v3, 875587655LL, 0);
  if ( v6 )
  {
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    if ( v5 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v3 + v6 - 160), 0LL);
    goto LABEL_14;
  }
  EngSetLastError(8u);
  EngSetLastError(8u);
  return v4;
}
