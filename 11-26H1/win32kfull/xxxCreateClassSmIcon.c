/*
 * XREFs of xxxCreateClassSmIcon @ 0x1401528C0
 * Callers:
 *     xxxSetClassIcon @ 0x140152AA8 (xxxSetClassIcon.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxRecreateSmallIcons @ 0x1402608E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1401529AC (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 *a1)
{
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  unsigned int v4; // eax
  int v5; // r11d
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
  v4 = GetDpiForSystem();
  v5 = GetDpiDependentMetric(20, v4);
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 80LL) )
    v6 = **(_QWORD **)(*(_QWORD *)*a1 + 80LL);
  else
    LODWORD(v6) = 0;
  v7 = (__int64 *)xxxClientCopyImage(
                    v6,
                    (unsigned int)(*(_WORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 80LL) + 74LL) != 3) + 1,
                    v5,
                    DpiDependentMetric,
                    0x4000);
  v8 = *(_QWORD *)*a1 + 112LL;
  if ( v7 )
    v9 = *v7;
  else
    v9 = 0LL;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 8LL) + 56LL) = v9;
  v11[0] = v8;
  v11[1] = v7;
  HMAssignmentLock(v11, 0LL);
  result = *a1;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 112LL) )
  {
    result = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
