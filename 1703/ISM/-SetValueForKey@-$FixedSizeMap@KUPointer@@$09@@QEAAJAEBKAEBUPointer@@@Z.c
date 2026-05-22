/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@KUPointer@@$09@@QEAAJAEBKAEBUPointer@@@Z @ 0x18007EF5C
 * Callers:
 *     ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x18007EA94 (-SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeMap<unsigned long,Pointer,10>::SetValueForKey(__int64 a1, int *a2, _OWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // ebx
  _DWORD *v5; // r9
  unsigned int v6; // edi
  int v7; // r11d
  int v8; // r9d
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx

  v3 = *a2;
  v4 = 0;
  v5 = (_DWORD *)a1;
  v6 = 0;
  LOBYTE(a1) = 0;
  v7 = v5[130];
  if ( *a2 == v7 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 133;
LABEL_4:
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v8, v4);
    }
  }
  else
  {
    v9 = 0;
    v10 = v5;
    do
    {
      if ( *v10 == v3 )
      {
        v12 = 13LL * v9;
        *(_OWORD *)&v5[v12 + 1] = *a3;
        *(_OWORD *)&v5[v12 + 5] = a3[1];
        *(_OWORD *)&v5[v12 + 9] = a3[2];
        return v4;
      }
      if ( !(_BYTE)a1 && *v10 == v7 )
      {
        v6 = v9;
        LOBYTE(a1) = 1;
      }
      ++v9;
      v10 += 13;
    }
    while ( v9 < 0xA );
    if ( (_BYTE)a1 )
    {
      v11 = 13LL * v6;
      v5[v11] = v3;
      *(_OWORD *)&v5[v11 + 1] = *a3;
      *(_OWORD *)&v5[v11 + 5] = a3[1];
      *(_OWORD *)&v5[v11 + 9] = a3[2];
      return v4;
    }
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 163;
      goto LABEL_4;
    }
  }
  return v4;
}
