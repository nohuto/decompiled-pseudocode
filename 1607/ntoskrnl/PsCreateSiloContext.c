/*
 * XREFs of PsCreateSiloContext @ 0x14056014C
 * Callers:
 *     CmpCreateServerSiloCallback @ 0x14055FED0 (CmpCreateServerSiloCallback.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 */

__int64 __fastcall PsCreateSiloContext(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  _DWORD *v8; // rdx
  _QWORD *v9; // rbx
  int v10; // r9d
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v14; // [rsp+20h] [rbp-48h]
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF
  __int16 v16; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    v8 = PsSiloContextPagedType;
  }
  else
  {
    if ( a3 != 512 )
      return 3221225485LL;
    v8 = (_DWORD *)PsSiloContextNonPagedType;
  }
  v9 = 0LL;
  v16 = 256;
  v10 = ObCreateObjectEx(0, v8, 0LL, 0, v14, a2, 0, 0, v15, &v16);
  if ( v10 >= 0 )
  {
    v11 = v15[0];
    if ( (*(_BYTE *)(v15[0] - 48LL + 26) & 0x40) != 0 )
      v9 = (_QWORD *)(*(_QWORD *)(v15[0] - 48LL - ObpInfoMaskToOffset[*(_BYTE *)(v15[0] - 48LL + 26) & 0x7F]) + 32LL);
    v12 = a5;
    *v9 = a1;
    v9[1] = a4;
    *v12 = v11;
  }
  return (unsigned int)v10;
}
