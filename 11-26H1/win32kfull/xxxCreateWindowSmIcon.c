/*
 * XREFs of xxxCreateWindowSmIcon @ 0x140093E5C
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x14009449C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1402608E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     xxxClientCopyImage @ 0x1401529AC (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rax

  v3 = a2;
  LOBYTE(a2) = 3;
  v4 = 0LL;
  v5 = HMValidateHandleNoRip(v3, a2);
  if ( v5 )
  {
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
    v8 = GetDpiForSystem();
    v9 = GetDpiDependentMetric(20, v8);
    v10 = xxxClientCopyImage(
            *(_QWORD *)v5,
            (unsigned int)(*(_WORD *)(v5 + 74) != 3) + 1,
            v9,
            DpiDependentMetric,
            0x4000);
    if ( v10 )
    {
      v4 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 )
      {
        *(_DWORD *)(v10 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v4;
      }
    }
  }
  return v4;
}
