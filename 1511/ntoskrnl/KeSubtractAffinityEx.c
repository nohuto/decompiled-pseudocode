/*
 * XREFs of KeSubtractAffinityEx @ 0x140077490
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     PpmParkReportUnparkedCores @ 0x14007560C (PpmParkReportUnparkedCores.c)
 *     PpmIdleSelectStates @ 0x140134970 (PpmIdleSelectStates.c)
 *     KiStartProfileTarget @ 0x1401C8114 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1401C8324 (KiStopProfileTarget.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmPostProcessMediaBuffering @ 0x14063D484 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KeSubtractAffinityEx(unsigned __int16 *a1, char *a2, _BYTE *a3)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // cx
  _QWORD *v8; // rdx
  signed __int64 v9; // r10
  __int64 v10; // r11
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v14; // rdx
  _BYTE v15[176]; // [rsp+0h] [rbp-C8h] BYREF

  if ( !a3 )
    a3 = v15;
  *((_WORD *)a3 + 1) = 20;
  v5 = 0;
  *(_WORD *)a3 = *a1;
  v6 = 0;
  v7 = *(_WORD *)a2;
  if ( *a1 < *(_WORD *)a2 )
    v7 = *a1;
  if ( v7 )
  {
    v8 = a1 + 4;
    v6 = v7;
    v9 = a2 - (char *)a1;
    v10 = v7;
    do
    {
      v11 = (*v8 & ~*(_QWORD *)((char *)v8 + v9)) == 0LL;
      *(_QWORD *)((char *)v8 + a3 - (_BYTE *)a1) = *v8 & ~*(_QWORD *)((char *)v8 + v9);
      if ( !v11 )
        v5 = 1;
      ++v8;
      --v10;
    }
    while ( v10 );
  }
  for ( ; v6 < *a1; ++v6 )
  {
    v14 = *(_QWORD *)&a1[4 * v6 + 4];
    *(_QWORD *)&a3[8 * v6 + 8] = v14;
    if ( v14 )
      v5 = 1;
  }
  if ( a3 != v15 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v6 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v12 + 8] = 0LL )
      v12 = v6++;
  }
  return v5;
}
