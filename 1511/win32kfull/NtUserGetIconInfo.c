/*
 * XREFs of NtUserGetIconInfo @ 0x1C004A220
 * Callers:
 *     <none>
 * Callees:
 *     _InternalGetIconInfo @ 0x1C0049C9C (_InternalGetIconInfo.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AA50 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AB74 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetIconInfo(
        __int64 a1,
        unsigned __int64 a2,
        _OWORD *a3,
        struct _UNICODE_STRING *a4,
        _DWORD *a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  struct _UNICODE_STRING *v15; // rdx
  _DWORD *v16; // rdx
  _OWORD *v17; // rdx
  _BYTE *v18; // rdx
  struct _UNICODE_STRING *v19; // rdi
  __int64 v20; // r15
  unsigned int IconInfo; // ebx
  char v23[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _UNICODE_STRING *v24; // [rsp+48h] [rbp-70h]
  int *v25; // [rsp+50h] [rbp-68h]
  int v26; // [rsp+60h] [rbp-58h] BYREF
  PWSTR Buffer; // [rsp+68h] [rbp-50h]
  int v28; // [rsp+70h] [rbp-48h] BYREF
  volatile void *v29; // [rsp+78h] [rbp-40h]
  unsigned __int64 v30; // [rsp+80h] [rbp-38h]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v23[0] = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v23);
  LOBYTE(v10) = 3;
  v13 = HMValidateHandle(a1, v10);
  if ( v13 )
  {
    if ( a3 )
    {
      v17 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v17 = (_OWORD *)W32UserProbeAddress;
      v28 = *(_DWORD *)v17;
      v29 = (volatile void *)*((_QWORD *)v17 + 1);
      ProbeForWrite(v29, HIWORD(v28), 2u);
      v25 = &v28;
    }
    else
    {
      v25 = 0LL;
    }
    if ( a4 )
    {
      v15 = a4;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        v15 = (struct _UNICODE_STRING *)W32UserProbeAddress;
      v26 = *(_DWORD *)&v15->Length;
      Buffer = v15->Buffer;
      ProbeForWrite(Buffer, HIWORD(v26), 2u);
      v24 = (struct _UNICODE_STRING *)&v26;
    }
    else
    {
      v24 = 0LL;
    }
    if ( a5 )
    {
      v16 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v16 = (_DWORD *)W32UserProbeAddress;
      *v16 = *v16;
    }
    v14 = -PsGetCurrentProcessWow64Process(v12);
    v30 = (-(__int64)(v14 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    if ( ((v14 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (_BYTE *)a2;
    if ( a2 >= W32UserProbeAddress )
      v18 = (_BYTE *)W32UserProbeAddress;
    *v18 = *v18;
    v18[31] = v18[31];
    v19 = v24;
    v20 = (__int64)v25;
    IconInfo = InternalGetIconInfo(v13, a2, (__int64)v25, v24, a5, a6);
    if ( a3 )
    {
      *(_DWORD *)(v20 + 4) = 0;
      *a3 = *(_OWORD *)v20;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v19->MaximumLength + 1) = 0;
      *a4 = *v19;
    }
  }
  else
  {
    IconInfo = 0;
  }
  if ( !v23[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v23);
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return IconInfo;
}
