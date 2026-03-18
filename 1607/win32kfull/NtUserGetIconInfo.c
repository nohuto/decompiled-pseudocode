/*
 * XREFs of NtUserGetIconInfo @ 0x1C003BA50
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00766E8 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C007680C (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetIconInfo(__int64 a1, _BYTE *a2, _OWORD *a3, _OWORD *a4, unsigned __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r12d
  __int64 v15; // rax
  _OWORD *v16; // rdx
  _DWORD *v17; // rdx
  _OWORD *v18; // rdx
  _BYTE *v19; // rdx
  int *v20; // rbx
  int *v21; // r14
  __int64 v22; // rbx
  _BYTE v24[8]; // [rsp+40h] [rbp-78h] BYREF
  int *v25; // [rsp+48h] [rbp-70h]
  int *v26; // [rsp+50h] [rbp-68h]
  int v27; // [rsp+60h] [rbp-58h] BYREF
  volatile void *v28; // [rsp+68h] [rbp-50h]
  int v29; // [rsp+70h] [rbp-48h] BYREF
  volatile void *v30; // [rsp+78h] [rbp-40h]
  unsigned __int64 v31; // [rsp+80h] [rbp-38h]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v24[0] = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v24);
  LOBYTE(v10) = 3;
  v11 = HMValidateHandle(a1, v10);
  v14 = v11;
  if ( v11 )
  {
    if ( a3 )
    {
      v18 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v18 = (_OWORD *)W32UserProbeAddress;
      v27 = *(_DWORD *)v18;
      v28 = (volatile void *)*((_QWORD *)v18 + 1);
      ProbeForWrite(v28, HIWORD(v27), 2u);
      v26 = &v27;
    }
    else
    {
      v26 = 0LL;
    }
    if ( a4 )
    {
      v16 = a4;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        v16 = (_OWORD *)W32UserProbeAddress;
      v29 = *(_DWORD *)v16;
      v30 = (volatile void *)*((_QWORD *)v16 + 1);
      ProbeForWrite(v30, HIWORD(v29), 2u);
      v25 = &v29;
    }
    else
    {
      v25 = 0LL;
    }
    if ( a5 )
    {
      v17 = (_DWORD *)a5;
      if ( a5 >= W32UserProbeAddress )
        v17 = (_DWORD *)W32UserProbeAddress;
      *v17 = *v17;
    }
    v15 = -PsGetCurrentProcessWow64Process(v13);
    v31 = (-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    if ( ((v15 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v19 = (_BYTE *)W32UserProbeAddress;
    *v19 = *v19;
    v19[31] = v19[31];
    v20 = v25;
    v21 = v26;
    LODWORD(v11) = InternalGetIconInfo(v14, (_DWORD)a2, (_DWORD)v26, (_DWORD)v25, a5, a6);
    if ( a3 )
    {
      v13 = 0LL;
      v21[1] = 0;
      *a3 = *(_OWORD *)v21;
    }
    if ( a4 )
    {
      v13 = 0LL;
      v20[1] = 0;
      *a4 = *(_OWORD *)v20;
    }
  }
  v22 = (int)v11;
  if ( !v24[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v24);
  }
  UserSessionSwitchLeaveCrit(v13, v12);
  return v22;
}
