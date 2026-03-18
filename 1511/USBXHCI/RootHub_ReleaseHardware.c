/*
 * XREFs of RootHub_ReleaseHardware @ 0x1C0051BE8
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0050590 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall RootHub_ReleaseHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  void *v7; // rcx

  if ( *(_QWORD *)(a1 + 48) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v4 = 56LL * i;
      v5 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)(v4 + v5 + 1) == 2 )
      {
        v6 = *(_QWORD *)(v4 + v5 + 32);
        if ( v6 )
        {
          LOBYTE(a2) = 1;
          ExDeleteTimer(v6, a2, 0LL, 0LL);
        }
        v7 = *(void **)(v4 + *(_QWORD *)(a1 + 48) + 24);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x49434858u);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
