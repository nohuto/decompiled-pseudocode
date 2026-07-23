/*
 * XREFs of WheapWmiRegisterInfo @ 0x14014B700
 * Callers:
 *     WheaWmiDispatch @ 0x14014B6A8 (WheaWmiDispatch.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall WheapWmiRegisterInfo(__int64 a1, unsigned int a2, _DWORD *a3, int *a4)
{
  int v4; // edi
  __int64 v7; // r8
  int *v8; // rdx
  _DWORD *v9; // rcx
  int v10; // eax
  __int64 result; // rax

  v4 = 158;
  if ( a2 < 0x9E )
  {
    if ( a2 >= 4 )
    {
      *a3 = 158;
      v4 = 4;
    }
    result = 3221225507LL;
  }
  else
  {
    memset(a3, 0, 0x9EuLL);
    v7 = 3LL;
    v8 = (int *)&unk_14025CAEC;
    a3[4] = 3;
    v9 = a3 + 11;
    do
    {
      *(_OWORD *)(v9 - 5) = *(_OWORD *)*(_QWORD *)(v8 - 3);
      v10 = *v8;
      v8 += 4;
      *(v9 - 1) = v10;
      *v9 = *(v8 - 5);
      v9[1] = 120;
      v9 += 8;
      --v7;
    }
    while ( v7 );
    *((_WORD *)a3 + 60) = 36;
    *(_OWORD *)((char *)a3 + 122) = *(_OWORD *)L"WHEA_WMI_PROVIDER";
    *(_OWORD *)((char *)a3 + 138) = *(_OWORD *)L"_PROVIDER";
    *(_DWORD *)((char *)a3 + 154) = *(_DWORD *)L"R";
    result = 0LL;
    *a3 = 158;
  }
  *a4 = v4;
  return result;
}
