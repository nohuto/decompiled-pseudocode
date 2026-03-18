/*
 * XREFs of NtUserGetObjectInformation @ 0x1C0076070
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00766E8 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C007680C (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     _GetUserObjectInformation @ 0x1C00772AC (_GetUserObjectInformation.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetObjectInformation(HANDLE Handle, int a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  ULONG v9; // r8d
  _DWORD *v10; // rdx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID v14; // rdi
  int UserObjectInformation; // ebx
  __int64 v17[3]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  ULONG v20; // [rsp+58h] [rbp-40h]
  PVOID v21; // [rsp+68h] [rbp-30h]

  LODWORD(v17[0]) = 0;
  EnterCrit(0LL, 1LL);
  v18[0] = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v18);
  v9 = 2;
  if ( a2 == 1 )
    v9 = 4;
  v20 = v9;
  ProbeForWrite(a3, a4, v9);
  if ( a5 )
  {
    v10 = a5;
    if ( (unsigned __int64)a5 >= W32UserProbeAddress )
      v10 = (_DWORD *)W32UserProbeAddress;
    *v10 = *v10;
  }
  v11 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  v14 = Object;
  v21 = Object;
  if ( v11 < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v17);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
    {
      v13 = LODWORD(v17[0]);
      *a5 = v17[0];
    }
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8LL);
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( !v18[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v18);
  }
  UserSessionSwitchLeaveCrit(v13, v12);
  return UserObjectInformation;
}
