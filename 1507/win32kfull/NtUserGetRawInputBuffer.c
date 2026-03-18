/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C021BAA0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C0007460 (FreeHidData.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     ClearWakeBit @ 0x1C00EA55C (ClearWakeBit.c)
 *     LeaveEditionCrit @ 0x1C01573F0 (LeaveEditionCrit.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  unsigned int *v7; // rax
  unsigned int v8; // ebx
  __int64 *v9; // r14
  __int64 v10; // rsi
  _QWORD *v11; // r10
  unsigned int *v12; // r11
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-A8h]
  unsigned int v21; // [rsp+24h] [rbp-A4h]
  unsigned int v22; // [rsp+28h] [rbp-A0h]
  __int64 v23; // [rsp+48h] [rbp-80h]
  __int64 v24; // [rsp+58h] [rbp-70h]
  _BYTE v25[16]; // [rsp+60h] [rbp-68h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-58h]

  v21 = 0;
  v5 = 0;
  v20 = 0;
  v6 = -1;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  if ( a3 != 24 )
  {
    UserSetLastError(87);
    goto LABEL_31;
  }
  v7 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v7 = (unsigned int *)W32UserProbeAddress;
  v8 = *v7;
  v22 = *v7;
  v9 = *(__int64 **)(gptiCurrent + 392LL);
  v26 = v9;
  v10 = *v9;
  v11 = (_QWORD *)0xFFFFF78000000320LL;
  v12 = (unsigned int *)0xFFFFF78000000004LL;
  while ( 1 )
  {
    if ( !v10 )
    {
      v16 = a1;
      goto LABEL_19;
    }
    v13 = *(_QWORD *)v10;
    v24 = *(_QWORD *)v10;
    if ( *(_DWORD *)(v10 + 24) == 255 )
      break;
LABEL_16:
    v10 = v13;
  }
  v14 = HMValidateHandle(*(_QWORD *)(v10 + 40), 18);
  v23 = v14;
  if ( !v14 )
  {
LABEL_13:
    *(_DWORD *)(gptiCurrent + 500LL) = *(_DWORD *)(v10 + 48);
    if ( v9[5] == v10 )
      v9[5] = 0LL;
    DelQEntry((__int64)v9, (__int64 *)v10, 1LL, v15);
    EtwTraceInputProcessDelay(gptiCurrent);
    v11 = (_QWORD *)0xFFFFF78000000320LL;
    v12 = (unsigned int *)0xFFFFF78000000004LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 360LL) = (MEMORY[0xFFFFF78000000320]
                                                           * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v8 = v22;
    v13 = v24;
    goto LABEL_16;
  }
  v5 = (*(_DWORD *)(v14 + 36) + 7) & 0xFFFFFFF8;
  if ( v5 + v21 <= v21 )
    goto LABEL_31;
  v16 = a1;
  if ( a1 && v5 + v21 <= v8 )
  {
    ProbeForWrite(a1, v5, 4u);
    memmove(a1, (const void *)(v23 + 32), *(unsigned int *)(v23 + 36));
    ++v20;
    a1 += v5;
    v21 += v5;
    FreeHidData(v23);
    v9 = v26;
    goto LABEL_13;
  }
  v12 = (unsigned int *)0xFFFFF78000000004LL;
  v11 = (_QWORD *)0xFFFFF78000000320LL;
LABEL_19:
  if ( !v10 && v16 )
    ClearWakeBit(gptiCurrent, 1024, 0);
  if ( v8 <= v5 )
  {
    if ( !v16 )
      goto LABEL_26;
    UserSetLastError(122);
  }
  else
  {
    if ( v16 )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 408LL) + 12LL),
        (*v11 * (unsigned __int64)*v12) >> 24);
      v6 = v20;
      goto LABEL_31;
    }
LABEL_26:
    v6 = 0;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  *a2 = v5;
LABEL_31:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  LeaveEditionCrit(v18, v17);
  return v6;
}
