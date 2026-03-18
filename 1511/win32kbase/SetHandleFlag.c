/*
 * XREFs of SetHandleFlag @ 0x1C0046C20
 * Callers:
 *     CloseProtectedHandle @ 0x1C0046BB8 (CloseProtectedHandle.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 v6; // rcx
  struct _RTL_BITMAP *CurrentProcessWin32Process; // rax
  struct _RTL_BITMAP *v8; // rbx
  ULONG *v10; // rax
  ULONG *v11; // r14
  PULONG Buffer; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = (struct _RTL_BITMAP *)PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
  {
    v8 = CurrentProcessWin32Process + 43;
    if ( a3 )
    {
      if ( v5 >= v8->SizeOfBitMap )
      {
        v10 = (ULONG *)Win32AllocPoolWithQuotaZInit((unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3);
        v11 = v10;
        if ( !v10 )
        {
          v4 = 0;
          goto LABEL_5;
        }
        Buffer = v8->Buffer;
        if ( Buffer )
        {
          memmove(v10, Buffer, (unsigned __int64)v8->SizeOfBitMap >> 3);
          Win32FreePool();
        }
        RtlInitializeBitMap(v8, v11, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits(v8, v5, 1u);
    }
    else if ( v5 < v8->SizeOfBitMap )
    {
      RtlClearBits(CurrentProcessWin32Process + 43, v5, 1u);
    }
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}
