/*
 * XREFs of _SetActivationFilter @ 0x1401C0798
 * Callers:
 *     NtUserSetActivationFilter @ 0x1401A1510 (NtUserSetActivationFilter.c)
 * Callees:
 *     _FindActivationFilterWindow @ 0x1401C0E28 (_FindActivationFilterWindow.c)
 */

__int64 __fastcall SetActivationFilter(__int64 a1, int a2)
{
  __int64 ActivationFilterWindow; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // zf
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  ActivationFilterWindow = FindActivationFilterWindow(a1);
  v5 = 0;
  v6 = ActivationFilterWindow;
  if ( a2 )
  {
    if ( !ActivationFilterWindow )
    {
      v7 = Win32AllocPoolZInit(32LL, 1869443925LL);
      v6 = v7;
      if ( v7 )
      {
        v12[1] = a1;
        v12[0] = v7 + 16;
        HMAssignmentLock(v12, 0LL);
        v10 = *(_QWORD *)(a1 + 24) + 312LL;
        v11 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          __fastfail(3u);
        *(_QWORD *)v6 = v11;
        *(_QWORD *)(v6 + 8) = v10;
        *(_QWORD *)(v11 + 8) = v6;
        *(_QWORD *)v10 = v6;
        goto LABEL_9;
      }
    }
  }
  v8 = v6 == 0;
  if ( v6 )
  {
LABEL_9:
    *(_DWORD *)(v6 + 24) = a2;
    v8 = v6 == 0;
  }
  LOBYTE(v5) = !v8;
  return v5;
}
