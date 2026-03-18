/*
 * XREFs of NtUserGetRawInputBuffer @ 0x1C0214720
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidData @ 0x1C000A1B0 (FreeHidData.c)
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ClearWakeBit @ 0x1C010E3F0 (ClearWakeBit.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01BF2EC (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetRawInputBuffer(char *a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rax
  unsigned int v11; // ebx
  __int64 *v12; // r14
  __int64 v13; // rsi
  _QWORD *v14; // r10
  unsigned int *v15; // r11
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // r14
  __int64 v19; // rdx
  EnterLeaveCrit *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-A8h]
  unsigned int v23; // [rsp+24h] [rbp-A4h]
  unsigned int v24; // [rsp+30h] [rbp-98h]
  __int64 v25; // [rsp+48h] [rbp-80h]
  __int64 *v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  _BYTE v28[88]; // [rsp+70h] [rbp-58h] BYREF

  v23 = 0;
  v5 = 0;
  v22 = 0;
  v6 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  if ( a3 != 24 )
  {
    UserSetLastError(87LL);
    goto LABEL_31;
  }
  v10 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v10 = (unsigned int *)W32UserProbeAddress;
  v11 = *v10;
  v24 = *v10;
  v12 = *(__int64 **)(gptiCurrent + 384LL);
  v26 = v12;
  v13 = *v12;
  v14 = (_QWORD *)0xFFFFF78000000320LL;
  v15 = (unsigned int *)0xFFFFF78000000004LL;
  while ( 1 )
  {
    if ( !v13 )
    {
      v18 = a1;
      goto LABEL_19;
    }
    v16 = *(_QWORD *)v13;
    v27 = *(_QWORD *)v13;
    if ( *(_DWORD *)(v13 + 24) == 255 )
      break;
LABEL_16:
    v13 = v16;
  }
  LOBYTE(v7) = 18;
  v17 = HMValidateHandle(*(_QWORD *)(v13 + 40), v7, v8, v9);
  v25 = v17;
  if ( !v17 )
  {
LABEL_13:
    *(_DWORD *)(gptiCurrent + 492LL) = *(_DWORD *)(v13 + 48);
    if ( v12[6] == v13 )
      v12[6] = 0LL;
    DelQEntry(v12, v13);
    EtwTraceInputProcessDelay(gptiCurrent);
    v14 = (_QWORD *)0xFFFFF78000000320LL;
    v15 = (unsigned int *)0xFFFFF78000000004LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 368LL) = (MEMORY[0xFFFFF78000000320]
                                                           * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v11 = v24;
    v16 = v27;
    goto LABEL_16;
  }
  v5 = (*(_DWORD *)(v17 + 36) + 7) & 0xFFFFFFF8;
  if ( v5 + v23 <= v23 )
    goto LABEL_31;
  v18 = a1;
  if ( a1 && v5 + v23 <= v11 )
  {
    ProbeForWrite(a1, v5, 4u);
    memmove(a1, (const void *)(v25 + 32), *(unsigned int *)(v25 + 36));
    ++v22;
    a1 += v5;
    v23 += v5;
    FreeHidData(v25);
    v12 = v26;
    goto LABEL_13;
  }
  v15 = (unsigned int *)0xFFFFF78000000004LL;
  v14 = (_QWORD *)0xFFFFF78000000320LL;
LABEL_19:
  if ( !v13 && v18 )
    ClearWakeBit(gptiCurrent, 1024, 0);
  if ( v11 <= v5 )
  {
    if ( !v18 )
      goto LABEL_26;
    UserSetLastError(122LL);
  }
  else
  {
    if ( v18 )
    {
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
        (*v14 * (unsigned __int64)*v15) >> 24);
      v6 = v22;
      goto LABEL_31;
    }
LABEL_26:
    v6 = 0;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (unsigned int *)W32UserProbeAddress;
  *a2 = v5;
LABEL_31:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  EnterLeaveCrit::~EnterLeaveCrit(v20, v19);
  return v6;
}
