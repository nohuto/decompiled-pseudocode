/*
 * XREFs of ValidateDelegatePointerList @ 0x1C01E16B4
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x1C0218940 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F9304 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 */

__int64 __fastcall ValidateDelegatePointerList(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  unsigned int i; // edi
  int *v10; // rdx
  int v11; // r9d
  unsigned int *v12; // rdx
  unsigned int v13; // edx

  v8 = 1;
  for ( i = 0; i < a1; ++i )
  {
    v10 = (int *)(a2 + 4LL * i);
    if ( (unsigned __int64)v10 >= W32UserProbeAddress )
      v10 = (int *)W32UserProbeAddress;
    v11 = *v10;
    v12 = (unsigned int *)(a3 + 4LL * i);
    if ( (unsigned __int64)v12 >= W32UserProbeAddress )
      v12 = (unsigned int *)W32UserProbeAddress;
    v13 = *v12;
    if ( !v11 || HIWORD(v11) || !v13 )
      return 0;
    PointerDelegateGetClient(v11, v13, (struct tagDELEGATEPOINTERMAP *)(a4 + 24LL * i));
  }
  return v8;
}
