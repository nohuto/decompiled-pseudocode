/*
 * XREFs of AllocThreadBufferWithTag @ 0x1C006DB50
 * Callers:
 *     CaptureDriverInfo2W @ 0x1C0081530 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C00844E0 (CaptureDEVMODEW.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(unsigned int a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v5 = a1 + 32;
      if ( v5 > 0x400 && v5 + 4096 >= v5 )
        v5 = (v5 + 4095) & 0xFFFFF000;
      a1 = v5 - 32;
    }
    if ( a1 != -32 && (int)IsWin32AllocPoolImplSupported_0() >= 0 )
    {
      v6 = Win32AllocPoolImpl_0();
      v7 = (_QWORD *)v6;
      if ( v6 )
      {
        v4 = v6 + 32;
        KeEnterCriticalRegion();
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v8, v9);
        if ( ThreadWin32Thread )
          v3 = *ThreadWin32Thread;
        v7[2] = v4;
        v7[3] = FreeThreadBufferWithTag;
        if ( v3 )
        {
          v11 = *(_QWORD *)(v3 + 88);
          *v7 = v11;
          v7[1] = v3 + 88;
          if ( *(_QWORD *)(v11 + 8) != v3 + 88 )
            __fastfail(3u);
          *(_QWORD *)(v11 + 8) = v7;
          *(_QWORD *)(v3 + 88) = v7;
        }
        else
        {
          v7[1] = v7;
          *v7 = v7;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return v4;
}
