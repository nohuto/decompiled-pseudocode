/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z @ 0x1C0047418
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAII@Z @ 0x1C000E3E8 (-TokenThread@CTokenManager@@SAJPEAXPEAII@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00470AC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0047338 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        void *a2,
        void *a3,
        unsigned int *a4,
        void **a5,
        unsigned int a6)
{
  CTokenManager *v6; // rbp
  HANDLE *v10; // rdi
  ULONG v11; // r14d
  __int64 v13; // r8
  void *v14; // rax
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-78h] BYREF
  HANDLE Object[7]; // [rsp+38h] [rbp-70h] BYREF

  v6 = g_pTokenManager;
  memset(Object, 0, sizeof(Object));
  v10 = Object;
  if ( a6 > 5 )
  {
    v10 = (HANDLE *)Win32AllocPoolZInit(8LL * (a6 + 2));
    if ( !v10 )
      return 3221225495LL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v6 + 4, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    *v10 = a2;
    v11 = 2;
    v10[1] = a3;
    if ( a6 )
    {
      v13 = a6;
      do
      {
        v14 = *a5++;
        v15 = v11++;
        v10[v15] = v14;
        --v13;
      }
      while ( v13 );
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = ZwWaitForMultipleObjects(v11, v10, WaitAny, 1u, 0LL);
          if ( v16 < 0 )
            goto LABEL_19;
          if ( v16 && v16 != 257 && v16 != 192 )
            break;
          v16 = 0;
LABEL_19:
          if ( v16 == -1073741801 || v16 == -1073741789 )
          {
            Timeout.QuadPart = -160000LL;
            v16 = ZwWaitForSingleObject(a2, 0, &Timeout);
            if ( v16 == 258 )
              continue;
          }
          *((_QWORD *)v6 + 4) = 0LL;
          goto LABEL_22;
        }
        if ( v16 != 1 )
          break;
        KeEnterCriticalRegion();
        CTokenManager::ProcessGdiSysmemTokens((CLegacyTokenBuffer **)v6);
LABEL_14:
        KeLeaveCriticalRegion();
      }
      if ( a6 && v16 <= a6 + 1 )
      {
        KeEnterCriticalRegion();
        CTokenManager::ProcessDxgkAdapterTokens(v6, a4[v16 - 2]);
        goto LABEL_14;
      }
    }
  }
  v16 = -2147483631;
LABEL_22:
  if ( v10 != Object )
    Win32FreePool();
  return (unsigned int)v16;
}
