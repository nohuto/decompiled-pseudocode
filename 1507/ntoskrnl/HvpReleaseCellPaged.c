/*
 * XREFs of HvpReleaseCellPaged @ 0x1404C2900
 * Callers:
 *     <none>
 * Callees:
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall HvpReleaseCellPaged(ULONG_PTR BugCheckParameter2, int *a2)
{
  int v2; // r11d
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rdx

  v2 = *a2;
  v5 = *a2 & 0xFFFFFFFE;
  v6 = v5 >> 31;
  if ( v5 + ((_DWORD)v6 << 31) >= *(_DWORD *)(632 * v6 + BugCheckParameter2 + 1400)
    || (v7 = *(_QWORD *)(*(_QWORD *)(632 * v6 + BugCheckParameter2 + 1408) + 8LL * ((v5 >> 21) & 0x3FF)),
        (v8 = (struct _EX_RUNDOWN_REF *)(v7 + 40LL * ((v5 >> 12) & 0x1FF))) == 0LL) )
  {
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v5, 0x291uLL);
  }
  if ( (v2 & 1) != 0 )
    HvpMapEntryReleaseBlockAddress(v7, v8);
  return HvpGetCellContextReinitialize(a2);
}
