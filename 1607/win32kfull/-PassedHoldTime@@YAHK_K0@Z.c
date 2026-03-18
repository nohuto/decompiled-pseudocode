/*
 * XREFs of ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01F3CC0
 * Callers:
 *     ?UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z @ 0x1C01F4508 (-UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012D824 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0225664 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 */

__int64 __fastcall PassedHoldTime(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v8; // rdx
  struct tagDEVICECONFIG_SETTING *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int TouchTimeFromCPLValue; // eax
  unsigned __int64 v13; // rdi
  bool v14; // cf
  bool v15; // zf

  v3 = 0;
  if ( !gliQpcFreq.QuadPart )
    return 0LL;
  v8 = qword_1C03345E8;
  if ( !qword_1C03345E8 )
  {
    if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
    {
      v9 = off_1C03200E8;
      v10 = *((unsigned int *)off_1C03200E8 + 23);
      if ( (_DWORD)v10 != -1 )
      {
LABEL_9:
        v8 = gliQpcFreq.QuadPart * v10 / 1000;
        qword_1C03345E8 = v8;
        goto LABEL_10;
      }
    }
    else
    {
      v9 = off_1C03200E8;
    }
    v10 = *((unsigned int *)v9 + 22);
    goto LABEL_9;
  }
LABEL_10:
  v11 = qword_1C03345F0;
  if ( !qword_1C03345F0 )
  {
    TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x3E8u, 0x3E8u, 8u, 0);
    v8 = qword_1C03345E8;
    v11 = gliQpcFreq.QuadPart * TouchTimeFromCPLValue / 1000;
    qword_1C03345F0 = v11;
  }
  v13 = a3 - a2;
  if ( a1 == 3 )
  {
    v14 = v13 < v8;
    v15 = v13 == v8;
  }
  else
  {
    v14 = v13 < v11;
    v15 = v13 == v11;
  }
  LOBYTE(v3) = !v14 && !v15;
  return v3;
}
