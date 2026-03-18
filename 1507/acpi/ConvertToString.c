/*
 * XREFs of ConvertToString @ 0x1C0049B70
 * Callers:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     ToString @ 0x1C00496F0 (ToString.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DB8 (RtlStringCchPrintfA.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ConvertToString(__int64 a1, unsigned int a2, __int64 a3)
{
  size_t v3; // rdi
  unsigned int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // r14
  _BYTE *v13; // rax
  _BYTE *v14; // r14
  unsigned int v15; // eax
  _BYTE *v16; // rax
  _BYTE *v17; // r14
  size_t v18; // r14
  _BYTE *v19; // rax
  _BYTE *v20; // rsi
  __int128 v21; // xmm1
  __int64 v22; // xmm0_8
  _BYTE v24[40]; // [rsp+20h] [rbp-50h] BYREF
  char pszDest[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h]
  char v27; // [rsp+58h] [rbp-18h]

  v3 = a2;
  *(_QWORD *)pszDest = 0LL;
  v26 = 0LL;
  v6 = 0;
  v27 = 0;
  memset(v24, 0, sizeof(v24));
  v7 = *(unsigned __int16 *)(a1 + 2);
  *(_WORD *)&v24[2] = 2;
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v18 = 17LL;
      RtlStringCchPrintfA(pszDest, 0x11uLL, "%I64x", *(_QWORD *)(a1 + 16));
    }
    else
    {
      v18 = 9LL;
      RtlStringCchPrintfA(pszDest, 9uLL, "%x", *(_DWORD *)(a1 + 16));
    }
    if ( !(_DWORD)v3 || v3 >= v18 )
      LODWORD(v3) = strnlen(pszDest, v18);
    *(_DWORD *)&v24[24] = v3 + 1;
    v19 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, (int)v3 + 1);
    *(_QWORD *)&v24[32] = v19;
    v20 = v19;
    if ( v19 )
    {
      memmove(v19, pszDest, (unsigned int)(v3 + 1));
      v20[(unsigned int)v3] = 0;
      goto LABEL_29;
    }
    return (unsigned int)-1073741670;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v15 = *(_DWORD *)(a1 + 24) - 1;
    if ( (unsigned int)v3 <= v15 )
    {
      if ( !(_DWORD)v3 )
        v3 = v15;
      *(_DWORD *)&v24[24] = v3 + 1;
      v16 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, (int)v3 + 1);
      *(_QWORD *)&v24[32] = v16;
      v17 = v16;
      if ( v16 )
      {
        memmove(v16, *(const void **)(a1 + 32), (unsigned int)(v3 + 1));
        v17[v3] = 0;
        goto LABEL_29;
      }
      return (unsigned int)-1073741670;
    }
    return (unsigned int)-1072431098;
  }
  if ( v9 == 1 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v11 = 201;
    if ( v10 < 0xC9 )
      v11 = *(_DWORD *)(a1 + 24);
    v12 = v11;
    if ( !(_DWORD)v3 )
    {
      LODWORD(v3) = strnlen(*(const char **)(a1 + 32), v11);
      if ( (unsigned int)v3 == v12 )
        return (unsigned int)-1073741306;
LABEL_12:
      *(_DWORD *)&v24[24] = v3 + 1;
      v13 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, (int)v3 + 1);
      *(_QWORD *)&v24[32] = v13;
      v14 = v13;
      if ( v13 )
      {
        memmove(v13, *(const void **)(a1 + 32), (unsigned int)v3);
        v14[(unsigned int)v3] = 0;
LABEL_29:
        FreeDataBuffs(a3, 1u);
        v21 = *(_OWORD *)&v24[16];
        *(_OWORD *)a3 = *(_OWORD *)v24;
        v22 = *(_QWORD *)&v24[32];
        *(_OWORD *)(a3 + 16) = v21;
        *(_QWORD *)(a3 + 32) = v22;
        return v6;
      }
      return (unsigned int)-1073741670;
    }
    if ( (unsigned int)v3 <= v10 && (unsigned int)v3 <= 0xC8 )
      goto LABEL_12;
    return (unsigned int)-1072431098;
  }
  return (unsigned int)-1072431095;
}
