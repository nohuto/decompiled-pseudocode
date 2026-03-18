/*
 * XREFs of GreSetupDCAttributes @ 0x1C0025D50
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005D79C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0088810 (--1DCOBJ@@QEAA@XZ.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00B5A24 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 __fastcall GreSetupDCAttributes(HDC a1)
{
  unsigned __int16 v1; // r14
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // rdx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  char *v17; // rcx
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // rdx
  char **v21; // rax
  char *v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF
  void *v28; // [rsp+58h] [rbp+10h] BYREF

  v1 = (unsigned __int16)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( v27[0] )
  {
    v5 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v3, v4);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    v8 = 0LL;
    if ( *(_QWORD *)(v5 + 24) )
    {
      v8 = *(_OWORD **)(v5 + 24);
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      GreAcquireHmgrSemaphore(v15, v14);
      if ( !*(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v22 = (char *)HmgAllocateSecureUserMemory(&v28);
        if ( v22 )
        {
          v23 = PALLOCMEM2(0x60uLL, 1717789767LL, 0);
          v16 = v23;
          if ( !v23 )
          {
            HmgFreeAllocateSecureUserMemory(v22, v28);
            GreReleaseHmgrSemaphore(v26, v25);
            goto LABEL_10;
          }
          v24 = *(_QWORD *)(CurrentProcessWin32Process + 192);
          *v23 = v24;
          v23[1] = CurrentProcessWin32Process + 192;
          if ( *(_QWORD *)(v24 + 8) != CurrentProcessWin32Process + 192 )
            __fastfail(3u);
          *(_QWORD *)(v24 + 8) = v23;
          *(_QWORD *)(CurrentProcessWin32Process + 192) = v23;
          *((_DWORD *)v23 + 4) = 9;
          v17 = v22 + 3328;
          *(_QWORD *)(CurrentProcessWin32Process + 40) = v22 + 3328;
          v23[3] = v22;
          v23[4] = v22 + 416;
          v23[5] = v22 + 832;
          v23[6] = v22 + 1248;
          v23[7] = v22 + 1664;
          v23[8] = v22 + 2080;
          v23[9] = v22 + 2496;
          v23[10] = v22 + 2912;
          v23[11] = v22 + 3328;
        }
      }
      if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v18 = CurrentProcessWin32Process + 192;
        v17 = *(char **)(CurrentProcessWin32Process + 192);
        v8 = *(_OWORD **)(CurrentProcessWin32Process + 40);
        v19 = *((_DWORD *)v17 + 4) - 1;
        *((_DWORD *)v17 + 4) = v19;
        if ( v19 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 40) = *(_QWORD *)&v17[8 * (v19 - 1) + 24];
        }
        else
        {
          v20 = *(_QWORD *)v17;
          v21 = (char **)*((_QWORD *)v17 + 1);
          if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 || *v21 != v17 )
            __fastfail(3u);
          *v21 = (char *)v20;
          *(_QWORD *)(v20 + 8) = v21;
          Win32FreePool();
          if ( *(_QWORD *)v18 == v18 )
          {
            *(_QWORD *)(CurrentProcessWin32Process + 40) = 0LL;
          }
          else
          {
            v17 = *(char **)(*(_QWORD *)v18 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v18 + 16LL) - 1) + 24);
            *(_QWORD *)(CurrentProcessWin32Process + 40) = v17;
          }
        }
      }
      GreReleaseHmgrSemaphore(v17, v16);
    }
    if ( v8 )
    {
      v9 = v27[0];
      *(_QWORD *)(v27[0] + 80LL) = v8;
      *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * v1 + 2) = v8;
      v10 = (_OWORD *)(v9 + 536);
      v11 = 3LL;
      do
      {
        *v8 = *v10;
        v8[1] = v10[1];
        v8[2] = v10[2];
        v8[3] = v10[3];
        v8[4] = v10[4];
        v8[5] = v10[5];
        v8[6] = v10[6];
        v8 += 8;
        *(v8 - 1) = v10[7];
        v10 += 8;
        --v11;
      }
      while ( v11 );
      *v8 = *v10;
      v8[1] = v10[1];
      v2 = 1;
    }
  }
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return v2;
}
