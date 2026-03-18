/*
 * XREFs of PopValidateRTCWake @ 0x1403EF394
 * Callers:
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopPowerTransitionTimesInMs @ 0x140148B80 (PopPowerTransitionTimesInMs.c)
 *     PopCurrentPowerStatePrecise @ 0x14056C204 (PopCurrentPowerStatePrecise.c)
 */

char __fastcall PopValidateRTCWake(_BYTE *a1)
{
  char v2; // cl
  int v3; // eax
  int v4; // edx
  unsigned __int64 v5; // rbx
  char result; // al
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r9
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF

  *a1 = 0;
  v2 = PopFixedWakeSourceMask;
  v3 = PopFixedWakeSourceMask & 0x18;
  if ( v3 == 16 )
  {
    v4 = 1;
LABEL_15:
    dword_14032E698 = v4;
    goto LABEL_5;
  }
  if ( v3 == 8 )
  {
    v4 = 0;
    goto LABEL_15;
  }
  if ( (PopFixedWakeSourceMask & 0x18) != 0 )
  {
    PopCurrentPowerStatePrecise(v9);
    v4 = dword_14032E84C;
    v2 = PopFixedWakeSourceMask;
    dword_14032E698 = dword_14032E84C;
  }
  else
  {
    v4 = dword_14032E698;
  }
LABEL_5:
  if ( (unsigned __int64)v4 >= 3 )
  {
    if ( (v2 & 4) == 0 )
      *a1 = 1;
    v4 = NumberOfBytes && (unsigned __int64)qword_14032E6A8 > NumberOfBytes;
    dword_14032E698 = v4;
  }
  v5 = (unsigned __int64)*(&qword_14032E6A8 + 3 * v4);
  if ( !v5 )
    goto LABEL_12;
  if ( v5 >= 0x989680 )
    v5 -= 10000000LL;
  v7 = qword_14032E688;
  if ( PoResumeFromHibernate )
  {
    PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, &v11, (__int64)&v10);
    v7 -= (unsigned int)(10000 * v10 + 10000 * v11);
  }
  if ( v5 >= v7 )
  {
    if ( (PoDebug & 8) != 0 )
      DbgPrint(
        "PopValidateRTCWake: The machine woke earlier (ActualWakeTime %I64u) than programmed (ProgrammedWakeTime of %I64u)\n",
        v7,
        v5);
LABEL_12:
    dword_14032E698 = 3;
    result = 0;
    *a1 = 0;
    return result;
  }
  v8 = (-(__int64)((PopFullWake & 3) != 0) & 0xFFFFFFFFBE6F5500uLL) + 1200000000;
  if ( v7 - v5 >= v8 )
  {
    if ( (PoDebug & 8) != 0 )
      DbgPrint(
        "PopValidateRTCWake: The machine woke later (ActualWakeTime %I64u) than programmed (ProgrammedWakeTime of %I64u),"
        " which is later than the allowable tolerance (%I64u)\n",
        v7,
        v5,
        v8);
    goto LABEL_12;
  }
  return 1;
}
