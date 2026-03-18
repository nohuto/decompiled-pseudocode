/*
 * XREFs of NtDCompositionCreateChannel @ 0x1C00120B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0010CC8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00127F4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 */

__int64 __fastcall NtDCompositionCreateChannel(unsigned int *a1)
{
  _DWORD *v2; // rdx
  int v3; // ebx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  if ( a1 )
  {
    v2 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v2 = (_DWORD *)MmUserProbeAddress;
    *v2 = *v2;
    v3 = DirectComposition::CApplicationChannel::Create(&v5);
    if ( v3 >= 0 )
      *a1 = v5;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
