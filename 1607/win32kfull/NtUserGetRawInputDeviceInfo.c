/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C0124FC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v8; // ebx
  unsigned int *v9; // rax
  SIZE_T v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // r14d
  int v18; // r12d
  int v19; // r12d
  unsigned int *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rcx
  _BYTE v25[48]; // [rsp+60h] [rbp-48h] BYREF

  v8 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  v9 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v9 = (unsigned int *)W32UserProbeAddress;
  v10 = *v9;
  EnterDeviceInfoListCrit_(W32UserProbeAddress);
  LOBYTE(v11) = 19;
  v15 = HMValidateHandle(a1, v11, v12, v13);
  v16 = 0LL;
  if ( !v15 )
  {
    v24 = 6LL;
    goto LABEL_38;
  }
  if ( a2 != 536870917 )
  {
    if ( a2 == 536870919 )
    {
      v17 = (*(unsigned __int16 *)(v15 + 208) >> 1) + 1;
      goto LABEL_7;
    }
    if ( a2 == 536870923 )
    {
      v17 = 32;
      goto LABEL_7;
    }
    v24 = 87LL;
LABEL_38:
    UserSetLastError(v24);
    goto LABEL_30;
  }
  if ( *(_BYTE *)(v15 + 48) == 2 )
    v17 = *(_DWORD *)(*(_QWORD *)(v15 + 464) + 104LL);
  else
    v17 = 0;
LABEL_7:
  if ( a3 )
  {
    if ( (unsigned int)v10 < v17 )
    {
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      *a4 = v17;
      UserSetLastError(122LL);
    }
    else
    {
      ProbeForWrite(a3, v10, 4u);
      v18 = a2 - 536870917;
      if ( !v18 )
      {
        if ( *(_BYTE *)(v15 + 48) == 2 )
          memmove(a3, *(const void **)(*(_QWORD *)(v15 + 464) + 16LL), v17);
        goto LABEL_29;
      }
      v19 = v18 - 2;
      if ( !v19 )
      {
        if ( v17 <= 2 )
          goto LABEL_30;
        memmove(a3, *(const void **)(v15 + 216), *(unsigned __int16 *)(v15 + 208));
        *((_WORD *)a3 + 1) = 92;
        v14 = v17 - 1;
        *((_WORD *)a3 + v14) = 0;
        goto LABEL_29;
      }
      if ( v19 != 4 )
      {
LABEL_29:
        v8 = v17;
        goto LABEL_30;
      }
      if ( (_DWORD)v10 == v17 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = a3;
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          v20 = (unsigned int *)W32UserProbeAddress;
        *(_BYTE *)v20 = *(_BYTE *)v20;
        *((_BYTE *)v20 + 31) = *((_BYTE *)v20 + 31);
        memset(a3, 0, 0x20uLL);
        *a3 = v17;
        v14 = *(unsigned __int8 *)(v15 + 48);
        if ( *(_BYTE *)(v15 + 48) )
        {
          v14 = (unsigned int)(v14 - 1);
          if ( (_DWORD)v14 )
          {
            if ( (_DWORD)v14 == 1 )
            {
              a3[1] = 2;
              a3[2] = *(unsigned __int16 *)(*(_QWORD *)(v15 + 464) + 110LL);
              a3[3] = *(unsigned __int16 *)(*(_QWORD *)(v15 + 464) + 112LL);
              a3[4] = *(unsigned __int16 *)(*(_QWORD *)(v15 + 464) + 114LL);
              *((_WORD *)a3 + 10) = *(_WORD *)(*(_QWORD *)(v15 + 464) + 42LL);
              v14 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 464) + 40LL);
              *((_WORD *)a3 + 11) = v14;
            }
          }
          else
          {
            a3[1] = 1;
            a3[2] = *(_DWORD *)(v15 + 492);
            a3[3] = *(_DWORD *)(v15 + 496);
            a3[4] = *(unsigned __int16 *)(v15 + 466);
            a3[5] = *(unsigned __int16 *)(v15 + 468);
            a3[6] = *(unsigned __int16 *)(v15 + 470);
            a3[7] = *(unsigned __int16 *)(v15 + 472);
          }
        }
        else
        {
          a3[1] = 0;
          a3[2] = *(_WORD *)(v15 + 464) & 0x7FFF;
          a3[3] = *(unsigned __int16 *)(v15 + 466);
          a3[4] = *(unsigned __int16 *)(v15 + 468);
          a3[5] = *(unsigned __int16 *)(v15 + 464) >> 15;
        }
        goto LABEL_29;
      }
      UserSetLastError(87LL);
    }
  }
  else
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v17;
    v8 = 0;
  }
LABEL_30:
  LeaveDeviceInfoListCrit_(v14, v16);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  UserSessionSwitchLeaveCrit(v22, v21);
  return v8;
}
