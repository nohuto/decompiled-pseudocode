/*
 * XREFs of ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00B1668
 * Callers:
 *     ValidateHwndEx @ 0x1C0020B00 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C00389C0 (ValidateHandleSecure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHandleEntrySecure(void *a1, struct _HANDLEENTRY *a2)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 result; // rax
  char v8; // cl
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  void **v12; // rcx
  unsigned int v13; // r9d

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = 0;
  v6 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v8 = *((_BYTE *)&unk_1C00FEE4C + 16 * *((unsigned __int8 *)a2 + 16));
  result = 1LL;
  if ( (v8 & 2) != 0 )
  {
    v9 = *((_QWORD *)a2 + 1);
  }
  else
  {
    if ( (v8 & 1) == 0 )
      return 0LL;
    v10 = *((_QWORD *)a2 + 1);
    if ( !v10 )
      return 0LL;
    v9 = *(_QWORD *)(v10 + 376);
  }
  if ( !v9 )
    return 0LL;
  v11 = *(_QWORD *)(v6 + 720);
  if ( *(_QWORD *)(v9 + 720) == v11 )
    return result;
  v12 = *(void ***)(v11 + 56);
  if ( !v12 )
    return 0LL;
  v13 = *(_DWORD *)(v11 + 48);
  if ( !v13 )
    return 0LL;
  while ( *v12 != a1 )
  {
    ++v5;
    ++v12;
    if ( v5 >= v13 )
      return 0LL;
  }
  return result;
}
