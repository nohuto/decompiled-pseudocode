/*
 * XREFs of ?ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@@KPEBGN@Z @ 0x180008400
 * Callers:
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180008260 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::ReadInternalResourceSetTypeInfo(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        HKEY a2,
        int a3,
        const unsigned __int16 *a4,
        double a5)
{
  unsigned __int64 v5; // r12
  char *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // edi
  wchar_t **v10; // rbx
  const WCHAR *v11; // rdx
  BYTE *lpData; // rsi
  HKEY v13; // rbp
  LSTATUS v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // al
  double v19; // xmm0_8
  HKEY phkResult; // [rsp+70h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+80h] [rbp+18h] BYREF

  v5 = (unsigned int)a3;
  v7 = (char *)this + 360 * (unsigned int)a3;
  *(_DWORD *)v7 = a3;
  if ( (a3 >= 26 || a3 < 12) && (a3 < 42 || a3 >= 52) && (a3 < 35 || a3 >= 41) )
  {
    switch ( a3 )
    {
      case 0:
      case 5:
      case 6:
      case 7:
      case 26:
      case 30:
      case 32:
      case 33:
      case 34:
      case 41:
      case 52:
        *((_WORD *)v7 + 10) &= 0xFFE9u;
        *((_WORD *)v7 + 10) |= 0x69u;
        break;
      case 11:
        *((_DWORD *)v7 + 7) &= ~1u;
        *((_DWORD *)v7 + 7) |= 2u;
        break;
      default:
        break;
    }
  }
  v8 = 0;
  phkResult = 0LL;
  RegOpenKeyW(a2, a4, &phkResult);
  v9 = 0;
  v10 = &off_1800177E8;
  do
  {
    v11 = *v10;
    lpData = (BYTE *)&v7[*((unsigned int *)v10 - 2)];
    v13 = phkResult;
    cbData = 4;
    v14 = RegQueryValueExW(a2, v11, 0LL, 0LL, lpData, &cbData);
    if ( v14 )
    {
      if ( v13 )
        v14 = RegQueryValueExW(v13, *v10, 0LL, 0LL, lpData, &cbData);
      if ( v14 )
      {
        if ( !*((_BYTE *)v10 + 8) )
        {
          v8 = -2147024809;
          goto LABEL_22;
        }
        *(_DWORD *)lpData = *((_DWORD *)v10 + 3);
      }
    }
    ++v9;
    v10 += 3;
  }
  while ( v9 < 0xD );
  v15 = *((_DWORD *)v7 + 3);
  *((_DWORD *)v7 + 22) = v15;
  *((_DWORD *)v7 + 28) = v15;
  *((_DWORD *)v7 + 34) = v15;
  if ( !*((_QWORD *)v7 + 13) )
  {
    if ( (unsigned int)v5 > 0x38 || (v16 = 0x100002002000400LL, !_bittest64(&v16, v5)) )
      *((_QWORD *)v7 + 13) = *((_QWORD *)v7 + 7);
  }
  v17 = *((_QWORD *)v7 + 7);
  v18 = v17 != *((_QWORD *)v7 + 13);
  *((_DWORD *)v7 + 89) &= ~0x40000u;
  *((_DWORD *)v7 + 89) |= v18 << 18;
  v19 = (double)(int)v17;
  if ( v17 < 0 )
    v19 = v19 + 1.844674407370955e19;
  *((_QWORD *)v7 + 43) = (unsigned int)(int)(v19 * a5);
LABEL_22:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v8;
}
