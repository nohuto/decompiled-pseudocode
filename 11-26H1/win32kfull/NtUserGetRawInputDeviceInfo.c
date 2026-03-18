/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x140028870
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, _WORD *a3, __int64 a4)
{
  unsigned int ULongFromUser; // eax
  SIZE_T v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  _OWORD *v16; // rax
  int v17; // ecx
  unsigned int v18; // ebx
  _OWORD *v19; // rax
  int v21; // ecx
  volatile void *v22; // [rsp+20h] [rbp-78h] BYREF
  int v23; // [rsp+28h] [rbp-70h]
  unsigned int v24; // [rsp+2Ch] [rbp-6Ch]
  _BYTE v25[8]; // [rsp+70h] [rbp-28h] BYREF
  __int64 v26; // [rsp+78h] [rbp-20h]

  v24 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v22, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  ULongFromUser = RtlReadULongFromUser(a4);
  v8 = ULongFromUser;
  v24 = ULongFromUser;
  LOBYTE(v9) = 19;
  v10 = HMValidateHandleWithDescriptor(a1, v9);
  if ( !v10 )
  {
    v21 = 6;
LABEL_34:
    UserSetLastError(v21);
    v18 = -1;
    goto LABEL_29;
  }
  switch ( a2 )
  {
    case 536870917:
      if ( *(_DWORD *)(v10 + 48) == 2 )
        v11 = *(_DWORD *)(*(_QWORD *)(v10 + 440) + 104LL);
      else
        v11 = 0;
      break;
    case 536870919:
      v11 = (*(unsigned __int16 *)(v10 + 192) >> 1) + 1;
      break;
    case 536870923:
      v11 = 32;
      break;
    case 536870924:
      v11 = 44;
      break;
    default:
      v21 = 87;
      goto LABEL_34;
  }
  if ( a3 )
  {
    if ( (unsigned int)v8 >= v11 )
    {
      ProbeForWrite(a3, v8, 4u);
      v13 = a2 - 536870917;
      if ( !v13 )
      {
        if ( *(_DWORD *)(v10 + 48) == 2 )
          memmove(a3, *(const void **)(*(_QWORD *)(v10 + 440) + 16LL), v11);
        goto LABEL_28;
      }
      v14 = v13 - 2;
      if ( !v14 )
      {
        if ( v11 <= 2 )
        {
          v18 = -1;
          v23 = -1;
          goto LABEL_29;
        }
        memmove(a3, *(const void **)(v10 + 200), *(unsigned __int16 *)(v10 + 192));
        a3[1] = 92;
        a3[v11 - 1] = 0;
        goto LABEL_28;
      }
      v15 = v14 - 4;
      if ( !v15 )
      {
        v22 = a3;
        if ( (_DWORD)v8 == v11 )
        {
          ProbeForWrite(v22, 0x20uLL, 4u);
          v16 = v22;
          *(_OWORD *)v22 = 0LL;
          v16[1] = 0LL;
          *(_DWORD *)v22 = v11;
          v17 = *(_DWORD *)(v10 + 48);
          if ( v17 )
          {
            v12 = (unsigned int)(v17 - 1);
            if ( (_DWORD)v12 )
            {
              if ( (_DWORD)v12 == 1 )
              {
                *((_DWORD *)v22 + 1) = 2;
                *((_DWORD *)v22 + 2) = *(unsigned __int16 *)(*(_QWORD *)(v10 + 440) + 110LL);
                *((_DWORD *)v22 + 3) = *(unsigned __int16 *)(*(_QWORD *)(v10 + 440) + 112LL);
                *((_DWORD *)v22 + 4) = *(unsigned __int16 *)(*(_QWORD *)(v10 + 440) + 114LL);
                *((_WORD *)v22 + 10) = *(_WORD *)(*(_QWORD *)(v10 + 440) + 42LL);
                v12 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 440) + 40LL);
                *((_WORD *)v22 + 11) = v12;
              }
            }
            else
            {
              *((_DWORD *)v22 + 1) = 1;
              *((_DWORD *)v22 + 2) = *(_DWORD *)(v10 + 468);
              *((_DWORD *)v22 + 3) = *(_DWORD *)(v10 + 472);
              *((_DWORD *)v22 + 4) = *(unsigned __int16 *)(v10 + 442);
              *((_DWORD *)v22 + 5) = *(unsigned __int16 *)(v10 + 444);
              *((_DWORD *)v22 + 6) = *(unsigned __int16 *)(v10 + 446);
              v12 = *(unsigned __int16 *)(v10 + 448);
              *((_DWORD *)v22 + 7) = v12;
            }
          }
          else
          {
            *((_DWORD *)v22 + 1) = 0;
            *((_DWORD *)v22 + 2) = *(_WORD *)(v10 + 440) & 0x7FFF;
            *((_DWORD *)v22 + 3) = *(unsigned __int16 *)(v10 + 442);
            *((_DWORD *)v22 + 4) = *(unsigned __int16 *)(v10 + 444);
            v12 = *(unsigned __int16 *)(v10 + 440) >> 15;
            *((_DWORD *)v22 + 5) = v12;
          }
          goto LABEL_28;
        }
LABEL_21:
        v18 = -1;
        v23 = -1;
        UserSetLastError(87);
        goto LABEL_29;
      }
      if ( v15 == 1 )
      {
        v22 = a3;
        if ( (_DWORD)v8 != v11 )
          goto LABEL_21;
        ProbeForWrite(v22, 0x2CuLL, 4u);
        v19 = v22;
        *(_OWORD *)v22 = 0LL;
        v19[1] = 0LL;
        *((_QWORD *)v19 + 4) = 0LL;
        *((_DWORD *)v19 + 10) = 0;
        RIMFillDeviceHealthInfo(v22, v10);
      }
LABEL_28:
      v18 = v11;
      goto LABEL_29;
    }
    v18 = -1;
    RtlWriteULongToUser(a4, v11);
    UserSetLastError(122);
  }
  else
  {
    RtlWriteULongToUser(a4, v11);
    v18 = 0;
  }
LABEL_29:
  if ( v25[0] )
  {
    v12 = v26;
    --*(_DWORD *)(v26 + 28);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v18;
}
