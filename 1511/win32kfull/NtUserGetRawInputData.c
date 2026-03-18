/*
 * XREFs of NtUserGetRawInputData @ 0x1C00039F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputData(__int64 a1, int a2, _QWORD *a3, unsigned int *a4, int a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rax
  _QWORD *v13; // r12
  unsigned int *v14; // rax
  int v15; // esi
  _BYTE v17[64]; // [rsp+50h] [rbp-58h] BYREF

  v9 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  v11 = 24;
  if ( a5 != 24 )
    goto LABEL_21;
  LOBYTE(v10) = 18;
  v12 = HMValidateHandle(a1, v10);
  if ( !v12 || (v13 = (_QWORD *)(v12 + 32), *(_DWORD *)(v12 + 32) > 2u) )
  {
    UserSetLastError(6LL);
    v9 = -1;
    goto LABEL_17;
  }
  if ( a2 == 268435459 )
  {
    v11 = *(_DWORD *)(v12 + 36);
    goto LABEL_6;
  }
  if ( a2 != 268435461 )
  {
LABEL_21:
    v9 = -1;
    UserSetLastError(87LL);
    goto LABEL_17;
  }
LABEL_6:
  if ( a3 )
  {
    v14 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v14 = (unsigned int *)W32UserProbeAddress;
    if ( *v14 < v11 )
    {
      v9 = -1;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      *a4 = *v14;
      UserSetLastError(122LL);
    }
    else
    {
      v15 = a2 - 268435459;
      if ( v15 )
      {
        if ( v15 == 2 )
        {
          if ( (unsigned __int64)a3 >= W32UserProbeAddress )
            a3 = (_QWORD *)W32UserProbeAddress;
          *(_OWORD *)a3 = *(_OWORD *)v13;
          a3[2] = v13[2];
        }
      }
      else
      {
        ProbeForWrite(a3, v11, 4u);
        memmove(a3, v13, v11);
      }
      v9 = v11;
    }
  }
  else
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v11;
  }
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit();
  return v9;
}
