/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C01275A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v8; // ebx
  unsigned int *v9; // rax
  SIZE_T v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // r14d
  int v14; // r12d
  int v15; // r12d
  unsigned int *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // ecx
  _BYTE v21[20]; // [rsp+50h] [rbp-58h] BYREF
  int v22; // [rsp+64h] [rbp-44h]

  v8 = -1;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  v9 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v9 = (unsigned int *)W32UserProbeAddress;
  v10 = *v9;
  v22 = *v9;
  EnterDeviceInfoListCrit_(W32UserProbeAddress);
  v12 = HMValidateHandle(a1, 19);
  if ( !v12 )
  {
    v20 = 6;
    goto LABEL_38;
  }
  if ( a2 != 536870917 )
  {
    if ( a2 == 536870919 )
    {
      v13 = (*(unsigned __int16 *)(v12 + 208) >> 1) + 1;
      goto LABEL_7;
    }
    if ( a2 == 536870923 )
    {
      v13 = 32;
      goto LABEL_7;
    }
    v20 = 87;
LABEL_38:
    UserSetLastError(v20);
    goto LABEL_30;
  }
  if ( *(_BYTE *)(v12 + 48) == 2 )
    v13 = *(_DWORD *)(*(_QWORD *)(v12 + 400) + 104LL);
  else
    v13 = 0;
LABEL_7:
  if ( a3 )
  {
    if ( (unsigned int)v10 < v13 )
    {
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      *a4 = v13;
      UserSetLastError(122);
    }
    else
    {
      ProbeForWrite(a3, v10, 4u);
      v14 = a2 - 536870917;
      if ( !v14 )
      {
        if ( *(_BYTE *)(v12 + 48) == 2 )
          memmove(a3, *(const void **)(*(_QWORD *)(v12 + 400) + 16LL), v13);
        goto LABEL_29;
      }
      v15 = v14 - 2;
      if ( !v15 )
      {
        if ( v13 <= 2 )
          goto LABEL_30;
        memmove(a3, *(const void **)(v12 + 216), *(unsigned __int16 *)(v12 + 208));
        *((_WORD *)a3 + 1) = 92;
        v11 = v13 - 1;
        *((_WORD *)a3 + v11) = 0;
        goto LABEL_29;
      }
      if ( v15 != 4 )
      {
LABEL_29:
        v8 = v13;
        goto LABEL_30;
      }
      if ( (_DWORD)v10 == v13 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = a3;
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          v16 = (unsigned int *)W32UserProbeAddress;
        *(_BYTE *)v16 = *(_BYTE *)v16;
        *((_BYTE *)v16 + 31) = *((_BYTE *)v16 + 31);
        memset(a3, 0, 0x20uLL);
        *a3 = v13;
        v11 = *(unsigned __int8 *)(v12 + 48);
        if ( *(_BYTE *)(v12 + 48) )
        {
          v11 = (unsigned int)(v11 - 1);
          if ( (_DWORD)v11 )
          {
            if ( (_DWORD)v11 == 1 )
            {
              a3[1] = 2;
              a3[2] = *(unsigned __int16 *)(*(_QWORD *)(v12 + 400) + 110LL);
              a3[3] = *(unsigned __int16 *)(*(_QWORD *)(v12 + 400) + 112LL);
              a3[4] = *(unsigned __int16 *)(*(_QWORD *)(v12 + 400) + 114LL);
              *((_WORD *)a3 + 10) = *(_WORD *)(*(_QWORD *)(v12 + 400) + 42LL);
              v11 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 400) + 40LL);
              *((_WORD *)a3 + 11) = v11;
            }
          }
          else
          {
            a3[1] = 1;
            a3[2] = *(_DWORD *)(v12 + 428);
            a3[3] = *(_DWORD *)(v12 + 432);
            a3[4] = *(unsigned __int16 *)(v12 + 402);
            a3[5] = *(unsigned __int16 *)(v12 + 404);
            a3[6] = *(unsigned __int16 *)(v12 + 406);
            a3[7] = *(unsigned __int16 *)(v12 + 408);
          }
        }
        else
        {
          a3[1] = 0;
          a3[2] = *(_WORD *)(v12 + 400) & 0x7FFF;
          a3[3] = *(unsigned __int16 *)(v12 + 402);
          a3[4] = *(unsigned __int16 *)(v12 + 404);
          a3[5] = *(unsigned __int16 *)(v12 + 400) >> 15;
        }
        goto LABEL_29;
      }
      UserSetLastError(87);
    }
  }
  else
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v13;
    v8 = 0;
  }
LABEL_30:
  LeaveDeviceInfoListCrit_(v11);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  UserSessionSwitchLeaveCrit(v18, v17);
  return v8;
}
