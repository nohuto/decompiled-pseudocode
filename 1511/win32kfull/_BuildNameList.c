/*
 * XREFs of _BuildNameList @ 0x1C00F348C
 * Callers:
 *     NtUserBuildNameList @ 0x1C00F33A0 (NtUserBuildNameList.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall BuildNameList(__int64 a1, _DWORD *a2, size_t a3, _DWORD *a4)
{
  bool v6; // r13
  _WORD *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 CurrentProcess; // rax
  unsigned int v11; // eax
  PGENERIC_MAPPING v12; // rcx
  unsigned int v13; // r12d
  __int64 NameInfo; // rax
  __int64 v15; // r15
  _WORD *v16; // rbx
  int v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+24h] [rbp-54h]
  PGENERIC_MAPPING v20; // [rsp+30h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v6 = 1;
  a2[1] = 0;
  v7 = a2 + 2;
  v21 = (unsigned __int64)a2 + (unsigned int)a3 - 2;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v19 = 64;
    v20 = DesktopMapping;
    v9 = 16;
    v18 = 16;
    CurrentProcess = PsGetCurrentProcess(a1, 0LL, a3, a4);
    v6 = (unsigned int)IsProcessDwm(CurrentProcess) == 0;
    v11 = 64;
    v12 = DesktopMapping;
  }
  else
  {
    v8 = grpWinStaList;
    v11 = 256;
    v19 = 256;
    v12 = WinStaMapping;
    v20 = WinStaMapping;
    v9 = 8;
    v18 = 8;
  }
  v13 = 0;
  *a4 = 0;
  while ( v8 )
  {
    LOBYTE(a3) = v6;
    if ( (unsigned int)AccessCheckObject(v8, v11, a3, v12) )
    {
      NameInfo = ObQueryNameInfo(v8);
      v15 = NameInfo;
      if ( NameInfo )
      {
        if ( (unsigned __int64)v7 + *(unsigned __int16 *)(NameInfo + 8) + 2 >= v21 )
        {
          *a4 += (_DWORD)v7 - (_DWORD)a2;
          v7 = a2 + 2;
          v13 = -1073741789;
        }
        ++a2[1];
        a3 = *(unsigned __int16 *)(NameInfo + 8);
        if ( (unsigned __int64)v7 + a3 + 2 <= v21 )
        {
          memmove(v7, *(const void **)(NameInfo + 16), a3);
          v16 = (_WORD *)((char *)v7 + *(unsigned __int16 *)(v15 + 8));
          *v16 = 0;
          v7 = v16 + 1;
        }
        v9 = v18;
      }
      else
      {
        v9 = v18;
      }
    }
    v8 = *(_QWORD *)(v9 + v8);
    v11 = v19;
    v12 = v20;
  }
  *v7 = 0;
  *a2 = (_DWORD)v7 + 2 - (_DWORD)a2;
  *a4 += (_DWORD)v7 + 2 - (_DWORD)a2;
  return v13;
}
