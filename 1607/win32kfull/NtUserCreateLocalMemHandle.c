/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C01527E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // eax

  v8 = -1073741816;
  EnterCrit(0LL, 1LL);
  LOBYTE(v9) = 6;
  v14 = HMValidateHandle(a1, v9, v10, v11);
  if ( v14 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v12 = *(unsigned int *)(v14 + 16);
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_DWORD *)W32UserProbeAddress;
      *a4 = v12;
    }
    if ( a2 && (v15 = *(_DWORD *)(v14 + 16), a3 >= v15) )
    {
      memmove((void *)a2, (const void *)(v14 + 20), v15);
      v8 = 0;
    }
    else
    {
      v8 = -1073741789;
    }
  }
  UserSessionSwitchLeaveCrit(v13, v12);
  return v8;
}
