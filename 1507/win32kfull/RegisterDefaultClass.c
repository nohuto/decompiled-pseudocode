/*
 * XREFs of RegisterDefaultClass @ 0x1C0059D10
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C00578B0 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C005AF90 (NtUserRegisterClassExWOW.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C005CF60 (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterDefaultClass(wchar_t *Str1)
{
  int v2; // r15d
  int v3; // edi
  int IntegerAtom; // eax
  __int64 v5; // r12
  unsigned int v6; // ebx
  _QWORD *v7; // rdi
  __int64 v8; // r13
  const wchar_t *v9; // rdx
  bool v10; // zf
  __int64 result; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v15[4]; // [rsp+20h] [rbp-60h] BYREF
  int v16; // [rsp+24h] [rbp-5Ch]
  __int64 v17; // [rsp+28h] [rbp-58h]
  int v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+34h] [rbp-4Ch]
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int16 v28; // [rsp+B0h] [rbp+30h] BYREF

  v2 = 1;
  v3 = (*(unsigned __int8 *)(gptiCurrent + 448LL) >> 2) & 1;
  v28 = 0;
  IntegerAtom = ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    IntegerAtom = (unsigned __int8)RtlGetIntegerAtom(Str1, &v28);
  else
    v28 = (__int16)Str1;
  v5 = v3;
  v6 = 0;
  v7 = &gDefaultServerClasses;
  v8 = IntegerAtom;
  while ( 1 )
  {
    if ( v5 && (*(_DWORD *)v7 & 1) == 0 || ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 792LL) >> v6) & 1) != 0 )
      goto LABEL_10;
    v2 = 0;
    if ( v8 )
      break;
    v9 = (const wchar_t *)v7[5];
    if ( ((unsigned __int64)v9 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v10 = _wcsicmp(Str1, v9) == 0;
      goto LABEL_9;
    }
LABEL_10:
    ++v6;
    v7 += 6;
    if ( v6 >= 8 )
      goto LABEL_11;
  }
  v10 = v28 == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)v7 >> 3) & 0x1F) + 852);
LABEL_9:
  if ( !v10 )
    goto LABEL_10;
  v18 = 0;
  v21 = 0LL;
  v26 = 0LL;
  v20 = hModuleWin;
  v24 = 0LL;
  v16 = *((_DWORD *)&gDefaultServerClasses + 12 * v6 + 2);
  v17 = *((_QWORD *)&gDefaultServerClasses + 6 * v6 + 2);
  v19 = *((_DWORD *)&gDefaultServerClasses + 12 * v6 + 6);
  if ( (*((_DWORD *)&gDefaultServerClasses + 12 * v6) & 2) != 0 && (v12 = (__int64 *)gasyscur[1]) != 0LL )
    v22 = *v12;
  else
    v22 = 0LL;
  v13 = *((unsigned __int16 *)&gDefaultServerClasses + 24 * v6 + 2);
  v14 = *((unsigned __int16 *)&gDefaultServerClasses + 24 * v6 + 3) | 0x41u;
  v23 = *((_QWORD *)&gDefaultServerClasses + 6 * v6 + 4);
  v25 = *((_QWORD *)&gDefaultServerClasses + 6 * v6 + 5);
  v27 = v25;
  result = InternalRegisterClassEx(v15, v13, v14, 0LL);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 792LL) |= 1 << v6;
LABEL_11:
    if ( v2 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) |= 0x2000u;
    return 1LL;
  }
  return result;
}
