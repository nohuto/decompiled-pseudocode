/*
 * XREFs of IopRetrieveSystemDeviceName @ 0x14054239C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     IoQuerySystemDeviceName @ 0x14054235C (IoQuerySystemDeviceName.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopRetrieveSystemDeviceName(
        __int64 (__fastcall *a1)(unsigned __int64, _QWORD, _DWORD *),
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  unsigned int v7; // esi
  unsigned __int64 v8; // r14
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v13; // rcx
  _DWORD v14[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 && a3 > 0x10 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 15) = *(_BYTE *)(v13 + 15);
    }
    v7 = a3 - 16;
    v8 = a2 + 16;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
  }
  if ( v7 > 0xFFFF )
    v7 = 0xFFFF;
  v9 = a1(v8, v7, v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( v9 != -1073741789 )
    {
      *a4 = 0;
      return v10;
    }
    v11 = v14[0];
  }
  else
  {
    v11 = v14[0];
    *(_WORD *)a2 = LOWORD(v14[0]) - 2;
    *(_WORD *)(a2 + 2) = v7;
    *(_QWORD *)(a2 + 8) = v8;
  }
  *a4 = v11 + 16;
  return v10;
}
