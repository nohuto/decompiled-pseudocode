/*
 * XREFs of SfnOUTSTRING @ 0x1C0122820
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0122E0C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0122F00 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnOUTSTRING(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // r13
  unsigned int v10; // eax
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  unsigned int *v14; // rdi
  unsigned int **v15; // r12
  __int64 v16; // rdx
  unsigned int *v17; // rax
  unsigned __int64 *ThreadWin32Thread; // rax
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rdi
  unsigned __int64 v32; // rcx
  __int64 v33; // xmm1_8
  struct _LARGE_STRING *v34; // rsi
  _WORD *v35; // rax
  __int64 v36; // rdi
  __int64 *v37; // rax
  int v38; // [rsp+30h] [rbp-378h]
  int v39; // [rsp+34h] [rbp-374h]
  unsigned int v40; // [rsp+38h] [rbp-370h]
  int v42; // [rsp+48h] [rbp-360h] BYREF
  struct _LARGE_STRING *v43; // [rsp+50h] [rbp-358h]
  __int64 v44; // [rsp+58h] [rbp-350h]
  unsigned int v45; // [rsp+60h] [rbp-348h]
  __int64 v46; // [rsp+68h] [rbp-340h]
  PVOID *v47; // [rsp+70h] [rbp-338h]
  unsigned __int64 v48; // [rsp+78h] [rbp-330h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-328h] BYREF
  _QWORD v50[3]; // [rsp+88h] [rbp-320h] BYREF
  ULONG_PTR v51[2]; // [rsp+A0h] [rbp-308h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-2F8h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-2E8h]
  _QWORD v54[6]; // [rsp+D0h] [rbp-2D8h] BYREF
  _BYTE v55[96]; // [rsp+100h] [rbp-2A8h] BYREF
  _BYTE v56[512]; // [rsp+160h] [rbp-248h] BYREF

  v43 = (struct _LARGE_STRING *)a4;
  v45 = a2;
  v38 = a7 & 1;
  v39 = 0;
  v47 = (PVOID *)v55;
  v46 = gptiCurrent;
  if ( a1 )
    v9 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v9 = 0LL;
  v10 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v11 = v10 + 2;
  if ( (unsigned int)v11 < v10 )
    goto LABEL_59;
  v40 = v10 + 2;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000000) == 0 && *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v11 *= 2LL;
    if ( v11 > 0xFFFFFFFF )
      goto LABEL_59;
    v40 = v11;
  }
  v12 = ((unsigned int)v11 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v12;
  if ( v12 <= 0x800 )
  {
    if ( v12 + 104 <= 0x200 )
    {
      v14 = (unsigned int *)v56;
      memset(v56, 0, sizeof(v56));
    }
    else
    {
      v14 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v12 + 104), 1667461973LL);
      if ( !v14 )
        return 0LL;
    }
    v17 = v14 + 26;
    v15 = (unsigned int **)(v14 + 8);
    *((_QWORD *)v14 + 4) = 0LL;
  }
  else
  {
    v13 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v14 = (unsigned int *)v13;
    if ( !v13 )
      return 0LL;
    v15 = (unsigned int **)(v13 + 32);
    *(_QWORD *)(v13 + 32) = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      Win32FreePool(v14);
      return 0LL;
    }
    v17 = *v15;
  }
  *v14 = 104;
  *((_QWORD *)v14 + 2) = v17;
  v14[1] = RegionSize;
  v14[2] = 0;
  v14[6] = 96;
  v47 = (PVOID *)v14;
  if ( v14 != (unsigned int *)v55 && v14 != (unsigned int *)v56 )
  {
    v11 = 0LL;
    ThreadWin32Thread = (unsigned __int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
    v50[0] = *(_QWORD *)(v11 + 16);
    *(_QWORD *)(v11 + 16) = v50;
    v50[1] = v14;
    v50[2] = Win32FreePool;
    LODWORD(v11) = v40;
  }
  *((_QWORD *)v14 + 5) = v9;
  v14[12] = v45;
  if ( (a7 & 1) == 0 )
  {
    v16 = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000000) != 0 )
    {
      *((_QWORD *)v14 + 7) = a3 >> 1;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000000u;
      goto LABEL_32;
    }
LABEL_31:
    *((_QWORD *)v14 + 7) = a3;
    goto LABEL_32;
  }
  if ( *((int *)v43 + 1) < 0 )
    goto LABEL_31;
  *((_QWORD *)v14 + 7) = 2 * a3;
  *(_DWORD *)(gptiCurrent + 440LL) |= 0x8000000u;
  v39 = 1;
LABEL_32:
  *((_QWORD *)v14 + 8) = a5;
  *((_QWORD *)v14 + 9) = a6;
  v20 = v14 + 20;
  if ( (unsigned int)v11 <= v14[1] )
  {
    v21 = *((_QWORD *)v14 + 2);
    *((_QWORD *)v14 + 2) = v12 + v21;
    if ( *v15 )
    {
      *v20 = v21;
    }
    else
    {
      *v20 = v21 - (_QWORD)v14;
      v16 = v14[2];
      *(unsigned int *)((char *)&v14[v16] + v14[6]) = 80;
      ++v14[2];
    }
    v14[22] = v11;
    v54[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v54;
    v54[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v22 = v46;
    v23 = *(_QWORD *)(v46 + 432);
    *(_OWORD *)v51 = *(_OWORD *)(v23 + 64);
    v46 = *(_QWORD *)(v23 + 80);
    *(_QWORD *)(v23 + 72) = v9;
    v24 = 0LL;
    if ( a1 )
      v24 = *a1;
    *(_QWORD *)(*(_QWORD *)(v22 + 432) + 64LL) = v24;
    v25 = 0LL;
    if ( a1 )
      v25 = a1[33];
    *(_QWORD *)(*(_QWORD *)(v22 + 432) + 80LL) = v25;
    UserSessionSwitchLeaveCrit(v25, v16);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v26 = KeUserModeCallback(35LL, v14, *v14, &v48, &v42);
    EtwTraceEndCallback(35LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v28, v27);
    v29 = *(_QWORD *)(v22 + 432);
    *(_OWORD *)(v29 + 64) = *(_OWORD *)v51;
    *(_QWORD *)(v29 + 80) = v46;
    if ( v26 >= 0 && v42 == 24 )
    {
      v30 = (__int64 *)v48;
      if ( v48 + 8 < v48 || v48 + 8 > W32UserProbeAddress )
        v30 = (__int64 *)W32UserProbeAddress;
      v31 = *v30;
      v44 = v31;
      if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      {
        if ( v31 )
        {
          v32 = v48;
          if ( v48 + 24 < v48 || v48 + 24 > W32UserProbeAddress )
            v32 = W32UserProbeAddress;
          v33 = *(_QWORD *)(v32 + 16);
          v52 = *(_OWORD *)v32;
          v53 = v33;
          v34 = v43;
          v31 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v52, v31, *((_DWORD *)v43 + 1) >> 31, v38);
          v44 = v31;
          CopyOutputString((struct _CALLBACKSTATUS *)&v52, v34, a3, v38);
        }
        else if ( a3 )
        {
          v35 = (_WORD *)*((_QWORD *)v43 + 1);
          if ( *((int *)v43 + 1) >= 0 )
            *v35 = 0;
          else
            *(_BYTE *)v35 = 0;
        }
      }
      goto LABEL_60;
    }
  }
LABEL_59:
  v31 = 0LL;
  v44 = 0LL;
LABEL_60:
  if ( v47 != (PVOID *)v55 && v47 != (PVOID *)v56 )
  {
    if ( v47[4] )
    {
      v51[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v47 + 4, v51, 0x8000u);
    }
    v36 = 0LL;
    v37 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v37 )
      v36 = *v37;
    *(_QWORD *)(v36 + 16) = v50[0];
    _guard_dispatch_icall_fptr();
    v31 = v44;
  }
  if ( v39 )
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000000u;
  return v31;
}
