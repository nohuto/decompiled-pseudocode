/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x1401CF924
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401BF978 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r11
  ULONG64 v6; // r8
  ULONG v7; // r9d
  const struct _TlgProvider_t *v8; // r10
  const void *v9; // rdx
  __int64 v10; // r11
  __int64 v11; // r11
  const GUID *v12; // [rsp+20h] [rbp-39h]
  const GUID *v13; // [rsp+28h] [rbp-31h]
  int v14; // [rsp+40h] [rbp-19h] BYREF
  __int64 v15; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  int *v18; // [rsp+80h] [rbp+27h]
  ULONG v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  __int64 *v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+98h] [rbp+3Fh]
  int v23; // [rsp+9Ch] [rbp+43h]

  if ( hProvider )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
        {
          v14 = *(_DWORD *)(v10 + 744);
          v15 = a2;
          TlgCreateSz(&pDesc, (LPCSTR)(v10 + 1104));
          v9 = &unk_1402542E0;
          goto LABEL_13;
        }
      }
      else if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
      {
        v14 = *(_DWORD *)(v11 + 744);
        v15 = a2;
        TlgCreateSz(&pDesc, (LPCSTR)(v11 + 1104));
        v9 = &unk_14025423C;
        goto LABEL_13;
      }
    }
    else if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
    {
      v14 = *(_DWORD *)(v5 + 744);
      v15 = a2;
      TlgCreateSz(&pDesc, (LPCSTR)(v5 + 1104));
      v9 = &unk_140254290;
LABEL_13:
      v20 = 0;
      v23 = 0;
      v18 = &v14;
      v21 = &v15;
      v19 = v7;
      v22 = 8;
      TlgWriteEx(v8, v9, v6, v7, v12, v13, 5u, &pData);
    }
  }
}
