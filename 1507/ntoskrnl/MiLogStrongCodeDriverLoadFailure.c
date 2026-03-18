/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x1406A0F7C
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  char *v9; // rcx
  PVOID **v10; // rax
  int v11; // [rsp+30h] [rbp-49h] BYREF
  int v12; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  _DWORD *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  __int64 v18; // [rsp+80h] [rbp+7h]
  _DWORD v19[2]; // [rsp+88h] [rbp+Fh] BYREF
  int *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  int *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]

  if ( hProvider )
  {
    if ( hProvider->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 0x400000000000uLL) )
      {
        v12 = *(_DWORD *)(a2 + 120);
        v11 = *(_DWORD *)(a2 + 156);
        TlgCreateSz(&pDesc, Src);
        v4 = *(_QWORD *)(a2 + 96);
        v17 = 0;
        v19[1] = 0;
        v22 = 0;
        v25 = 0;
        v18 = v4;
        v19[0] = *(unsigned __int16 *)(a2 + 88);
        v20 = &v12;
        v15 = v19;
        v23 = &v11;
        v16 = 2;
        v21 = 4;
        v24 = 4;
        MmTlgWrite(v5, (unsigned __int8 *)dword_1402A42E9, 0LL, 0LL, 7u, &v13);
      }
    }
  }
  else
  {
    v6 = -1LL;
    do
      ++v6;
    while ( Src[v6] );
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = PoolWithTag + 6;
      memmove(PoolWithTag + 6, Src, v6 + 1);
      v9 = (char *)v8 + v6 + 49;
      v8[4] = v9;
      memmove(v9, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *((_WORD *)v8 + 12) = *(_WORD *)(a2 + 88);
      *((_WORD *)v8 + 13) = *(_WORD *)(a2 + 88);
      *((_DWORD *)v8 + 10) = *(_DWORD *)(a2 + 120);
      *((_DWORD *)v8 + 11) = *(_DWORD *)(a2 + 156);
      v10 = (PVOID **)off_1403211C8;
      *v8 = &MiStrongCodeLoadFailureHead;
      v8[1] = v10;
      if ( *v10 != &MiStrongCodeLoadFailureHead )
        __fastfail(3u);
      *v10 = (PVOID *)v8;
      off_1403211C8 = (_UNKNOWN **)v8;
    }
  }
}
