/*
 * XREFs of IsRegNameEqual @ 0x1C0289A18
 * Callers:
 *     bNotIsKeySymbolicLink @ 0x1C0108774 (bNotIsKeySymbolicLink.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall IsRegNameEqual(HANDLE KeyHandle, HANDLE a2, _DWORD *a3)
{
  unsigned int *v6; // rdi
  __int64 v7; // rdx
  ULONG v8; // ecx
  unsigned int v9; // eax
  size_t v10; // rcx
  char *v11; // rax
  char *v12; // rsi
  NTSTATUS v13; // ebx
  unsigned __int16 *v14; // rax
  signed __int64 v15; // rsi
  int v16; // ecx
  ULONG Length; // [rsp+70h] [rbp+18h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0;
  v6 = 0LL;
  ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  ZwQueryKey(a2, KeyNameInformation, 0LL, 0, &ResultLength);
  v7 = Length + 2;
  if ( (unsigned int)v7 < Length )
    return 0;
  v8 = ResultLength + 2;
  if ( ResultLength + 2 < ResultLength )
    return 0;
  ResultLength += 2;
  if ( Length + 5 < Length + 2 )
  {
    return 0;
  }
  else
  {
    v9 = (Length + 5) & 0xFFFFFFFC;
    v10 = v9 + v8;
    Length = v9;
    if ( (unsigned int)v10 >= v9 && (v11 = (char *)PALLOCMEM2(v10, 1718382187LL, 1), (v6 = (unsigned int *)v11) != 0LL) )
    {
      v12 = &v11[Length];
      v13 = ZwQueryKey(KeyHandle, KeyNameInformation, v11, Length, &Length);
      if ( v13 >= 0 )
      {
        *((_WORD *)v6 + ((unsigned __int64)*v6 >> 1) + 2) = 0;
        v13 = ZwQueryKey(a2, KeyNameInformation, v12, ResultLength, &ResultLength);
        if ( v13 >= 0 )
        {
          *(_WORD *)&v12[2 * ((unsigned __int64)*(unsigned int *)v12 >> 1) + 4] = 0;
          v14 = (unsigned __int16 *)(v6 + 1);
          v15 = v12 - (char *)v6;
          do
          {
            v7 = *(unsigned __int16 *)((char *)v14 + v15);
            v16 = *v14 - (_DWORD)v7;
            if ( v16 )
              break;
            ++v14;
          }
          while ( (_DWORD)v7 );
          *a3 = v16 == 0;
        }
      }
    }
    else
    {
      v13 = 0;
    }
    if ( v6 )
      Win32FreePool(v6, v7);
  }
  return (unsigned int)v13;
}
