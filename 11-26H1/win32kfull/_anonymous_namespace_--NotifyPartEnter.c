/*
 * XREFs of _anonymous_namespace_::NotifyPartEnter @ 0x1401D69BC
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1401D6B3C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyPartEnter(__int64 a1, unsigned __int16 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const struct tagWND *v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r15d
  char v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int16 v17; // bx
  unsigned __int16 v18; // bx
  __int64 v19; // rdx
  __int64 v20; // rcx

  result = GetTopLevelWindow(a1);
  v9 = (const struct tagWND *)result;
  if ( result )
  {
    v10 = *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904) + 4960LL);
    v13 = v10 | (*(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19904) + 4964LL) << 16);
    v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 284LL);
    v15 = v14 & 1;
    LOWORD(v15) = 4 * (v14 & 1);
    v16 = (unsigned __int16)v15;
    LOWORD(v16) = v15 | 1;
    if ( (v14 & 0x10) == 0 )
      LOWORD(v16) = 4 * (v14 & 1);
    v17 = v16 | 2;
    if ( (v14 & 4) == 0 )
      v17 = v16;
    v18 = v17 | 0x8000;
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v16) + 18928)
      && *(const struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 18928) + 128LL) == v9 )
    {
      v18 |= 0x200u;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 1) != 0 )
    {
      v18 |= 0x800u;
    }
    else if ( IsArranged(v9) )
    {
      v18 |= 0x400u;
    }
    result = anonymous_namespace_::NotifyShellSimplePayload(
               *(_QWORD *)v9,
               10,
               v18 | (a2 << 16) | (unsigned int)(unsigned __int16)(16 * (*a3 & 0x1F)),
               v13,
               0);
    if ( (_BYTE)result )
      *(_DWORD *)(a1 + 380) |= 1u;
  }
  return result;
}
