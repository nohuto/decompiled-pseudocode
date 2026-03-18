/*
 * XREFs of GreSetupDCAttributes @ 0x1C0042690
 * Callers:
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C000CAC8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00B2E04 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 __fastcall GreSetupDCAttributes(HDC a1)
{
  unsigned __int16 v1; // r14
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD *v9; // rbx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  char *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF
  void *v31; // [rsp+78h] [rbp+10h] BYREF

  v1 = (unsigned __int16)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v30, a1);
  if ( v30[0] )
  {
    v3 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    v9 = 0LL;
    if ( *(_QWORD *)(v3 + 24) )
    {
      v9 = *(_OWORD **)(v3 + 24);
      *(_QWORD *)(v3 + 24) = 0LL;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7, v8, v30[0], v30[1]);
      GreAcquireHmgrSemaphore(v15, v14, v16);
      if ( !*(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v24 = (char *)HmgAllocateSecureUserMemory(&v31);
        if ( v24 )
        {
          v25 = PALLOCMEM2(0x60uLL);
          v17 = v25;
          if ( !v25 )
          {
            HmgFreeAllocateSecureUserMemory(v24, v31);
            GreReleaseHmgrSemaphore(v28, v27, v29);
            goto LABEL_10;
          }
          v26 = *(_QWORD *)(CurrentProcessWin32Process + 192);
          *(_QWORD *)v25 = v26;
          *(_QWORD *)(v25 + 8) = CurrentProcessWin32Process + 192;
          if ( *(_QWORD *)(v26 + 8) != CurrentProcessWin32Process + 192 )
            __fastfail(3u);
          *(_QWORD *)(v26 + 8) = v25;
          *(_QWORD *)(CurrentProcessWin32Process + 192) = v25;
          *(_DWORD *)(v25 + 16) = 9;
          v18 = (__int64)(v24 + 3328);
          *(_QWORD *)(CurrentProcessWin32Process + 40) = v24 + 3328;
          *(_QWORD *)(v25 + 24) = v24;
          *(_QWORD *)(v25 + 32) = v24 + 416;
          *(_QWORD *)(v25 + 40) = v24 + 832;
          *(_QWORD *)(v25 + 48) = v24 + 1248;
          *(_QWORD *)(v25 + 56) = v24 + 1664;
          *(_QWORD *)(v25 + 64) = v24 + 2080;
          *(_QWORD *)(v25 + 72) = v24 + 2496;
          *(_QWORD *)(v25 + 80) = v24 + 2912;
          *(_QWORD *)(v25 + 88) = v24 + 3328;
        }
      }
      if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v20 = CurrentProcessWin32Process + 192;
        v18 = *(_QWORD *)(CurrentProcessWin32Process + 192);
        v9 = *(_OWORD **)(CurrentProcessWin32Process + 40);
        v21 = *(_DWORD *)(v18 + 16) - 1;
        *(_DWORD *)(v18 + 16) = v21;
        if ( v21 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 40) = *(_QWORD *)(v18 + 8LL * (unsigned int)(v21 - 1) + 24);
        }
        else
        {
          v22 = *(_QWORD *)v18;
          v23 = *(_QWORD **)(v18 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 || *v23 != v18 )
            __fastfail(3u);
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          Win32FreePool();
          if ( *(_QWORD *)v20 == v20 )
          {
            *(_QWORD *)(CurrentProcessWin32Process + 40) = 0LL;
          }
          else
          {
            v18 = *(_QWORD *)(*(_QWORD *)v20 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v20 + 16LL) - 1) + 24);
            *(_QWORD *)(CurrentProcessWin32Process + 40) = v18;
          }
        }
      }
      GreReleaseHmgrSemaphore(v18, v17, v19);
    }
    if ( v9 )
    {
      *(_QWORD *)(v30[0] + 80LL) = v9;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * v1 + 16) = v9;
      v10 = (_OWORD *)(v30[0] + 536LL);
      v11 = 3LL;
      do
      {
        *v9 = *v10;
        v9[1] = v10[1];
        v9[2] = v10[2];
        v9[3] = v10[3];
        v9[4] = v10[4];
        v9[5] = v10[5];
        v9[6] = v10[6];
        v9 += 8;
        *(v9 - 1) = v10[7];
        v10 += 8;
        --v11;
      }
      while ( v11 );
      *v9 = *v10;
      v9[1] = v10[1];
      v2 = 1;
    }
  }
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v30);
  return v2;
}
