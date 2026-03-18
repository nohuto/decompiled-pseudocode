/*
 * XREFs of NtUserGetIconInfo @ 0x1C00936E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0095484 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00955A8 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     _InternalGetIconInfo @ 0x1C0095874 (_InternalGetIconInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetIconInfo(__int64 a1, _BYTE *a2, _OWORD *a3, _OWORD *a4, unsigned __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r13d
  __int64 v15; // rax
  _OWORD *v16; // rdx
  _DWORD *v17; // rdx
  _OWORD *v18; // rdx
  _BYTE *v19; // rdx
  int *v20; // rsi
  int *v21; // r15
  unsigned int IconInfo; // ebx
  _BYTE v24[8]; // [rsp+40h] [rbp-78h] BYREF
  int *v25; // [rsp+48h] [rbp-70h]
  int *v26; // [rsp+50h] [rbp-68h]
  int v27; // [rsp+60h] [rbp-58h] BYREF
  volatile void *v28; // [rsp+68h] [rbp-50h]
  int v29; // [rsp+70h] [rbp-48h] BYREF
  volatile void *v30; // [rsp+78h] [rbp-40h]
  unsigned __int64 v31; // [rsp+80h] [rbp-38h]

  EnterCrit(1LL);
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
      v29 = *(_DWORD *)v18;
      v30 = (volatile void *)*((_QWORD *)v18 + 1);
      ProbeForWrite(v30, HIWORD(v29), 2u);
      v26 = &v29;
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
      v27 = *(_DWORD *)v16;
      v28 = (volatile void *)*((_QWORD *)v16 + 1);
      ProbeForWrite(v28, HIWORD(v27), 2u);
      v25 = &v27;
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
    IconInfo = InternalGetIconInfo(v14, (_DWORD)a2, (_DWORD)v26, (_DWORD)v25, a5, a6);
    if ( a3 )
    {
      v21[1] = 0;
      *a3 = *(_OWORD *)v21;
    }
    if ( a4 )
    {
      v20[1] = 0;
      *a4 = *(_OWORD *)v20;
    }
  }
  else
  {
    IconInfo = 0;
  }
  if ( !v24[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v24);
  }
  UserSessionSwitchLeaveCrit(v13, v12);
  return IconInfo;
}
