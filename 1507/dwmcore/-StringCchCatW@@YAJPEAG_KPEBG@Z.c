/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180124E1C
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180124BF0 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 * Callees:
 *     StringLengthWorkerW @ 0x180124EB0 (StringLengthWorkerW.c)
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, size_t a2, char *a3)
{
  HRESULT v5; // r11d
  unsigned __int16 *v6; // rcx
  size_t v7; // rax
  __int64 v8; // rdx
  char *v9; // rdi
  unsigned __int16 v10; // r8
  size_t pcchLength; // [rsp+38h] [rbp+10h] BYREF

  pcchLength = a2;
  v5 = StringLengthWorkerW(a1, a2, &pcchLength);
  if ( v5 >= 0 )
  {
    v5 = 0;
    v6 = &a1[pcchLength];
    v7 = 260 - pcchLength;
    if ( pcchLength == 260 )
      goto LABEL_8;
    v8 = 2147483646LL;
    v9 = (char *)(a3 - (char *)v6);
    do
    {
      if ( !v8 )
        break;
      v10 = *(unsigned __int16 *)((char *)v6 + (_QWORD)v9);
      if ( !v10 )
        break;
      *v6 = v10;
      --v8;
      ++v6;
      --v7;
    }
    while ( v7 );
    if ( !v7 )
    {
LABEL_8:
      --v6;
      v5 = -2147024774;
    }
    *v6 = 0;
  }
  return (unsigned int)v5;
}
