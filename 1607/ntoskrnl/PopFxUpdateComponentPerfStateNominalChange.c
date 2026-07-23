/*
 * XREFs of PopFxUpdateComponentPerfStateNominalChange @ 0x140203FF8
 * Callers:
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140130CB8 (PopPepCompleteComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopFxQueryCurrentComponentPerfState @ 0x140203278 (PopFxQueryCurrentComponentPerfState.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x1402087A0 (PopDiagTraceFxPerfNominalChange.c)
 */

_BYTE *__fastcall PopFxUpdateComponentPerfStateNominalChange(__int64 a1, int a2, char a3, int a4)
{
  _BYTE *result; // rax
  int v5; // edi
  unsigned int v6; // esi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // edx
  __int64 v14; // [rsp+20h] [rbp-48h]
  _BYTE *v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+10h] BYREF

  result = *(_BYTE **)(a1 + 624);
  v5 = 0;
  v6 = 0;
  v10 = *(_QWORD *)&result[8 * a2];
  v11 = *(_QWORD *)(v10 + 248);
  v12 = *(_QWORD *)(v11 + 48);
  if ( *(_DWORD *)(v11 + 144) )
  {
    do
    {
      result = PopFxQueryCurrentComponentPerfState(a1, v10, v6, 1, &v15, &v16);
      if ( v16 )
      {
        result = v15;
        ++v5;
        *(_QWORD *)(v12 + 8) = v15;
        *(_DWORD *)v12 = v6;
        v12 += 16LL;
      }
      ++v6;
    }
    while ( v6 < *(_DWORD *)(v11 + 144) );
    if ( v5 )
    {
      *(_DWORD *)(v11 + 56) = v5;
      *(_QWORD *)(v11 + 64) = MEMORY[0xFFFFF78000000008];
      LOBYTE(v13) = a3;
      v14 = *(_QWORD *)(v11 + 48);
      *(_BYTE *)(v11 + 72) = 1;
      return (_BYTE *)PopDiagTraceFxPerfNominalChange(v11, v13, a4, v5, v14);
    }
  }
  return result;
}
