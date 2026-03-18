/*
 * XREFs of NtDCompositionCreateChannel @ 0x1C000D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C000D3A8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000D5B4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 */

__int64 __fastcall NtDCompositionCreateChannel(unsigned int *a1, unsigned int *a2, void **a3)
{
  unsigned int *v5; // rsi
  unsigned int **v6; // rdx
  int v7; // ebx
  unsigned int *v8; // rax
  _QWORD *v9; // rdx
  int v11; // [rsp+20h] [rbp-38h]
  unsigned int v12; // [rsp+24h] [rbp-34h] BYREF
  void *v13; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  v12 = 0;
  v14 = 0;
  v13 = 0LL;
  if ( a1 )
  {
    v6 = (unsigned int **)MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned int *)MmUserProbeAddress;
    *a1 = *a1;
    v7 = 0;
    v11 = 0;
  }
  else
  {
    v7 = -1073741811;
    v11 = -1073741811;
    v6 = (unsigned int **)MmUserProbeAddress;
  }
  if ( a2 )
  {
    v8 = a2;
    if ( a2 + 1 < a2 || a2 + 1 > *v6 )
      v8 = *v6;
    v14 = *v8;
    if ( v14 )
    {
      v9 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v9 = (_QWORD *)MmUserProbeAddress;
      *v9 = *v9;
      v7 = v11;
    }
  }
  if ( v7 >= 0 )
  {
    v7 = DirectComposition::CApplicationChannel::Create(&v12, &v14, &v13);
    if ( v7 >= 0 )
    {
      *v5 = v12;
      if ( v14 )
      {
        *a2 = v14;
        *a3 = v13;
      }
    }
  }
  return (unsigned int)v7;
}
