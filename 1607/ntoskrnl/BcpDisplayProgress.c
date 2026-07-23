/*
 * XREFs of BcpDisplayProgress @ 0x14023A008
 * Callers:
 *     BcpGetComponentOffsets @ 0x14023A1F4 (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14023A518 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     BgpDisplayCharacterEx @ 0x14023941C (BgpDisplayCharacterEx.c)
 *     BcpConvertProgressToString @ 0x140239838 (BcpConvertProgressToString.c)
 *     BcpCursorLessThan @ 0x140239900 (BcpCursorLessThan.c)
 *     BcpDisplayCriticalString @ 0x1402399E4 (BcpDisplayCriticalString.c)
 */

__int64 __fastcall BcpDisplayProgress(unsigned int a1, int a2, unsigned int a3)
{
  bool v5; // zf
  UNICODE_STRING *v6; // rcx
  __int64 v7; // r14
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  UNICODE_STRING *v10; // rcx
  __int64 v11; // xmm0_8
  int v12; // r13d
  unsigned int v13; // ebx
  unsigned int v14; // esi
  int v15; // r12d
  int v16; // r15d
  unsigned int v17; // edi
  unsigned __int64 v19; // [rsp+48h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-9h] BYREF
  char *v21; // [rsp+60h] [rbp-1h]
  int v22; // [rsp+68h] [rbp+7h] BYREF
  int v23; // [rsp+6Ch] [rbp+Bh] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+Fh] BYREF
  char v25; // [rsp+80h] [rbp+1Fh] BYREF

  v5 = a1 == 1;
  v6 = &stru_140329380;
  v7 = 9LL * a2;
  if ( !v5 )
    v6 = &stru_1403293A0;
  BcpDisplayCriticalString((__int16 *)v6, dword_1402F6930[18 * a2 + 2], a3, a2);
  LODWORD(v20) = 0x80000;
  v21 = &v25;
  BcpConvertProgressToString(a1, (__int64)&v20);
  BcpDisplayCriticalString((__int16 *)&v20, dword_1402F6930[2 * v7 + 2], v8, a2);
  v10 = &stru_140329390;
  if ( a1 != 1 )
    v10 = &stru_1403293B0;
  BcpDisplayCriticalString((__int16 *)v10, dword_1402F6930[2 * v7 + 2], v9, a2);
  v11 = BcpCursor;
  v12 = dword_140358298;
  v20 = BcpCursor;
  LODWORD(v21) = dword_140358298;
  if ( BcpCursorLessThan(&v20) )
  {
    v13 = v20;
    v14 = HIDWORD(v20);
    v24 = v20;
    v15 = *(_DWORD *)(*(_QWORD *)(qword_1403293F0 + 24) + 40LL);
    if ( BcpTextBoxLeftEdgeOverride )
      v16 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
    else
      v16 = dword_1402F6930[2 * v7 + 4] + dword_1402F6930[2 * v7 + 8];
    if ( BcpTextBoxRightEdgeOverride )
      v17 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
    else
      v17 = dword_1402F6930[2 * v7 + 4] + dword_1402F6930[2 * v7 + 6] + dword_1402F6930[2 * v7 + 8];
    while ( BcpCursorLessThan(&v24) )
    {
      if ( (int)BgpDisplayCharacterEx(0x20u, (__int64 *)qword_1403293F0, v13, v14, v15, v15, &v22, &v23, v19) < 0 )
        return 0LL;
      v13 += v22;
      LODWORD(v24) = v13;
      if ( v13 > v17 )
      {
        v14 += v23;
        v13 = v16;
        v24 = __PAIR64__(v14, v16);
      }
    }
    v11 = v20;
  }
  if ( (dword_1402F9F90 & 0x1000000) == 0 )
  {
    BcpProgressEnd = v11;
    dword_1402F9EE8 = v12;
  }
  return 0LL;
}
