/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C021B860
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C00076D0 (FreeHidData.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ClearWakeBit @ 0x1C00643C0 (ClearWakeBit.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  unsigned int *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r14
  _QWORD *v10; // r10
  unsigned int *v11; // r11
  __int64 v12; // rsi
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-A8h]
  unsigned int v19; // [rsp+24h] [rbp-A4h]
  unsigned int v20; // [rsp+28h] [rbp-A0h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  __int64 *v22; // [rsp+58h] [rbp-70h]
  _BYTE v23[16]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v24; // [rsp+70h] [rbp-58h]

  v19 = 0;
  v5 = 0;
  v18 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  if ( a3 != 24 )
  {
    UserSetLastError(87);
    goto LABEL_29;
  }
  v7 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v7 = (unsigned int *)W32UserProbeAddress;
  v8 = *v7;
  v20 = *v7;
  v22 = *(__int64 **)(gptiCurrent + 384LL);
  v9 = *v22;
  v10 = (_QWORD *)0xFFFFF78000000320LL;
  v11 = (unsigned int *)0xFFFFF78000000004LL;
  while ( 1 )
  {
    if ( !v9 )
    {
      v14 = a1;
      goto LABEL_17;
    }
    v12 = *(_QWORD *)v9;
    v24 = *(_QWORD *)v9;
    if ( *(_DWORD *)(v9 + 24) == 255 )
      break;
LABEL_14:
    v9 = v12;
  }
  v13 = HMValidateHandle(*(_QWORD *)(v9 + 40), 18);
  v21 = v13;
  if ( !v13 )
  {
LABEL_13:
    *(_DWORD *)(gptiCurrent + 492LL) = *(_DWORD *)(v9 + 48);
    DelQEntry((__int64)v22, (__int64 *)v9, 1);
    EtwTraceInputProcessDelay(gptiCurrent);
    v10 = (_QWORD *)0xFFFFF78000000320LL;
    v11 = (unsigned int *)0xFFFFF78000000004LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 360LL) = (MEMORY[0xFFFFF78000000320]
                                                           * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v8 = v20;
    goto LABEL_14;
  }
  v5 = (*(_DWORD *)(v13 + 36) + 7) & 0xFFFFFFF8;
  if ( v5 + v19 <= v19 )
    goto LABEL_29;
  v14 = a1;
  if ( a1 && v5 + v19 <= v8 )
  {
    ProbeForWrite(a1, v5, 4u);
    memmove(a1, (const void *)(v21 + 32), *(unsigned int *)(v21 + 36));
    ++v18;
    a1 += v5;
    v19 += v5;
    FreeHidData(v21);
    v12 = v24;
    goto LABEL_13;
  }
  v11 = (unsigned int *)0xFFFFF78000000004LL;
  v10 = (_QWORD *)0xFFFFF78000000320LL;
LABEL_17:
  if ( !v9 && v14 )
    ClearWakeBit(gptiCurrent, 1024, 0);
  if ( v8 <= v5 )
  {
    if ( !v14 )
      goto LABEL_24;
    UserSetLastError(122);
  }
  else
  {
    if ( v14 )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
        (*v10 * (unsigned __int64)*v11) >> 24);
      v6 = v18;
      goto LABEL_29;
    }
LABEL_24:
    v6 = 0;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  *a2 = v5;
LABEL_29:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v16, v15);
  return v6;
}
