/*
 * XREFs of IopRetrieveSystemDeviceName @ 0x1405064DC
 * Callers:
 *     IoQuerySystemDeviceName @ 0x140506488 (IoQuerySystemDeviceName.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopRetrieveSystemDeviceName(
        __int64 (__fastcall *a1)(ULONG64, _QWORD, _DWORD *),
        ULONG64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  _BYTE *v7; // rcx
  unsigned int v8; // esi
  ULONG64 v9; // r14
  int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  _DWORD v14[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 && a3 > 0x10 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v7 = (_BYTE *)MmUserProbeAddress;
      *v7 = *v7;
      v7[15] = v7[15];
    }
    v8 = a3 - 16;
    v9 = a2 + 16;
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
  }
  if ( v8 > 0xFFFF )
    v8 = 0xFFFF;
  v10 = a1(v9, v8, v14);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741789 )
    {
      *a4 = 0;
      return v11;
    }
    v12 = v14[0];
  }
  else
  {
    v12 = v14[0];
    *(_WORD *)a2 = LOWORD(v14[0]) - 2;
    *(_WORD *)(a2 + 2) = v8;
    *(_QWORD *)(a2 + 8) = v9;
  }
  *a4 = v12 + 16;
  return v11;
}
