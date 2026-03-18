/*
 * XREFs of AddInertiaInfo @ 0x1C0229F34
 * Callers:
 *     NtUserReportInertia @ 0x1C000DFA0 (NtUserReportInertia.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C021F6F8 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall AddInertiaInfo(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        int a5,
        __int64 a6,
        double a7,
        __int128 *a8,
        __int128 *a9)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // r9
  unsigned __int64 v16; // rdx
  LARGE_INTEGER v17; // r11
  unsigned int v18; // r8d
  int v20; // eax
  int v21; // r8d
  bool v22; // al
  const struct tagRECT *v23; // r8
  unsigned int v24; // ecx
  unsigned int v25; // ecx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = qword_1C0334668;
  v17 = PerformanceCounter;
  if ( !qword_1C0334668 )
  {
    v14.QuadPart = (unsigned __int64)((unsigned __int128)(100 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 63;
    v16 = 100 * gliQpcFreq.QuadPart / 1000;
    qword_1C0334668 = v16;
  }
  v18 = dword_1C032CC78;
  if ( (dword_1C032CC78 & 1) != 0
    && gInertiaInfo == a1
    && PerformanceCounter.QuadPart - qword_1C032CC70 <= v16
    && (unsigned int)NlsNullProc((struct tagKE *)v14.QuadPart)
    && a7 <= *(double *)&qword_1C032CC10 )
  {
    return 0LL;
  }
  gInertiaInfo = a1;
  qword_1C032CBF8 = a2;
  qword_1C032CC00 = *(_QWORD *)a6;
  v20 = *(_DWORD *)(a6 + 8);
  qword_1C032CC10 = *(_QWORD *)&a7;
  dword_1C032CC08 = v20;
  if ( a3 )
    qword_1C032CC68 = *a3;
  else
    qword_1C032CC68 = 0LL;
  qword_1C032CC70 = v17.QuadPart;
  v21 = ((unsigned __int8)v18 ^ (unsigned __int8)(8 * a4)) & 8 ^ v18;
  dword_1C032CC78 = v21;
  v22 = !a5 && a1 != a3[2];
  v23 = (const struct tagRECT *)(v21 & 0xFFFFFFED);
  v24 = (unsigned int)v23 | (2 * (v22 | (8 * (a5 & 1))));
  dword_1C032CC78 = v24;
  if ( a8 )
  {
    v25 = v24 | 4;
    xmmword_1C032CC18 = *a8;
    xmmword_1C032CC28 = *a9;
    xmmword_1C032CC38 = a9[1];
    xmmword_1C032CC48 = a9[2];
    xmmword_1C032CC58 = a9[3];
  }
  else
  {
    v25 = v24 & 0xFFFFFFFB;
  }
  dword_1C032CC78 = v25 | 1;
  Edgy::ProcessEdgyInertia((Edgy *)&gInertiaInfo, (const struct INERTIA_INFO_INTERNAL *)v16, v23, v15.QuadPart);
  return 1LL;
}
