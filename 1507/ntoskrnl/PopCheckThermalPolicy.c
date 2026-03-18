/*
 * XREFs of PopCheckThermalPolicy @ 0x1405C4218
 * Callers:
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 * Callees:
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 */

char __fastcall PopCheckThermalPolicy(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int v4; // eax
  unsigned int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int i; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // ebp
  unsigned int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // r15d
  int v19; // esi
  char v20; // al
  int v21; // ecx
  unsigned int v22; // edx
  bool v23; // cf

  v4 = *(_DWORD *)(a1 + 268);
  if ( v4 && (v9 = *(_DWORD *)(a1 + 256), v9 >= v4) )
  {
    PopPrintEx(
      0,
      "Thermal Zone %p: Above critical temperature (_TMP 0x%x, _CRT 0x%x). Shutdown initiated\n",
      (const void *)a1,
      v9,
      *(_DWORD *)(a1 + 268));
    *(_BYTE *)(a1 + 342) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 342) = 0;
  }
  v10 = *(_DWORD *)(a1 + 316);
  if ( v10 && *(_DWORD *)(a1 + 256) >= v10 )
  {
    if ( (PoDebug & 0x21) != 0 )
      DbgPrint(
        "Thermal Zone %p: Above critical S4 temperature (_TMP 0x%x, _HOT 0x%x). Hibernate initiated\n",
        (const void *)a1,
        *(_DWORD *)(a1 + 256),
        *(_DWORD *)(a1 + 316));
    *(_BYTE *)(a1 + 341) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 341) = 0;
  }
  v11 = *(_DWORD *)(a1 + 264);
  if ( v11 )
  {
    if ( *(_DWORD *)(a1 + 256) < v11 )
    {
      if ( *(_BYTE *)(a1 + 343) )
        *(_BYTE *)(a1 + 343) = 0;
    }
    else if ( !*(_BYTE *)(a1 + 343) )
    {
      *(_BYTE *)(a1 + 343) = 1;
      if ( (PoDebug & 0x21) != 0 )
        DbgPrint(
          "Thermal Zone %p: Above Thermal Standby temperature (_TMP 0x%x, _CR3 0x%x). Thermal Standby initiated\n",
          (const void *)a1,
          *(_DWORD *)(a1 + 256),
          *(_DWORD *)(a1 + 264));
    }
  }
  for ( i = 0; i < *(unsigned __int8 *)(a1 + 272); ++i )
  {
    if ( *(_DWORD *)(a1 + 256) >= *(_DWORD *)(a1 + 4LL * i + 276) )
      break;
  }
  v13 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 352) = i;
  if ( a2 - *(_QWORD *)(a1 + 96) < v13 )
  {
    LOBYTE(v15) = *(_BYTE *)(a1 + 65) & 1;
    *a4 = 0;
    *a3 = v15;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 256);
    if ( *(_DWORD *)(a1 + 80) != 100 || (v15 = *(_DWORD *)(a1 + 260)) != 0 && v14 >= v15 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 1) == 0 )
      {
        v16 = 10000 * *(_DWORD *)(a1 + 252);
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_DWORD *)(a1 + 104) = v16;
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 260);
      }
      v17 = v14 - *(_DWORD *)(a1 + 108);
      v18 = v14 - *(_DWORD *)(a1 + 260);
      v19 = *(_DWORD *)(a1 + 76);
      v20 = PoDebug;
      *a4 = v17 * *(_DWORD *)(a1 + 244) + v18 * *(_DWORD *)(a1 + 248);
      if ( (v20 & 0x20) != 0 )
        DbgPrint(
          "Thermal Zone %p: LastTemp=%u CurrentTemp=%u (LastTempChange = %d)\n",
          (const void *)a1,
          *(_DWORD *)(a1 + 108),
          v14,
          v17);
      if ( (PoDebug & 0x20) != 0 )
        DbgPrint(
          "Thermal Zone %p: PassiveTripPoint=%u TempChangeNeeded=%d\n",
          (const void *)a1,
          *(_DWORD *)(a1 + 260),
          v18);
      if ( v17 && (v17 ^ *a4) < 0 )
      {
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint(
            "ERROR: Thermal Zone %p: TempDelta (%d) & ThrottleDelta (%d.%d) not moving in the same direction\n",
            (const void *)a1,
            v17,
            *a4 / 10,
            *a4 % 10);
      }
      else
      {
        if ( (PoDebug & 0x20) != 0 )
          DbgPrint(
            "Thermal Zone %p: Subtracting ThrottleDelta %d.%d from CurrentThrottle %d.%d\n",
            (const void *)a1,
            *a4 / 10,
            *a4 % 10,
            v19 / 10,
            v19 % 10);
        v19 -= *a4;
      }
      v21 = *(_DWORD *)(a1 + 320);
      *(_DWORD *)(a1 + 108) = v14;
      *(_QWORD *)(a1 + 96) = a2;
      if ( v19 > 1000 )
        v19 = 1000;
      *a4 = 0;
      *a3 = 1;
      *(_DWORD *)(a1 + 344) = 1;
      if ( v19 < 0 )
        v19 = 0;
      if ( v19 < 10 * v21 )
        v19 = 10 * v21;
      *(_DWORD *)(a1 + 76) = v19;
      v22 = (v19 + 5) / 10;
      v23 = v22 < *(_DWORD *)(a1 + 324);
      *(_DWORD *)(a1 + 348) = v22;
      LOBYTE(v15) = v23;
      *(_BYTE *)(a1 + 356) = v23;
    }
    else
    {
      *a4 = 0;
      *a3 = 0;
      *(_DWORD *)(a1 + 344) = 0;
    }
  }
  return v15;
}
