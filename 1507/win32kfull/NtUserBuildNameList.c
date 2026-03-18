/*
 * XREFs of NtUserBuildNameList @ 0x1C00EE020
 * Callers:
 *     <none>
 * Callees:
 *     _BuildNameList @ 0x1C00EE10C (_BuildNameList.c)
 */

__int64 __fastcall NtUserBuildNameList(__int64 a1, unsigned int a2, _WORD *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  PVOID v9; // rcx
  _DWORD *v10; // rdx
  int v11; // ebx
  PVOID Object[7]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  EnterSharedCrit(1LL);
  if ( a2 < 0xC )
  {
    v11 = -1073741816;
  }
  else
  {
    v10 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v10 = (_DWORD *)W32UserProbeAddress;
    *v10 = *v10;
    ProbeForWrite(a3, a2, 4u);
    if ( a1 )
    {
      LOBYTE(v8) = 1;
      v11 = ValidateHwinsta(a1, v8, 1LL, Object);
      v9 = Object[0];
    }
    else
    {
      v11 = 0;
      v9 = 0LL;
      Object[0] = 0LL;
    }
    if ( v11 < 0 )
    {
      a3[4] = 0;
      *(_DWORD *)a3 = 1;
    }
    else
    {
      v11 = BuildNameList(v9, a3, a2, &v14);
      *a4 = v14;
      v9 = Object[0];
      if ( Object[0] )
        ObfDereferenceObject(Object[0]);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return (unsigned int)v11;
}
