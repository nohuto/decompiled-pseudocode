/*
 * XREFs of HvlpReadPerfRegister @ 0x1401BBBC8
 * Callers:
 *     HvlReadPerfIoPort @ 0x1401BB060 (HvlReadPerfIoPort.c)
 *     HvlReadPerfMsr @ 0x1401BB0D0 (HvlReadPerfMsr.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x140231E68 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpReadPerfRegister(int a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // ecx
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF

  v7[1] = 0;
  v7[0] = a1;
  v8 = a2;
  v4 = HvcallFastExtended(65564, (unsigned int)v7, 16, (unsigned int)&v9, 16);
  v5 = 0;
  if ( v4 )
    return (unsigned int)HvlpHvToNtStatus(v4);
  else
    *a3 = v9;
  return v5;
}
