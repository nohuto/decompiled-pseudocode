/*
 * XREFs of GetProcessorInformation @ 0x1C00033A0
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000436C (NVMeControllerInitPart1.c)
 * Callees:
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall GetProcessorInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // rsi
  __int64 v5; // r8
  void **v7; // rdi
  __int64 v8; // r8
  _DWORD *v9; // r15
  _DWORD *v10; // r14
  unsigned __int16 v11; // ax
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // edx
  unsigned __int16 v15; // r12
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rbp
  unsigned __int16 v20; // r15
  char result; // al
  unsigned __int16 v22; // [rsp+80h] [rbp+8h]
  unsigned __int16 v23; // [rsp+88h] [rbp+10h]
  unsigned __int16 v24; // [rsp+90h] [rbp+18h] BYREF
  char v25; // [rsp+92h] [rbp+1Ah]
  char v26; // [rsp+93h] [rbp+1Bh]
  unsigned int v27; // [rsp+98h] [rbp+20h] BYREF

  v4 = (void **)(a1 + 176);
  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 )
  {
    StorPortExtendedFunction(1LL, a1, v5, a4);
    *v4 = 0LL;
  }
  v7 = (void **)(a1 + 184);
  v8 = *(_QWORD *)(a1 + 184);
  if ( v8 )
  {
    StorPortExtendedFunction(1LL, a1, v8, a4);
    *v7 = 0LL;
  }
  v9 = (_DWORD *)(a1 + 156);
  v10 = (_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  if ( !*(_WORD *)(a1 + 152) )
    goto LABEL_30;
  v11 = *(_WORD *)(a1 + 154);
  if ( !v11 )
    goto LABEL_30;
  StorPortExtendedFunction(0LL, a1, 32 * (unsigned int)v11, 1701672526LL);
  if ( !*v7 )
    goto LABEL_30;
  v12 = (32 * (unsigned int)*(unsigned __int16 *)(a1 + 154)) >> 2;
  if ( v12 )
    memset(*v7, 0, 4LL * v12);
  StorPortExtendedFunction(22LL, a1, a1 + 160, a4);
  StorPortExtendedFunction(20LL, a1, a1 + 156, v13);
  if ( *v9 && (StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v10 + 1)), 1701672526LL), *v4) )
  {
    v14 = (unsigned int)(24 * (*v10 + 1)) >> 2;
    if ( v14 )
      memset(*v4, 0, 4LL * v14);
    v15 = 0;
    v22 = 0;
    v16 = 0;
    do
    {
      *((_WORD *)*v4 + 12 * v15) = v15;
      StorPortExtendedFunction(21LL, a1, v16, (char *)*v4 + 24 * v15 + 8);
      v17 = *((_DWORD *)*v4 + 6 * v15 + 2) - ((*((_DWORD *)*v4 + 6 * v15 + 2) >> 1) & 0x55555555);
      *((_WORD *)*v4 + 12 * v15 + 1) = (unsigned __int16)((16843009
                                                         * (((v17 & 0x33333333)
                                                           + ((v17 >> 2) & 0x33333333)
                                                           + (((v17 & 0x33333333) + ((v17 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v18 = HIDWORD(*((_QWORD *)*v4 + 3 * v15 + 1))
          - (((unsigned int)HIDWORD(*((_QWORD *)*v4 + 3 * v15 + 1)) >> 1) & 0x55555555);
      *((_WORD *)*v4 + 12 * v15 + 1) += (unsigned __int16)((16843009
                                                          * (((v18 & 0x33333333)
                                                            + ((v18 >> 2) & 0x33333333)
                                                            + (((v18 & 0x33333333) + ((v18 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v19 = *((_QWORD *)*v4 + 3 * v15 + 1);
      v23 = *((_WORD *)*v4 + 12 * v15 + 8);
      if ( *((_WORD *)*v4 + 12 * v15 + 1) )
      {
        v20 = 0;
        if ( v19 )
        {
          do
          {
            if ( _bittest64(&v19, (unsigned __int8)v20) )
            {
              v24 = v23;
              v25 = v20;
              v26 = 0;
              StorPortExtendedFunction(56LL, a1, &v24, &v27);
              *((_DWORD *)*v7 + 8 * v27) = v27;
              *((_QWORD *)*v7 + 4 * v27 + 1) = *(_QWORD *)(a1 + 168) + 16LL * v23;
              *((_QWORD *)*v7 + 4 * v27 + 2) = (char *)*v4 + 24 * v15;
              _bittestandreset64(&v19, v20);
            }
            ++v20;
          }
          while ( v19 );
          v15 = v22;
          v10 = (_DWORD *)(a1 + 160);
        }
      }
      v16 = ++v15;
      v22 = v15;
    }
    while ( (unsigned int)v15 <= *v10 );
    return 1;
  }
  else
  {
LABEL_30:
    if ( *v4 )
    {
      StorPortExtendedFunction(1LL, a1, *v4, a4);
      *v4 = 0LL;
    }
    if ( *v7 )
    {
      StorPortExtendedFunction(1LL, a1, *v7, a4);
      *v7 = 0LL;
    }
    *v9 = 0;
    result = 0;
    *v10 = 0;
  }
  return result;
}
