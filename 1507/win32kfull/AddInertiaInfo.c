/*
 * XREFs of AddInertiaInfo @ 0x1C0239638
 * Callers:
 *     NtUserReportInertia @ 0x1C0009820 (NtUserReportInertia.c)
 * Callees:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02292DC (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall AddInertiaInfo(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        __int64 a5,
        double a6,
        __int128 *a7,
        __int128 *a8)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v13; // rdx
  LARGE_INTEGER v14; // r8
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // ecx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = qword_1C032F180;
  v14 = PerformanceCounter;
  if ( !qword_1C032F180 )
  {
    v13 = 100 * gliQpcFreq.QuadPart / 1000;
    qword_1C032F180 = v13;
  }
  if ( (dword_1C0328AE8 & 1) != 0
    && gInertiaInfo == a1
    && PerformanceCounter.QuadPart - qword_1C0328AE0 <= v13
    && a6 <= *(double *)&qword_1C0328A80 )
  {
    return 0LL;
  }
  gInertiaInfo = a1;
  qword_1C0328A68 = a2;
  qword_1C0328A70 = *(_QWORD *)a5;
  v16 = *(_DWORD *)(a5 + 8);
  qword_1C0328A80 = *(_QWORD *)&a6;
  dword_1C0328A78 = v16;
  if ( a3 )
    qword_1C0328AD8 = *a3;
  else
    qword_1C0328AD8 = 0LL;
  qword_1C0328AE0 = v14.QuadPart;
  dword_1C0328AE8 ^= ((unsigned __int8)dword_1C0328AE8 ^ (unsigned __int8)(8 * a4)) & 8;
  v17 = ((unsigned __int8)dword_1C0328AE8 ^ (unsigned __int8)(2 * (a1 != a3[2]))) & 2 ^ dword_1C0328AE8;
  dword_1C0328AE8 = v17;
  if ( a7 )
  {
    v18 = v17 | 4;
    xmmword_1C0328A88 = *a7;
    xmmword_1C0328A98 = *a8;
    xmmword_1C0328AA8 = a8[1];
    xmmword_1C0328AB8 = a8[2];
    xmmword_1C0328AC8 = a8[3];
  }
  else
  {
    v18 = v17 & 0xFFFFFFFB;
  }
  dword_1C0328AE8 = v18 | 1;
  Edgy::ProcessEdgyInertia((Edgy *)&gInertiaInfo, (const struct INERTIA_INFO_INTERNAL *)v13);
  return 1LL;
}
