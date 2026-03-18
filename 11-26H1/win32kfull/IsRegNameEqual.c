/*
 * XREFs of IsRegNameEqual @ 0x140244388
 * Callers:
 *     bNotIsKeySymbolicLink @ 0x1400CB428 (bNotIsKeySymbolicLink.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 */

__int64 __fastcall IsRegNameEqual(HANDLE KeyHandle, HANDLE a2, _DWORD *a3)
{
  int v3; // ebx
  ULONG v7; // ecx
  ULONG v8; // eax
  unsigned int v9; // ecx
  NTSTATUS v10; // edi
  char *v12; // rax
  unsigned int *v13; // rsi
  char *v14; // r14
  unsigned __int16 *v15; // rax
  signed __int64 v16; // r14
  int v17; // ecx
  int v18; // edx
  ULONG Length; // [rsp+70h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *a3 = 0;
  Length = 0;
  ResultLength = 0;
  ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  ZwQueryKey(a2, KeyNameInformation, 0LL, 0, &ResultLength);
  if ( Length + 2 >= Length
    && (v7 = ResultLength + 2, ResultLength + 2 >= ResultLength)
    && (ResultLength += 2, Length + 5 >= Length + 2)
    && (v8 = (Length + 5) & 0xFFFFFFFC, v9 = v8 + v7, Length = v8, v9 >= v8)
    && (v12 = (char *)PALLOCMEM(v9, 1718382187LL), (v13 = (unsigned int *)v12) != 0LL) )
  {
    v14 = &v12[Length];
    v10 = ZwQueryKey(KeyHandle, KeyNameInformation, v12, Length, &Length);
    if ( v10 >= 0 )
    {
      *((_WORD *)v13 + ((unsigned __int64)*v13 >> 1) + 2) = 0;
      v10 = ZwQueryKey(a2, KeyNameInformation, v14, ResultLength, &ResultLength);
      if ( v10 >= 0 )
      {
        *(_WORD *)&v14[2 * ((unsigned __int64)*(unsigned int *)v14 >> 1) + 4] = 0;
        v15 = (unsigned __int16 *)(v13 + 1);
        v16 = v14 - (char *)v13;
        do
        {
          v17 = *(unsigned __int16 *)((char *)v15 + v16);
          v18 = *v15 - v17;
          if ( v18 )
            break;
          ++v15;
        }
        while ( v17 );
        LOBYTE(v3) = v18 == 0;
        *a3 = v3;
      }
    }
    Win32FreePool(v13);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
