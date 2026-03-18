/*
 * XREFs of ValidatePointerOffset @ 0x1C0223668
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F0F5C (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C02219DC (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 */

__int64 __fastcall ValidatePointerOffset(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int *v5; // rsi
  unsigned __int16 *v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rcx
  int v10; // r8d
  int v11; // edx
  int v12; // r9d
  unsigned __int64 v15; // [rsp+80h] [rbp+18h]

  v15 = a3;
  v4 = 0;
  *(_QWORD *)a4 = a3;
  v5 = (unsigned int *)a4;
  v6 = (unsigned __int16 *)a2;
  if ( (_DWORD)a3 || (a3 >>= 32, (_DWORD)a3) )
  {
    v7 = *(_QWORD *)(a2 + 24);
    LOBYTE(a2) = 19;
    v8 = HMValidateHandleNoSecure(v7, a2, a3, a4);
    a4 = v8;
    if ( v8 )
    {
      v9 = *(_DWORD **)(v8 + 480);
      v10 = a1 + v15;
      v11 = HIDWORD(a1) + HIDWORD(v15);
      if ( (int)a1 + (int)v15 >= v9[31] )
      {
        v12 = v9[33];
        if ( v10 >= v12 )
          v10 = v12 - 1;
      }
      else
      {
        v10 = v9[31];
      }
      a4 = (unsigned int)v9[32];
      if ( v11 >= (int)a4 )
      {
        a4 = (unsigned int)v9[34];
        if ( v11 >= (int)a4 )
          v11 = a4 - 1;
      }
      else
      {
        v11 = v9[32];
      }
      a3 = (unsigned int)(v10 - a1);
      LODWORD(v15) = a3;
      HIDWORD(v15) = v11 - HIDWORD(a1);
    }
    v4 = 1;
    *(_QWORD *)v5 = v15;
  }
  if ( (unsigned int)TouchTargetingEnabledForInput(
                       *(struct tagPOINT *)(v6 + 20),
                       (const struct tagPOINTEREVENTINT *)v6,
                       a3,
                       a4) )
  {
    EtwTraceTouchTargetingOffset(*v5, v5[1], *((unsigned int *)v6 + 3), *v6);
    EtwTraceTouchTargetingPointerEvent(
      *((unsigned int *)v6 + 3),
      *v6,
      *((unsigned int *)v6 + 2),
      *((unsigned int *)v6 + 5),
      *((_DWORD *)v6 + 27),
      *((_DWORD *)v6 + 10),
      *((_DWORD *)v6 + 11),
      *((_DWORD *)v6 + 28),
      *((_DWORD *)v6 + 30),
      *((_DWORD *)v6 + 29),
      *((_DWORD *)v6 + 31),
      *((_DWORD *)v6 + 36));
  }
  return v4;
}
