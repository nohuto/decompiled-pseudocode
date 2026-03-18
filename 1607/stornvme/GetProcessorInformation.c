/*
 * XREFs of GetProcessorInformation @ 0x1C00057E8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0006D5C (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     FreeProcessorInfo @ 0x1C00053E4 (FreeProcessorInfo.c)
 */

char __fastcall GetProcessorInformation(__int64 a1)
{
  unsigned __int16 v2; // si
  unsigned __int16 v3; // ax
  _QWORD *v4; // r14
  _DWORD *v5; // r15
  _QWORD *v6; // r12
  unsigned int v7; // ecx
  unsigned __int16 v8; // bp
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rbx
  unsigned __int16 v12; // r15
  unsigned __int16 v14; // [rsp+80h] [rbp+8h]
  unsigned __int16 v15; // [rsp+90h] [rbp+18h] BYREF
  char v16; // [rsp+92h] [rbp+1Ah]
  char v17; // [rsp+93h] [rbp+1Bh]
  unsigned int v18; // [rsp+98h] [rbp+20h]

  FreeProcessorInfo(a1);
  v2 = 0;
  if ( !*(_WORD *)(a1 + 160) )
    goto LABEL_17;
  v3 = *(_WORD *)(a1 + 162);
  if ( !v3 )
    goto LABEL_17;
  v4 = (_QWORD *)(a1 + 192);
  StorPortExtendedFunction(0LL, a1, 32 * (unsigned int)v3);
  if ( !*(_QWORD *)(a1 + 192) )
    goto LABEL_17;
  NVMeZeroMemory(*(void **)(a1 + 192), 32 * *(unsigned __int16 *)(a1 + 162));
  v5 = (_DWORD *)(a1 + 168);
  StorPortExtendedFunction(22LL, a1, a1 + 168);
  StorPortExtendedFunction(20LL, a1, a1 + 164);
  if ( *(_DWORD *)(a1 + 164)
    && (v6 = (_QWORD *)(a1 + 184),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v5 + 1))),
        *(_QWORD *)(a1 + 184)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 184), 24 * (*v5 + 1));
    v7 = 0;
    v14 = 0;
    v8 = 0;
    do
    {
      *(_WORD *)(*v6 + 24LL * v8) = v8;
      StorPortExtendedFunction(21LL, a1, v7);
      v9 = *(_DWORD *)(*v6 + 24LL * v8 + 8) - ((*(_DWORD *)(*v6 + 24LL * v8 + 8) >> 1) & 0x55555555);
      *(_WORD *)(*v6 + 24LL * v8 + 2) = (unsigned __int16)((16843009
                                                          * (((v9 & 0x33333333)
                                                            + ((v9 >> 2) & 0x33333333)
                                                            + (((v9 & 0x33333333) + ((v9 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v10 = HIDWORD(*(_QWORD *)(*v6 + 24LL * v8 + 8))
          - (((unsigned int)HIDWORD(*(_QWORD *)(*v6 + 24LL * v8 + 8)) >> 1) & 0x55555555);
      *(_WORD *)(*v6 + 24LL * v8 + 2) += (unsigned __int16)((16843009
                                                           * (((v10 & 0x33333333)
                                                             + ((v10 >> 2) & 0x33333333)
                                                             + (((v10 & 0x33333333) + ((v10 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v11 = *(_QWORD *)(*v6 + 24LL * v8 + 8);
      if ( *(_WORD *)(*v6 + 24LL * v8 + 2) )
      {
        if ( v11 )
        {
          v12 = *(_WORD *)(*v6 + 24LL * v8 + 16);
          do
          {
            if ( _bittest64(&v11, (unsigned __int8)v2) )
            {
              v15 = v12;
              v16 = v2;
              v17 = 0;
              StorPortExtendedFunction(56LL, a1, &v15);
              *(_DWORD *)(32LL * v18 + *v4) = v18;
              *(_QWORD *)(32LL * v18 + *v4 + 8) = *(_QWORD *)(a1 + 176) + 16LL * v12;
              *(_QWORD *)(32LL * v18 + *v4 + 16) = *v6 + 24LL * v8;
              _bittestandreset64(&v11, v2);
            }
            ++v2;
          }
          while ( v11 );
          v8 = v14;
          v5 = (_DWORD *)(a1 + 168);
        }
        v2 = 0;
      }
      v7 = ++v8;
      v14 = v8;
    }
    while ( (unsigned int)v8 <= *v5 );
    return 1;
  }
  else
  {
LABEL_17:
    FreeProcessorInfo(a1);
    return 0;
  }
}
