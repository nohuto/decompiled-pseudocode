/*
 * XREFs of ValidatePointerOffset @ 0x1C022D8FC
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F9D58 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C022BD14 (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 */

__int64 __fastcall ValidatePointerOffset(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v7; // rax
  _DWORD *v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // r9d
  int v12; // r9d
  __int64 v15; // [rsp+80h] [rbp+18h]

  v15 = a3;
  v4 = 0;
  *(_QWORD *)a4 = a3;
  if ( a3 )
  {
    v7 = HMValidateHandleNoSecure(*((_QWORD *)a2 + 3), 19);
    if ( v7 )
    {
      v8 = *(_DWORD **)(v7 + 416);
      v9 = a1 + v15;
      v10 = HIDWORD(a1) + HIDWORD(v15);
      if ( (int)a1 + (int)v15 >= v8[31] )
      {
        v11 = v8[33];
        if ( v9 >= v11 )
          v9 = v11 - 1;
      }
      else
      {
        v9 = v8[31];
      }
      if ( v10 >= v8[32] )
      {
        v12 = v8[34];
        if ( v10 >= v12 )
          v10 = v12 - 1;
      }
      else
      {
        v10 = v8[32];
      }
      LODWORD(v15) = v9 - a1;
      HIDWORD(v15) = v10 - HIDWORD(a1);
    }
    v4 = 1;
    *(_QWORD *)a4 = v15;
  }
  if ( (unsigned int)TouchTargetingEnabledForInput(*(struct tagPOINT *)(a2 + 20), (const struct tagPOINTEREVENTINT *)a2) )
  {
    EtwTraceTouchTargetingOffset(*a4, a4[1], *((unsigned int *)a2 + 3), *a2);
    EtwTraceTouchTargetingPointerEvent(
      *((unsigned int *)a2 + 3),
      *a2,
      *((unsigned int *)a2 + 2),
      *((unsigned int *)a2 + 5),
      *((_DWORD *)a2 + 27),
      *((_DWORD *)a2 + 10),
      *((_DWORD *)a2 + 11),
      *((_DWORD *)a2 + 28),
      *((_DWORD *)a2 + 30),
      *((_DWORD *)a2 + 29),
      *((_DWORD *)a2 + 31),
      *((_DWORD *)a2 + 36));
  }
  return v4;
}
