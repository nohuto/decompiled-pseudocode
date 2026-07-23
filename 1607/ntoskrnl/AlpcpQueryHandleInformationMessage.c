/*
 * XREFs of AlpcpQueryHandleInformationMessage @ 0x1404B1574
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140407880 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObCompleteObjectDuplication @ 0x1404B1680 (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpQueryHandleInformationMessage(__int64 a1, __int64 a2, unsigned int *a3, int a4, _DWORD *a5)
{
  unsigned int v8; // eax
  __int64 v9; // rcx
  char PreviousMode; // r10
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  _DWORD v16[6]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h]
  _DWORD v18[6]; // [rsp+60h] [rbp-18h] BYREF

  v17 = 0uLL;
  v18[0] = 0;
  if ( a4 != 20 )
    return 3221225476LL;
  v8 = *a3;
  LODWORD(v17) = *a3;
  v9 = *(_QWORD *)(a2 + 152);
  if ( !v9 || v8 >= *(_DWORD *)(v9 + 4) )
    return 3221225480LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 48LL * (unsigned int)v17;
  if ( (*(_DWORD *)(v11 + v9) & *(_DWORD *)(a1 + 320)) == 0 )
    return 3221225508LL;
  v12 = *(_QWORD *)(a1 + 24);
  if ( (v12 & 1) != 0 )
    v12 = 0LL;
  if ( !v12 )
    return 3221225506LL;
  HIDWORD(v17) = *(_DWORD *)(v11 + v9);
  v13 = v11 + v9 + 8;
  LOBYTE(v11) = PreviousMode;
  v14 = ObCompleteObjectDuplication(v13, v12, v11, v16, v18);
  DWORD2(v17) = v16[0];
  if ( v14 >= 0 )
  {
    *(_OWORD *)a3 = v17;
    a3[4] = v18[0];
    if ( a5 )
      *a5 = 20;
  }
  return (unsigned int)v14;
}
