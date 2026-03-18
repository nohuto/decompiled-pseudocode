/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C0042990
 * Callers:
 *     UserValidateCopyRgn @ 0x1C0010ED0 (UserValidateCopyRgn.c)
 *     CreateEmptyRgn @ 0x1C0011A50 (CreateEmptyRgn.c)
 *     NtUserGetDC @ 0x1C0033CE0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0042050 (SetOrCreateRectRgnIndirectPublic.c)
 *     CreateEmptyRgnPublic @ 0x1C0045250 (CreateEmptyRgnPublic.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C10 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00402CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *this)
{
  unsigned int v3; // ebp
  struct HOBJ__ *v4; // rdi
  int v5; // r14d
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int16 *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int32 v10; // [rsp+50h] [rbp+8h]

  if ( (this->left & 0xF8000000) != 0 && (this->left & 0xF8000000) != -134217728
    || (this->bottom & 0xF8000000) != 0 && (this->bottom & 0xF8000000) != -134217728
    || (this->right & 0xF8000000) != 0 && (this->right & 0xF8000000) != -134217728
    || (this->top & 0xF8000000) != 0 && (this->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v3 = 216;
  v4 = 0LL;
  v9 = 0;
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
  {
    v3 = 376;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( dword_1C0100A00 >= v3 && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0 )
  {
    v6 = Win32AllocateFromPagedLookasideListImpl_0();
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      if ( v5 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v3 + v6 - 160), 0LL);
      LOWORD(v10) = *(_WORD *)(v6 + 12);
      HIWORD(v10) = *(_WORD *)(v6 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v6 + 12), v10);
LABEL_14:
      *(_QWORD *)(v6 + 24) = 216LL;
      *(_DWORD *)(v6 + 80) = 0;
      *(_QWORD *)(v6 + 32) = 0LL;
      v8 = (__int16 *)v6;
      v7 = (_QWORD *)(v6 + 48);
      v7[1] = v7;
      *v7 = v7;
      ERECTL::vOrder((ERECTL *)this);
      RGNOBJ::vSet((RGNOBJ *)&v8, this);
      v4 = RGNOBJ::hrgnAssociate((struct OBJECT **)&v8);
      if ( !v4 )
      {
        RGNOBJ::vDeleteRGNOBJ(&v8);
        if ( v9 == 1 )
          RGNOBJ::vDeleteRGNOBJ(&v8);
      }
      return v4;
    }
  }
  v6 = PALLOCMEM2(v3);
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
