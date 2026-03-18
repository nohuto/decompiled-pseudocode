/*
 * XREFs of ProtectedContentAccessCheck @ 0x1C0075D78
 * Callers:
 *     ValidateNewParent @ 0x1C0075C7C (ValidateNewParent.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

__int64 __fastcall ProtectedContentAccessCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 TopLevelWindow; // rax
  __int64 v6; // r10
  unsigned __int8 Prop; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdi

  TopLevelWindow = GetTopLevelWindow(a1, a2, a3, a4);
  v6 = TopLevelWindow;
  if ( !TopLevelWindow )
    return 1LL;
  if ( *(char *)(TopLevelWindow + 290) < 0 )
  {
    v13 = *(_QWORD *)(TopLevelWindow + 16);
    if ( *(_QWORD *)(v13 + 1256) )
      v6 = *(_QWORD *)(v13 + 1256);
  }
  Prop = GetProp(v6, (unsigned __int16)atomDispAffinity, 1LL);
  if ( (Prop & (unsigned __int8)v11) == 0 )
    return v11;
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL);
  return v14 == PsGetCurrentProcessWin32Process(v10, v9)
      || v14 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0;
}
