/*
 * XREFs of KeOrAffinityEx @ 0x1400968D0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14007D290 (KeQueryLogicalProcessorRelationship.c)
 *     KiForwardTick @ 0x1400D89C0 (KiForwardTick.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F1C0 (PpmPerfApplyProcessorStates.c)
 *     KiStartProfileTarget @ 0x1401D7154 (KiStartProfileTarget.c)
 *     PpmUpdateProcessorPolicy @ 0x1405454EC (PpmUpdateProcessorPolicy.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmHeteroDetectFavoredCores @ 0x14056A874 (PpmHeteroDetectFavoredCores.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  __int64 v3; // r9
  unsigned __int16 *v4; // r11
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  signed __int64 v7; // r10
  _QWORD *v8; // rbx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v12; // rdx
  _BYTE v13[176]; // [rsp+0h] [rbp-C8h] BYREF

  if ( !a3 )
    a3 = v13;
  LOWORD(v3) = *a1;
  if ( *a1 < *a2 )
  {
    v4 = a2;
  }
  else
  {
    v4 = a1;
    LOWORD(v3) = *a2;
  }
  *((_WORD *)a3 + 1) = 20;
  v5 = 0;
  *(_WORD *)a3 = *v4;
  v6 = 0;
  if ( (_WORD)v3 )
  {
    v7 = (char *)a1 - (char *)a2;
    v8 = a2 + 4;
    v6 = v3;
    v3 = (unsigned __int16)v3;
    do
    {
      v9 = (*v8 | *(_QWORD *)((char *)v8 + v7)) == 0LL;
      *(_QWORD *)((char *)v8 + a3 - (_BYTE *)a2) = *v8 | *(_QWORD *)((char *)v8 + v7);
      if ( !v9 )
        v5 = 1;
      ++v8;
      --v3;
    }
    while ( v3 );
  }
  for ( ; v6 < *v4; ++v6 )
  {
    v12 = *(_QWORD *)&v4[4 * v6 + 4];
    *(_QWORD *)&a3[8 * v6 + 8] = v12;
    if ( v12 )
      v5 = 1;
  }
  if ( a3 != v13 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v6 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v10 + 8] = 0LL )
      v10 = v6++;
  }
  return v5;
}
