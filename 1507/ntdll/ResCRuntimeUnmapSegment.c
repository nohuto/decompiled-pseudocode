/*
 * XREFs of ResCRuntimeUnmapSegment @ 0x1800F7A10
 * Callers:
 *     LdrpUnmapCMFSegment @ 0x1800CBD4C (LdrpUnmapCMFSegment.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     ResCSegmentFree @ 0x1800F8608 (ResCSegmentFree.c)
 */

__int64 __fastcall ResCRuntimeUnmapSegment(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  void *v7; // rcx

  v2 = ResRuntimeView;
  if ( ResRuntimeView
    && (v3 = *((_QWORD *)ResRuntimeView + 2)) != 0
    && (v4 = *(_QWORD *)(v3 + 24)) != 0
    && a2 < *(_DWORD *)(v4 + 68)
    && (v5 = *((_QWORD *)ResRuntimeView + 3)) != 0
    && (v6 = a2, (v7 = *(void **)(v5 + 8LL * a2)) != 0LL) )
  {
    if ( (unsigned int)ResCSegmentFree(v7) )
    {
      *(_QWORD *)(v2[3] + 8 * v6) = 0LL;
      return 1LL;
    }
  }
  else if ( !NtCurrentTeb()->LastErrorValue )
  {
    RtlSetLastWin32Error(87);
  }
  return 0LL;
}
