/*
 * XREFs of SfnOUTSTRING @ 0x1C0090A30
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0090FDC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00910A4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnOUTSTRING(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // r15
  __int64 v10; // r12
  unsigned int v11; // eax
  unsigned __int64 v12; // r14
  ULONG_PTR v13; // rsi
  __int64 v14; // rax
  unsigned int *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int *v18; // rax
  unsigned __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rbx
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // xmm1_8
  struct _LARGE_STRING *v32; // rsi
  PVOID *v33; // rdx
  __int64 *v34; // rax
  _BYTE *v36; // rax
  unsigned int v37; // [rsp+30h] [rbp-398h]
  int v38; // [rsp+34h] [rbp-394h]
  int v39; // [rsp+38h] [rbp-390h]
  unsigned int v40[2]; // [rsp+40h] [rbp-388h]
  __int64 v41; // [rsp+48h] [rbp-380h]
  _DWORD v43[5]; // [rsp+54h] [rbp-374h] BYREF
  struct _LARGE_STRING *v44; // [rsp+68h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-358h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-350h] BYREF
  _BYTE *v47; // [rsp+80h] [rbp-348h]
  __int64 v48; // [rsp+88h] [rbp-340h] BYREF
  unsigned int *v49; // [rsp+90h] [rbp-338h]
  void (__fastcall *v50)(unsigned int *); // [rsp+98h] [rbp-330h]
  ULONG_PTR v51; // [rsp+A8h] [rbp-320h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-318h]
  __int64 v53; // [rsp+C0h] [rbp-308h]
  __int128 v54; // [rsp+C8h] [rbp-300h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-2F0h]
  _QWORD v56[3]; // [rsp+108h] [rbp-2C0h] BYREF
  _BYTE v57[96]; // [rsp+120h] [rbp-2A8h] BYREF
  _BYTE v58[512]; // [rsp+180h] [rbp-248h] BYREF

  v44 = (struct _LARGE_STRING *)a4;
  *(_QWORD *)v40 = a3;
  v38 = a7 & 1;
  v9 = 0LL;
  v39 = 0;
  v47 = v57;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  v11 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v12 = v11 + 2;
  if ( (unsigned int)v12 < v11 )
    goto LABEL_75;
  v37 = v11 + 2;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000000) == 0 && *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v12 *= 2LL;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_75;
    v37 = v12;
  }
  v13 = ((unsigned int)v12 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v13;
  if ( v13 > 0x800 )
  {
    v14 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v15 = (unsigned int *)v14;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v14 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v18 = (unsigned int *)*((_QWORD *)v15 + 4);
        goto LABEL_10;
      }
      Win32FreePool(v15, v16, v17);
    }
    return 0LL;
  }
  if ( v13 + 104 > 0x200 )
  {
    v15 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v13 + 104), 1667461973LL);
    if ( !v15 )
      return 0LL;
  }
  else
  {
    v15 = (unsigned int *)v58;
    memset(v58, 0, sizeof(v58));
  }
  v18 = v15 + 26;
  *((_QWORD *)v15 + 4) = 0LL;
LABEL_10:
  *v15 = 104;
  *((_QWORD *)v15 + 2) = v18;
  v15[1] = RegionSize;
  v15[2] = 0;
  v15[6] = 96;
  v47 = v15;
  if ( v15 != (unsigned int *)v57 && v15 != (unsigned int *)v58 )
  {
    v12 = 0LL;
    ThreadWin32Thread = (unsigned __int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v16, v17, a4);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    v48 = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(v12 + 16) = &v48;
    v49 = v15;
    v50 = (void (__fastcall *)(unsigned int *))Win32FreePool;
    LODWORD(v12) = v37;
  }
  *((_QWORD *)v15 + 5) = v10;
  v15[12] = a2;
  if ( (a7 & 1) == 0 )
    goto LABEL_16;
  if ( *((int *)v44 + 1) >= 0 )
  {
    *((_QWORD *)v15 + 7) = 2LL * *(_QWORD *)v40;
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x8000000u;
    v39 = 1;
    goto LABEL_18;
  }
  if ( (a7 & 1) == 0 )
  {
LABEL_16:
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000000) != 0 )
    {
      *((_QWORD *)v15 + 7) = *(_QWORD *)v40 >> 1;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000000u;
      goto LABEL_18;
    }
  }
  *((_QWORD *)v15 + 7) = *(_QWORD *)v40;
LABEL_18:
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  a3 = v15 + 20;
  if ( (unsigned int)v12 <= v15[1] )
  {
    v20 = *((_QWORD *)v15 + 2);
    *((_QWORD *)v15 + 2) = v13 + v20;
    if ( *((_QWORD *)v15 + 4) )
    {
      *a3 = v20;
    }
    else
    {
      *a3 = v20 - (_QWORD)v15;
      *(unsigned int *)((char *)&v15[v15[2]++] + v15[6]) = 80;
    }
    v15[22] = v12;
    v56[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v56;
    v56[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v21 = *(_QWORD *)(gptiCurrent + 432LL);
    v52 = *(_OWORD *)(v21 + 64);
    v53 = *(_QWORD *)(v21 + 80);
    *(_QWORD *)(v21 + 72) = v10;
    if ( a1 )
      v22 = *a1;
    else
      v22 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v22;
    if ( a1 )
      v23 = a1[33];
    else
      v23 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v23;
    if ( gdwInAtomicOperation )
    {
      v23 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v23, gdwInAtomicOperation);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v15 + 2) = 0LL;
    v24 = KeUserModeCallback(35LL, v15, *v15, &v46, v43);
    EtwTraceEndCallback(35LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v26, v25);
    v27 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v27 + 64) = v52;
    *(_QWORD *)(v27 + 80) = v53;
    if ( v24 >= 0 && v43[0] == 24 )
    {
      v28 = (__int64 *)v46;
      if ( v46 + 8 < v46 || v46 + 8 > W32UserProbeAddress )
        v28 = (__int64 *)W32UserProbeAddress;
      v29 = *v28;
      v41 = v29;
      if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      {
        if ( v29 )
        {
          v30 = v46;
          if ( v46 + 24 < v46 || v46 + 24 > W32UserProbeAddress )
            v30 = W32UserProbeAddress;
          v31 = *(_QWORD *)(v30 + 16);
          v54 = *(_OWORD *)v30;
          v55 = v31;
          v32 = v44;
          v29 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v54, v29, *((_DWORD *)v44 + 1) >> 31, v38);
          v41 = v29;
          CopyOutputString((struct _CALLBACKSTATUS *)&v54, v32, v40[0], v38);
        }
        else if ( *(_QWORD *)v40 )
        {
          v36 = (_BYTE *)*((_QWORD *)v44 + 1);
          if ( *((int *)v44 + 1) < 0 )
            *v36 = 0;
          else
            *(_WORD *)v36 = 0;
        }
      }
      goto LABEL_43;
    }
  }
LABEL_75:
  v29 = 0LL;
  v41 = 0LL;
LABEL_43:
  if ( v47 != v57 && v47 != v58 )
  {
    v33 = (PVOID *)(v47 + 32);
    if ( *((_QWORD *)v47 + 4) )
    {
      v51 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, &v51, 0x8000u);
    }
    v34 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v33, a3, a4);
    if ( v34 )
      v9 = *v34;
    *(_QWORD *)(v9 + 16) = v48;
    v50(v49);
    v29 = v41;
  }
  if ( v39 )
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000000u;
  return v29;
}
