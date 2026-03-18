/*
 * XREFs of xxxAdjustSize @ 0x1C005CB5C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     ConstrainWindowSize @ 0x1C005CC58 (ConstrainWindowSize.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void *__fastcall xxxAdjustSize(__int64 a1, int *a2, int *a3)
{
  void *result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rcx
  _BYTE v14[40]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)v14 = 0;
  result = memset(&v14[4], 0, 0x24uLL);
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0 || (*(_BYTE *)(a1 + 54) & 4) != 0 )
  {
    xxxInitSendValidateMinMaxInfoEx(a1, v14, 0LL, 0LL);
    if ( (*(_BYTE *)(a1 + 55) & 0x20) != 0 )
    {
      v7 = *(_QWORD *)v14;
      v8 = *(_QWORD *)&v14[8];
    }
    else
    {
      v7 = *(_QWORD *)&v14[24];
      v8 = *(_QWORD *)&v14[32];
    }
    v9 = v8;
    if ( *a2 < (int)v8 )
      v9 = *a2;
    if ( (int)v7 <= v9 )
    {
      v10 = v8;
      if ( *a2 < (int)v8 )
        v10 = *a2;
    }
    else
    {
      v10 = v7;
    }
    *a2 = v10;
    v11 = HIDWORD(v8);
    v12 = v11;
    if ( *a3 < (int)v11 )
      v12 = *a3;
    v13 = HIDWORD(v7);
    if ( (int)v13 <= v12 )
    {
      if ( *a3 < (int)v11 )
        LODWORD(v11) = *a3;
      LODWORD(v13) = v11;
    }
    *a3 = v13;
    return (void *)ConstrainWindowSize(a2, a3);
  }
  return result;
}
