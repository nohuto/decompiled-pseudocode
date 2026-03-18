/*
 * XREFs of BcpDisplayProgress @ 0x14026F484
 * Callers:
 *     BcpGetMessageOffsets @ 0x14026F668 (BcpGetMessageOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14026F8E8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14026FAA0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     BgpDisplayCharacterEx @ 0x14026E350 (BgpDisplayCharacterEx.c)
 *     BcpConvertProgressToString @ 0x14026EDAC (BcpConvertProgressToString.c)
 *     BcpCursorLessThan @ 0x14026EE74 (BcpCursorLessThan.c)
 *     BcpDisplayCriticalString @ 0x14026EF50 (BcpDisplayCriticalString.c)
 */

__int64 __fastcall BcpDisplayProgress(unsigned int a1, int a2, unsigned int a3)
{
  UNICODE_STRING *v5; // rcx
  int *v6; // r14
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  UNICODE_STRING *v9; // rcx
  __int64 v10; // xmm0_8
  int v11; // r12d
  int v12; // esi
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  unsigned int v15; // edi
  int v16; // r15d
  unsigned __int64 v18; // [rsp+48h] [rbp-19h]
  __int64 v19; // [rsp+58h] [rbp-9h] BYREF
  char *v20; // [rsp+60h] [rbp-1h]
  int v21; // [rsp+68h] [rbp+7h] BYREF
  int v22; // [rsp+6Ch] [rbp+Bh] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+Fh] BYREF
  char v24; // [rsp+80h] [rbp+1Fh] BYREF

  v5 = &stru_140356620;
  v6 = (int *)((char *)&unk_14031E760 + 56 * a2);
  if ( a1 != 1 )
    v5 = &stru_140356640;
  BcpDisplayCriticalString((__int16 *)v5, v6[1], a3, a2);
  LODWORD(v19) = 0x80000;
  v20 = &v24;
  BcpConvertProgressToString(a1, (__int64)&v19);
  BcpDisplayCriticalString((__int16 *)&v19, v6[1], v7, a2);
  v9 = &stru_140356630;
  if ( a1 != 1 )
    v9 = &stru_140356650;
  BcpDisplayCriticalString((__int16 *)v9, v6[1], v8, a2);
  v10 = BcpCursor;
  v11 = dword_140386298;
  v19 = BcpCursor;
  LODWORD(v20) = dword_140386298;
  if ( BcpCursorLessThan(&v19) )
  {
    v12 = v6[3] + v6[7];
    v13 = v19;
    v14 = v12 + v6[5];
    v15 = HIDWORD(v19);
    v16 = *(_DWORD *)(*(_QWORD *)(qword_140356660 + 24) + 40LL);
LABEL_7:
    v23 = __PAIR64__(v15, v13);
    while ( BcpCursorLessThan(&v23) )
    {
      if ( (int)BgpDisplayCharacterEx(0x20u, (__int64 *)qword_140356660, v13, v15, v16, v16, &v22, &v21, v18) < 0 )
        return 0LL;
      v13 += v22;
      LODWORD(v23) = v13;
      if ( v13 > v14 )
      {
        v15 += v21;
        v13 = v12;
        goto LABEL_7;
      }
    }
    v10 = v19;
  }
  if ( (dword_140323CF0 & 0x1000000) == 0 )
  {
    ProgressEnd = v10;
    dword_140323BB8 = v11;
  }
  return 0LL;
}
