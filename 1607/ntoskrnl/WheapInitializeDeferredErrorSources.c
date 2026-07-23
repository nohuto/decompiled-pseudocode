/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x14022FD5C
 * Callers:
 *     WheaConfigureErrorSource @ 0x1403D68B8 (WheaConfigureErrorSource.c)
 * Callees:
 *     WheapInitializeErrorSource @ 0x140574EB4 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  __int64 v1; // rbx
  int i; // edi

  v1 = qword_140329968;
  for ( i = 0; i < dword_140329964; ++i )
  {
    if ( *(_DWORD *)(v1 + 97) == a1
      && *(_BYTE *)(v1 + 88)
      && (int)WheapInitializeErrorSource(v1) >= 0
      && (*((int (__fastcall **)(__int64, __int64, _QWORD))&unk_140341638 + 6 * *(int *)(v1 + 40)))(
           1LL,
           v1 + 89,
           *(_QWORD *)(v1 + 56)) >= 0 )
    {
      *(_DWORD *)(v1 + 101) = 2;
      *(_BYTE *)(v1 + 88) = 0;
    }
    v1 = *(_QWORD *)v1;
  }
  return 0LL;
}
