/*
 * XREFs of MiLogOutswappedProcessCommitRelease @ 0x14020F404
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void MiLogOutswappedProcessCommitRelease()
{
  __int64 v0; // r10
  __int64 v1; // r11
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v8; // [rsp+70h] [rbp+27h]
  int v9; // [rsp+78h] [rbp+2Fh]
  int v10; // [rsp+7Ch] [rbp+33h]
  __int64 *v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+8Ch] [rbp+43h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 4uLL) )
    {
      v4 = *(_DWORD *)(v0 + 744);
      v5 = v1;
      TlgCreateSz(&pDesc, (LPCSTR)(v0 + 1096));
      v10 = 0;
      v13 = 0;
      v11 = &v5;
      v8 = &v4;
      v9 = 4;
      v12 = 8;
      MmTlgWrite(v3, (unsigned __int8 *)dword_1402A4476, v2, v3, 5u, &v6);
    }
  }
}
