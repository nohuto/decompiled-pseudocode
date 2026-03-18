/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C00C7720
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C00B1CA0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // r15
  unsigned int v5; // ebx
  void *v6; // rbp
  void *v7; // r14

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 712);
  v5 = 1;
  if ( *(_DWORD *)(a1 + 24) == 8 )
    v2 = a2 + 1;
  v6 = Win32AllocPoolZInit(2400LL * v2);
  if ( v6 )
  {
    v7 = Win32AllocPoolZInit(8LL * v2);
    if ( v7 )
    {
      Win32FreePool();
      Win32FreePool();
      *(_QWORD *)(v3 + 48) = v7;
      *(_QWORD *)(a1 + 696) = v6;
      *(_DWORD *)(a1 + 720) = v2;
      return v5;
    }
    Win32FreePool();
  }
  return 0;
}
