/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C014D110
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // eax

  v8 = -1073741816;
  EnterCrit(0LL, 1LL);
  v11 = HMValidateHandle(a1, 6);
  if ( v11 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v9 = *(unsigned int *)(v11 + 16);
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_DWORD *)W32UserProbeAddress;
      *a4 = v9;
    }
    if ( a2 && (v12 = *(_DWORD *)(v11 + 16), a3 >= v12) )
    {
      memmove((void *)a2, (const void *)(v11 + 20), v12);
      v8 = 0;
    }
    else
    {
      v8 = -1073741789;
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v8;
}
