/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x14020F294
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int8 *v9; // rdx
  __int64 v10; // r11
  __int64 v11; // r11
  int v12; // [rsp+30h] [rbp-19h] BYREF
  __int64 v13; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  __int64 *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  if ( hProvider )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
        {
          v12 = *(_DWORD *)(v10 + 744);
          v13 = a2;
          TlgCreateSz(&pDesc, (LPCSTR)(v10 + 1096));
          v9 = (unsigned __int8 *)&unk_1402A4422;
          goto LABEL_13;
        }
      }
      else if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
      {
        v12 = *(_DWORD *)(v11 + 744);
        v13 = a2;
        TlgCreateSz(&pDesc, (LPCSTR)(v11 + 1096));
        v9 = (unsigned __int8 *)&dword_1402A437E;
        goto LABEL_13;
      }
    }
    else if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 4uLL) )
    {
      v12 = *(_DWORD *)(v5 + 744);
      v13 = a2;
      TlgCreateSz(&pDesc, (LPCSTR)(v5 + 1096));
      v9 = (unsigned __int8 *)&unk_1402A43D2;
LABEL_13:
      v18 = 0;
      v21 = 0;
      v16 = &v12;
      v19 = &v13;
      v17 = v7;
      v20 = 8;
      MmTlgWrite(v8, v9, v6, v7, 5u, &v14);
    }
  }
}
