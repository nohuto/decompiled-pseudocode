/*
 * XREFs of SetHandleFlag @ 0x1C0011FC0
 * Callers:
 *     CloseProtectedHandle @ 0x1C0011F88 (CloseProtectedHandle.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 CurrentProcessWin32Process; // rax
  struct _RTL_BITMAP *v7; // rbx
  ULONG *v9; // rax
  ULONG *v10; // r14
  PULONG Buffer; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
  {
    v7 = (struct _RTL_BITMAP *)(CurrentProcessWin32Process + 680);
    if ( a3 )
    {
      if ( v5 >= v7->SizeOfBitMap )
      {
        v9 = (ULONG *)Win32AllocPoolWithQuotaZInit((unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3);
        v10 = v9;
        if ( !v9 )
        {
          v4 = 0;
          goto LABEL_5;
        }
        Buffer = v7->Buffer;
        if ( Buffer )
        {
          memmove(v9, Buffer, (unsigned __int64)v7->SizeOfBitMap >> 3);
          Win32FreePool(v7->Buffer);
        }
        RtlInitializeBitMap(v7, v10, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits(v7, v5, 1u);
    }
    else if ( v5 < v7->SizeOfBitMap )
    {
      RtlClearBits((PRTL_BITMAP)(CurrentProcessWin32Process + 680), v5, 1u);
    }
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}
