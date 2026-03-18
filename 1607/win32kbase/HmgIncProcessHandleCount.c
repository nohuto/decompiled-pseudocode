/*
 * XREFs of HmgIncProcessHandleCount @ 0x1C0036580
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00C0400 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(__int64 a1, int a2, int a3)
{
  void *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 ProcessWin32Process; // rax
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  PEPROCESS Process; // [rsp+40h] [rbp+18h] BYREF

  v3 = (void *)(int)a1;
  v4 = 1;
  if ( (_DWORD)a1 && (_DWORD)a1 != -2147483630 )
  {
    GreAcquireHmgrSemaphore(a1, a2, a3);
    if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      v8 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v7 = *(unsigned int *)(CurrentProcessWin32Process + 60);
        if ( (int)v7 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v7 = (unsigned int)(v7 + 1);
          *(_DWORD *)(CurrentProcessWin32Process + 60) = v7;
          v9 = *(_DWORD *)(CurrentProcessWin32Process + 64);
          if ( (unsigned int)v7 > v9 )
            v9 = v7;
          *(_DWORD *)(v8 + 64) = v9;
        }
      }
    }
    else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process )
      {
        v12 = *(_DWORD *)(ProcessWin32Process + 60);
        if ( v12 < gProcessHandleQuota )
        {
          v13 = *(_DWORD *)(ProcessWin32Process + 64);
          v14 = v12 + 1;
          *(_DWORD *)(ProcessWin32Process + 60) = v14;
          if ( v14 > v13 )
            v13 = v14;
          *(_DWORD *)(ProcessWin32Process + 64) = v13;
        }
        else
        {
          v4 = 0;
        }
      }
      ObfDereferenceObject(Process);
    }
    GreReleaseHmgrSemaphore(v7);
  }
  return v4;
}
